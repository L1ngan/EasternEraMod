# `struct` `FAnimalActionAbility`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## Functional description (from header comments)

> 动物ActionAbility配置表结构

## Blueprint-exposed variables

### Property `BehaviorStartAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**Notes:**

> 每种动物对应的动画数据
> TMap<动物ID , 动画数据>
> 动画蒙太奇

---

### Property `BehaviorAnimSections`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCharacterActionAbilityAnimSections](EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**Notes:**

> 动画蒙太奇片段

---

### Property `GameplayAbility`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> GameplayAbility;` |

**Notes:**

> 此动作使用的能力

---
