# `class` `UAsyncTaskAttributeChanged`

**Source header:** `EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged.h`

---

## Functional description (from header comments)

> Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.
> Useful to use in UI.

## Blueprint-exposed variables

### Property `OnAttributeChanged`

| Field | Details |
|------|------|
| C++ type | `FOnAttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnAttributeChanged OnAttributeChanged;` |

---

## Blueprint-exposed functions

### Function `ListenForAttributeChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskAttributeChanged](AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Attribute` | `FGameplayAttribute` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskAttributeChanged* ListenForAttributeChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Listens for an attribute changing.

---

### Function `ListenForAttributesChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskAttributeChanged](AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Attributes` | `TArray<FGameplayAttribute>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskAttributeChanged* ListenForAttributesChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayAttribute> Attributes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Listens for an attribute changing.
> Version that takes in an array of Attributes. Check the Attribute output for which Attribute changed.

---

### Function `EndTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> You must call this function manually when you want the AsyncTask to end.
> For UMG Widgets, you would call it in the Widget's Destruct event.

---
