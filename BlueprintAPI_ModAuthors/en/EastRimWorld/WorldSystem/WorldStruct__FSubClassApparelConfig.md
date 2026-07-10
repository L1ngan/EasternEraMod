# `struct` `FSubClassApparelConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力服饰限制表（此表中没有的数据，就是无限制）

## Blueprint-exposed variables

### Property `ApparelId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ApparelId;` |

**Notes:**

> 服饰ID

---

### Property `SubClassIndexArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> SubClassIndexArr;` |

**Notes:**

> 此服饰可以用于的堂口

---
