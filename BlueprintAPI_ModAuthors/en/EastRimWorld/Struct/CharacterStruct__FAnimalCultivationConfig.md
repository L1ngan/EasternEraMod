# `struct` `FAnimalCultivationConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 动物修炼配置数据
> 每个怪物类型对应的修炼配置

## Blueprint-exposed variables

### Property `MaxCultivationLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") int32 MaxCultivationLevel = 10;` |

**Source comments:**

> 最大修炼等级

---

### Property `ExperienceTable`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") TMap<int32, float> ExperienceTable;` |

**Source comments:**

> 经验值表（等级 -> 所需经验）
> 如果LevelUpgradeConfigs中对应等级的RequiredExperience为0，则使用此表中的经验值

---

### Property `LevelUpgradeConfigs`

| Field | Details |
|------|------|
| C++ type | TMap<int32, [FAnimalCultivationLevelUpgrade](CharacterStruct__FAnimalCultivationLevelUpgrade.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") TMap<int32, FAnimalCultivationLevelUpgrade> LevelUpgradeConfigs;` |

**Source comments:**

> 等级升级功能配置表（等级 -> 升级功能配置）
> 用于配置到达每个等级时增加的功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）

---
