# `struct` `FOverlappingItemData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 建筑覆盖采集物相关数据

## Blueprint-exposed variables

### Property `ActionData`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid , FName>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , FName> ActionData;` |

**Source comments:**

> TMap<采集物替身的Guid , 对应Action的ID>

---

### Property `InstanceGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FGuid> InstanceGuids;` |

**Source comments:**

> 覆盖采集物Instance的Guid

---
