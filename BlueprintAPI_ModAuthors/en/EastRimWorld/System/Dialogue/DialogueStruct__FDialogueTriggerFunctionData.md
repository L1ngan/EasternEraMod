# `struct` `FDialogueTriggerFunctionData`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `FunctionType`

| Field | Details |
|------|------|
| C++ type | `EDialogueTriggerFunctionType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EDialogueTriggerFunctionType FunctionType = EDialogueTriggerFunctionType::None;` |

**Source comments:**

> 触发额外功能的类型

---

### Property `IntParams`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> IntParams;` |

**Source comments:**

> (加减玩家金钱)

---

### Property `NameParams`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NameParams;` |

**Source comments:**

> FName类型参数列表 （触发任务填任务id）

---
