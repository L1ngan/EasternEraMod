# ParagonSunWukong 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/ParagonSunWukong`](../../../Content/Mods/ParagonSunWukong/)。游戏实际加载该目录中的 [`ModInfo.json`](../../../Content/Mods/ParagonSunWukong/ModInfo.json)、[`Main.lua`](../../../Content/Mods/ParagonSunWukong/Main.lua)、配置 JSON 与 Cook 资源。本说明目录还提供字段和事件扩展参考，但这些参考文件不会被游戏直接扫描。

## 功能概览

该 Mod 通过三张相互引用的配置表添加角色 `WuKong_GreatSage`，并挂接角色模型、骨骼、动画、头像、装备和特效等 Cook 资源。真实 `Main.lua` 只负责加载、卸载及信息日志；角色功能主要由配置表和资源驱动。

## 配置文件

| 文件 | 行 | 用途 | 合并方式 |
|---|---|---|---|
| [`CharacterAnatomyProfiles.json`](../../../Content/Mods/ParagonSunWukong/Config/CharacterAnatomyProfiles.json) | `WuKong_GreatSage` | 骨骼网格、动画实例和默认损伤数据 | `bOverrideData=false` |
| [`CharacterAppearancePreset.json`](../../../Content/Mods/ParagonSunWukong/Config/CharacterAppearancePreset.json) | `WuKong_GreatSage` | 外观预设、材质参数、形态键和头像 | `bOverrideData=false` |
| [`CharacterConfig.json`](../../../Content/Mods/ParagonSunWukong/Config/CharacterConfig.json) | `WuKong_GreatSage` | 角色信息、武学装备、动画、感知和属性 | `bOverrideData=false` |

三张表均使用合并模式：只把显式提供的非默认字段合并到目标行，数组和 Map 不做整体替换。

## 数据引用链

1. `CharacterConfig` 定义角色主体，并通过 `customizationId` 引用外观预设。
2. `CharacterAppearancePreset` 定义外观，并通过 `meta Data.anatomy` 引用人体结构。
3. `CharacterAnatomyProfiles` 指向骨骼网格、动画实例和身体结构资源。
4. 三张表使用同一行名 `WuKong_GreatSage`，形成稳定的角色、外观和人体结构引用链。
5. `/Game/Mods/ParagonSunWukong/...` 下的软资源路径在 Mod 资源挂载后解析。

## `ModInfo.json` 要点

- `ModId` 为 `WK_100`，资源目录仍使用 `ParagonSunWukong`。
- `NewGameLoad` 为 `true`。
- `DataTableConfigs` 注册人体结构、外观预设和角色数据三张表。
- 三张表使用不同的 `StructName`，必须与相应 JSON 的实际结构匹配。
- `ModInformationAssetPath` 指向 [`DA_ModDataAsset.uasset`](../../../Content/Mods/ParagonSunWukong/DA_ModDataAsset.uasset)。
- `MinGameVersion` 为 `1.1`。

## Lua 生命周期

真实 [`Main.lua`](../../../Content/Mods/ParagonSunWukong/Main.lua) 提供 `Log`、`Debug`、`Warn`、`Error` 四个日志封装。`OnModLoaded` 打印 Mod 信息，`OnModUnloaded` 打印卸载日志，不注册事件、定时器或控制台命令。

## 扩展参考

以下文件位于文档示例目录，用于讲解完整接口，不代表真实 Mod 当前的运行行为：

| 文件 | 用途 |
|---|---|
| [扩展版 `Main.lua`](Main.lua) | 显式演示源码定义的 12 个游戏事件、命令注册和卸载清理 |
| [扩展版 `ModInfo.json`](ModInfo.json) | 元数据与配置声明参考 |
| [字段说明](FIELD_REFERENCE_CN.md) | `ModInfo.json` 与三份角色配置的逐项字段说明 |
| [事件全表](EVENTS_CN.md) | 12 个事件的触发时机、Payload、Params 与安全说明 |

扩展事件示例中的 `Params` 值是字符串，需要数值运算时使用 `tonumber(Params.GameDay)` 等方式转换。事件、定时器和控制台命令会在 Mod 卸载时自动清理，扩展版 `Main.lua` 还演示了显式反注册。

## 使用限制

- 三个配置行名及 `CharacterConfig.customizationId`、`CharacterAppearancePreset.meta Data.anatomy` 必须保持一致，否则角色数据无法找到对应外观或人体结构。
- 仅复制 JSON 不足以运行本 Mod；模型、骨骼、动画、头像、装备和特效等 Cook 资源必须一并挂载。
- JSON 不支持注释，字段解释应保留在 [字段说明](FIELD_REFERENCE_CN.md) 中。
- Lua 沙箱中 `io`、`os`、`require`、`loadfile`、`dofile` 和 `debug` 不可用。
- 发布版本会屏蔽普通日志；需要保留的诊断信息应使用 `Warning` 或 `Error`。
