# `struct` `FTravelerGoodsItem`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 商人商品项配置

## Blueprint-exposed variables

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**Notes:**

> 商品信息(当bTechnology为true时，使用这里的ID作为科技ID)

---

### Property `PriceRate`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector2D PriceRate;` |

**Notes:**

> 价格浮动系数范围

---

### Property `UnlockFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UnlockFavorability;` |

**Notes:**

> 解锁需要好感度

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight;` |

**Notes:**

> 权重(-1必出)

---

### Property `NeedReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NeedReputation;` |

**Notes:**

> 声望单价(> 0 时，这个商品被视为声望商品)

---

### Property `bTechnology`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bTechnology;` |

**Notes:**

> 是否是解锁科技商品(为true时，使用ItemData里的ID作为科技ID)

---
