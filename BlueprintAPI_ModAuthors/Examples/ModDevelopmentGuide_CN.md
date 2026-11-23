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
| `NewGameLoad` | bool | true=点“新游戏”时提前加载，让配置在新游戏设置界面就生效；进入游戏世界时（新游戏、读档都一样）照常加载（见 [3](#3-生命周期)） |
| `MinGameVersion` | string | 要求的最低游戏版本 |
| `ModToolVersion` | string | 打包工具版本（打包时自动写入，用于兼容检查） |
| `Dependencies` | array | 依赖列表 `[{"ModId":"其它Mod","MinVersion":"1.0","Required":true}]`，按依赖顺序自动加载 |
| `IncludeGameplayTags` | bool | 是否携带自定义 GameplayTags ini |
| `GameplayTagsIniFile` | string | Tag ini 文件名（默认 `{ModId}GameplayTags.ini`） |
| `DataTableConfigs` | array | 配置表覆盖 `[{"ConfigType":"CommonBuff","JsonFile":"Config/xx.json","StructName":"/Script/EastRimWorld.CommonBuff","bOverrideData":false}]` |
| `DataAssetConfigs` | array | 数据资产覆盖 `[{"AssetType":"NewGameConfiguration","JsonFile":"...","bOverrideData":false}]` |
| `PublishedFileId` | string | Steam 创意工坊 ID（上传后自动填充） |
| `LocalOverride` | bool | true=本地测试已上传过的 Mod：`Content/Mods` 下的这份与订阅的工坊版同 `ModId` 时以本地为准，工坊版不加载，`Mod.Status` 显示 `Source=Local(Override)` 和被挡掉的工坊目录；只对本地副本生效。也可以不改 JSON、用启动参数 `-ModLocalOverride`（2026-11 新增，见 [8](#8-打包与发布)） |
| `Settings` | array | 设置项声明，玩家和 Mod 都能改，值跨存档保存（2026-11 新增，见 [4.14](#414-mod-设置)） |

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

**什么时候加载、卸载**（2026 年 11 月起的游戏版本）：

- **进入游戏世界**（开新游戏、读档，包括在游戏里读档）：加载 Mod 管理页里启用的全部 Mod。
- **`NewGameLoad=true` 的 Mod**：点“新游戏”时提前加载一次，让它的配置在新游戏设置界面就生效；进入游戏世界时照常加载。
- **离开当前游戏世界前**（开新游戏、读档、在游戏里读档、回主菜单）：先调用 `Mod:OnModUnloaded()`，清掉该 Mod 的定时器、命令、事件监听、按钮绑定、推入的界面；进入新世界后再执行一次 Main.lua 和 `Mod:OnModLoaded()`。
  - 原因：配置表和界面都属于当前世界，新世界里会重新创建，Mod 的改动要重新应用。
  - .pak 一直挂着。
- **切换地点**（进城、去战场等）**不会**重新执行 Main.lua。
- **回主菜单时**全部卸载。

所以：在 `OnModLoaded` 里做初始化（改配置表、登记事件），在 `OnModUnloaded` 里只做清理；不要假设 Main.lua 在一次游戏进程里只执行一次。不要在 Lua 里调 `ModSubsystem` 的 `DiscoverMods`、`LoadMod`、`UnloadMod`，Mod 的加载由游戏管理。

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
| `OnGameSaving` | 整个存档写盘前（**同步**，回调里写的按存档数据进这一次存档） | — | — |
| `OnGameSaved` | 存档结束 | — | Success（true/false）, SlotID |
| `OnBuildingPlaced` | 玩家放下建筑（工地生成，含预设、屋顶、自动柱） | 建筑 | ConfigId, BuildGuid, BatchId, IsTransfer |
| `OnBuildingRemoved` | 建筑移除（拆除完工、失去支撑、被毁、取消施工、墙被替换） | —（已销毁） | ConfigId, BuildGuid, Reason（Demolished / Collapsed / Destroyed / Cancelled / Replaced / Removed）, BatchId |
| `OnItemCrafted` | 生产建筑产出物品 | 建筑 | BuildGuid, FormulaId, ItemId, Count, Quality, CrafterGuid |
| `OnDiscipleJoined` | 人类加入玩家门派 | — | CharacterGuid, Reason（Visitor / PostStation / Recruited / Orphan / Returned / Unspecified）, FromForceGuid |
| `OnDiscipleLeft` | 正式弟子离开玩家门派 | — | CharacterGuid, Reason（Death / Expelled / 离开原因枚举名） |
| `OnContainerItemAdded` / `OnContainerItemRemoved` | 仓库、特殊存储、交易区的物品增减（见 [4.15](#415-仓储)） | 容器所属建筑（已拆除为 nil） | ItemId, Count, Total, Reason, BuildGuid, ContainerType |
| `OnCharacterTrapped` | 弟子判定被困（同一处连续卡住或整层下不去） | 角色 | CharacterGuid, Storey, IsPlayerDisciple |
| `OnModSettingChanged` | Mod 设置值改了（**同步**） | — | ModId, Key, Value |

建造相关的 7 个事件都在**下一帧**发出，回调里读到的是事件发生后的最新状态。

2026-11 新增的事件（`OnGameSaving`、`OnModSettingChanged` 除外）也都在**下一帧**发出；读档、切换地点期间的建筑与仓储变化不发事件。`OnLoadGameComplete` 发出时场景里的角色和建筑还没生成，要操作它们请等之后第一个 `OnEnterPlaceComplete`。拆一片建筑时同一帧逐条发，同一次操作的 `BatchId` 相同。驻地以外（战场、秘境、城镇）的死亡不经过门派名册离开流程，不发 `OnDiscipleLeft`，请同时监听 `OnCharacterDeath`。

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
  - 地图加载后预览角色会接管玩家操控，在暂停中照常播动作；视角停在换装地图里的一台关卡相机上（没进摄影棚时它不一定对着站位）。想用自己的相机就 `SetViewTargetWithBlend(相机, 0)`：混合时间要传 0（混合按游戏时间走，暂停中会停住），相机位置用实时计时器逐帧摆。地图里插件自带的摄影棚相机 `CameraStudio` 在暂停中插值会停住，不要启用它；
  - 在界面里开子页面用 `PushModWidgetToLayer(nil, "Menu" 或 "Modal", 类)`，不会关掉换装地图；子页面要在关闭主界面之前自己关掉；
  - 游戏暂停时按游戏时间走的定时器基本停走，请用 `RegisterModRealTimeTimer`（见 [4.3](#43-定时器)）。
- 关闭：按 Esc 或调 `DeactivateWidget()`，界面离开层栈后换装地图自动关闭，回到地点主界面，游戏速度回到 1 档（每过一次加载画面都会回到 1 档，原时装界面也一样）。
- 目标弟子只在打开时检查，之后离场或死亡时 `GetCharacterEditorTargetCharacter()` 返回 nil，用之前要判空。

**摄影棚（传了目标弟子时）**

> 2026 年 11 月新增，需要包含该接口的游戏版本。

- 传了有效 Guid 时，换装地图里的预览角色会换成目标弟子当前的样子（体型、脸、发型、服饰、颜色），作为“替身”只用来显示。弟子本人始终留在原地，不会被移动。
- 对**目标弟子本人**调 [4.9](#49-角色外观与个人时装) 的 `SetCharacterApparel`、`ClearCharacterApparel`、`RemoveCharacterPersonalApparel`、`ResetCharacterApparels`、`SetCharacterCustomizationId`，成功后替身在下一帧自动刷新。改动直接写进弟子的存档数据，关图时不需要“写回”。
- 替身也显示目标弟子的扩展外观（妆容、花钿 / 面靥、眉睫、虹膜，见 [4.10](#410-捏脸体型脸型发型颜色) 的"扩展外观"）。对目标弟子调扩展外观的写入接口后，替身跟着刷新；第一次进棚、贴图要加载时可能晚一两秒出现。
- 想做“取消”：进棚时用 `GetCharacterPersonalApparels`、`GetCharacterCustomizationIds` 记下原来的个人时装和当前预设，取消时写回。
- 替身进棚直接站在台上，不播入场动作，之后在暂停中照常播待机动作。
- 视角：换装地图里的一台关卡相机，进棚时摆到替身正面的默认机位（插件设计的取景）。
- 镜头操作：用上表的摄影棚相机接口（环绕、距离、高度、复位）。它们改的是机位参数，改完立即把这台关卡相机摆过去，在暂停中立即生效。界面按钮、拖拽、滚轮怎么映射到这些接口由 Mod 决定。
- 转台有两种做法：
  - 转镜头：用实时计时器逐帧调 `SetCharacterEditorCameraOrbit`。灯光跟着替身，看到的受光面会变。
  - 转替身：相机和灯光都不动，像真的转台。用 `GetCharacterEditorPreviewCharacter()` 取得替身，用实时计时器逐帧调 `K2_SetActorRotation(UE.FRotator(0, yaw, 0), false)`。转替身期间照样可以调镜头接口：机位始终按进棚时替身的朝向算，不会跳到替身当前的正面。`ResetCharacterEditorCamera` 不复位替身朝向，需要复位时，进棚时用 `K2_GetActorRotation()` 记下原朝向，再写回去。
- 灯光与宗门时装界面一致：进棚时关掉场景里所有开着的后期体积（换装地图自带的那个会把画面压暗、四角压黑），关图时恢复。要加自己的后期体积，请在进棚之后再加。
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
| `GetCharacterApparel(Character)` | 取角色身上当前显示的服饰：“槽 → 服饰 ID”的表（用宗门统一服饰、个人时装时是叠加后的结果，否则是穿着的装备；留空的槽不返回）。访客等非本门角色也能读。2026-11 新增（测试中） |
| `SetCharacterCustomizationId(Character, ProfileId)` | 换捏脸预设（体型、脸型、发型），已设的服饰保留；返回 bool。2026-11 起换的预设存进 Mod 数据区（见 [4.10](#410-捏脸体型脸型发型颜色)），不改角色原有预设，写它的 Mod 停用后回到原预设；换预设会清掉这个角色在 4.10 里的捏脸改动 |
| `GetCharacterCustomizationIds(Character)` | → `ids, currentId`：与角色同性别、能传给 `SetCharacterCustomizationId` 的全部预设 ID（含 JSON 加的行，按表内顺序），以及角色当前的预设。2026-11 新增 |
| `GetCustomizationPresetInfo(nil, ProfileId)` | → `ok, name, avatar`：预设的名称和缩略图（`Texture2D`，可能为空，同步加载）。2026-11 新增 |

```lua
local ok = UE.UModLuaLibrary.SetCharacterApparel(Character, UE.EArmorType.Armor, "MyMod_Robe")
local ids, currentId = UE.UModLuaLibrary.GetCharacterCustomizationIds(Character)
```

- `Character` 是初始化完成的人类弟子（`AEastRimWorldCharacter_Human`）。
- `Slot` 收 `UE.EArmorType.Helmet`、`Armor`、`Pants`、`Shoes`；2026-11 起另有 `Accessory`（饰品）、`Hairpin`（发簪）、`Underwear`（下身内衣）、`UpperUnderwear`（上身内衣）、`Socks`（袜、丝袜、绑腿）、`Back`（披挂：披风、护肩、背饰）（测试中）。装备面板暂不显示新槽，Mod 用本节接口穿戴。不同槽同时显示，内衣、袜、外裤可以叠穿，见下面「多层服饰」。
- `ApparelId` 必须是装备配置表（`EquipmentConfig`）里的行，这件装备的槽位与 `Slot` 一致，而且角色这一性别的外观资产（CDA）是这个槽对应的外观资产类（见下表）；不符时返回 false 并写 Mod 日志。
- `ProfileId` 必须是捏脸预设表（`CharacterAppearancePreset`）里的行，且性别与角色当前预设相同；掌门和使用主角外观的角色不接受。新的体型、脸型、发型可以用 JSON 往 `CharacterAppearancePreset`、`CharacterAnatomyProfiles` 加行（参考示例 ParagonSunWukong）。
- 2026-11 前的游戏版本里，`SetCharacterCustomizationId` 的性别校验读错了预设表的字段，同性别的预设也会返回 false；包含 `GetCharacterCustomizationIds` 的版本已修复。
- 服饰改动写进角色的存档数据，换的预设存进 Mod 数据区，存读档、离开地点再回来都会保留。捏脸预设不受宗门服饰影响。

**个人时装**（本门派有职位的弟子，包括掌门）：

- `SetCharacterApparel`、`ClearCharacterApparel` 写的是个人时装。弟子显示的服饰按“身上装备 → 分堂统一服饰 → 个人时装”逐槽叠加：个人设过的槽用个人的，其余槽跟随宗门服饰；分堂没开统一服饰时，其余槽跟随身上装备。
- 开关或保存分堂统一服饰、弟子调职时，个人设过的槽不变，其余槽照常变化。
- 写入个人时装的 Mod 被停用后，个人时装暂不生效，弟子在下一次宗门服饰重设（开关统一服饰、调职等）时回到宗门规则；Mod 重新启用后，下一次重设会再叠回去。
- `ModInfo.json` 的 `NewGameLoad=true` 只是让 Mod 在新游戏设置阶段提前加载，读档时照常加载，对个人时装没有影响。之前的文档写成“读档时不加载”，是错的。
- 不属于本门派的角色（访客等）不受宗门服饰管理，这几个函数直接改外观：第一次从按装备显示切到自定义时，其他槽先用当前穿着的服饰补齐，不会突然变空。
- 宗门时装界面不提示谁在用个人时装。

**多层服饰**（2026-11 新增，测试中）：

游戏用的捏人插件按外观资产的**类**分层：每件衣服各挂一个跟随身体姿势的网格，同一个类同时只穿一件，不同的类同时显示；外观资产的 `HiddenCDA_Classes` 写了哪些类，穿上它时这些类就不显示（被盖住）。每个槽对应一个类：

| 槽 `EArmorType` | 外观资产类 | 官方衣服会不会盖住它 |
|---|---|---|
| `Helmet` | `BP_CDA_Apparel_Hat` | — |
| `Hairpin` | `BP_CDA_Apparel_Glasses` | 帽子不会盖住 |
| `Armor` | `BP_CDA_Apparel_UpperBody` | — |
| `UpperUnderwear` | `BP_CDA_Apparel_UpperUnderWear` | 官方上衣会盖住 |
| `Accessory` | `BP_CDA_Apparel_Accessory` | **官方上衣都会盖住**，只适合护腕这类本该被袖子挡住的东西 |
| `Back` | `BP_CDA_Apparel_Back`（2026-11 新增类） | 不会，披风、背饰请用它 |
| `Pants` | `BP_CDA_Apparel_LowerBody` | — |
| `Underwear` | `BP_CDA_Apparel_Underwear` | 官方裤子会盖住 |
| `Socks` | `BP_CDA_Apparel_Socks` | 官方裤子会盖住 |
| `Shoes` | `BP_CDA_Apparel_Feet` | — |

- 外层盖不盖内层由**外层**外观资产的 `HiddenCDA_Classes` 决定：你自己的裙子不写 `BP_CDA_Apparel_Socks_C`，丝袜就会透出来；想让长裤盖住丝袜就写上。
- 两个内衣槽清空后，游戏换回默认内衣，不会光身。
- 各层是独立网格，避免共面闪烁要靠模型：外层整体比内层外扩一点，不要贴在同一个面上。游戏不提供改渲染顺序的开关。
- 同一层只能穿一件（例如两件丝袜不能叠穿）。
- 外观资产的类和槽对不上时，换装时这件衣服脱不下来。启动参数加 `-ModConsole` 后，控制台执行 `Mod.CheckApparel [ModId]` 可以逐行列出类不符、缺男/女款、资产加载失败的服饰行。
- 2026-11 起 Mod 服饰行里写的 `ArmorType` 生效（以前合并时被丢掉、只能继承 `TemplateID` 模板的槽）；不写沿用模板。槽位和模板不同时，男女外观资产不继承模板，只用你写的（只写女款，男角色在这一层就不显示）。
- 宗门服饰界面的分层选择会晚于接口提供；在那之前用本节接口按层给弟子穿戴。

**服饰染色**（2026-11-20 新增）：捏人和宗门时装的「染色·裁剪」页只认登记过的网格。Mod 的衣服要能染色，用 JSON 往染色表加行：`ConfigType` 填 `CreatorGarmentDye`，`StructName` 填 `/Script/EastRimWorld.CreatorGarmentDyeRow`，每个网格一行，写明哪些材质槽可染、遮罩三个通道各是哪个可染区。字段说明、材质和遮罩要求见《宗门时装 Mod 制作指南》第 6.5 节。

### 4.10 捏脸：体型、脸型、发型、颜色

> 2026 年 11 月新增，需要包含该接口的游戏版本。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `GetCharacterShapeParams(Character)` | → 可调的体型、脸型滑条数组，每项有 `ID`、`DisplayName`、`Category`、`Value`（当前值）、`MinValue`、`MaxValue`、`DefaultValue` |
| `SetCharacterShapeParam(Character, ParamId, Value)` | 调一个滑条，数值按滑条范围钳制；返回 bool |
| `GetCharacterColorParams(Character)` | → 可调颜色数组，每项有 `ID`、`DisplayName`、`Color`（`FLinearColor`）、`bHasValue`（角色档案里有没有这个颜色，没有时 `Color` 为白色） |
| `SetCharacterColorParam(Character, ParamId, Color)` | 改一个颜色；返回 bool |
| `GetHairstyleSlots(WorldContext)` | → 发型槽数组，每项有 `ID`、`DisplayName`、`bAllowEmpty`；目前是 `Head`（头发）和 `Beard`（胡子，可留空）。`WorldContext` 传 `self.ModInfo` 即可 |
| `GetCharacterHairstyles(Character, SlotId)` | → `options, currentId`：这个槽按角色当前体型可选的发型（每项 `HairstyleId`、`DisplayName`、`Icon`），以及角色当前的发型 ID |
| `SetCharacterHairstyle(Character, SlotId, HairstyleId)` | 换发型，`HairstyleId` 取自 `GetCharacterHairstyles`；传空字符串摘掉这个槽的发型（只对允许留空的槽）；返回 bool |
| `ResetCharacterCustomization(Character)` | 撤销 Mod 对这个角色捏脸的全部改动（体型、脸型、发型、颜色、换的体型档案、部位和换的预设），回到游戏原有外观；扩展外观（见下文"扩展外观"）也一并删掉，不论是哪个 Mod 写的；返回 bool |

```lua
local params = UE.UModLuaLibrary.GetCharacterShapeParams(Character)
for i = 1, params:Num() do
    local p = params[i]
    self:Log(string.format("%s %.3f [%.3f, %.3f]", tostring(p.ID), p.Value, p.MinValue, p.MaxValue))
end
UE.UModLuaLibrary.SetCharacterShapeParam(Character, "Body_Size", 0.8)
UE.UModLuaLibrary.SetCharacterColorParam(Character, "SkinTint", UE.FLinearColor(0.8, 0.6, 0.5, 1))
local options, currentId = UE.UModLuaLibrary.GetCharacterHairstyles(Character, "Head")
UE.UModLuaLibrary.SetCharacterHairstyle(Character, "Head", options[1].HairstyleId)
```

- 可调的滑条和颜色照官方宗门时装界面配置，范围也与官方界面一致（见下表）。身高 `Body_Size` 改的是动画混合参数；年龄 `Body_Age` 同时改动画混合、形变、皮肤三处，与官方界面一样。表里没有的参数不接受。
- 掌门和世界里有登记的角色都能改；替身等使用掌门外观的角色跟着掌门走，改掌门即可；比武、切磋、测试生成的临时角色不接受。
- 写入接口（Set 系列）只能在 Mod 的 Lua 里调用：游戏要记下是哪个 Mod 改的。
- 改动立即作用在角色身上，换装地图的摄影棚替身下一帧跟上；随游戏存档保存，读档、离开地点再回来、进宗门战都保留。
- **Mod 数据单独存，不改游戏原有数据**：Mod 的改动按角色存在存档里单独的一块。写它的 Mod 停用或删除后，角色按游戏原有外观显示，Mod 的改动原样保留，重新启用后读档恢复。没装你的 Mod 的玩家读这个存档也完全正常。
- 复制出来的临时分身（宗门擂台、劫狱等）显示角色原有外观。
- 拖滑条时可以每帧调用；"取消"由 Mod 自己做：进界面时用 Get 系列记下原值，取消时写回，或者直接 `ResetCharacterCustomization`（它会连扩展外观一起删，包括别的 Mod 写的妆容、花钿）。
- 写入接口返回 false 时，角色外观会恢复成调用之前的样子。

滑条 `ParamId`：

| ID | 名称 | 范围 | 说明 |
|---|---|---|---|
| `Body_Size` | 身高 | 0.470 ~ 1.0 | 动画混合参数 `size` |
| `Body_Age` | 年龄 | 0 ~ 0.346 | 同时改动画混合 `Age`、形变 `body_age`、皮肤 `Age` |
| `Eyes_MorphTarget_Size` | 眼睛大小 | -1 ~ 1 | 形变 `Eye_01` |
| `Eyes_MorphTarget_Depth` | 眼睛凹陷 | -1 ~ 1 | 形变 `Eye_02` |
| `Ear_MorphTarget_Morph01` | 耳朵长度 | -1 ~ 1 | 形变 `Ear_01` |
| `Jaw_MorphTarget_Height` | 下巴高度 | -1 ~ 1 | 形变 `Jaw_01` |
| `Mouth_MorphTarget_Depth` | 嘴部凹陷 | -1 ~ 1 | 形变 `Mouth_01` |
| `Nose_MorphTarget_Height` | 鼻子高度 | -1 ~ 1 | 形变 `Nose_01` |
| `Face_CheekBone` | 颧骨 | -1 ~ 1 | 形变 `Sculpt_CheekBone`（新游戏捏人界面里的） |
| `Face_LipLower` | 下唇 | -1 ~ 1 | 形变 `Sculpt_LipLower`（同上） |
| `Face_NoseBridge` | 鼻梁 | -1 ~ 1 | 形变 `Sculpt_NoseBridge`（同上） |
| `Face_BrowHeight` / `Face_BrowRidge` | 眉高 / 眉骨 | -1 ~ 1 | 形变 `Sculpt_BrowHeight` / `Sculpt_BrowRidge`（2026-11 新增，测试中，下同） |
| `Face_EyeDistance` / `Face_EyeCant` / `Face_EyeLid` | 眼距 / 眼角 / 眼皮 | -1 ~ 1 | 形变 `Sculpt_EyeDistance` / `Sculpt_EyeCant` / `Sculpt_EyeLid` |
| `Face_CheekFull` | 脸颊饱满 | -1 ~ 1 | 形变 `Sculpt_CheekFull` |
| `Face_ChinDepth` / `Face_ChinLength` | 下巴前后 / 长短 | -1 ~ 1 | 形变 `Sculpt_ChinDepth` / `Sculpt_ChinLength` |
| `Face_JawAngle` / `Face_JawWidth` | 颌角 / 腮宽 | -1 ~ 1 | 形变 `Sculpt_JawAngle` / `Sculpt_JawWidth` |
| `Face_LipUpper` / `Face_MouthWidth` | 上唇 / 嘴宽 | -1 ~ 1 | 形变 `Sculpt_LipUpper` / `Sculpt_MouthWidth` |
| `Face_NoseTipHeight` / `Face_NoseTipDepth` / `Face_NoseWidth` | 鼻尖 / 鼻翘 / 鼻翼 | -1 ~ 1 | 形变 `Sculpt_NoseTipHeight` / `Sculpt_NoseTipDepth` / `Sculpt_NoseWidth` |
| `EyeRoughness` | 眼影光泽 | 0 ~ 1 | 皮肤材质参数 `Eye Roughness` |
| `LipsRoughness` | 唇彩光泽 | 1.5 ~ 0.35 | 皮肤材质参数 `Lips Roughness`（官方滑条从大到小） |

颜色 `ParamId`：`SkinTint`（肤色）、`LipsTint`（唇色）、`TattooTint`（纹身颜色）、`Eyes_IrisHueColor`（瞳色）、`HDR_ColorPicker_Hair_Root`（发色，材质参数 `TipColor`）。

返回的 `Category` 为 `Body`、`Ear`、`Eyes`、`Jaw`、`Mouth`、`Nose`、`Face`、`Skin`。`Jaw_MorphTarget_Height`、`Nose_MorphTarget_Height` 的显示名都只是“高度”，要和 `Category` 一起显示；`EyeRoughness`、`LipsRoughness`、`LipsTint`、`TattooTint` 在官方界面里也没有正式名字，显示名是英文占位或空。判断请用 `ID`。

#### 体型档案与部位（耳朵、尾巴等）

> 2026-11 新增，测试中。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `GetCharacterBodyTypeId(Character)` | → 角色当前的体型档案 ID（`CharacterAnatomyProfiles` 的行名，如 `ERWFemaleAdult`） |
| `GetCharacterBodyTypes(Character)` | → 可切换的体型数组（每项 `ID`、`DisplayName`、`Icon`、`bCurrent`）：体型表 `CharacterBodyTypes` 里与角色同性别、同种族的行 |
| `SetCharacterBodyType(Character, BodyTypeId)` | 只换体型档案，滑条数值、发型、颜色、服饰照旧；返回 bool |
| `GetCharacterBodyPartSlots(Character)` | → 当前体型适用的部位槽（每项 `ID`、`DisplayName`、`bAllowEmpty`） |
| `GetCharacterBodyPartOptions(Character, SlotId)` | → 这个槽可选的款式（每项 `PartId`、`DisplayName`、`Icon`），按外观资产的适用体型筛过 |
| `GetCharacterBodyPart(Character, SlotId)` | → `worn, partId`：没戴返回 false；戴着的不是表里的款式时 `partId` 为 None |
| `SetCharacterBodyPart(Character, SlotId, PartId)` | 换款式；`PartId` 传空字符串摘掉（只对允许留空的槽）；返回 bool |

```lua
local L = UE.UModLuaLibrary
L.SetCharacterBodyType(Character, "MyMod_YaoF")
for _, slot in ipairs({"Ear", "Tail"}) do
    local options = L.GetCharacterBodyPartOptions(Character, slot)
    if options:Num() > 0 then L.SetCharacterBodyPart(Character, slot, options[1].PartId) end
end
```

- **体型**：插件自带的“换体型”会把整份档案换成那个体型的默认档案（捏脸全没了），这里只改档案里的体型。头在目标体型里找同一个，找不到用第一个；脸型数值保留，生不生效看那个头网格有没有同名形变。只能换成同性别、同种族的体型（衣服按角色性别取男女款）。掌门也能换。
- 体型档案本身照旧用 JSON 往 `CharacterAnatomyProfiles` 加行（按人族登记、用游戏的人形骨架）；要能被换上，还要在体型表 `CharacterBodyTypes`（`StructName` 填 `/Script/EastRimWorld.ModBodyTypeConfig`）登记一行：行名=体型档案 ID，`BaseAnatomy`=参照的官方体型（选发型、选部位时按它匹配，官方发型的适用体型里不会写你的体型），`DisplayName`、`Icon`。官方人体体型（`ERWFemaleAdult`、`ERWMaleAdult`、`NPCFemale01~06`、`NPCMale01~12`）已登记。体型档案行不在了（加它的 Mod 停用）时，角色按原样显示。
- **部位**：一个部位槽对应一个外观资产类。在自己的 pak 里建 `BP_CDA_Apparel` 的子类（如 `BP_CDA_Apparel_YaoEar`），每款耳朵、尾巴是这个类的一个外观资产（`SkeletalMesh` 蒙皮到游戏的人形骨架，`Anatomies` 写适用体型，空表示不限）。游戏换装只动装备槽对应的那几个类，**不碰部位类**，所以戴耳朵不顶帽子、长尾巴不用脱裤子；官方衣服也不盖住部位类。部位类不能是装备槽在用的类（上面多层服饰表里那些），否则 `SetCharacterBodyPart` 拒绝。
- 部位槽表 `CharacterBodyPartSlots`（`/Script/EastRimWorld.ModBodyPartSlotConfig`）：行名=槽 ID，`DisplayName`、`CDAClass`（类的完整路径，带 `_C`）、`bAllowEmpty`、`BodyTypeIds`（哪些体型显示这个槽，空表示所有体型，包括官方人族体型）、`HiddenWhenApparel`（这些服饰槽穿着时隐藏本部位，见下一小节，2026-11 新增）。款式表 `CharacterBodyParts`（`/Script/EastRimWorld.ModBodyPartConfig`）：行名=款式 ID，`SlotId`、`CDA`、`DisplayName`、`Icon`。
- 部位网格跟随身体骨架的姿势，身体骨架里没有的骨头（比如尾巴骨）停在绑定姿势、不会摆动。
- 体型、部位和捏脸一样存进 Mod 数据区：随存档保存，写它的 Mod 停用后角色按原样显示，重新启用恢复，`ResetCharacterCustomization` 一并撤销。写入接口只能在 Mod 的 Lua 里调用。

#### 部位颜色、按服饰隐藏、骨骼名、性别、头 ID

> 2026-11 新增，测试中。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `SetCharacterBodyPartColor(Character, SlotId, ParamName, Color)` | 给部位当前那件设颜色参数：`ParamName` 是部位材质里的向量参数名，作用于这件部位的全部材质槽；部位没戴时返回 false |
| `GetCharacterBodyPartColor(Character, SlotId, ParamName)` | → `ok, color`：部位没戴、或这个参数没设过时 `ok` 为 false（材质自己的默认值读不到） |
| `GetCharacterBoneNames(Character)` | → 角色身体网格的全部骨骼名（部位资产蒙皮、挂点用） |
| `GetCharacterGender(Character)` | → `0` 男、`1` 女，角色无效或还没初始化完时 `-1`。只读 |
| `GetCharacterHeadId(Character)` | → 角色当前的头 ID（头网格资产名，如 `Woman_MX_head01+`），查下面的点位映射数据用；取不到时返回 None |

```lua
local L = UE.UModLuaLibrary
L.SetCharacterBodyPart(Character, "Nail_Hand", "MyMod_Nail_Almond")
L.SetCharacterBodyPartColor(Character, "Nail_Hand", "NailColor", UE.FLinearColor(0.60, 0.05, 0.04, 1))
local ok, color = L.GetCharacterBodyPartColor(Character, "Nail_Hand", "NailColor")
if L.GetCharacterGender(Character) == 1 then
    -- 只给女性角色列出的款式
end
```

- **部位颜色**存在插件的单件服饰档案里，插件每次重建外观时自动套回；和捏脸一样进 Mod 数据区、随存档保存，`ResetCharacterCustomization` 一并撤销，写它的 Mod 停用后不起作用。
- 换款式（同一个槽换成另一款）时，已设的颜色带到新款上，新款材质里有同名参数才生效；摘掉后再戴上不保留。
- 只能给部位槽设。官方衣服换色用服饰染色登记 `CreatorGarmentDye`（见《宗门时装 Mod 制作指南》6.5），皮肤、头发用 `SetCharacterColorParam`。
- 没有按材质槽区分、也没有标量参数：插件按整件套参数。要分开上色，就在不同材质里用不同的参数名；需要标量（如光泽）时，可以在材质里取颜色的某一个通道当标量用。
- 材质要求：部位的材质用材质实例，颜色是向量参数（Vector Parameter），参数名与 `ParamName` 完全一致。
- **按服饰隐藏**：在部位槽表的 `HiddenWhenApparel` 里写服饰槽（JSON 写法 `["Shoes"]`），这些槽穿着带模型的外观时，部位自动隐藏，比如脚趾甲填 `Shoes`。
  - 按角色实际穿着判断：宗门统一服饰、个人时装叠加后的结果都算；表示"光脚"这类没有模型的鞋子条目不算。
  - 穿脱、调职、换统一服饰后自动重判（0.2 秒内），不用自己盯换装时序。只隐藏部位自己的网格。
  - 部位按网格资产认：部位要用自己的网格资产，不要和别的部位、服饰共用同一个网格。
  - 填哪些槽的注意事项：
    - 饰品槽 `Accessory` 会被官方上衣盖住（见 4.9），盖住时也算穿着。
    - `Underwear`、`UpperUnderwear` 清空后游戏会补回默认内衣（带模型；男性上身没有默认内衣），填了这两个槽，部位多半会一直隐藏。
    - `Eyes` 不显示外观，填了不会触发。游戏目前也没有可穿的护手槽，`EArmorType.Bracer` 是废弃值，不要用。
- **骨骼名**来自游戏人形骨架，部位资产的蒙皮、挂点请用这些名字，数量以返回为准。
- **性别**与换装选男款 / 女款同一个取值，不提供修改：衣服、体型、头、发型都按性别分，改性别等于重建角色。

#### 脸型点位映射数据

> 2026-11 新增。数据文件：`BlueprintAPI_ModAuthors/Examples/FacePointMapping.json`（和本指南同一目录）。

官方新游戏捏人页的"拖点位"没有另一套形变：它按每颗头实测的系数，把点的位移解成一组脸型滑条值写进去，结果就存在滑条值里。`FacePointMapping.json` 是同一份数据，配合 `SetCharacterShapeParam` 可以做出接近官方的点位编辑。

- `Heads` 的键是头 ID（`GetCharacterHeadId` 的返回值），共 11 颗头，每颗 18 个点。滑条按每颗头自己的 `Sliders` 列表：10 颗头是 23 条，`woman_head_AG04` 是 18 条（这颗头没有眼睛、下巴、嘴、鼻子那 5 个旧形变）；不要按固定下标取。`ParamId` 就是 `GetCharacterShapeParams` 的滑条 ID，用到的滑条都已开放。
- `GetCharacterHeadId` 返回的 ID 不在 `Heads` 里，表示这颗头没有点位数据，不支持点位编辑。
- 坐标和位移的单位是 cm，头网格组件空间、参考姿态。`AxisLateral` 是角色的左（H，左右 / 宽窄），`AxisUp` 是上（V），`AxisForward` 是脸朝向（D，前后）。
- 点的位置 = `RefPosition` + 每一列 `(滑条值 − Default) × 位移`，滑条值 ≥ `Default` 时位移取 `DeltaPerUnitPos`，否则取 `DeltaPerUnitNeg`。
- 点的世界位置 = 头骨（`HeadBone`，即 `head`）当前的世界变换 × `HeadBoneRef` 的逆 × 点的位置。`HeadBoneRef` 是这根骨头在参考姿态下的组件空间变换（`Rotation` 是四元数 X、Y、Z、W）；头骨的当前世界变换可以从角色的骨骼网格上按骨骼名取。
- `Solve` 为 true 的列是拖这个点时官方会改的滑条；为 false 的列只用来算点的当前位置（别的部位的滑条也会带动这个点）。
- `Axes` 是这颗头上这个点能拖的方向。改滑条时请限制在 `max(Min, SafeMin)` ~ `min(Max, SafeMax)` 之内。
- 滑条的 `Side`：1 只影响角色左侧、-1 只影响右侧、0 两侧，`Mirror` 是对侧的滑条。点的 `Side`：1 点在角色左侧、-1 在右侧、0 在中线，`Mirror` 是对侧的点。
- 当前数据的现状：所有滑条都是两侧一起改（`Side` 0、没有对侧滑条），所有点 `SideIndependent` 为 false，也就是没有单侧编辑；每列正反两个方向的系数相同；`SafeMin` / `SafeMax` 等于滑条全范围。字段先留着，以后数据会细化。
- 官方求解在屏幕空间做：每列先投影到屏幕，拖动目标先投到这个视角允许拖的轴上，再对所有 `Solve` 列一起做带阻尼的有界最小二乘。阻尼 = 0.02 × 各 `Solve` 列屏幕位移平方的平均值，正则项把滑条拉向按下鼠标时的值。简单做法：只取沿拖动方向位移最大的那条 `Solve` 滑条，按比例调。

#### 扩展外观：妆容、花钿 / 面靥、眉睫、虹膜

> 2026-11 新增，测试中。完整示例见 [`Examples/ExtLookExample`](ExtLookExample/README.md)。

每个角色可以有一份 Mod 写的"扩展外观覆盖"，包括皮肤妆层、花钿 / 面靥贴花、眉、睫和眼睛（虹膜）。它存在 Mod 数据区，随存档保存。

生效优先级是 **Mod > 分堂统一妆容 > 角色自己**：
- 分堂统一妆容是宗门时装里的官方功能，上线后生效；
- "角色自己"指掌门在新游戏捏人页里捏的外观。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `GetCharacterMakeupLayers(Character)` | → 这颗头能用的皮肤妆层 ID（`Lips`、`Eyeshadow`、`Blush`）；头不支持时为空 |
| `GetCharacterMakeupLayer(Character, LayerId)` | → `ok, color, opacity, source`：最终生效的颜色（线性色）、浓度（0 = 没有这层）、来源；没有任何来源时 `ok` 为 false |
| `SetCharacterMakeupLayer(Character, LayerId, Color, Opacity)` | 设颜色和浓度 0~1；浓度 0 = 去掉这层（能卸掉掌门自己或统一妆容带的妆）；返回 bool |
| `ClearCharacterMakeupLayer(Character, LayerId)` | 撤掉 Mod 对这层的设置，回到优先级更低的来源；返回 bool |
| `GetDecalSlots()` | → 贴花槽：`Huadian`（花钿）、`Mianye`（面靥） |
| `GetDecalPatterns(WorldContext, SlotId)` | → 这个槽的图案（含 Mod 加的行），每项 `PatternId`、`SlotId`、`DefaultAnchorId`、`DefaultColor`（线性色）、`DefaultSizeCm`、`DefaultGold`、`DefaultOpacity`、`DefaultRotationDegrees`、`MaterialOverride`、`bPairedLR`、`bFromMod`。`WorldContext` 传角色或 `self.ModInfo`，不能传 nil |
| `GetFaceAnchors()` | → 9 个锚点 ID：`Forehead`、`BrowCenter`、`TempleL`、`TempleR`、`DimpleL`、`DimpleR`、`LipCornerL`、`LipCornerR`、`Chin`（L / R 是角色自身的左右） |
| `GetCharacterFaceAnchors(Character)` | → 这颗头上有位置的锚点 |
| `GetDecalParamRanges(WorldContext)` | → `SizeMinCm` / `SizeMaxCm`（0.2 / 20，游戏能接受的极限）、`SuggestedSizeMinCm` / `SuggestedSizeMaxCm`（0.6 / 4，官方界面用的范围）、`OffsetRangeCm`（偏移上限，目前 2）。`WorldContext` 同上 |
| `GetCharacterDecal(Character, SlotId)` | → `ok, state, source`（`FModDecalState`，字段见下）；Mod 设成去掉时 `ok` 为 true、`PatternId` 为 None |
| `SetCharacterDecal(Character, SlotId, State)` | 设贴花；`State.PatternId` 为 None 表示去掉这个槽；返回 bool |
| `ClearCharacterDecal(Character, SlotId)` | 撤掉 Mod 对这个槽的设置；返回 bool |
| `GetBrowLashStyles(Character, Kind)` | → 这颗头有绑定的眉（`Kind` = `"Brow"`）/ 睫（`"Lash"`）款式 |
| `GetCharacterBrowLash(Character, Kind)` | → `ok, state, source`（`FModBrowLashState`） |
| `SetCharacterBrowLash(Character, Kind, State)` | 设眉 / 睫；`State.StyleId` 为 None 的含义见下；返回 bool |
| `ClearCharacterBrowLash(Character, Kind)` | 撤掉 Mod 对眉 / 睫的设置；返回 bool |
| `GetIrisPresets(Character)` | → 虹膜款式 ID；头不支持换眼睛时为空 |
| `GetCharacterEyes(Character)` | → `ok, state, source`（`FModEyesState`） |
| `SetCharacterEyes(Character, State)` | 设虹膜款式和瞳色；返回 bool |
| `ClearCharacterEyes(Character)` | 撤掉 Mod 对眼睛的设置；返回 bool |
| `ResetCharacterExtAppearance(Character)` | 删掉这个角色的全部 Mod 扩展外观，不论是哪个 Mod 写的、那个 Mod 是否启用（`ResetCharacterCustomization` 也会一并删掉）；返回 bool |

`source`（`EModExtSource`，Lua 里是数字）：`0` 没有、`1` 角色自己、`2` 统一妆容、`3` Mod。

| 结构 | 字段 |
|---|---|
| `FModDecalState` | `PatternId`；`AnchorId`（None = 图案默认锚点）；`bUseDefaultColor`（默认 true）；`Color`（线性色 0~1）；`Opacity`（0~1，默认 1）；`SizeCm`（≤0 = 图案默认大小）；`OffsetCm`（`FVector2D`，X 正向是角色自己的左、Y 正向朝上；成对图案的另一侧左右镜像）；`AngleDegrees`；`Gold`（0~1，<0 = 图案默认） |
| `FModBrowLashState` | `StyleId`；`ColorMode`（`EModHairColorMode`：`0` 款式默认、`1` 黑素 / 红度、`2` 任意色）；`Color`；`Melanin`；`Redness`；`ShapeThickness` / `ShapeHeight` / `ShapeSpacing` / `ShapeTail`（眉形 -1~1，0 = 不改，只对眉有效） |
| `FModEyesState` | `bIndependent`（false = 两眼都用左眼的设置）；`LeftPresetId`（None = 这颗头原来的眼睛）；`bLeftTint`；`LeftTint`；`RightPresetId`；`bRightTint`；`RightTint` |

```lua
local L = UE.UModLuaLibrary
-- 唇色
if L.GetCharacterMakeupLayers(Character):Contains("Lips") then
    L.SetCharacterMakeupLayer(Character, "Lips", UE.FLinearColor(0.55, 0.05, 0.08, 1), 0.8)
end
-- 花钿：用图案默认锚点、默认颜色，浓度和角度要自己给
local pats = L.GetDecalPatterns(Character, "Huadian")
if pats:Num() > 0 then
    local p = pats[1]
    local s = UE.FModDecalState()
    s.PatternId = p.PatternId
    s.bUseDefaultColor = true
    s.Opacity = p.DefaultOpacity
    s.AngleDegrees = p.DefaultRotationDegrees
    L.SetCharacterDecal(Character, "Huadian", s)
end
-- 读回：最终生效值和来源
local ok, state, source = L.GetCharacterDecal(Character, "Huadian")
```

**能改谁、在哪里显示**
- 能改的角色和捏脸接口一样，是掌门和世界里有登记的角色；用掌门外观的替身跟着掌门走。读接口也做同样的校验，对替身、临时角色调用会记一条错误。
- 写入接口只能在 Mod 的 Lua 里调用；`ResetCharacterExtAppearance` 不限。改动随存档保存。一次改很多人时分批套用，贴图等资源要异步加载，通常几帧到一两秒内显示。
- 不显示的地方：
  - 宗门战等战斗里的战斗形态不套扩展外观；
  - 复制出来的临时分身（普通弟子的替身、宗门擂台、劫狱等）显示角色原有外观。
- 头的支持范围：
  - 捏人头（掌门，以及用捏人模型的弟子）支持全部项；
  - NPC 头大多只支持贴花；
  - 头不支持的项写入时报错，并返回 false。写之前请用上面的列表接口查。
- 写入失败的原因写进你的 Mod 日志。同一条报错 5 秒内只记一次，在循环里对一批角色调用时不会刷屏；但先自己筛一下角色更好，比如只对 `GetCharacterMakeupLayers` 非空的角色设妆容。

**归属**
- 一个角色的 Mod 扩展外观整份只记一个署名，就是最后写入的 Mod，和捏脸改动的署名各记各的。
- 别的 Mod 再写这个角色，整份都归它；`Clear` 系列也算一次写入，会改署名。
- 用同样的值再写一遍不算写入，不改署名，照样返回 true。
- 归属的 Mod 停用或删除后，这个角色的 Mod 扩展外观全部不生效，存档里原样保留，重新启用后恢复。以下两种情况例外，原来那份会被替换或删掉，不再恢复：
  - 停用期间别的 Mod 写了这个角色；
  - 调用了 `ResetCharacterExtAppearance` 或 `ResetCharacterCustomization`。
- 局中启用、停用 Mod 时，场上角色当场刷新。

**数值**
- 颜色是线性色，分量 0~1；浓度 0~1；超出的会被夹紧。非有限数（NaN、无穷大）直接拒绝。
- 贴花：
  - 大小 0.2~20 cm；
  - 偏移各方向不超过 `OffsetRangeCm`；
  - 角度规整到 [-180, 180)；
  - 金箔 0~1，≥0.5 按金质感渲染。

**贴花**
- `AnchorId` 必须是 `GetCharacterFaceAnchors` 里有的锚点。不填时用图案的默认锚点，这个锚点同样要在这颗头上，否则拒绝。
- 质感：`MaterialOverride` 为 None 表示行里没勾质感覆盖。这时官方有一部分图案的质感固定为玉或金，其余的按金箔量判断。固定质感的图案和勾了覆盖的图案，质感类型不随金箔量变，这类图案的金箔量建议留默认。
- `bPairedLR` 为 true 的成对图案（面靥、斜红等）放在分左右的锚点上时，另一侧会自动镜像贴一份。
- 浓度和角度不会自动取图案的默认值（`DefaultOpacity`、`DefaultRotationDegrees`），要自己传。
- 金质感图案：颜色和图案默认色相差不到 0.01 时，当作没选色，显示统一的金色。读回时，没选色的金质感图案给的是图案表的默认色，不是画面上的金色。
- 读回给的是实际生效值：用图案默认的大小、金箔、锚点也是具体值。把读回的状态原样写回算一次写入，会改署名，而且这几项变成显式值。画面不变，但以后图案表的默认值改了就不再跟着变。

**眉睫**
- 眉的 `StyleId` 为 None 表示去掉：掌门身上是完全没有眉，和捏人页选"无"一样；弟子身上回到皮肤上画的眉。
- 睫毛的 `StyleId` 为 None 表示还原成这颗头原来的睫毛，不会没有睫毛。
- 颜色方式：
  - `0` 款式默认：和捏人页的"随发色"是同一个设置；弟子身上读不到发色，按款式默认的颜色显示。
  - `1` 按 `Melanin` / `Redness`（0~1）。
  - `2` 任意色（`Color`；眉睫材质没有染色通道时按黑素 / 红度近似）。
- 睫毛只支持 `0` 款式默认，其他方式报错：随头的睫毛换款时不改色，捏人页也没有睫毛颜色。
- 眉形：粗细、上下对所有眉款有效；眉距、眉尾只对左右分开的眉款有效，其他款设了不生效。
- 只设睫毛时，皮肤上画的眉照旧保留。

**眼睛**
- 整段覆盖，没填的部分不继承下层：
  - `LeftPresetId` / `RightPresetId` 为 None 时，是这颗头原来的眼睛，不是掌门在捏人页选的款式；
  - 不勾 `bLeftTint` / `bRightTint` 就没有瞳色，也不沿用下层的瞳色。
- 只想改一点时，先用 `GetCharacterEyes` 读出来，改了再写。
- `LeftTint` / `RightTint` 是瞳色增益，乘在虹膜贴图上。
- 虹膜大小、瞳孔大小不开放。

**往图案表、锚点表加行**（`ConfigType` 见第 5 节）
- 两张表都**只能加新行**。下面这些行合并时会被跳过，原因写进你的 Mod 日志：
  - 和官方或别的 Mod 的行同名的；
  - 图案行 ID 不合规的（只能用字母、数字、`_`、`-`，不超过 128 个字符），或者没有 `Pattern` 贴图的；
  - 锚点行 `HeadMesh` 为空的，或者这颗头已经登记过的。
- `StructName` 填错时，整张表跳过。
- 同一局里重新启用你的 Mod 时，它自己上次加的行也会这样提示一遍，行照样在、功能不受影响。同一局里改了 JSON 再启用，行不会更新，要重新读档。
- 图案行（SDK 里的 `FCreatorFacePatternRow`）：
  - `Pattern` 必填：透明底、白色图案，颜色由游戏染；导入设置用默认压缩、sRGB 开、带 alpha。
  - **贴图资产名不要用 `T_FaceDecal_<官方图案 ID>`**，否则会套上那个官方图案的质感和法线图。
  - `NormalTexture` 可选，按法线贴图导入，不填按平的。
  - `bOverrideMaterial` + `MaterialOverride` 可选，用来指定 朱砂 / 玉 / 金 质感；要确定质感就勾上。
  - `DisplayNameKey`、`Thumbnail` 游戏不读，图案名请在你自己的界面里用你自己的文字显示。
- Mod 加的图案**不会出现在官方捏人页和宗门时装页**，只能经上面的接口使用。Mod 停用后重新读档，引用它图案的贴花静默不显示，不报错。
- 锚点行（`FCreatorFaceAnchorRow`）：
  - 官方已给 11 颗捏人头登记锚点，Mod 只能给 NPC 头或你自己的头加行。
  - `HeadMesh` 必填；`AttachBone` 是贴花跟随的骨骼（默认 `head`），建议填头网格骨架里有的骨骼，没有时贴花挂在头部组件上、不跟骨骼。
  - `Anchors` 每项是 `Anchor`、`Location`、`Normal`，单位 cm，头网格参考姿态、组件空间。可以只登记部分锚点，没登记的锚点在这颗头上不可用；`Anchors` 为空的行等于没登记。
- 没有行的头由游戏估算锚点：按眼球骨骼；没有眼球骨骼时按 head 骨的固定偏移；连 head 骨都没有就不支持贴花。估算的位置是近似的，要准就登记锚点行。

图案行、锚点行的 JSON 写法：

```json
{
  "StructName": "/Script/EastRimWorld.CreatorFacePatternRow",
  "Rows": {
    "MyMod_LotusGold": {
      "Slot": "Huadian",
      "Pattern": "/Game/Mods/MyMod/Decals/T_MyMod_Lotus.T_MyMod_Lotus",
      "Anchor": "BrowCenter",
      "DefaultColor": { "R": 200, "G": 30, "B": 40, "A": 255 },
      "DefaultSizeCm": 1.2,
      "RotationDegrees": 0,
      "Gold": 0.8,
      "DefaultOpacity": 1,
      "bOverrideMaterial": true,
      "MaterialOverride": "Gold"
    }
  }
}
```

```json
{
  "StructName": "/Script/EastRimWorld.CreatorFaceAnchorRow",
  "Rows": {
    "MyMod_MyHead": {
      "HeadMesh": "/Game/Mods/MyMod/Heads/SK_MyHead.SK_MyHead",
      "AttachBone": "head",
      "Anchors": [
        { "Anchor": "Forehead", "Location": { "X": 0, "Y": 11.3, "Z": 173.0 }, "Normal": { "X": 0, "Y": 0.97, "Z": 0.25 } },
        { "Anchor": "BrowCenter", "Location": { "X": 0, "Y": 12.0, "Z": 170.2 }, "Normal": { "X": 0, "Y": 1, "Z": 0.08 } }
      ]
    }
  }
}
```

#### 新游戏捏人页的真值（参考）

- `GetCharacterShapeParams` 目前按配置顺序返回 28 条，以后可能增加，请按 `ID` 匹配，不要按下标：`Body_Age`、`Body_Size`、`Ear_MorphTarget_Morph01`、`EyeRoughness`、`Eyes_MorphTarget_Depth`、`Eyes_MorphTarget_Size`、`Jaw_MorphTarget_Height`、`LipsRoughness`、`Mouth_MorphTarget_Depth`、`Nose_MorphTarget_Height`、`Face_CheekBone`、`Face_LipLower`、`Face_NoseBridge`、`Face_BrowHeight`、`Face_BrowRidge`、`Face_CheekFull`、`Face_ChinDepth`、`Face_ChinLength`、`Face_EyeCant`、`Face_EyeDistance`、`Face_EyeLid`、`Face_JawAngle`、`Face_JawWidth`、`Face_LipUpper`、`Face_MouthWidth`、`Face_NoseTipDepth`、`Face_NoseTipHeight`、`Face_NoseWidth`。
- 对应的中文 `DisplayName` 依次是：年龄、身高、长度、Eye Shadow Roughness（英文占位）、凹陷、大小、高度、Lip Gloss（英文占位）、凹陷、高度、颧骨、下唇、鼻梁、眉高、眉骨、饱满、前后、长短、眼角、眼距、眼皮、颌角、腮宽、上唇、嘴宽、鼻翘、鼻尖、鼻翼。"长度、凹陷、大小、高度、饱满、前后、长短"这几个短名单独看不出是哪里，建议按 `ID` 用 4.10 滑条表里的名字显示（如 `Face_CheekFull` 脸颊饱满、`Face_ChinDepth` 下巴前后、`Face_ChinLength` 下巴长短、`Eyes_MorphTarget_Depth` 眼睛凹陷）。
- 新游戏捏人页的皮肤妆层只有三层（2026-11 起掌门捏的妆随存档进游戏），浓度都是 0~1：`Lips` 唇妆（材质参数 `Creator Makeup Lips Color` / `Creator Makeup Lips Intensity`，默认浓度 0.6）、`Eyeshadow` 眼影（`Creator Makeup Eyes Color` / `Creator Makeup Eyes Intensity`，0.5）、`Blush` 腮红（`Creator Makeup Blush Color` / `Creator Makeup Blush Intensity`，0.4）。它们和取色器的 `LipsTint` 不是同一组参数；Mod 用上面"扩展外观"一节的妆层接口读写。
- 花钿颜色和 `TattooTint` 不是同一个参数：花钿是贴花，颜色写在贴花自己的材质上（Mod 用 `SetCharacterDecal`）。

### 4.11 立绘

> 2026 年 11 月新增，需要包含该接口的游戏版本。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `GetCharacterAvatarConfigId(Character)` | → 当前生效的立绘行：Mod 指定的优先，其次角色自己的立绘配置；都没有时为 None |
| `SetCharacterAvatarConfigId(Character, AvatarConfigId)` | 给角色指定立绘表（`CharacterAvatarConfig`）里的一行；返回 bool |
| `ResetCharacterAvatar(Character)` | 撤销 Mod 指定的立绘；返回 bool |

- 新立绘用 JSON 往立绘表加行：`ConfigType` 填 `CharacterAvatarConfig`，`StructName` 填 `/Script/EastRimWorld.CharacterAvatarConfig`。每行五张图都是软引用，填完整资源路径：`Avatar`（头像）、`HalfAvatar`（半身立绘）、`HalfUIAvatar`（界面半身立绘）、`HalfTourAvatar`（比武半身立绘）、`SmallTourAvatar`（比武小图）。
- 掌门和世界里有登记的角色都能指定，规则同 4.10。指定的立绘存在 Mod 数据区，不改角色原有的立绘配置；写它的 Mod 停用后显示原立绘，墓地里的头像也按这个规则。
- 已经打开的界面要关掉重开才刷新立绘。

### 4.12 Mod 自己的数据（跨存档）

> 2026 年 11 月新增，需要包含该接口的游戏版本。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `SetModData(Key, Value)` | 存一条数据，当场写盘；返回 bool |
| `GetModData(Key)` | → `ok, value`；没有这一条时 `ok` 为 false |
| `RemoveModData(Key)` | 删一条，当场写盘；返回 bool |
| `GetModDataKeys()` | → 全部键 |

```lua
UE.UModLuaLibrary.SetModData("outfits", '{"list":["白衣","青衫"]}')
local ok, text = UE.UModLuaLibrary.GetModData("outfits")
```

- 每个 Mod 一个文件，放在 `Saved/SaveGames/ModData/` 下，跨存档使用：换存档、重启游戏都还在；只能读写自己的数据。
- 键和值都是字符串，值的格式自己定（可以放 JSON 文本）。键不分大小写，1~128 个字符；单个值不超过 1M 个字符，一个 Mod 合计不超过 16M 个字符、65536 条，超出时返回 false 并写日志。
- 只能在 Mod 的 Lua 里调用。要跟着某个存档走的数据，用 4.10、4.11 的接口或游戏自己的存档数据，不要放这里。

### 4.13 按存档保存的数据与周目 ID

> 2026 年 11 月新增（测试中），需要包含该接口的游戏版本。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `SetSaveData(Key, Value)` | 写一条，只改内存，下次存档时写进存档；返回 bool |
| `GetSaveData(Key)` | → `ok, value` |
| `RemoveSaveData(Key)` | 删一条；返回 bool |
| `GetSaveDataKeys()` | → 本 Mod 在当前存档里的全部键 |
| `IsSaveDataReady()` | 当前存档的数据是否已就绪 |
| `GetPlaythroughId()` | 周目 ID（GUID 字符串）；未就绪返回空串 |

- 数据跟着存档走，每个存档一份，只能读写自己的；Mod 停用后数据原样保留在存档里，重新启用后读档就回来。
- 从 `OnNewGameStarted` / `OnLoadGameComplete` 起可用；在 `Main.lua` 顶层或 `OnModLoaded` 里调用时数据还没读入，Get 返回 false、Set 失败并写日志。
- 写入后不存档就读档，会回到存档时的值。要在存档前补写，监听同步事件 `OnGameSaving`。
- 键 1~128 个字符，单个值不超过 64K 个字符，一个 Mod 合计不超过 1M 个字符、4096 条。
- 周目 ID：新游戏生成，另存、自动存档沿用；2026-11 之前的老存档第一次读入时按当时掌门算出一个固定值，下次存档写入。门派和掌门存档里的 SGUID 每个周目都一样，区分周目请用它。

### 4.14 Mod 设置

> 2026 年 11 月新增（测试中）。设置面板界面还在制作，界面出来之前玩家用控制台 `Mod.Settings`、`Mod.Set` 修改。

在 `ModInfo.json` 里声明：

```json
"Settings": [
  { "Key": "Enabled", "Type": "bool", "Default": true, "NameKey": "MyMod_Setting_Enabled" },
  { "Key": "Speed", "Type": "int", "Default": 3, "Min": 1, "Max": 10, "Step": 1 },
  { "Key": "Mode", "Type": "enum", "Default": "Normal", "Options": ["Easy", "Normal", "Hard"] }
]
```

| 字段 | 说明 |
|---|---|
| `Key` | 1~64 个字符，不能以 `__` 开头 |
| `Type` | `bool` / `int` / `float` / `enum` / `string` |
| `Default` | 默认值；不写时 bool 为 false、数值为 0、enum 为第一项、string 为空 |
| `Min` / `Max` / `Step` | 数值范围与面板步长；越界的值截到范围内 |
| `Options` | enum 的可选值 |
| `NameKey` / `DescKey` | 显示名、说明的字符表键（给设置面板用） |

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `GetModSetting(Key)` | → `ok, value`：当前值的文本形式（bool 为 `true`/`false`）；没改过返回默认值 |
| `SetModSetting(Key, Value)` | 按声明校验并保存，值变了广播 `OnModSettingChanged`；返回 bool |
| `GetModSettings()` | → 全部设置的当前值（键 → 文本） |

- 值跨存档保存在本 Mod 的数据文件里（同 [4.12](#412-mod-自己的数据跨存档)），`SetModData` 不能写设置占用的键。
- 控制台：`Mod.Settings [ModId]` 列出声明和当前值；`Mod.Set <ModId> <Key> <Value>` 修改。
- 无效的声明（类型不对、enum 没有选项、Key 以 `__` 开头）跳过并写日志。

### 4.15 仓储

> 2026 年 11 月新增（测试中）。

**安全转移**（`UE.UModStorageLibrary`）：

| API | 说明 |
|---|---|
| `GetAcceptableItemCount(Container, ItemId)` | 仓库此刻还能收下多少（已扣掉弟子正往这里搬、预约了的空间；存储筛选不收、保持清空、禁止使用、迁移中时为 0） |
| `TransferItems(From, To, ItemId, Count)` | 转移并返回实际转移的数量；目标收下后才从源里扣，收不下的留在源里 |

- 第一版只支持 仓库→仓库、地面物品堆→仓库。
- 只取未使用的物品：弟子已预留的、指派给弟子的装备和书、留给囚犯的饭不动；装备、书整件移。
- 不要再用游戏内部的转移函数（如 `InventoryItemInstanceTransferToOtherManager`）往仓库搬：它们先扣源、后放入且不看放入结果，目标收不下时多出的物品会丢失。

**物品归属建筑**（`UE.UModStorageLibrary`）：

| API | 说明 |
|---|---|
| `SetItemHomeBuilding(Warehouse, ItemId, bExclusive)` | 把仓库设为该物品的归属仓库；返回 bool |
| `ClearItemHomeBuilding(Warehouse, ItemId)` | 去掉这条规则；返回 bool |
| `GetItemHomeBuildings(nil, ItemId)` | → 该物品的归属仓库列表（只含当前生效的规则） |
| `GetBuildingHomeItems(Warehouse)` | → 这座仓库归属的物品 ID 列表 |

- 独占（`bExclusive=true`）：其他仓库一律不收这种物品。偏好：有能收的归属仓库时其他仓库不收，归属仓库都满了回到原规则。
- 规则随存档保存，建筑拆了自动失效；写规则的 Mod 停用时规则不生效但保留。
- 已经放在别处的物品不会被主动搬去归属仓库；独占时若归属仓库保持清空或筛选拒收，这种物品就没有地方放。
- 按仓库调整搬运先后请用 `SetStoragePriority`，不支持按物品的评分回调（搬运规划不回调 Lua）。

**仓储事件**：`OnContainerItemAdded` / `OnContainerItemRemoved`（见 [4.2](#42-游戏事件订阅推荐的玩法接入方式)）。下一帧按（容器, 物品）的净变化合批发出；`Reason` 为 `Haul`（搬运入库）、`Pickup`（取货）、`Consume`（消耗）、`Spoil`（腐烂）、`Demolish`（拆除倒出）、`Mod`（`TransferItems`）、`Other` 或同一帧多种原因时的 `Mixed`；`Total` 为容器里该物品的当前总数。背包和地面物品堆不发。

**仓储设置函数**（游戏原有、蓝图可调用）：

| 函数 | 所在 | 说明 |
|---|---|---|
| `SetStoragePriority(Priority)` | 仓库建筑（`AGOAP_ActorBase`） | 存储优先级；请用它而不是直接改 `StoragePriority` 属性（后者不会刷新搬运） |
| `AddNotPutInItemTag` / `SetNotPutInItemTag` / `RemoveNotPutInItemTag` | 仓库的 `InventoryManagerComponent` | 存储筛选（不放入的物品标签） |
| `SetCanUseGridNum` / `GetCanUseGridNum` | 同上 | 可用格子数 |
| `AllSelectStorageTag` / `CancelAllSelectStorageTag` | 仓库建筑（`ABuildingActorBase`） | 全选 / 全不选筛选 |
| `SetCommonButtonState(KeepClear / ProhibitionUse, bState)` | 建筑公共按钮 | 保持清空、禁止使用 |
| `IsWarehouseFull`、`GetWarehouseState`、`CanPlaceItemInWarehouseByItemData`、`GetRegisteredWarehouses` | `UWarehouseManagerSubsystem` | 只读查询 |

`TryReserveWarehouseFromTransportPlans` 等预约函数是内部接口，不要调用。

### 4.16 AI：工作优先级与卡住的计划

> 2026 年 11 月新增（测试中）。

| API（`UE.UModAILibrary`） | 说明 |
|---|---|
| `SetCharacterWorkPriority(Character, GoalId, Priority, bCreateIfMissing)` | 设置本门弟子某项工作的优先级；返回 bool，失败原因写日志 |
| `GetCharacterWorkPriority(Character, GoalId)` | → `ok, priority` |
| `IsCustomWorkPriorityEnabled()` | 存档是否开了“自定义工作优先级” |
| `ResetCharacterPlan(Character, bForgetUnreachable)` | 中止弟子当前的计划（释放预约和占用，搬运中的东西放在脚下），之后按正常规则重新找活；返回 bool |

- 优先级口径与工作优先级界面一致：0 = 不做这项工作，其余取值是游戏配置的档位（失败日志会列出可用值）；只接受工作类目标，且弟子拥有这项工作。只有开了自定义工作优先级时优先级才参与派活评分。
- 原有的 `UpdateGoalPriority` 不变（目标不在表里时什么都不做）；请改用 `SetCharacterWorkPriority`。
- `ResetCharacterPlan` 只对本门弟子；读档恢复中、世界未初始化完、当前动作已在收尾时返回 false，稍后再试。`bForgetUnreachable=true` 同时清掉被困状态和“暂时到不了”的记录。不会瞬移，窄走廊里可能又选回原来的目标。
- 监听 `OnCharacterTrapped` 可以在弟子被判定被困时自动处理。

### 4.17 GameplayTag 安全

> 2026 年 11 月新增（测试中）。

| API（`UE.UModLuaLibrary`） | 说明 |
|---|---|
| `RequestGameplayTag(Name)` | → `ok, tag`：按名字取已注册的标签，找不到返回 false，不报错；`tag` 是拷贝 |
| `IsValidGameplayTag(Tag)` | 是否为已注册的有效标签（手填 `TagName` 的未注册标签返回 false） |
| `GetGameplayTagName(Tag)` | 标签名 |

- Lua 里请只保存标签名字符串，用时再 `RequestGameplayTag`；不要跨回调保存 `FGameplayTag` 结构体或它所在数组、Map 的引用，宿主对象释放或数组扩容后再用会崩溃。
- 遇到崩溃请把调用栈发给我们。

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

捏人扩展的两张表（用法见 [4.10](#410-捏脸体型脸型发型颜色) 的"扩展外观"）：

| ConfigType | StructName |
|---|---|
| `CreatorFacePatterns`（花钿 / 面靥图案） | `/Script/EastRimWorld.CreatorFacePatternRow` |
| `CreatorFaceAnchors`（面部锚点） | `/Script/EastRimWorld.CreatorFaceAnchorRow` |

- 这两张表**只能加新行**，不按上面"行名已存在 → 修改"处理；被跳过的行和原因写进 Mod 日志。
- 游戏运行时不支持删表行：别对游戏的表调删行函数（`DataTableFunctionLibrary` 的删行在编辑器里会让游戏崩溃，发行版里没有这个函数）。

## 6. 沙箱限制（负面清单）

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` **不可用**；要持久化自己的数据用 [4.12](#412-mod-自己的数据跨存档) 的 `SetModData`；
- 只加载 `MainLuaFile` 指定的一个 Lua 文件，外部逻辑需内联；
- **不提供按键绑定 API**；界面操作用按钮（[4.7](#47-界面与按钮)），Esc 关闭用 CommonUI 的返回处理（类默认值勾 `Is Back Handler`）；
- 游戏进行中不支持用 `OpenLevel` 切到 Mod 自己的关卡：整张切图会销毁当前世界，Mod 的界面和定时器也会消失；
- Mod 间通过依赖声明控制加载顺序，可用 `IsModLoaded` 探测其它 Mod。

## 7. 调试与排错

- 控制台命令 **`Mod.Status`**：列出全部 Mod 的状态/版本/加载耗时/定时器/命令/事件监听数/错误信息；
- 日志前缀 `[你的ModId]`；JSON 配置解析失败的日志会带**行列号**与**出错行内容**；
- 每个 Mod 可以单独写日志文件，等级由 ModInfo.json 的 `LogLevel` 决定，见 [7.2](#72-mod-日志文件)；
- 打包窗口打包前会自动校验：ModInfo.json 格式、ModId、Lua 语法、JSON 存在性、StructName 可解析、图标/Tags ini 存在性。
- 2026-11 新增内置命令：`Mod.Settings [ModId]`、`Mod.Set <ModId> <Key> <Value>`（见 [4.14](#414-mod-设置)）、`Mod.ExportUsmap`（见 [7.3](#73-导出-usmap-映射文件)）；`Mod.Status` 增加 `Source`（Local / Local(Override) / Workshop）和被覆盖的工坊目录。

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

### 7.3 导出 usmap 映射文件

> 2026 年 11 月新增（测试中）。

发行版资产按无版本属性序列化，FModel 等工具要映射文件才能读出属性。游戏每次更新后，在游戏里导出一份即可：

1. 用 `-ModConsole` 启动游戏，进入一个存档（让蓝图类型都加载）；
2. 在控制台输入 `Mod.ExportUsmap`；
3. 文件写到 `%LOCALAPPDATA%\EasternEra\Saved\ModTools\EasternEra_<时间>.usmap`，控制台显示路径和条目数。

格式为 usmap 版本 3（LargeEnums，不压缩、不带引擎版本信息），与 SDK 编辑器里 **Tools → Modding → Export Usmap** 导出的文件格式相同，FModel、UAssetGUI 都能读。游戏内导出只含导出时已加载的类型；在 SDK 编辑器里导出的只含 SDK 工程里有的类型，两者可以配合使用。

## 8. 打包与发布

1. 编辑器菜单 **Tools → Modding**：创建 Mod / 编辑 ModInfo / 打包 Mod；
2. 打包会 Cook 资产、生成 .pak、导出配置 JSON 并回写 ModInfo.json；Mod 目录（`Content/Mods/<ModId>/`）下的关卡（`.umap`）会自动加入 Cook，没被其他资产引用的关卡也会打进 pak（2026 年 11 月起的 SDK）；
3. 上传创意工坊：使用游戏内/编辑器的 Workshop 上传功能（标题/描述/预览图/可见性/更新说明）；
   - 本地测试已上传过的 Mod：在 `Content/Mods` 下的副本的 ModInfo.json 里加 `"LocalOverride": true`（或启动参数 `-ModLocalOverride`），同 ModId 时以本地副本为准、订阅的工坊版不加载；用 `Mod.Status` 确认 `Source=Local(Override)`。2026-11 新增（测试中）。
4. 自定义 GameplayTags：`IncludeGameplayTags=true` + `{ModId}GameplayTags.ini`，游戏启动时自动注册（游戏内新订阅的 Mod 下载完成后也会即时注册）。
