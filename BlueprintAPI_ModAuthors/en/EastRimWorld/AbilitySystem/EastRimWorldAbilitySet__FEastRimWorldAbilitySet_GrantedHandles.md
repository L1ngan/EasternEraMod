# `struct` `FEastRimWorldAbilitySet_GrantedHandles`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## Functional description (from header comments)

> FEastRimWorldAbilitySet_GrantedHandles
> Data used to store handles to what has been granted by the ability set.

## Blueprint-exposed variables

### Property `AbilitySpecHandles`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayAbilitySpecHandle>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;` |

**Notes:**

> Handles to the granted abilities.

---

### Property `GameplayEffectHandles`

| Field | Details |
|------|------|
| C++ type | `TArray<FActiveGameplayEffectHandle>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;` |

**Notes:**

> Handles to the granted gameplay effects.

---

### Property `GrantedAttributeSets`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UAttributeSet>>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;` |

**Notes:**

> Pointers to the granted attribute sets

---
