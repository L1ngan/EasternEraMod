# `struct` `FDialogueTriggerFunctionData`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> Dialogue Trigger Function Data data structure.

## Blueprint-exposed variables

### Property `FunctionType`

| Field | Details |
|------|------|
| C++ type | [EDialogueTriggerFunctionType](DialogueStruct__EDialogueTriggerFunctionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EDialogueTriggerFunctionType FunctionType = EDialogueTriggerFunctionType::None;` |

**Notes:**

> 触发额外功能的类型

---

### Property `IntParams`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> IntParams;` |

**Notes:**

> (加减玩家金钱)

---

### Property `NameParams`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NameParams;` |

**Notes:**

> FName类型参数列表 （触发任务填任务id）

---
