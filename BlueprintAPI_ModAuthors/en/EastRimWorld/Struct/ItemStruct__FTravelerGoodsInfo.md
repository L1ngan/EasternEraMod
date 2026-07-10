# `struct` `FTravelerGoodsInfo`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 商人商品配置

## Blueprint-exposed variables

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**Notes:**

> 商品信息

---

### Property `CurrentPriceBase`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentPriceBase;` |

**Notes:**

> 当前价格(基础价格*价格系数)

---

### Property `bUnlock`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bUnlock;` |

**Notes:**

> Boolean flag indicating whether Unlock is enabled or true.

---

### Property `UnlockFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UnlockFavorability;` |

**Notes:**

> Unlock Favorability field.

---

### Property `BeEquipped`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool BeEquipped;` |

**Notes:**

> 是否包含已经装备的物品

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
