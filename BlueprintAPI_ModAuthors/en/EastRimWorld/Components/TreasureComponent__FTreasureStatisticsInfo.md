# `struct` `FTreasureStatisticsInfo`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁商品当期已售统计数据

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) FName ID;` |

**Source comments:**

> 商品ID(和对应物品表的ID一致，比如装备就要和装备表ID一致，Item就要和Item的ID一致)

---

### Property `GroundInventoryType`

| Field | Details |
|------|------|
| C++ type | `EGroundInventoryType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**Source comments:**

> 商品类型

---

### Property `Stall`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 Stall = 0;` |

**Source comments:**

> 货架

---

### Property `SoldNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 SoldNum = 0;` |

**Source comments:**

> 已售数量（当期和总共的区分开）

---
