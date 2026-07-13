# Giganotosaurus_RD 示例说明

本示例说明对应仓库中的真实 Mod [`Content/Mods/Giganotosaurus_RD`](../../../Content/Mods/Giganotosaurus_RD/)。这里不复制运行文件；游戏实际加载该目录中的 [`ModInfo.json`](../../../Content/Mods/Giganotosaurus_RD/ModInfo.json)、[`Main.lua`](../../../Content/Mods/Giganotosaurus_RD/Main.lua)、Gameplay Tags、配置 JSON 与 Cook 资源。

## 功能概览

该 Mod 增加 ID 为 `10000` 的巨型恐龙动物，并为其配置待机动画和近战能力 `Dinosaur_MeleeAttack`。Mod 描述中的“替换狼王”还依赖 `Levels/` 等 Cook 资源；Lua 本身不执行替换逻辑。

核心引用关系如下：

```text
AnimalConfig row 10000
  -> animGroup 10000
  -> AnimalActionAbility.Idle[10000]
  -> initGameplayAbilityById: Dinosaur_MeleeAttack
  -> GameAbility.Dinosaur_MeleeAttack
  -> Gameplay Tags + Montage event sections
  -> Blueprint Gameplay Ability / Gameplay Effects / VFX
```

## 配置文件

| 文件 | 行 | 用途 | 合并方式 |
|---|---|---|---|
| [`AnimalConfig.json`](../../../Content/Mods/Giganotosaurus_RD/Config/AnimalConfig.json) | `10000` | 恐龙名称、属性、感知、身体类型、模型、动画与初始能力 | `bOverrideData=true` |
| [`AnimalActionAbility.json`](../../../Content/Mods/Giganotosaurus_RD/Config/AnimalActionAbility.json) | `Idle` | 把动画组 `10000` 映射到待机 Montage 和片段 | `bOverrideData=false` |
| [`GameAbility.json`](../../../Content/Mods/Giganotosaurus_RD/Config/GameAbility.json) | `Dinosaur_MeleeAttack` | 普攻距离、伤害、控制效果、Montage 事件与 Gameplay Effect | `bOverrideData=false` |

`AnimalConfig` 使用覆盖模式，因此其中的数组和 Map 会整体替换。修改动物行时，应保留死亡动画、能力列表、感知范围、身体部位数值以及模型偏移等需要的集合字段。

## 动物与能力关系

- 动物行名、`templateId` 和 `iD` 均为 `10000`，`animGroup` 也使用 `10000`。
- `animalMesh`、`animalBlendSpace` 和死亡 Montage 指向 `/Game/Mods/Giganotosaurus_RD/...` 下的 Cook 资源。
- `initGameplayAbilityById` 引用 `Dinosaur_MeleeAttack`。
- 能力使用唯一标签 `Ability.UniqueSkill.Dinosaur_MeleeAttack`，并通过多个 `Ability.Projectile.MeleeAttackXX` 标签匹配 Montage 中的攻击时点。
- 不同攻击时点会应用 70% 或 100% 的钝击伤害效果；部分攻击还带眩晕或击退控制。
- 待机配置将动画组 `10000` 映射到 `Start`、`Loop1`、`Loop2`、`Loop3` 片段。

## Gameplay Tags

[`Giganotosaurus_RDGameplayTags.ini`](../../../Content/Mods/Giganotosaurus_RD/Giganotosaurus_RDGameplayTags.ini) 声明能力唯一标签、Montage 行为标签和近战攻击事件标签。`ModInfo.json` 中：

```json
"GameplayTagsIniFile": "Giganotosaurus_RDGameplayTags.ini",
"IncludeGameplayTags": true
```

新增或重命名攻击事件标签时，必须同步更新 Gameplay Tags ini、`GameAbility.json` 的 `eventTags` / `animationSpawnProjectiles`，以及对应 Montage 或能力蓝图中的事件。

## `ModInfo.json` 要点

- `NewGameLoad` 为 `false`。
- `DataTableConfigs` 注册动物、动物行为动画和游戏能力三张表。
- `AnimalConfig` 使用 `/Script/CreateModPlugin.ModAnimalData`，能力表使用 `/Script/GASFramework.GameAbilityStruct`，结构类型不能互换。
- `ModInformationAssetPath` 指向 [`DA_ModDataAsset.uasset`](../../../Content/Mods/Giganotosaurus_RD/DA_ModDataAsset.uasset)。
- `MinGameVersion` 为 `1.1`。

## Lua 生命周期

[`Main.lua`](../../../Content/Mods/Giganotosaurus_RD/Main.lua) 只封装日志，并在加载与卸载时打印信息。动物生成、地图替换、动画和战斗行为均来自配置表及 Cook 资源，而不是 Lua 回调。

## 使用限制

- 仅复制 JSON 无法得到完整恐龙；骨骼网格、动画、能力蓝图、Gameplay Effect、材质、VFX 和关卡资源必须一并 Cook 和挂载。
- 动画组 ID、能力 ID、Gameplay Tags、Montage 片段和资产路径构成一条严格引用链，任一名称变化都需要同步修改引用方。
- `AnimalConfig` 中生命、护盾、身体部位与当前值彼此关联，调整时应同时检查最大值和当前值。
- `bCanTame`、`bCanTraining` 和 `bCanBeTreat` 当前均为 `false`；若开启相应玩法，还需要补齐驯养、训练或治疗所需配置。
- 发布版本会屏蔽普通日志；需要保留的诊断信息应使用 `Warning` 或 `Error`。

