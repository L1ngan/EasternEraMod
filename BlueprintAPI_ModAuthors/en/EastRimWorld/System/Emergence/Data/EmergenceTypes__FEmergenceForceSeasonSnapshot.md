# `struct` `FEmergenceForceSeasonSnapshot`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 兴衰压力·暴起子项的"上季势力快照" — Director 每季滚存, 供 SurgeRatio 环比(本季/上季)。
> 只含 POD(float/int), Savior 嵌套序列化安全(无裸指针)。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `Combat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Snapshot" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Emergence|Snapshot") float Combat = 0.f;` |

**Notes:**

> 上季战力(TotalCombat)

---

### Property `PlaceCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergence|Snapshot" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, Category = "Emergence|Snapshot") int32 PlaceCount = 0;` |

**Notes:**

> 上季据点数

---
