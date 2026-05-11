# `struct` `FDialogueSpec`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> 具体对话

## Blueprint-exposed variables

### Property `DialogueGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueGuid;` |

**Source comments:**

> 对话的唯一GUID

---

### Property `CompleteDialogue`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) TArray<FName> CompleteDialogue;` |

**Source comments:**

> 完成的对话ID

---

### Property `DialogueGroupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FName DialogueGroupID;` |

**Source comments:**

> 所属的对话分组表ID

---

### Property `DialogueGroupItem`

| Field | Details |
|------|------|
| C++ type | [FDialogueGroupItem](DialogueStruct__FDialogueGroupItem.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FDialogueGroupItem DialogueGroupItem;` |

**Source comments:**

> 实际触发的对话组

---

### Property `DialogueInitiator`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueInitiator;` |

**Source comments:**

> 对话发起者

---

### Property `DialogueTarget`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueTarget;` |

**Source comments:**

> 对话目标

---
