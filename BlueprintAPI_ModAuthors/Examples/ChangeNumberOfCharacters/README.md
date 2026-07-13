# ChangeNumberOfCharacters 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/ChangeNumberOfCharacters`](../../../Content/Mods/ChangeNumberOfCharacters/)。这里不复制运行文件；游戏实际加载的是该目录中的 [`ModInfo.json`](../../../Content/Mods/ChangeNumberOfCharacters/ModInfo.json) 和 [`Main.lua`](../../../Content/Mods/ChangeNumberOfCharacters/Main.lua)。

## 功能概览

该 Mod 同时调整三处角色数量相关的运行时配置：

- 将 `UGamePlayConfigurationAsset.MaxRobotNum` 设置为 `MAX_ROBOT_NUM`，当前值为 `100`。
- 遍历 `ForceLevelInfo` DataTable，把每行的 `ForceMaxCharacterNum` 增加 `FORCE_MAX_CHARACTER_DELTA`，当前增量为 `100`。
- 同时把每行的 `AddMainPlaceStationedNum` 增加相同数值，并在世界初始化完成后重新计算玩家据点的最大驻扎人数。

需要调整数值时，修改 [`Main.lua`](../../../Content/Mods/ChangeNumberOfCharacters/Main.lua) 顶部的两个常量：

```lua
local FORCE_MAX_CHARACTER_DELTA = 100
local MAX_ROBOT_NUM = 100
```

## 加载流程

1. `OnModLoaded` 写入 `MaxRobotNum`，再修改 `ForceLevelInfo` 的运行时副本。
2. Mod 订阅 `UGameInstance.OnLoadSubLevelSucceed`。
3. 子关卡加载成功后，Mod 订阅当前 `AWorldDirector.OnAllInitializationCompleteDelegate`。
4. 世界全部初始化完成时，如果当前位置是玩家据点，则调用 `CalcuMaxStationedCharacterNum()` 刷新上限。
5. `OnModUnloaded` 移除两个委托，避免卸载后继续收到回调。

## 关键 API

| API | 用途 |
|---|---|
| `UE.UGameplayStatics.GetGameInstance` / `GetGameMode` | 从 Mod 上下文取得当前游戏实例与 GameMode |
| `GameMode:GetGamePlayConfigurationAsset()` | 取得并修改玩法配置资产的运行时实例 |
| `GameConfigComponent:GetGameConfigByType(ForceLevelInfo)` | 取得势力等级配置表 |
| `UE.UDataTableFunctionLibrary.GetDataTableRowNames` | 枚举 DataTable 行 |
| `UE.UDataTableFunctionLibrary.GetDataTableRowFromName` | 将一行读入 `FForceLevelInfo` |
| `UE.UModLuaLibrary.ReplaceDataTableRow` | 把修改后的结构体写回运行时 DataTable |
| Unreal 动态委托的 `Add` / `Remove` | 监听关卡和世界初始化完成事件 |

## `ModInfo.json` 要点

- `NewGameLoad` 为 `true`，该 Mod 参与新游戏加载流程。
- `MainLuaFile` 指向 `Main.lua`。
- `ModInformationAssetPath` 指向随 Mod Cook 的 `DA_ModDataAsset`。
- `Icon` 使用同目录的 `ChangeNumber.png`。
- `MinGameVersion` 为 `1.0.43`。

## 使用限制

- DataTable 修改是“当前值加增量”，不是设置固定值。若脚本在同一运行时被重复加载，数值可能重复累加。
- 卸载只解除委托，不会还原已写入的配置资产或 DataTable；要完全恢复原值，应重新进入游戏或在 Mod 中额外保存并回写原值。
- `MaxRobotNum` 必须对 Lua 可写。如果当前游戏版本将该属性设为只读，写入会被 `pcall` 捕获并打印警告。
- GameMode、World 和配置表只在相应游戏阶段可用。示例在对象不存在时会跳过，而不会把 `nil` 传给需要 World Context 的 API。

