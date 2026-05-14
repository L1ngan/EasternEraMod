# `struct` `FActorData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> Actor数据

## Blueprint-exposed variables

### Property `ActorData`

| Field | Details |
|------|------|
| C++ type | TMap<EGridDistributionType , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EGridDistributionType , AGOAP_ActorBase*> ActorData;` |

**Source comments:**

> TMap<格子中的分布类型 , 对应的Actor>

---

### Property `RoofData`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid , ERoofPartType>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , ERoofPartType> RoofData;` |

**Source comments:**

> TMap<屋顶的Guid , 屋顶部位类型>

---

### Property `EntranceData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , AGOAP_ActorBase*> EntranceData;` |

**Source comments:**

> 格子包含的建筑入口数据
> TMap<建筑的Guid , 建筑的Actor>

---
