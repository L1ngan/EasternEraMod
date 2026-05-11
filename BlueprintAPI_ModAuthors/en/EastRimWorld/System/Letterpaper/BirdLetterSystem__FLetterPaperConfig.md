# `struct` `FLetterPaperConfig`

**Source header:** `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

---

## Functional description (from header comments)

> 对话碎片表

## Blueprint-exposed variables

### Property `DialogueId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName DialogueId;` |

**Source comments:**

> id

---

### Property `DialogueType`

| Field | Details |
|------|------|
| C++ type | `ELetterDialogueType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ELetterDialogueType DialogueType = ELetterDialogueType::None;` |

**Source comments:**

> 类型

---

### Property `DialogueTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText DialogueTitle;` |

**Source comments:**

> 信笺标题

---

### Property `Dialogue`

| Field | Details |
|------|------|
| C++ type | `TArray<UDialogue*>` |
| Reflection specifiers | BlueprintReadWrite, Category="LetterBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LetterBase") TArray<UDialogue*> Dialogue;` |

**Source comments:**

> 对应对话

---

### Property `Probability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="LetterBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LetterBase") int32 Probability = 0;` |

**Source comments:**

> 概率

---
