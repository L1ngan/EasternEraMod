# `struct` `FSocialRelationshipData`

**Source header:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## Functional description (from header comments)

> 社交关系数据

## Blueprint-exposed variables

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FText CharacterName;` |

**Notes:**

> 关系对象名称

---

### Property `CurGoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 CurGoodOpinion;` |

**Notes:**

> 当前好感度

---

### Property `CurRelationship`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurRelationship;` |

**Notes:**

> 当前关系

---

### Property `NextRelationshipApplyTimes`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TMap<FName,int32> NextRelationshipApplyTimes;` |

**Notes:**

> 下一段关系申请次数

---
