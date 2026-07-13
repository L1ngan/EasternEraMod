# ChangeAttribute 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/ChangeAttribute`](../../../Content/Mods/ChangeAttribute/)。这里不复制运行文件；游戏实际加载的是该目录中的 [`ModInfo.json`](../../../Content/Mods/ChangeAttribute/ModInfo.json) 和 [`Main.lua`](../../../Content/Mods/ChangeAttribute/Main.lua)。

## 功能概览

该 Mod 读取 `Main.lua` 内的 `ATTRIBUTE_SCALE`，按倍率修改动物和召唤物 DataTable 中已有的属性：

```lua
local ATTRIBUTE_SCALE = {
    Common = {},
    Animal = { MaxBody = 100.0, Body = 100.0, CurBody = 100.0 },
    Summons = { MaxBody = 100.0, Body = 100.0, CurBody = 100.0 },
}
```

实际文件还列出了所有可配置属性，未修改的倍率均为 `1.0`。规则如下：

- `1.0` 保持原值；`2.0` 表示变为原值的两倍。
- `Common` 同时作用于动物和召唤物。
- `Animal`、`Summons` 中的同名项覆盖 `Common`。
- 属性名匹配不区分大小写。
- 只修改 DataTable 行中已经存在的键，不会创建新属性。

## 加载流程

1. `OnModLoaded` 在 `pcall` 中调用 `ApplyAttributeScale`。
2. `GetAttributeScaleConfig` 把属性名转为小写，并将 `Common` 分别合并到动物和召唤物配置。
3. Mod 从 `GameConfigComponent` 取得 `AnimalConfig` 和 `SummonsConfig` 两张 DataTable。
4. `ScaleConfigAttributes` 枚举行与 `Attributes` Map，只对倍率不为 `1.0` 的已有值执行乘法。
5. 发生变化的行通过 `ReplaceDataTableRow` 写回运行时 DataTable。
6. `_AttributeScaleApplied` 防止同一个 Mod 实例再次叠乘倍率。

## 关键 API 与类型

| API 或类型 | 用途 |
|---|---|
| `GameConfigComponent:GetGameConfigByType(AnimalConfig)` | 取得动物配置表 |
| `GameConfigComponent:GetGameConfigByType(SummonsConfig)` | 取得召唤物配置表 |
| `UE.FEastRimWorldAnimalData()` | 创建动物行结构体 |
| `UE.FEastRimWorldSummonsData()` | 创建召唤物行结构体 |
| `Attributes:Keys()` / `Find()` / `Add()` | 枚举、读取并更新属性 Map |
| `UE.UDataTableFunctionLibrary.GetDataTableRowFromName` | 读取指定 DataTable 行 |
| `UE.UModLuaLibrary.ReplaceDataTableRow` | 写回发生变化的运行时行 |

## `ModInfo.json` 要点

- `NewGameLoad` 为 `false`。
- `MainLuaFile` 指向 `Main.lua`。
- `ModInformationAssetPath` 指向随 Mod Cook 的 `DA_ModDataAsset`。
- `MinGameVersion` 为 `1.0.45`。
- 当前 `Author` 和 `Icon` 为空；发布前可按实际作者与图标补充。

## 使用限制

- 这是乘法修改。若整个 Mod 被卸载后重新创建实例并再次加载，倍率仍可能叠乘；实例字段 `_AttributeScaleApplied` 只防止单个实例内的重复执行。
- 卸载不会还原 DataTable。要恢复原值，应重新进入游戏或实现原值快照与回写。
- 当前实现即使某张表不存在，也会在流程结束时设置 `_AttributeScaleApplied`。若加载时机过早，之后不会在同一实例中自动重试。
- 大倍率可能同时放大当前值、最大值及身体部位耐久，配置前应确认这些字段之间的约束。
- Lua 沙箱不提供外部配置文件读取能力，因此倍率直接写在 `Main.lua` 中。

