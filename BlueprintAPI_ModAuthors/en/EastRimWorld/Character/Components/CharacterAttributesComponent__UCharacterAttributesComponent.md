# `class` `UCharacterAttributesComponent`

**Source header:** `EastRimWorld/Character/Components/CharacterAttributesComponent.h`

---

## Functional description (from header comments)

> Character attributes component bound to the ability system component (ASC); handles attribute events and attribute value changes.

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

**Notes:**

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

**Notes:**

> Uninitialize the component, clearing any references to the ability system.

---
