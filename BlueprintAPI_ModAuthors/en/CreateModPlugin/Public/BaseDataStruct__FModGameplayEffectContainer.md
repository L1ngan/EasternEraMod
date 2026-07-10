# `struct` `FModGameplayEffectContainer`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> Gameplay effect container defining how targeting happens (TargetType) and the list of gameplay effects to apply to the targets.

## Blueprint-exposed variables

### Property `TargetType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UEastRimWorldTargetType>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TSubclassOf<UEastRimWorldTargetType> TargetType;` |

**Notes:**

> Sets the way that targeting happens

---

### Property `TargetGameplayEffectClasses`

| Field | Details |
|------|------|
| C++ type | `TArray<TSubclassOf<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;` |

**Notes:**

> List of gameplay effects to apply to the targets

---
