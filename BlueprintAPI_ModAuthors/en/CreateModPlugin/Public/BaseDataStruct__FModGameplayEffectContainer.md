# `struct` `FModGameplayEffectContainer`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TargetType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UEastRimWorldTargetType>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TSubclassOf<UEastRimWorldTargetType> TargetType;` |

**Source comments:**

> Sets the way that targeting happens

---

### Property `TargetGameplayEffectClasses`

| Field | Details |
|------|------|
| C++ type | `TArray<TSubclassOf<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;` |

**Source comments:**

> List of gameplay effects to apply to the targets

---
