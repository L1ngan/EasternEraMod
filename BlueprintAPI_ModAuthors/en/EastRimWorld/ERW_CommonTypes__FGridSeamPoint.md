# `struct` `FGridSeamPoint`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 格子接缝点数据

## Blueprint-exposed variables

### Property `X`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 X { 0 };` |

**Notes:**

> X轴坐标

---

### Property `Y`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Y { 0 };` |

**Notes:**

> Y轴位置

---

### Property `WorldLocation`

| Field | Details |
|------|------|
| C++ type | [FVectorData](ERW_CommonTypes__FVectorData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FVectorData WorldLocation;` |

**Notes:**

> 世界坐标位置

---
