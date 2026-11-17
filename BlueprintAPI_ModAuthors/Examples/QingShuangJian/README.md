# QingShuangJian（青霜剑）示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/QingShuangJian`](../../../Content/Mods/QingShuangJian/)。这里不复制运行文件；游戏实际加载的是该目录中的 [`ModInfo.json`](../../../Content/Mods/QingShuangJian/ModInfo.json)、[`Config/`](../../../Content/Mods/QingShuangJian/Config/) 下的六个 JSON 和 [`Main.lua`](../../../Content/Mods/QingShuangJian/Main.lua)。

完整制作步骤见《[装备 Mod 制作指南](../EquipmentModGuide_CN.md)》，本示例就是指南第 4 节的成品；想在 SDK 编辑器里用表格配置，见指南第 13 节。

## 功能概览

新增一把在打铁台（`Smithy`）打造的剑《青霜剑》，绿、紫、橙三档品质：

| 品质 | 品质值 | 主属性 | 随机副属性 |
|---|---|---|---|
| 绿 | 0~9049 | 攻击 78~92、命中 20 | 1 条 |
| 紫 | 9050~9349 | 攻击 128~146、命中 45、悟性 3 | 2 条 |
| 橙 | 9350 以上 | 攻击 172~196、命中 70、悟性 5、挥砍暴击伤害 15% | 3 条 |

材料：生铁锭 60、原木 80，开局即可打造。武器行用官方《离殇剑》（`Sword_Lv02_*`）做模板，模型借用官方《赤霄剑》的 `W_Jian_01`。

## 文件

| 文件 | 内容 | 结构 |
|---|---|---|
| `ModInfo.json` | 登记 6 张配置表 | — |
| `Config/EquipmentAttributes.json` | 12 条属性词条 | `/Script/EastRimWorld.EquipmentAttribute` |
| `Config/WeaponConfig.json` | 三档武器行（模板 `Sword_Lv02_Green/Purple/Orange`） | `/Script/CreateModPlugin.ModCharacterWeapon` |
| `Config/GenerateEquipmentData.json` | 三档副属性候选池 | `/Script/EastRimWorld.GenerateEquipmentData` |
| `Config/EquipmentQualityRange.json` | 三档品质区间 | `/Script/EastRimWorld.EquipmentQualityRange` |
| `Config/FabricateEquipmentData.json` | 制造随机池 | `/Script/EastRimWorld.FabricateEquipmentData` |
| `Config/FormulaData.json` | 打铁台配方（模板 `Formula_Smithy_1002`） | `/Script/CreateModPlugin.ModFormulaData` |
| `Main.lua` | 测试命令 `qsj.give <品质>`、`qsj.post <品质> <数量>`，打造日志 | — |

纯 JSON Mod，没有 pak，不需要用 SDK 打包。

## 测试命令

需要控制台（发行版加启动参数 `-ModConsole`），请在**备份存档**上用：

- `qsj.give Orange`：给第一个本门弟子装上橙色青霜剑（会换下原武器）。
- `qsj.post Purple 2`：往驿站发 2 把随机副属性的紫色青霜剑。
- 打造日志写在 `%LOCALAPPDATA%\EasternEra\Saved\SaveGames\ModLogs\QingShuangJian.log`。

发布前删掉 `Main.lua`，以及 `ModInfo.json` 里的 `MainLuaFile`、`LogLevel` 两行。
