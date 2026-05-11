# `struct` `FChatTypeData`

**Source header:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## Functional description (from header comments)

> 社交类型数据

## Blueprint-exposed variables

### Property `TriggerProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float TriggerProbability = 0.f;` |

**Source comments:**

> 触发概率(0~1)

---

### Property `TriggerDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float TriggerDistance = 0.f;` |

**Source comments:**

> 触发距离

---

### Property `ChatRichTexts`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FText> ChatRichTexts;` |

**Source comments:**

> 富文本

---

### Property `GoodOpinionWeights`

| Field | Details |
|------|------|
| C++ type | TArray<[FChatConditionWeight](CharacterChatStruct__FChatConditionWeight.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FChatConditionWeight> GoodOpinionWeights;` |

**Source comments:**

> 好感度变化概率

---
