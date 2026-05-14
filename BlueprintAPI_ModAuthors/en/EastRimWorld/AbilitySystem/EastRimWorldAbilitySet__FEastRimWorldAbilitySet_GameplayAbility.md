# `struct` `FEastRimWorldAbilitySet_GameplayAbility`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## Functional description (from header comments)

> FEastRimWorldAbilitySet_GameplayAbility
> Data used by the ability set to grant gameplay abilities.

## Blueprint-exposed variables

### Property `Ability`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[UEastRimWorldGameplayAbility](Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly) TSubclassOf<UEastRimWorldGameplayAbility> Ability = nullptr;` |

**Source comments:**

> Gameplay ability to grant.

---

### Property `AbilityLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly) int32 AbilityLevel = 1;` |

**Source comments:**

> Level of ability to grant.

---

### Property `InputTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Meta = (Categories = "InputTag")) FGameplayTag InputTag;` |

**Source comments:**

> Tag used to process input for the ability.

---
