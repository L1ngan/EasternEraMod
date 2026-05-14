# `struct` `FClosureAreas`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 同一层的所有闭合区域

## Blueprint-exposed variables

### Property `PlannedAreas`

| Field | Details |
|------|------|
| C++ type | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md) , [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FClosureAreaRange , FClosureAreaData> PlannedAreas;` |

**Source comments:**

> 已规划的区域(修建中)
> TMap<闭合区域范围 , 闭合区域数据>

---

### Property `RoomAreas`

| Field | Details |
|------|------|
| C++ type | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md) , [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FClosureAreaRange , FClosureAreaData> RoomAreas;` |

**Source comments:**

> 已形成房间的区域
> TMap<闭合区域范围 , 闭合区域数据>

---

### Property `CombinationBuildAreas`

| Field | Details |
|------|------|
| C++ type | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md),[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FClosureAreaRange,FCombinationBuildAreaData> CombinationBuildAreas;` |

**Source comments:**

> 组合建筑的区域

---

### Property `HeatSourceRange`

| Field | Details |
|------|------|
| C++ type | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md),[FHeatSourceAreaData](ERW_MapDataMgr__FHeatSourceAreaData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly ,SaveGame) TMap<FClosureAreaRange,FHeatSourceAreaData> HeatSourceRange;` |

---
