# `class` `UCharacterBreedingComponent`

**Source header:** `EastRimWorld/Character/Components/CharacterBreedingComponent.h`

---

## Functional description (from header comments)

> Animal breeding component managing breeding demand, nearby-character checks, pregnancy interruption and baby spawning.

## Blueprint-exposed functions

### Function `CheckCharacterNeedAddBreedingDemand`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckCharacterNeedAddBreedingDemand();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the character needs a breeding demand added.

---

### Function `CheckAndSetIsHadBreeding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckAndSetIsHadBreeding();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks and sets whether this animal has already bred, returning the result.

---

### Function `CheckNearCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckNearCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks for nearby characters (periodic check in the breeding flow).

---

### Function `CancelBreeding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelBreeding();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Cancels the current breeding behavior.

---

### Function `BreedingFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BreedingFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Handles wrap-up logic when breeding finishes.

---

### Function `SpawnBaby`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnBaby();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Spawns the baby.

---

### Function `CheckNeedAnimalStopPregnant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonBuff` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckNeedAnimalStopPregnant(FCommonBuff CommonBuff);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the animal needs to stop its pregnancy based on the given buff.

---
