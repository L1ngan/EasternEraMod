# `struct` `FTransportationResourceInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 交通工具信息

## Blueprint-exposed variables

### Property `BasicConsumption`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 BasicConsumption = 0;` |

**Notes:**

> 基础消耗(选择该交通工具的一次性固定消耗)

---

### Property `StageConsumption`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float StageConsumption = 0.f;` |

**Notes:**

> 每小时消耗(乘以往返小时数;支持小数,最终产出向上取整)

---
