# `struct` `FEastRimWorldProjectileSkillEntrySpawnContext`

**Source header:** `EastRimWorld/MartialArts/EastRimWorldProjectileSkillEntryContext.h`

---

## Functional description (from header comments)

> 投射物生成时携带的技能/词条上下文（用于 CreateNewProjectileByProject）。

## Blueprint-exposed variables

### Property `SourceAbilityId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FName SourceAbilityId = NAME_None;` |

**Notes:**

> ID of the source ability

---

### Property `SourceAbilityProjectile`

| Field | Details |
|------|------|
| C++ type | `FAbilityProjectileStruct` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FAbilityProjectileStruct SourceAbilityProjectile;` |

**Notes:**

> Projectile config data of the source ability

---

### Property `SourceAbility`

| Field | Details |
|------|------|
| C++ type | TWeakObjectPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") TWeakObjectPtr<UEastRimWorldGameplayAbility> SourceAbility;` |

**Notes:**

> Weak reference to the source gameplay ability

---

### Property `SpawnTargetActor`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") TWeakObjectPtr<AActor> SpawnTargetActor;` |

**Notes:**

> Target actor at spawn time (weak reference)

---

### Property `bTriggeredByAnimationTagSpawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") bool bTriggeredByAnimationTagSpawn = false;` |

**Notes:**

> true：动画标签/技能正常触发的生成物；false：词条链式生成的子投射物（仅参与 End 时机）。

---

### Property `MontageSpawnEffectTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="SkillEntry" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FGameplayTag MontageSpawnEffectTag;` |

**Notes:**

> 触发该生成物时的蒙太奇投射物事件标签（用于 Locator 筛选）。

---
