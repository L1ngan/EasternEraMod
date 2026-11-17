# QingYunZongFu（青云宗门服）示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/QingYunZongFu`](../../../Content/Mods/QingYunZongFu/)。这里不复制运行文件；游戏实际加载的是该目录中的 [`ModInfo.json`](../../../Content/Mods/QingYunZongFu/ModInfo.json)、[`Config/`](../../../Content/Mods/QingYunZongFu/Config/) 下的四个 JSON 和 [`Main.lua`](../../../Content/Mods/QingYunZongFu/Main.lua)。

完整制作步骤见《[宗门时装 Mod 制作指南](../SectApparelModGuide_CN.md)》，本示例就是指南第 3 节的成品；想在 SDK 编辑器里用表格配置，见指南第 10 节。

## 功能概览

宗门时装界面新增一套《青云宗门服》：青云道袍（上衣）、青云道裤、青云云履。

- 外观借用官方"名门"一套（`DaMo_Armor_03` / `DaMo_Pants_03` / `DaMo_Shoes_03`），男女款都有。
- 势力 1 级解锁（已有存档读档时自动补发）。
- 只有掌门、内门能选。
- 只改外观，不改属性。

## 文件

| 文件 | 内容 | 结构 |
|---|---|---|
| `ModInfo.json` | 登记 4 张配置表 | — |
| `Config/EquipmentConfig.json` | 三件服饰（模板为官方名门套装） | `/Script/CreateModPlugin.ModCharacterApparel` |
| `Config/TechUnlockItemConig.json` | 解锁项 `QYZ_Unlock`，类型 `ForceApparel` | `/Script/EastRimWorld.TechUnlockItemConigStruct` |
| `Config/ForceLevelInfo.json` | 把 `QYZ_Unlock` 追加到势力 1 级（合并模式） | `/Script/EastRimWorld.ForceLevelInfo` |
| `Config/SubClassApparelLimit.json` | 只给掌门（0）、内门（2） | `/Script/EastRimWorld.SubClassApparelConfig` |
| `Main.lua` | 进入游戏世界时把三件服饰加进宗门时装清单（**必需**）；检查命令 `qyz.status` | — |

纯 JSON + Lua，没有 pak，不需要用 SDK 打包。

## 检查命令

`qyz.status`：打印外门、内门各能选到哪几件本 Mod 的服饰、是否已解锁。只读，不改存档。输出在 `ModLogs\QingYunZongFu.log`。

发布时 `Main.lua` 里加清单的部分必须保留，`qyz.status` 命令可以删。
