# `class` `AERW_PlayerStateBase`

**Source header:** `EastRimWorld/Framework/ERW_PlayerStateBase.h`

---

## Functional description (from header comments)

> PlayerState基类

## Blueprint-exposed variables

### Property `AbilitySystemComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="GAS" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS") TObjectPtr<UEastRimWorldAbilitySystemComponent> AbilitySystemComponent;` |

**Notes:**

> GAS ability system component (UEastRimWorldAbilitySystemComponent) owned by the player state.

---
