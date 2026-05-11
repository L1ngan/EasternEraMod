# `struct` `FCharacterActionAbility`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BehaviorStartAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**Source comments:**

> 动画蒙太奇

---

### Property `BehaviorAnimSections`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCharacterActionAbilityAnimSections](EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**Source comments:**

> 动画蒙太奇片段

---

### Property `bTimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bTimeOfDuration = false;` |

**Source comments:**

> 是否有持续时间

---

### Property `bLoopPlayMontage`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bLoopPlayMontage = false;` |

**Source comments:**

> 是否循环动画

---

### Property `TimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bTimeOfDuration")) float TimeOfDuration = 0.f;` |

**Source comments:**

> 持续时间

---

### Property `ActionGameplayAbility`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> ActionGameplayAbility;` |

**Source comments:**

> 此动作使用的能力

---

### Property `bClothingDisplay`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Display" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Display") bool bClothingDisplay = true;` |

**Source comments:**

> 是否显示衣服

---
