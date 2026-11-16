# `class` `UModAILibrary`

**Source header:** `EastRimWorld/Mod/ModAILibrary.h`

---

## Functional description (from header comments)

> Mod AI API: work priorities of player-sect disciples and resetting stuck plans. Failures return false and log the reason to the calling mod's log.

## Blueprint-exposed functions

### Function `SetCharacterWorkPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|AI" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `GoalId` | `FName` |
| `Priority` | `int32` |
| `false` | `bool bCreateIfMissing =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool SetCharacterWorkPriority(AEastRimWorldCharacter_Human* Character, FName GoalId, int32 Priority, bool bCreateIfMissing = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Set a player-sect disciple's priority for one work goal (same meaning as the work priority panel: 0 = do not do this work; other values are the configured levels). Only work goals the disciple has are accepted; a missing priority entry is created only when bCreateIfMissing is true. Priorities only affect assignment when custom work priorities are enabled.

---

### Function `GetCharacterWorkPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|AI" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `GoalId` | `FName` |
| `OutPriority` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool GetCharacterWorkPriority(AEastRimWorldCharacter_Human* Character, FName GoalId, int32& OutPriority);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Get a disciple's priority for one work goal; false when the priority table has no entry for it.

---

### Function `IsCustomWorkPriorityEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System|AI" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System|AI") static bool IsCustomWorkPriorityEnabled();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Whether the current save uses custom work priorities.

---

### Function `ResetCharacterPlan`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|AI" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `true` | `bool bForgetUnreachable =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool ResetCharacterPlan(AEastRimWorldCharacter_Human* Character, bool bForgetUnreachable = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Abort a player-sect disciple's current plan (reservations and claims are released, carried items are put down) so it looks for work again; no teleport. bForgetUnreachable also clears the trapped state and temporarily-unreachable records. Refused while loading, while a saved plan is restored, or when the current action cannot be interrupted or is already ending.

---
