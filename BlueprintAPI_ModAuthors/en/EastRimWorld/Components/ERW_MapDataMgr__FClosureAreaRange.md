# `struct` `FClosureAreaRange`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 闭合区域范围信息

## Blueprint-exposed variables

### Property `Min`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntPoint Min;` |

**Notes:**

> 闭合区域的最小点

---

### Property `Max`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntPoint Max;` |

**Notes:**

> 闭合区域的最大点

---

### Property `Area`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Area { 0 };` |

**Notes:**

> 闭合区域的面积

---
