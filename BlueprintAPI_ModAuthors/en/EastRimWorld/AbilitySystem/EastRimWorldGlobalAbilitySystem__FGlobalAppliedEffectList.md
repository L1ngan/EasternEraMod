# `struct` `FGlobalAppliedEffectList`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

---

## Functional description (from header comments)

> Tracks the active handles of a gameplay effect class applied to each ASC, supporting removal per ASC or from all

## Blueprint-exposed variables

### Property `Handles`

| Field | Details |
|------|------|
| C++ type | TMap<TObjectPtr<[UEastRimWorldAbilitySystemComponent](EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)>, FActiveGameplayEffectHandle> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<TObjectPtr<UEastRimWorldAbilitySystemComponent>, FActiveGameplayEffectHandle> Handles;` |

**Notes:**

> Map from ASC to the active gameplay effect handle

---
