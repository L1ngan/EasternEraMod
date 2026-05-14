# `struct` `FEastRimWorldAbilitySet_GameplayEffect`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## Functional description (from header comments)

> FEastRimWorldAbilitySet_GameplayEffect
> Data used by the ability set to grant gameplay effects.

## Blueprint-exposed variables

### Property `GameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UGameplayEffect>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly) TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;` |

**Source comments:**

> Gameplay effect to grant.

---

### Property `EffectLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly) float EffectLevel = 1.0f;` |

**Source comments:**

> Level of gameplay effect to grant.

---
