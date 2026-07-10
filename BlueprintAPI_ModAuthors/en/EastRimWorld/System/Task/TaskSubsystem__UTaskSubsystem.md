# `class` `UTaskSubsystem`

**Source header:** `EastRimWorld/System/Task/TaskSubsystem.h`

---

## Functional description (from header comments)

> Task Subsystem UObject type.

## Blueprint-exposed functions

### Function `GetInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="TaskSubsystem" |
| Return type | [UTaskSubsystem](TaskSubsystem__UTaskSubsystem.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "TaskSubsystem") static UTaskSubsystem * GetInstance();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Instance.

---

### Function `UpdateTaskCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="TaskSubsystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void UpdateTaskCondition(const FCommonTaskCondition & Condition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新任务条件

---

### Function `CheckConditionCompletion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="TaskSubsystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | UPARAM(ref) [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void CheckConditionCompletion(UPARAM(ref) FCommonTaskCondition & Condition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查条件是否满足

---

### Function `CheckConditionCompletionByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="TaskSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByID(const FName & ConditionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查条件是否满足

---

### Function `CheckConditionCompletionByIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="TaskSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionIDs` | `TArray<FName>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByIDs(TArray<FName> ConditionIDs);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查条件数组是否都满足

---
