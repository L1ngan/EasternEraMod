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
| `UE.UModLuaLibrary.ModLog(ModId, Message, Level)` | 日志，Level = "Log"/"Warning"/"Error" |
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

### 4.3 定时器

```lua
local timerId = UE.UModLuaLibrary.RegisterModRepeatingTimer(nil, 5.0, true, fn) -- 间隔秒, 是否循环
UE.UModLuaLibrary.UnregisterModRepeatingTimer(timerId)
UE.UModLuaLibrary.RegisterModNextTick(nil, fn)  -- 下一帧单次（世界未就绪时重试用）
```

### 4.4 控制台命令

```lua
UE.UModLuaLibrary.RegisterModConsoleCommand("mymod.dosomething", "描述", function(Args)
    -- Args 为参数字符串数组（按空格切分）
end)
UE.UModLuaLibrary.UnregisterModConsoleCommand("mymod.dosomething")
```

### 4.5 运行时改数据表（进阶）

```lua
UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, "RowName", RowStruct)
```
RowStruct 类型必须与表的行结构一致。日常改配置**优先用 DataTableConfigs 的 JSON 方式**（随 Mod 启停、可被打包校验）。

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

## 6. 沙箱限制（负面清单）

- `io` / `os` / `require` / `loadfile` / `dofile` / `debug` **不可用**；
- 只加载 `MainLuaFile` 指定的一个 Lua 文件，外部逻辑需内联；
- **不提供按键绑定 API**；
- Mod 间通过依赖声明控制加载顺序，可用 `IsModLoaded` 探测其它 Mod。

## 7. 调试与排错

- 控制台命令 **`Mod.Status`**：列出全部 Mod 的状态/版本/加载耗时/定时器/命令/事件监听数/错误信息；
- 日志前缀 `[你的ModId]`；JSON 配置解析失败的日志会带**行列号**与**出错行内容**；
- 打包窗口打包前会自动校验：ModInfo.json 格式、ModId、Lua 语法、JSON 存在性、StructName 可解析、图标/Tags ini 存在性。

## 8. 打包与发布

1. 编辑器菜单 **Tools → Modding**：创建 Mod / 编辑 ModInfo / 打包 Mod；
2. 打包会 Cook 资产、生成 .pak、导出配置 JSON 并回写 ModInfo.json；
3. 上传创意工坊：使用游戏内/编辑器的 Workshop 上传功能（标题/描述/预览图/可见性/更新说明）；
4. 自定义 GameplayTags：`IncludeGameplayTags=true` + `{ModId}GameplayTags.ini`，游戏启动时自动注册（游戏内新订阅的 Mod 下载完成后也会即时注册）。
