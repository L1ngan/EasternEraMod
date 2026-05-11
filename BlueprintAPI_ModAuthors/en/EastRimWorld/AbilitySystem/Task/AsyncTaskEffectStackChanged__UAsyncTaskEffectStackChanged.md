# `class` `UAsyncTaskEffectStackChanged`

**Source header:** `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnGameplayEffectStackChange`

| Field | Details |
|------|------|
| C++ type | `FOnGameplayEffectStackChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameplayEffectStackChanged OnGameplayEffectStackChange;` |

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

---

### Function `EndTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
