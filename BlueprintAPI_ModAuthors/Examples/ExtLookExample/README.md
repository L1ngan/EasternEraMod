# ExtLookExample 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/ExtLookExample`](../../../Content/Mods/ExtLookExample/)。运行文件只有 [`ModInfo.json`](../../../Content/Mods/ExtLookExample/ModInfo.json) 和 [`Main.lua`](../../../Content/Mods/ExtLookExample/Main.lua)，不带资产，不用 Cook。

接口全表和规则见《Mod 开发指南》4.10 的"扩展外观：妆容、花钿 / 面靥、眉睫、虹膜"。

## 功能概览

在控制台输入：

- `ExtLookExample apply`：给当前场景里在场的本门人族角色上唇妆、贴第一款官方花钿、换第一款睫毛、换第一款虹膜并加琥珀色瞳色。头不支持的项自动跳过：NPC 头一般只贴花钿。掌门自己在捏人页捏的唇妆、花钿、睫毛、虹膜会被盖掉，`reset` 后恢复。
- `ExtLookExample reset`：对这些角色调 `ResetCharacterExtAppearance`。
- 参数不是这两个时只打印用法。

颜色和浓度在 `Main.lua` 顶部：

```lua
local LIP_COLOR = UE.FLinearColor(0.55, 0.05, 0.08, 1)   -- 线性色
local LIP_OPACITY = 0.8
local IRIS_TINT = UE.FLinearColor(0.75, 0.55, 0.35, 1)
```

## 要点

- **先查再写**：
  - 妆容先看 `GetCharacterMakeupLayers` 有没有 `Lips`；
  - 花钿先看默认锚点在不在 `GetCharacterFaceAnchors` 里；
  - 睫毛、虹膜先看 `GetBrowLashStyles` / `GetIrisPresets` 是否为空。

  头不支持的项直接写也只会返回 false 并记一条错误，先查可以少打日志。
- **花钿**：浓度和角度不会自动取图案表的默认值，示例从 `GetDecalPatterns` 返回的 `DefaultOpacity`、`DefaultRotationDegrees` 取了填进去。
- **睫毛**：只能用 `ColorMode = 0`（款式默认），别的颜色方式会被拒绝。
- **重置范围**：`reset` 撤掉的是这个角色的全部 Mod 扩展外观，不论是哪个 Mod 写的。同一个角色的扩展外观只记最后写入的那个 Mod，所以别的 Mod 也改了同一个角色时，`apply` 会把整份归到本 Mod 名下。
- **会跳过的角色**：本门里用掌门外观的替身不能单独改，会记错误并跳过；改掌门即可。

## 使用限制

- 需要包含扩展外观接口的游戏版本（2026-11 之后）。`MinGameVersion` 按实际发布的版本号填。
- 示例只用官方图案。要加自己的花钿图案，用 `ConfigType = CreatorFacePatterns` 往图案表加行，图案贴图随你的 pak 打包，见指南第 5 节和 4.10。
