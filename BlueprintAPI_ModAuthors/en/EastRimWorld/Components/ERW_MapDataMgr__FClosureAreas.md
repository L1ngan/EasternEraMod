# `struct` `FClosureAreas`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 同一层的所有闭合区域

## Blueprint-exposed variables

### Property `HeatSourceRange`

| Field | Details |
|------|------|
| C++ type | TMap<FClosureAreaRange,[FHeatSourceAreaData](ERW_MapDataMgr__FHeatSourceAreaData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly ,SaveGame) TMap<FClosureAreaRange,FHeatSourceAreaData> HeatSourceRange;` |

---
