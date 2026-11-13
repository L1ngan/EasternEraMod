# QingXinJue（清心诀）示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/QingXinJue`](../../../Content/Mods/QingXinJue/)。这里不复制运行文件；游戏实际加载的是该目录中的 [`ModInfo.json`](../../../Content/Mods/QingXinJue/ModInfo.json)、[`Config/`](../../../Content/Mods/QingXinJue/Config/) 下的三个 JSON 和 [`Main.lua`](../../../Content/Mods/QingXinJue/Main.lua)。

完整制作步骤见《[自制内功武学 Mod 制作指南](../InternalMartialArtsGuide_CN.md)》，本示例就是指南第 4 节"做法 A：纯 JSON"的成品。

## 功能概览

新增一门绿色·中正内功《清心诀》，最高 15 级，第 1 / 5 / 10 / 15 层有效果：

| 层 | 词条 | 效果 |
|---|---|---|
| 1 | `QingXinJue_L1`（自建，组合两个官方 GE） | 罡气上限 +850、悟性 +3、修炼经验 +8% |
| 5 | `Power_GuiXi_05`（官方） | 罡气上限 +300、资质 +3、罡气恢复加快 |
| 10 | `Power_JiChu_10`（官方） | 资质 +15 |
| 15 | `Power_GuiXi_15`（官方） | 罡气上限 +225、修炼经验 +7% |

书会追加到武学图鉴的"江湖内功"分类，可用 500 个蓝色残卷兑换，兑换的书送到驿站。

## 文件

| 文件 | 内容 |
|---|---|
| `ModInfo.json` | 登记三个配置表 JSON，`StructName` 用游戏结构名 `/Script/EastRimWorld.…` |
| `Config/MartialArtsEntries.json` | 自建词条 `QingXinJue_L1` |
| `Config/MartialArtsBook.json` | 书 / 内功本体 `QingXinJue_Internal` |
| `Config/MartialArtsBookCategory.json` | 往图鉴分类 `Category_JiangHuNeiGong` 追加这本书（合并模式） |
| `Main.lua` | 测试命令 `qxj.grant <等级>`：给找到的第一个本门弟子装上清心诀并设到指定等级 |

纯 JSON Mod，没有 pak，不需要用 SDK 打包。

## 使用

1. 把整个 `QingXinJue` 文件夹复制到游戏的 `Content/Mods/` 下，在 Mod 列表里启用。
2. 进存档后打开武学图鉴的内功心法页即可看到。
3. 测试命令需要先开控制台（见 [开发指南 7.1](../ModDevelopmentGuide_CN.md#71-在发行版中使用控制台)），输入 `qxj.grant 10`。它会顶掉弟子当前的内功，请在备份存档上用。
4. 以此为模板做自己的内功时，把所有 ID 换成带自己 ModId 前缀的名字，并删掉测试命令（`Main.lua` 整个删掉，同时去掉 `ModInfo.json` 的 `MainLuaFile`）。

`ModInfo.json` 里的 `"LogLevel": "Log"` 让测试命令的输出写进 Mod 日志文件，发布时可删。
