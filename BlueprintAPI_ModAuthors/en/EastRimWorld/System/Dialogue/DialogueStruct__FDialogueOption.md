# `struct` `FDialogueOption`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> 对话选项

## Blueprint-exposed variables

### Property `OptionText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OptionText;` |

**Notes:**

> 选项的文字

---

### Property `NextDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NextDialogueID = NAME_None;` |

**Notes:**

> 点击后进行的下一个对话 如果为None则结束当前对话

---

### Property `TriggeredTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredTaskID = NAME_None;` |

**Notes:**

> 触发的世界任务ID

---

### Property `TriggeredStationTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredStationTaskID = NAME_None;` |

**Notes:**

> 触发的驻地任务ID

---

### Property `TriggeredEvent`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredEvent = NAME_None;` |

**Notes:**

> 触发的世界事件

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> Conditions;` |

**Notes:**

> 解锁此选项的条件

---

### Property `ClickConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> ClickConditions;` |

**Notes:**

> 点击时检查的条件

---

### Property `TriggerFunctions`

| Field | Details |
|------|------|
| C++ type | TArray<[FDialogueTriggerFunctionData](DialogueStruct__FDialogueTriggerFunctionData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueTriggerFunctionData> TriggerFunctions;` |

**Notes:**

> 成功点击时触发的功能

---

### Property `DialogueOptionType`

| Field | Details |
|------|------|
| C++ type | [EDialogueOptionType](DialogueStruct__EDialogueOptionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EDialogueOptionType DialogueOptionType = EDialogueOptionType::None;` |

**Notes:**

> 选项类型

---

### Property `SubmitItemToTask`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SubmitItemToTask;` |

**Notes:**

> 提交物品到任务

---

### Property `TaskNPCId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TaskNPCId;` |

**Notes:**

> 用来将可触发的任务关联到某个NPC,做NPC头顶任务提示用

---
