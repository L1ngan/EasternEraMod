# `struct` `FTreasureItem`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁商品

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ID;` |

**Notes:**

> 商品ID(和对应物品表的ID一致，比如装备就要和装备表ID一致，Item就要和Item的ID一致)

---

### Property `GroundInventoryType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**Notes:**

> 商品类型

---

### Property `TreasureIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureIndex = 0;` |

**Notes:**

> 珍宝阁大类 1装备武 2武学秘籍 3练武材料 4丹药

---

### Property `TreasureSubIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureSubIndex = 0;` |

**Notes:**

> 珍宝阁子类

---

### Property `TreasureItemWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureItemWeight = 0;` |

**Notes:**

> 珍宝阁道具权重

---

### Property `TreasureItemprice`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TreasureItemprice = 0;` |

**Notes:**

> 珍宝阁道具价格

---

### Property `BuyOnceNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BuyOnceNum = 0;` |

**Notes:**

> 珍宝阁道具买一次的数量

---

### Property `FormatItemDescription`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FFormatText FormatItemDescription;` |

**Notes:**

> 格式化后的描述

---
