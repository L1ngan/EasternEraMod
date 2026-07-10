# `struct` `FCharacterActionAbility`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## Functional description (from header comments)

> Data table row for a character action ability (anim montages/sections, duration, looping, the associated GameplayAbility, clothing display, etc.)

## Blueprint-exposed variables

### Property `BehaviorStartAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**Notes:**

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

### Property `bTimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bTimeOfDuration = false;` |

**Notes:**

> 是否有持续时间

---

### Property `bLoopPlayMontage`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bLoopPlayMontage = false;` |

**Notes:**

> 是否循环动画

---

### Property `TimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bTimeOfDuration")) float TimeOfDuration = 0.f;` |

**Notes:**

> 持续时间

---

### Property `ActionGameplayAbility`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> ActionGameplayAbility;` |

**Notes:**

> 此动作使用的能力

---

### Property `bClothingDisplay`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Display" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Display") bool bClothingDisplay = true;` |

**Notes:**

> 是否显示衣服

---
