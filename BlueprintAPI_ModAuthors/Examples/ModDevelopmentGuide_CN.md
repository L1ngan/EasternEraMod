# EastRimWorld Mod 开发指南（中文）

> 配套示例：[ParagonSunWukong/](ParagonSunWukong/)（基于 `Content/Mods/ParagonSunWukong` 的真实角色 Mod）
> 类型参考：项目根目录 `BlueprintAPI_ModAuthors/zh/INDEX.md`（全部枚举/结构体/蓝图 API，中英双语）

---

## 1. Mod 目录结构

每个 Mod 是 `Content/Mods/`（或创意工坊安装目录）下的一个文件夹：

```
MyMod/
├── ModInfo.json      # 元数据（必需）
├── Main.lua          # Lua 入口（可选；纯配置 Mod 可以没有）
├── Config/           # 配置表 JSON（可选）
│   └── *.json
├── MyMod.png         # 图标（可选）
├── MyModGameplayTags.ini  # 自定义 GameplayTags（可选）
└── *.pak             # 打包资源（由打包工具生成）
```

## 2. ModInfo.json 字段全表

| 字段 | 类型 | 说明 |
|---|---|---|
| `ModId` | string | **必填**，唯一标识（英文，不含空格） |
| `ModName` | string | 显示名 |
| `Version` | string | 版本号（如 "1.0.0"；参与存档兼容检查） |
| `Author` / `Description` | string | 作者 / 描述 |
| `Icon` | string | 图标文件（相对 Mod 根目录，可省略扩展名） |
| `MainLuaFile` | string | Lua 入口，默认 `Main.lua` |
| `LogLevel` | string | 写进本 Mod 日志文件的最低等级：`Log` / `Warning` / `Error` / `None`，默认 `Warning`（见 [7.2](#72-mod-日志文件)） |
| `NewGameLoad` | bool | true=仅在新游戏时加载 |
| `MinGameVersion` | string | 要求的最低游戏版本 |
| `ModToolVersion` | string | 打包工具版本（打包时自动写入，用于兼容检查） |
| `Dependencies` | array | 依赖列表 `[{"ModId":"其它Mod","MinVersion":"1.0","Required":true}]`，按依赖顺序自动加载 |
| `IncludeGameplayTags` | bool | 是否携带自定义 GameplayTags ini |
| `GameplayTagsIniFile` | string | Tag ini 文件名（默认 `{ModId}GameplayTags.ini`） |
| `DataTableConfigs` | array | 配置表覆盖 `[{"ConfigType":"CommonBuff","JsonFile":"Config/xx.json","StructName":"/Script/EastRimWorld.CommonBuff","bOverrideData":false}]` |
| `DataAssetConfigs` | array | 数据资产覆盖 `[{"AssetType":"NewGameConfiguration","JsonFile":"...","bOverrideData":false}]` |
| `PublishedFileId` | string | Steam 创意工坊 ID（上传后自动填充） |

`ConfigType` 可用值见类型文档 `EModConfigType`；`AssetType` 见 `EModDataAssetType`。

## 3. 生命周期

```
游戏发现 Mod（扫描 Content/Mods + 创意工坊目录）
→ 玩家启用 → LoadMod：
   ① 挂载 .pak 资源
   ② 注册 GameplayTags ini（幂等）
   ③ 应用 DataTableConfigs / DataAssetConfigs 的 JSON 覆盖
   ④ 执行 Main.lua（独立沙箱环境）→ 调用 Mod:OnModLoaded()
→ 运行期：事件/定时器/命令回调
→ 卸载：Mod:OnModUnloaded() → 引擎自动清理该 Mod 的全部定时器/命令/事件监听 → 卸载 .pak
```

**存档兼容**：每个存档会记录当时启用的 Mod 及版本；读档时若发现 Mod 缺失/未启用/版本不符，会通过 UI 提示玩家。

## 4. Lua API 参考

Mod 的 Lua 运行在独立沙箱环境中，可用 `UE` 命名空间访问引擎导出内容。

### 4.1 基础

| API | 说明 |
|---|---|
| `UE.UModLuaLibrary.ModLog(ModId, Message, Level)` | 日志，Level = "Log"/"Warning"/"Error"；达到 ModInfo.json `LogLevel` 的条目另写进本 Mod 的日志文件（见 [7.2](#72-mod-日志文件)） |
| `UE.UModLuaLibrary.IsModLoaded(nil, ModId)` | 查询某 Mod 是否已加载 |
| `UE.UModLuaLibrary.GetModInfo(nil, ModId)` | 取 Mod 运行时信息（版本/状态/路径） |
| `UE.UModLuaLibrary.LoadAndApplyModConfigFromJson(nil, ModId, false)` | 手动重新应用本 Mod 的 JSON 配置（加载时已自动应用） |

### 4.2 游戏事件订阅（推荐的玩法接入方式）

```lua
local id = UE.UModEventBus.RegisterModEvent("OnDayChanged", function(EventName, Payload, Params)
    -- Payload：相关 UObject（可能为 nil）；Params：字符串键值表
end)
UE.UModEventBus.UnregisterModEvent(id) -- 可选；卸载时自动清理
```

| 事件名 | 触发时机 | Payload | Params |
|---|---|---|---|
| `OnNewGameStarted` | 新游戏世界初始化完成 | SaveGameDataActor | — |
| `OnLoadGameComplete` | 读档世界初始化完成 | SaveGameDataActor | — |
| `OnDayChanged` | 每个游戏日 | WorldDirector | GameDay, GameYear |
| `OnSeasonChanged` | 季节变更 | WorldDirector | Season(int), GameYear |
| `OnWeatherChanged` | 天气效果生效 | WorldDirector | Weather(int) |
| `OnEnterPlace` | 进入地点（子关卡加载成功） | AWorldPlace | PlaceID, LevelName |
| `OnExitPlace` | 离开地点 | AWorldPlace | PlaceID, LevelName |
| `OnEnterPlaceComplete` | 进入地点后**所有初始化完成**（含视频/序列） | AWorldPlace | PlaceID |
| `OnBuildingComplete` | 建筑建造完成 | — | ConfigId, BuildGuid |
| `OnCharacterDeath` | 角色死亡（统一死亡点） | 角色 Actor | DeathOrgan |
| `OnBreakThroughCompleted` | 突破境界成功 | 角色 Actor | CharacterGuid, RealmLevel |
| `OnEmergentEventSpawned` | 涌现事件落地生效 | EmergenceDirector | EventID, InstanceGuid |
| `OnBuildMenuOpened` | 建造菜单展开了一个大类 | 建造菜单控件 | CategoryId |
| `OnBuildMenuClosed` | 建造菜单收起大类 | 建造菜单控件 | CategoryId（收起前的大类） |
| `OnBuildCategoryChanged` | 展开的大类变了（含展开、收起） | — | CategoryId（收起时为空串） |
| `OnBuildTabChanged` | 显示的子类变了（展开大类时回到「全部」这一步不发） | — | TabId（「全部」为空串）, CategoryId |
| `OnBuildMenuModWidgetCreated` | 建造菜单生成了一个 Mod 控件（见 [4.6](#46-建造界面接口)） | Mod 控件 | RegisterId, Slot |
| `OnBuildPlaceStarted` | 开始放置建筑（出现跟随鼠标的预览，迁移建筑也算） | — | BuildId |
| `OnBuildPlaceEnded` | 放置结束（放下、取消或换了别的建筑） | — | BuildId |

建造相关的 7 个事件都在**下一帧**发出，回调里读到的是事件发生后的最新状态。

### 4.3 定时器

```lua
local timerId = UE.UModLuaLibrary.RegisterModRepeatingTimer(nil, 5.0, true, fn) -- 间隔秒, 是否循环
UE.UModLuaLibrary.UnregisterModRepeatingTimer(timerId)
UE.UModLuaLibrary.RegisterModNextTick(nil, fn)  -- 下一帧单次（世界未就绪时重试用）

-- 实时计时器（2026 年 11 月新增）：没有 WorldContext 参数
local rtId = UE.UModLuaLibrary.RegisterModRealTimeTimer(1.0, true, fn) -- 间隔秒, 是否循环
UE.UModLuaLibrary.UnregisterModRealTimeTimer(rtId)
```

- `RegisterModRepeatingTimer` 按游戏时间走：游戏暂停（速度为 0，例如打开换装地图期间，见 [4.8](#48-换装地图换成-mod-界面)）时基本停走；切换地点期间挂起，进入新地点后恢复。
- `RegisterModRealTimeTimer` 按真实时间走：不受游戏暂停、游戏速度和子关卡加载影响；切换地点期间跳过；回调连续出错 3 次自动注销；Mod 卸载时自动清理。返回计时器号，失败为 0。需要包含该接口的游戏版本。

### 4.4 控制台命令

```lua
UE.UModLuaLibrary.RegisterModConsoleCommand("mymod.dosomething", "描述", function(Args)
    -- Args 为参数字符串数组（按空格切分）
end)
UE.UModLuaLibrary.UnregisterModConsoleCommand("mymod.dosomething")
```

命令要在控制台里输入。发行版默认没有控制台，开启方法见 [7.1](#71-在发行版中使用控制台)。

### 4.5 运行时改数据表（进阶）

```lua
UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, "RowName", RowStruct)
```
RowStruct 类型必须与表的行结构一致。日常改配置**优先用 DataTableConfigs 的 JSON 方式**（随 Mod 启停、可被打包校验）。

### 4.6 建造界面接口

> 2026 年 11 月新增，需要包含该接口的游戏版本。全部函数在 `UE.UModBuildLibrary` 下，第一个参数是 WorldContext，传 `nil` 即可；带输出参数的函数在 Lua 里按「返回值, 输出参数…」依次返回。

**建造菜单的数据**（四张表，表名即 `ConfigType`）：

```
BuildListCategorizeConfig  一级大类（菜单最下面的图标行）  字段：DisplayName, Sort, Icon[普通/悬停/按下]
   ▲ BuildTabConfig.Category = 一级 ID
BuildTabConfig             二级子类（图标行上方的文字标签；最前面的「全部」不是表行）  字段：TabName, Sort, Category
   ▲ BuildingUI.Category = 二级 ID
BuildingUI                 建筑在菜单里的显示信息，行 ID = 建筑 ID  字段：Category, DisplayName, Icon, Desc
BuildConfig                建筑本体；列表里建筑的先后顺序按这张表的行序（不看 BuildingUI.Sort）
```

- 建筑出现在菜单里的条件：`BuildConfig` 有行、`BuildingUI` 有行且 `Category` 指向存在的子类、建筑已解锁。
- 子类（和一级大类）下**至少有一个已解锁建筑**才会出现按钮，否则不显示（不是灰色）。
- **同一级里 `Sort` 不能重复**：两个子类（同一大类下）或两个一级大类的 `Sort` 相同，菜单只会留下其中一个按钮。
- 新增一个二级子类只要改表、不用改蓝图：`BuildTabConfig` 加一行，再把建筑的 `BuildingUI.Category` 填成这个子类。子类行没有滚动，一个大类下加一两个子类没问题，多了会挤出面板。
- 原生建筑**不要挪到别的子类**：房间、组合、囚室设施是按建筑所在子类识别的，挪走后房间会认不出这件设施。运行期接口禁止这样改；JSON 覆盖不拦，后果自负。

**查询**

| API | 说明 |
|---|---|
| `GetAllBuildCategoryIds(nil)` | 全部一级大类 ID，按 Sort 排 |
| `GetAllBuildTabIds(nil, CategoryId)` | 二级子类 ID，按 Sort 排；CategoryId 传 `nil` 返回全部 |
| `GetBuildCategoryConfig(nil, CategoryId)` | → `ok, Row`（`FModBuildListCategorizeStruct`） |
| `GetBuildTabConfig(nil, TabId)` | → `ok, Row`（`FModBuildTabStruct`） |
| `GetBuildUIData(nil, BuildId)` | → `ok, Row`（`FModBuildUIData`） |
| `GetBuildTabIdByBuildId(nil, BuildId)` / `GetBuildCategoryIdByTabId(nil, TabId)` | 建筑所属子类 / 子类所属大类，查不到返回 None |
| `GetBuildIdsByTab(nil, TabId, bOnlyUnlocked)` | 子类下的建筑，按菜单显示顺序 |
| `CanBuild(nil, BuildId)` | → `ok, Reason`（`EBuildUnavailableReason`） |
| `CanUseBuildTab(nil, TabId)` | → `ok, Reason`；子类下没有已解锁建筑时不可用 |

`EBuildUnavailableReason`：`None`、`ConfigMissing`（没有建筑/子类配置）、`NoMenuConfig`（没有菜单行或指向的子类不存在）、`NotUnlocked`、`NoUnlockedBuildingInTab`、`UpperStoreyClosed`（二楼还没开放时通往上层的楼梯，菜单同样不显示）。只给原因枚举，提示文字由 Mod 自己出。新手引导期间菜单只显示引导解锁的建筑，这些接口不区分引导。

**运行期注册**（只改内存里的表）

```lua
local tab = UE.FModBuildTabStruct()
tab.TabName = "我的子类"
tab.Sort = 75                     -- 同一大类下不能和别的子类重复
tab.Category = "BaseBuilding"     -- 必须是已有的一级大类
UE.UModBuildLibrary.RegisterBuildTab(nil, "MyMod_Tab", tab, true)

-- 给自己新增的建筑（BuildConfig 里要已有这一行）写菜单行；已有菜单行不能改子类
local ui = UE.FModBuildUIData()
ui.Category = "MyMod_Tab"
ui.DisplayName = "我的建筑"
ui.Icon = UE.UObject.Load("/Game/Mods/MyMod/UI/T_MyBuilding.T_MyBuilding")
UE.UModBuildLibrary.RegisterBuildUIData(nil, "MyMod_Building", ui, true)

UE.UModBuildLibrary.RefreshBuildMenu(nil)  -- 让菜单立即按新表重算

-- 改已有行的某个字段：先取出整行，改完再写回
local ok, cat = UE.UModBuildLibrary.GetBuildCategoryConfig(nil, "BaseBuilding")
cat.DisplayName = "房屋"
UE.UModBuildLibrary.RegisterBuildCategory(nil, "BaseBuilding", cat, true)
```

- `RegisterBuildCategory` / `RegisterBuildTab` / `RegisterBuildUIData` 都是**整行写入**列出的几个字段，要只改一个字段就先 `Get…` 取出来、改完再写回；最后一个参数 `bOverrideExisting` 传 `false` 时，行已存在就直接返回 false。
- 拒绝的情况（返回 false 并写 ModLog）：ID 为空；子类的 `Category` 不是已有大类；菜单行的 `Category` 不是已有子类、或 `BuildConfig` 里没有这个建筑；已有菜单行改 `Category`；`Sort` 与同级重复。
- 注册只在内存里、不进存档：读档、新开局后要重新注册（在 `OnLoadGameComplete` / `OnNewGameStarted` 里做）；Mod 卸载时不回滚。注册后要调 `RefreshBuildMenu`，否则要等下次进地点才显示（切一级分类不会刷新子类）。
- 一级大类的 `Icon` 是软引用数组（依次为 普通 / 悬停 / 按下）。新大类的图标建议在 JSON 里配（见第 5 节）；运行期注册可以先 `GetBuildCategoryConfig` 取一个现有大类的行当模板，沿用它的图标。

**操作菜单**（「菜单打开」指展开了某个大类，子类行和列表可见）

| API | 说明 |
|---|---|
| `IsBuildMenuOpen(nil)` | 是否展开了某个大类 |
| `OpenBuildMenu(nil, CategoryId)` | 打开底栏建造页签；CategoryId 不为 `nil` 时同时展开该大类 |
| `SelectBuildCategory(nil, CategoryId)` | 展开指定大类，同玩家点大类图标 |
| `SelectBuildTab(nil, TabId)` | 切到指定子类（大类没展开会先展开）；`nil` 表示当前大类的「全部」 |
| `CloseBuildMenu(nil)` | 收起大类 |
| `ShowBuildItems(nil, BuildIds)` | 原生列表只显示给定建筑（要先展开大类）；传空数组恢复，切子类或收起后也会恢复 |
| `GetCurrentBuildCategoryId(nil)` / `GetCurrentBuildTabId(nil)` | 当前展开的大类 / 显示的子类（「全部」或收起时为 None） |
| `GetBuildMenuWidget(nil)` | 建造菜单控件（只读用，例如配合 `UE.UModLuaLibrary.GetWidgetByName` 量原生控件位置，见 [4.7](#47-界面与按钮)） |

没有已解锁建筑的大类、子类不出按钮，对它们调 `Select…` 返回 false。

**放置建筑**

| API | 说明 |
|---|---|
| `BeginPlaceBuilding(nil, BuildId)` | 让玩家进入该建筑的放置预览，同在建造列表里点它；之后的放下、拖线、框选与原生一致 |
| `SelectBuildItem(nil, BuildId)` | 先把菜单切到它所在的子类，再 `BeginPlaceBuilding` |
| `CancelPlaceBuilding(nil)` | 取消当前放置，同放置中按右键；没在放置时什么都不做 |
| `IsPlacingBuilding(nil)` | → `placing, BuildId` |
| `GetSelectedBuildId(nil)` | 菜单没有单独的选中状态，返回正在放置的建筑 |
| `CanPlaceCurrentBuilding(nil)` | → `ok, TipsType`（`EPlaceBuildingTipsType`，当前位置放不下的原因）；没在放置时返回 false、`Normal` |

`BeginPlaceBuilding` 要求：已解锁、在基地里操控玩家（世界地图、城市访问等状态不行）、鼠标指在场景里（指在界面上时不会生成预览，返回 false）。不提供「确认放置」接口，放下仍由玩家在场景里点击。

**在菜单里放自己的控件**

```lua
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyTabBar.WBP_MyTabBar_C")
local regId = UE.UModBuildLibrary.RegisterBuildMenuWidget(nil, UE.EBuildMenuModSlot.BelowSubTabs, cls, 0)
UE.UModEventBus.RegisterModEvent("OnBuildMenuModWidgetCreated", function(EventName, Widget, Params)
    if tonumber(Params.RegisterId) ~= regId then return end
    -- 每次菜单重建（切地点、读档）都会生成新实例并再发一次这个事件，按钮在这里绑定
    local btn = UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Variant1")
    UE.UModLuaLibrary.BindWidgetClicked(btn, function()
        local ids = UE.TArray(UE.FName)
        ids:Add("MyMod_Building_A")
        ids:Add("MyMod_Building_B")
        UE.UModBuildLibrary.ShowBuildItems(nil, ids)
    end)
end)
```

- 目前只有一个位置 `BelowSubTabs`：二级子类行正下方。只在展开了大类、且有 Mod 控件时显示；显示时原生列表会下移让出这一行。同一位置多个控件按 Order 从小到大排。
- 不能往原生的分类行、列表里直接加控件，菜单刷新时会被清掉。
- `UnregisterBuildMenuWidget(nil, regId)` 撤销登记并移除实例；`GetBuildMenuModWidget(nil, regId)` 取当前实例（菜单没创建时为 nil）。Mod 卸载时自动撤销。
- 用法示例：自绘一排「三级分类」按钮，点击时用 `ShowBuildItems` 筛原生列表，或直接用 `BeginPlaceBuilding` 进入放置。

### 4.7 界面与按钮

> 2026 年 11 月新增，需要包含该接口的游戏版本。

| API | 说明 |
|---|---|
| `UE.UModLuaLibrary.GetWidgetByName(Widget, "Btn_Save")` | 按控件名取子控件，取不到返回 nil；不需要在设计器里勾 Is Variable |
| `UE.UModLuaLibrary.GetAllChildWidgets(Widget)` | 全部子控件（含嵌套），返回数组 |
| `UE.UModLuaLibrary.BindWidgetClicked(Button, fn)` | 绑定点击，返回绑定号（失败为 0）；支持 `Button` 和 `CommonButtonBase`，回调参数是按钮本身 |
| `UE.UModLuaLibrary.UnbindWidgetClicked(BindId)` | 解绑，返回 bool |
| `UE.UModLuaLibrary.PushModWidgetToLayer(nil, LayerName, WidgetClass)` | 把界面推进游戏的界面层栈，返回界面实例（失败为 nil）；`LayerName` 只收 `"Menu"`（菜单、全屏界面）和 `"Modal"`（模态弹窗） |

```lua
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyPanel.WBP_MyPanel_C")
local panel = UE.UModLuaLibrary.PushModWidgetToLayer(nil, "Menu", cls)
if panel then
    local btn = UE.UModLuaLibrary.GetWidgetByName(panel, "Btn_Close")
    UE.UModLuaLibrary.BindWidgetClicked(btn, function(Button)
        panel:DeactivateWidget()  -- 关闭界面
    end)
end
```

- 引擎的 `GetWidgetFromName`、`GetRootWidget` 和 `WidgetTree` 的 `GetAllWidgets` 不是蓝图可调用函数，Lua 里调不到（总是返回空），请用上面的接口。
- 点击绑定记在当前 Mod 名下：回调里注册的定时器、事件也归这个 Mod；回调出错写进 ModLog；Mod 卸载时自动解绑。
- 推进层栈的界面：
  - 界面类必须继承 `CommonActivatableWidget`；
  - 要显示鼠标：在界面蓝图里实现 “Get Desired Input Config”，返回 Menu 模式；
  - 要按 Esc 关闭：类默认值勾 `Is Back Handler`；代码里关闭用 `DeactivateWidget()`；
  - Mod 卸载时，它推入的界面会被自动移除。
- 不开放 `Game` 层：Game 层的界面会被游戏当成主界面调用，Mod 界面没有实现主界面接口会导致崩溃。传 `"Game"` 返回 nil 并写 ModLog 错误。
- 需要交互的界面不要用 `AddToViewport`：它不在层栈里，鼠标和 Esc 归层栈里当前的界面管。

### 4.8 换装地图换成 Mod 界面

> 2026 年 11 月新增，需要包含该接口的游戏版本。

```lua
local mgr = UE.AWorldMapManage.GetWorldMapManage()
local cls = UE.UClass.Load("/Game/Mods/MyMod/UI/WBP_MyEditor.WBP_MyEditor_C")
if mgr:OpenCharacterEditorMapEx(cls, TargetGuid) then  -- 不指定弟子时传 UE.FGuid()
    -- 换装地图开始加载，加载完会推入 WBP_MyEditor
end
```

| API（`AWorldMapManage` 实例方法） | 说明 |
|---|---|
| `OpenCharacterEditorMapEx(WidgetClass, TargetCharacterGuid)` | 加载换装地图，用 Mod 界面代替宗门时装界面；返回是否开始加载 |
| `GetCharacterEditorTargetGuid()` | 本次传入的目标弟子 Guid |
| `GetCharacterEditorTargetCharacter()` | 本次的目标弟子；不在场时为 nil |
| `GetCharacterEditorPreviewCharacter()` | 摄影棚里的预览角色（替身）；没进摄影棚时为 nil |
| `RefreshCharacterEditorPreview()` | 让替身下一帧重新拷一次目标弟子的外观；没进摄影棚时返回 false |
| `SetCharacterEditorCameraOrbit(Yaw, Pitch)` | 摄影棚相机绕替身转到相对默认机位的水平角、俯仰角（度；Pitch 为正时镜头升高往下看，总俯仰限制在 ±89 度）；返回 bool |
| `SetCharacterEditorCameraDistance(Distance)` | 相机到替身的距离（厘米，小于 0 按 0）；返回 bool |
| `SetCharacterEditorCameraHeight(Height)` | 相机相对默认机位的高度偏移（厘米）；返回 bool |
| `ResetCharacterEditorCamera()` | 相机回到打开时的默认机位；返回 bool |
| `GetCharacterEditorCameraDefaultDistance()` | 默认距离，用来按比例缩放；不可用时为 0 |

- 界面类必须继承 `CommonActivatableWidget`，鼠标和 Esc 的设置同 [4.7](#47-界面与按钮)。原来的 `OpenCharacterEditorMap()` 不变，宗门时装按钮照旧打开原界面。
- 返回 false 的情况：界面类为空；换装地图正被占用（宗门时装界面开着，或上一次还没关完）；不在普通地点里（正在切换地点，或玩家正操控别的角色，如城市访问、比武）；传了 Guid 但不是玩家势力当前在场的人类弟子。
- 打开期间：
  - Mod 界面在 Menu 层；主界面撤下，主界面上的快捷键不生效；加载画面关闭后游戏暂停；
  - 视角会切到换装地图里预览角色自带的相机，预览角色在暂停中照常播动作。想用自己的相机就 `SetViewTargetWithBlend(相机, 0)`：混合时间要传 0（混合按游戏时间走，暂停中会停住），相机位置用实时计时器逐帧摆。地图里插件自带的摄影棚相机 `CameraStudio` 在暂停中插值会停住，不要启用它；
  - 在界面里开子页面用 `PushModWidgetToLayer(nil, "Menu" 或 "Modal", 类)`，不会关掉换装地图；子页面要在关闭主界面之前自己关掉；
  - 游戏暂停时按游戏时间走的定时器基本停走，请用 `RegisterModRealTimeTimer`（见 [4.3](#43-定时器)）。
- 关闭：按 Esc 或调 `DeactivateWidget()`，界面离开层栈后换装地图自动关闭，回到地点主界面，游戏速度回到 1 档（每过一次加载画面都会回到 1 档，原时装界面也一样）。
- 目标弟子只在打开时检查，之后离场或死亡时 `GetCharacterEditorTargetCharacter()` 返回 nil，用之前要判空。

**摄影棚（传了目标弟子时）**

> 2026 年 11 月新增，测试中。

- 传了有效 Guid 时，换装地图里的预览角色会换成目标弟子当前的样子（体型、脸、发型、服饰、颜色），作为“替身”只用来显示。弟子本人始终留在原地，不会被移动。
- 对**目标弟子本人**调 [4.9](#49-角色外观与个人时装) 的 `SetCharacterApparel`、`ClearCharacterApparel`、`RemoveCharacterPersonalApparel`、`ResetCharacterApparels`、`SetCharacterCustomizationId`，成功后替身在下一帧自动刷新。改动直接写进弟子的存档数据，关图时不需要“写回”。
- 想做“取消”：进棚时用 `GetCharacterPersonalApparels`、`GetCharacterCustomizationIds` 记下原来的个人时装和当前预设，取消时写回。
- 镜头操作：用上表的摄影棚相机接口（环绕、距离、高度、复位）。它们改的是替身自带相机的弹簧臂，在暂停中立即生效。界面按钮、拖拽、滚轮怎么映射到这些接口由 Mod 决定；自动转台就用实时计时器逐帧调 `SetCharacterEditorCameraOrbit`。
- 不要靠转替身做转台：替身自带的相机跟着替身一起转，画面上看不出变化。
- 这几个相机接口只在摄影棚里可用；换成自己的相机（`SetViewTargetWithBlend`）后它们不再影响画面。
- 目标弟子在加载期间离场，或预览角色异常时，按普通覆盖模式打开（`GetCharacterEditorPreviewCharacter()` 为 nil）。

```lua
local mgr = UE.AWorldMapManage.GetWorldMapManage()
if mgr:OpenCharacterEditorMapEx(cls, TargetGuid) then  -- TargetGuid：目标弟子的 Guid
    -- 界面激活后：自动转台，同时稍微俯视、拉近一点
    local yaw = 0
    UE.UModLuaLibrary.RegisterModRealTimeTimer(0.02, true, function()
        yaw = yaw + 0.5
        mgr:SetCharacterEditorCameraOrbit(yaw, 10)
    end)
    mgr:SetCharacterEditorCameraDistance(mgr:GetCharacterEditorCameraDefaultDistance() * 0.8)
end
```

不进换装地图也可以编辑弟子：在原场景把镜头对准弟子，界面按 4.7 推进层栈，改完用 4.9 的接口写回。

### 4.9 角色外观与个人时装

> 2026 年 11 月新增，需要包含该接口的游戏版本。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `SetCharacterApparel(Character, Slot, ApparelId)` | 设置某个槽的服饰，立即刷新外观；返回 bool |
| `ClearCharacterApparel(Character, Slot)` | 某个槽显示为空；返回 bool |
| `ResetCharacterApparels(Character)` | 清掉 Mod 设的服饰：本门派弟子回到宗门服饰规则，其他角色回到按装备显示；返回 bool |
| `RemoveCharacterPersonalApparel(Character, Slot)` | 去掉个人时装里某个槽，让它重新跟随宗门服饰（只对本门派弟子有效）；返回 bool |
| `GetCharacterPersonalApparels(Character)` | 取个人时装：“槽 → 服饰 ID”的表，值为 None 表示该槽留空 |
| `SetCharacterCustomizationId(Character, ProfileId)` | 换捏脸预设（体型、脸型、发型），已设的服饰保留；返回 bool |
| `GetCharacterCustomizationIds(Character)` | → `ids, currentId`：与角色同性别、能传给 `SetCharacterCustomizationId` 的全部预设 ID（含 JSON 加的行，按表内顺序），以及角色当前的预设。2026-11 新增，测试中 |
| `GetCustomizationPresetInfo(nil, ProfileId)` | → `ok, name, avatar`：预设的名称和缩略图（`Texture2D`，可能为空，同步加载）。2026-11 新增，测试中 |

```lua
local ok = UE.UModLuaLibrary.SetCharacterApparel(Character, UE.EArmorType.Armor, "MyMod_Robe")
local ids, currentId = UE.UModLuaLibrary.GetCharacterCustomizationIds(Character)
```

- `Character` 是初始化完成的人类弟子（`AEastRimWorldCharacter_Human`）。
- `Slot` 只收 `UE.EArmorType.Helmet`、`Armor`、`Pants`、`Shoes`。
- `ApparelId` 必须是装备配置表（`EquipmentConfig`）里的行，而且这件装备的槽位与 `Slot` 一致。
- `ProfileId` 必须是捏脸预设表（`CharacterAppearancePreset`）里的行，且性别与角色当前预设相同；掌门和使用主角外观的角色不接受。新的体型、脸型、发型可以用 JSON 往 `CharacterAppearancePreset`、`CharacterAnatomyProfiles` 加行（参考示例 ParagonSunWukong）。
- 改动写进角色的存档数据，存读档、离开地点再回来都会保留。捏脸预设不受宗门服饰影响。

**个人时装**（本门派有职位的弟子，包括掌门）：

- `SetCharacterApparel`、`ClearCharacterApparel` 写的是个人时装。弟子显示的服饰按“身上装备 → 分堂统一服饰 → 个人时装”逐槽叠加：个人设过的槽用个人的，其余槽跟随宗门服饰；分堂没开统一服饰时，其余槽跟随身上装备。
- 开关或保存分堂统一服饰、弟子调职时，个人设过的槽不变，其余槽照常变化。
- 写入个人时装的 Mod 被停用后，个人时装暂不生效，弟子在下一次宗门服饰重设（开关统一服饰、调职等）时回到宗门规则；Mod 重新启用后，下一次重设会再叠回去。
- `ModInfo.json` 设了 `NewGameLoad=true` 的 Mod 读档时不加载，它写的个人时装读档后不生效；做个人时装的 Mod 不要设这个字段。
- 不属于本门派的角色（访客等）不受宗门服饰管理，这几个函数直接改外观：第一次从按装备显示切到自定义时，其他槽先用当前穿着的服饰补齐，不会突然变空。
- 宗门时装界面不提示谁在用个人时装。

## 5. 配置表 JSON 覆盖机制

JSON 文件格式：

```json
{
  "StructName": "/Script/EastRimWorld.CommonBuff",
  "Rows": {
    "行名(通常等于ID)": { "ID": "...", "字段": "值" }
  }
}
```

- **行名已存在** → 修改该行；**行名不存在** → 新增行。
- `bOverrideData=false`（合并，推荐）：只有你**显式填写且非默认值**的字段会生效，数组/Map 与原数据**合并**；
- `bOverrideData=true`（覆盖）：数组/Map **整体替换**，标量仍只更新非默认值字段。
- 字段名支持宽松匹配（忽略空格/下划线/大小写），但**同一结构体内两个字段归一化后撞名会告警**，请以文档字段名为准。
- 资源引用写完整路径：软引用 `"/Game/Path/Asset.Asset"`；硬引用（带类名前缀）`"Class'/Game/Path/Asset.Asset'"` 会被自动预加载。
- **最可靠的模板来源**：在编辑器用 CreateModPlugin 的打包窗口导出，会自动生成正确的 JSON 与 StructName。

建造菜单四张表的 `StructName`（数据关系和注意事项见 [4.6](#46-建造界面接口)）：

| ConfigType | StructName |
|---|---|
| `BuildListCategorizeConfig` | `/Script/CreateModPlugin.ModBuildListCategorizeStruct` |
| `BuildTabConfig` | `/Script/CreateModPlugin.ModBuildTabStruct` |
| `BuildingUI` | `/Script/CreateModPlugin.ModBuildUIData` |
| `BuildConfig` | `/Script/CreateModPlugin.ModBuildData` |

- 一级大类的 `Icon` 是软引用数组，依次填 普通 / 悬停 / 按下 三张图的路径。旧版 SDK 里这个字段是硬引用，游戏合并时会因类型不符**静默跳过图标**（新大类没有图标），请用新版 SDK；用旧版导出的 JSON 里图标是路径字符串，新版游戏照样能读。
- 一级大类、同一大类下的子类，`Sort` 都不能重复；`BuildingUI` 覆盖原生建筑时不要改 `Category`（原因见 4.6）。
- JSON 改动在 Mod 加载时写入，菜单在进地点时读表，所以从下一次进地点起生效。

## 6. 沙箱限制（负面清单）

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` **不可用**；
- 只加载 `MainLuaFile` 指定的一个 Lua 文件，外部逻辑需内联；
- **不提供按键绑定 API**；界面操作用按钮（[4.7](#47-界面与按钮)），Esc 关闭用 CommonUI 的返回处理（类默认值勾 `Is Back Handler`）；
- 游戏进行中不支持用 `OpenLevel` 切到 Mod 自己的关卡：整张切图会销毁当前世界，Mod 的界面和定时器也会消失；
- Mod 间通过依赖声明控制加载顺序，可用 `IsModLoaded` 探测其它 Mod。

## 7. 调试与排错

- 控制台命令 **`Mod.Status`**：列出全部 Mod 的状态/版本/加载耗时/定时器/命令/事件监听数/错误信息；
- 日志前缀 `[你的ModId]`；JSON 配置解析失败的日志会带**行列号**与**出错行内容**；
- 每个 Mod 可以单独写日志文件，等级由 ModInfo.json 的 `LogLevel` 决定，见 [7.2](#72-mod-日志文件)；
- 打包窗口打包前会自动校验：ModInfo.json 格式、ModId、Lua 语法、JSON 存在性、StructName 可解析、图标/Tags ini 存在性。

### 7.1 在发行版中使用控制台

发行版默认没有控制台，需要手动开启：

1. 在 Steam 库中右键游戏，打开“属性”，在“启动选项”里填写 `-ModConsole`；
2. 进入游戏后按 `~` 打开输入行，再按一次打开带输出的大窗口，命令的输出只显示在大窗口里；
3. 输入 `Mod.Status`，有输出就说明已开启。

控制台只接受下面两类命令，其他命令会提示 `Command not allowed`：

- `Mod.` 开头的内置命令，如 `Mod.Status`；
- 通过 `RegisterModConsoleCommand` 注册的命令。

发行版的日志和调试：

- `ModLog` 的全部等级和运行时的 Lua 报错都会显示在控制台里；
- 游戏启动、控制台创建之前的输出不会显示。Mod 在这个阶段加载失败时，用 `Mod.Status` 查看错误信息；
- 不开控制台时，`%LOCALAPPDATA%\EasternEra\Saved\SaveGames\log.txt` 只写 `Error` 等级；要保留 `Log` 和 `Warning`，在 ModInfo.json 里设置 `LogLevel`（见 [7.2](#72-mod-日志文件)）；
- Lua 的 `print` 在发行版中看不到，调试输出请用 `ModLog`；
- 控制台没有自动补全，中文可能无法正常显示，调试输出建议用英文。

### 7.2 Mod 日志文件

> 2026 年 11 月新增，需要包含该功能的游戏版本。

在 ModInfo.json 里加：

```json
"LogLevel": "Log"
```

- 可选 `Log` / `Warning` / `Error` / `None`；不写时为 `Warning`，写错按 `Warning` 处理并提示一次。
- 达到等级的 `ModLog` 写进 `%LOCALAPPDATA%\EasternEra\Saved\SaveGames\ModLogs\<ModId>.log`（在编辑器里是工程的 `Saved/SaveGames/ModLogs/`）。
- 游戏每次启动后第一次写这个 Mod 的日志时，把上一次的日志改名为 `<ModId>_backup.log` 保留一份。
- 原有输出不变：`Error` 照旧写进 `log.txt`；开了控制台照旧全部显示在控制台里。
- 文件是带 BOM 的 UTF-8，游戏运行中也能用记事本等程序打开查看。
- `ModLog` 的第一个参数直接传字符串（例如 `self.ModInfo.Metadata.ModId`），不要用 `UE.FName(...)`；ModId 为空的日志不写文件。
- 2026-11-11 之前的发行版游戏有一个问题：日志文件不会生成（编辑器里正常）。修复随之后的游戏更新提供；在那之前请用 `-ModConsole` 看日志（见 [7.1](#71-在发行版中使用控制台)）。

## 8. 打包与发布

1. 编辑器菜单 **Tools → Modding**：创建 Mod / 编辑 ModInfo / 打包 Mod；
2. 打包会 Cook 资产、生成 .pak、导出配置 JSON 并回写 ModInfo.json；Mod 目录（`Content/Mods/<ModId>/`）下的关卡（`.umap`）会自动加入 Cook，没被其他资产引用的关卡也会打进 pak（2026 年 11 月起的 SDK）；
3. 上传创意工坊：使用游戏内/编辑器的 Workshop 上传功能（标题/描述/预览图/可见性/更新说明）；
4. 自定义 GameplayTags：`IncludeGameplayTags=true` + `{ModId}GameplayTags.ini`，游戏启动时自动注册（游戏内新订阅的 Mod 下载完成后也会即时注册）。
