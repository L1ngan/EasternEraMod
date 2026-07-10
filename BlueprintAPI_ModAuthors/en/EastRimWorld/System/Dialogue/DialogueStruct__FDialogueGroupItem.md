# `struct` `FDialogueGroupItem`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> Dialogue Group Item data structure.

## Blueprint-exposed variables

### Property `StartDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName StartDialogueID;` |

**Notes:**

> 开始对话ID

---

### Property `ConditionID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ConditionID;` |

**Notes:**

> 条件 通用任务条件

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> Conditions;` |

**Notes:**

> Conditions field.

---

### Property `TriggerCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int TriggerCount = -1;` |

**Notes:**

> 可触发的次数 -1 为无限次 (StartDialogueID在所有DialogueGroup中累计触发的次数)

---
