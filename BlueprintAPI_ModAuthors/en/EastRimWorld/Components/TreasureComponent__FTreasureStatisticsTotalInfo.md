# `struct` `FTreasureStatisticsTotalInfo`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁商品总共已售统计数据

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) FName ID;` |

**Notes:**

> 商品ID

---

### Property `GroundInventoryType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**Notes:**

> 商品类型

---

### Property `InventoryNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 InventoryNum = 0;` |

**Notes:**

> 库存数量

---

### Property `CurSoldNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 CurSoldNum = 0;` |

**Notes:**

> 当期已售数量

---

### Property `TotalSoldNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 TotalSoldNum = 0;` |

**Notes:**

> 总共已售数量

---

### Property `MonasticReputation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 MonasticReputation = 0;` |

**Notes:**

> Monastic reputation (sect belief) value of the item, used for sorting by monastic belief.

---
