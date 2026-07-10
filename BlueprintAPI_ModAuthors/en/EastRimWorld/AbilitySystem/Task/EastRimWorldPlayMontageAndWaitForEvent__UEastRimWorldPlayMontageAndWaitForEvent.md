# `class` `UEastRimWorldPlayMontageAndWaitForEvent`

**Source header:** `EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent.h`

---

## Functional description (from header comments)

> Ability task that plays a montage and waits for it to end or for matching gameplay events, providing OnCompleted, OnBlendOut, OnInterrupted, OnCancelled and EventReceived callbacks.

## Blueprint-exposed variables

### Property `OnCompleted`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnCompleted;` |

**Notes:**

> The montage completely finished playing

---

### Property `OnBlendOut`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnBlendOut;` |

**Notes:**

> The montage started blending out

---

### Property `OnInterrupted`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnInterrupted;` |

**Notes:**

> The montage was interrupted

---

### Property `OnCancelled`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnCancelled;` |

**Notes:**

> The ability task was explicitly cancelled by another ability

---

### Property `EventReceived`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate EventReceived;` |

**Notes:**

> One of the triggering gameplay events happened

---

## Blueprint-exposed functions

### Function `PlayMontageAndWaitForEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Ability|Tasks" |
| Return type | [UEastRimWorldPlayMontageAndWaitForEvent](EastRimWorldPlayMontageAndWaitForEvent__UEastRimWorldPlayMontageAndWaitForEvent.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwningAbility` | `UGameplayAbility*` |
| `TaskInstanceName` | `FName` |
| `MontageToPlay` | `UAnimMontage*` |
| `EventTags` | `FGameplayTagContainer` |
| `(unnamed / type only)` | `float Rate = 1.f` |
| `NAME_None` | `FName StartSection =` |
| `(unnamed / type only)` | `float StartTimeSeconds = 0.0f` |
| `true` | `bool bStopWhenAbilityEnds =` |
| `(unnamed / type only)` | `float AnimRootMotionTranslationScale = 1.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE")) static UEastRimWorldPlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent( UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, FGameplayTagContainer EventTags, float Rate = 1.f, FName StartSection = NAME_None, float StartTimeSeconds = 0.0f, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.
> If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.
> On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing
> OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled
> @param TaskInstanceName Set to override the name of this task, for later querying
> @param MontageToPlay The montage to play on the character
> @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback
> @param Rate Change to play the montage faster or slower
> @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled
> @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely

---
