# `struct` `FTransportationData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 交通工具相关数据

## Blueprint-exposed variables

### Property `OccupierGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<int32,FGuid> OccupierGuids;` |

**Notes:**

> 交通工具在使用的移动信息Guids

---
