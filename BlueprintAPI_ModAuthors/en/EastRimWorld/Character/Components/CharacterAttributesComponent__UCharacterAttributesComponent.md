# `class` `UCharacterAttributesComponent`

**Source header:** `EastRimWorld/Character/Components/CharacterAttributesComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `InitializeWithAbilitySystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|CharacterAttributesComponent" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InASC` | [UEastRimWorldAbilitySystemComponent](../../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterAttributesComponent") virtual void InitializeWithAbilitySystem(UEastRimWorldAbilitySystemComponent* InASC);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Initialize the component using an ability system component.

---

### Function `UninitializeFromAbilitySystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|CharacterAttributesComponent" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterAttributesComponent") virtual void UninitializeFromAbilitySystem();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Uninitialize the component, clearing any references to the ability system.

---
