# `struct` `FModAnimalActionAbility`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

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

**Source comments:**

> 动画蒙太奇

---

### Property `BehaviorAnimSections`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FModCharacterActionAbilityAnimSections](CharacterDataStruct__FModCharacterActionAbilityAnimSections.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FModCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**Source comments:**

> 动画蒙太奇片段

---
