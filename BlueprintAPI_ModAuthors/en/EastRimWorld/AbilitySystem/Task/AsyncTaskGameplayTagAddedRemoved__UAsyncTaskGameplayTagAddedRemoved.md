# `class` `UAsyncTaskGameplayTagAddedRemoved`

**Source header:** `EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved.h`

---

## Functional description (from header comments)

> Blueprint node to automatically register a listener for FGameplayTags added and removed.
> Useful to use in Blueprint/UMG.

## Blueprint-exposed variables

### Property `OnTagAdded`

| Field | Details |
|------|------|
| C++ type | `FOnGameplayTagAddedRemoved` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameplayTagAddedRemoved OnTagAdded;` |

**Notes:**

> Delegate broadcast when a listened GameplayTag is added.

---

### Property `OnTagRemoved`

| Field | Details |
|------|------|
| C++ type | `FOnGameplayTagAddedRemoved` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameplayTagAddedRemoved OnTagRemoved;` |

**Notes:**

> Delegate broadcast when a listened GameplayTag is removed.

---

## Blueprint-exposed functions

### Function `ListenForGameplayTagAddedOrRemoved`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskGameplayTagAddedRemoved](AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Tags` | `FGameplayTagContainer` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedOrRemoved(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagContainer Tags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Listens for FGameplayTags added and removed.

---

### Function `EndTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> You must call this function manually when you want the AsyncTask to end.
> For UMG Widgets, you would call it in the Widget's Destruct event.

---
