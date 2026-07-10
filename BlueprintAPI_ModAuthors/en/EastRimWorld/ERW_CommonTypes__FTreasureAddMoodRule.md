# `struct` `FTreasureAddMoodRule`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> Treasure pavilion mood rule: grants buff moods when the required disciple count and goods type count are satisfied, otherwise applies debuff moods.

## Blueprint-exposed variables

### Property `SatisfyDiscipleNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SatisfyDiscipleNum = 0;` |

**Notes:**

> 需要满足的弟子人数

---

### Property `SatisfyGoodsTypeNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SatisfyGoodsTypeNum = 0;` |

**Notes:**

> 需要满足的商品种类数量

---

### Property `UnsatisfiedBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName>UnsatisfiedBuff;` |

**Notes:**

> Debuff心情

---

### Property `SatisfiedBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName>SatisfiedBuff;` |

**Notes:**

> Buff心情

---
