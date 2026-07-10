# `class` `UAsyncTaskCooldownChanged`

**Source header:** `EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged.h`

---

## Functional description (from header comments)

> Blueprint async task that listens for GameplayEffects with the given cooldown tags being applied and ending, broadcasting the cooldown tag, time remaining and duration.

## Blueprint-exposed variables

### Property `OnCooldownBegin`

| Field | Details |
|------|------|
| C++ type | `FOnCooldownChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCooldownChanged OnCooldownBegin;` |

**Notes:**

> 当监听的效果被施加时

---

### Property `OnCooldownEnd`

| Field | Details |
|------|------|
| C++ type | `FOnCooldownChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCooldownChanged OnCooldownEnd;` |

**Notes:**

> 当监听的效果结束时

---

## Blueprint-exposed functions

### Function `ListenForCooldownChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UAsyncTaskCooldownChanged](AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `InCooldownTags` | `FGameplayTagContainer` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskCooldownChanged* ListenForCooldownChange(UAbilitySystemComponent* AbilitySystemComponent,FGameplayTagContainer InCooldownTags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 指定监听（谁、带有什么标签的GE）

---

### Function `GetCooldownRemainingForTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCooldownTags` | `FGameplayTagContainer` |
| `TimeRemaining` | `float&` |
| `CooldownDuration` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetCooldownRemainingForTag(FGameplayTagContainer InCooldownTags, float& TimeRemaining, float& CooldownDuration);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 得到该GE的总时间 剩余时间信息

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

> 结束任务，UI调用的话即可在Destruct事件中结束它，否则不会被回收

---
