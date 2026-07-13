# CheatingBuildings 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/CheatingBuildings`](../../../Content/Mods/CheatingBuildings/)。这里不复制运行文件；游戏实际加载该目录中的 [`ModInfo.json`](../../../Content/Mods/CheatingBuildings/ModInfo.json)、[`Main.lua`](../../../Content/Mods/CheatingBuildings/Main.lua)、配置 JSON 与 Cook 资源。

## 功能概览

该 Mod 增加三种建筑，并用物品和配方把它们连接成一条生产流程：

| 建筑 ID | 名称 | 主要用途 |
|---|---|---|
| `MOD_DianHuaTing` | 电话台 | 执行 `MOD_Formula_TeleOrder`，产出电话订单 `TeleOrder` |
| `MOD_DianXingYi` | 电刑椅 | 通过专用交互资产提供娱乐恢复功能 |
| `MOD_Computer` | 电脑操作台 | 执行 `MOD_Formula_Jinding`，消耗电话订单并产出金条 `JinTiao` |

建筑模型、动画、交互定义、UI、材质、贴图与特效均位于真实 Mod 目录的 Cook 资源中。`Main.lua` 只实现加载、卸载和信息日志；实际玩法主要由配置表和蓝图资源驱动。

## 配置文件

| 文件 | 行或资产 | 用途 | 合并方式 |
|---|---|---|---|
| [`BuildConfig.json`](../../../Content/Mods/CheatingBuildings/Config/BuildConfig.json) | 3 个建筑行 | 尺寸、建造资源、入口、模型、交互定义和 UI ID | `bOverrideData=true` |
| [`BuildingUI.json`](../../../Content/Mods/CheatingBuildings/Config/BuildingUI.json) | 3 个建筑 UI 行 | 分类、名称、图标和描述 | `bOverrideData=false` |
| [`CommonUI.json`](../../../Content/Mods/CheatingBuildings/Config/CommonUI.json) | 3 个通用 UI 行 | 面板模块和功能按钮 | `bOverrideData=false` |
| [`InventoryItem.json`](../../../Content/Mods/CheatingBuildings/Config/InventoryItem.json) | `TeleOrder`、`JinTiao` | 电话订单与金条的物品数据 | `bOverrideData=false` |
| [`FormulaData.json`](../../../Content/Mods/CheatingBuildings/Config/FormulaData.json) | 2 个配方行 | 订单和金条的生产条件、消耗与产出 | `bOverrideData=true` |
| [`NewGameConfiguration.json`](../../../Content/Mods/CheatingBuildings/Config/NewGameConfiguration.json) | 新游戏配置资产 | 新游戏时解锁 3 个建筑和 2 个配方 | `bOverrideData=false` |

`bOverrideData=false` 会合并显式提供的非默认字段；`true` 会让数组和 Map 整体替换，标量仍只更新非默认字段。覆盖模式下省略数组或 Map 字段可能改变原模板行为，应从编辑器重新导出配置后再删减字段。

## 数据引用链

1. `NewGameConfiguration.unLockBuildingId` 解锁三个建筑 ID。
2. `BuildConfig` 定义建筑本体；`BuildingUI` 提供建造菜单显示数据。
3. `BuildConfig.openBuildingWidgetId` 指向 `CommonUI` 面板，面板再挂接 `Mod_GetOrder`、`Mod_GetGold` 等 Cook 蓝图按钮。
4. 电话台配方产出 `InventoryItem.TeleOrder`。
5. 电脑台配方消耗订单并产出 `InventoryItem.JinTiao`。
6. `NewGameConfiguration.unlockFormulaId` 解锁两条配方。

修改行名、`iD`、`buildingId`、`outputItemId`、消耗物品键或 UI ID 时，必须同步检查整条引用链。现有文件中部分 ID 的大小写形式不同，编辑时应保留原值并在游戏中验证查找是否仍成功。

## `ModInfo.json` 要点

- `ModId` 为 `CheatingBuilding`，目录名为 `CheatingBuildings`；资源路径使用目录名 `/Game/Mods/CheatingBuildings/...`。
- `NewGameLoad` 为 `true`，新游戏配置用于初始解锁建筑与配方。
- `DataTableConfigs` 注册 5 张配置表，`DataAssetConfigs` 注册 `NewGameConfiguration`。
- `ModInformationAssetPath` 指向 [`DA_ModDataAsset.uasset`](../../../Content/Mods/CheatingBuildings/DA_ModDataAsset.uasset)。
- 新游戏数据还依赖 [`DA_ModNewGameBuildAsset.uasset`](../../../Content/Mods/CheatingBuildings/DA_ModNewGameBuildAsset.uasset) 及相关 Cook 蓝图资源。
- `MinGameVersion` 为 `1.1`。

## Lua 生命周期

[`Main.lua`](../../../Content/Mods/CheatingBuildings/Main.lua) 提供 `Log`、`Debug`、`Warn`、`Error` 四个日志封装。`OnModLoaded` 打印 Mod 信息，`OnModUnloaded` 打印卸载日志，不注册事件、定时器或控制台命令。

## 使用限制

- 仅复制 JSON 不足以运行本 Mod；`/Game/Mods/CheatingBuildings/...` 下引用的模型、交互定义、UI、动画和特效必须一并 Cook 和挂载。
- `NewGameConfiguration` 面向新游戏初始化。把 Mod 加入已有存档时，建筑和配方不一定会自动补解锁。
- 资源软路径、蓝图类路径和配置结构类型路径必须保持完整，重命名资产后需要同步更新 JSON。
- 发布版本会屏蔽普通日志；需要保留的诊断信息应使用 `Warning` 或 `Error`。

