# `struct` `FCharacterLetterData`

**Source header:** `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

---

## Functional description (from header comments)

> Character Letter Data data structure.

## Blueprint-exposed variables

### Property `DialogueId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName DialogueId;` |

**Notes:**

> 应用对话id

---

### Property `ShowDialogueArr`

| Field | Details |
|------|------|
| C++ type | `TArray<FDialogueNode>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FDialogueNode> ShowDialogueArr;` |

**Notes:**

> 当前触发过的对话

---

### Property `RandomIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RandomIndex = 0;` |

**Notes:**

> 随机下标

---

### Property `AddTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 AddTime = 0;` |

**Notes:**

> 添加时间

---

### Property `IsEnd`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool IsEnd = false;` |

**Notes:**

> 是否结束

---

### Property `IsNew`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool IsNew = false;` |

**Notes:**

> 是否是新对话

---
