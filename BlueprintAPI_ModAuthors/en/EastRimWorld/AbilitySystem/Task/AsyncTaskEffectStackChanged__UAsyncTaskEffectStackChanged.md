# `class` `UAsyncTaskEffectStackChanged`

**Source header:** `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

---

## Functional description (from header comments)

> Blueprint async task that listens for stack count changes of GameplayEffects with the given tags.

## Blueprint-exposed variables

### Property `OnGameplayEffectStackChange`

| Field | Details |
|------|------|
| C++ type | `FOnGameplayEffectStackChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameplayEffectStackChanged OnGameplayEffectStackChange;` |

**Notes:**

> Delegate broadcast when a GameplayEffect stack count changes (effect tag, effect handle, new stack count, previous stack count).

---

## Blueprint-exposed functions

### Function `ListenForGameplayEffectStackChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskEffectStackChanged](AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `EffectGameplayTag` | `FGameplayTag` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag EffectGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Creates an async task that listens for stack count changes of GameplayEffects with the specified tag.

---

### Function `ListenForGameplayEffectStackTArrayChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskEffectStackChanged](AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `EffectGameplayTag` | `TArray<FGameplayTag>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackTArrayChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayTag> EffectGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Creates an async task that listens for stack count changes of GameplayEffects matching an array of tags.

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

> Ends this async task and removes the listener; must be called manually (e.g. in a widget's Destruct event).

---
