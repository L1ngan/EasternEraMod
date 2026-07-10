# `struct` `FActorData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> Actor数据

## Blueprint-exposed variables

### Property `ActorData`

| Field | Details |
|------|------|
| C++ type | TMap<[EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md) , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, Transient) TMap<EGridDistributionType , AGOAP_ActorBase*> ActorData;` |

**Notes:**

> TMap<格子中的分布类型 , 对应的Actor>
> 运行时 Actor 引用缓存（标 Transient 防止作为存档结构体被序列化为悬空指针致崩；当前 MapData 非 SaveGame 故为防御性）

---

### Property `RoofData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [ERoofPartType](../ERW_Enumerations__ERoofPartType.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , ERoofPartType> RoofData;` |

**Notes:**

> TMap<屋顶的Guid , 屋顶部位类型>

---

### Property `EntranceData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, Transient) TMap<FGuid , AGOAP_ActorBase*> EntranceData;` |

**Notes:**

> 格子包含的建筑入口数据
> TMap<建筑的Guid , 建筑的Actor>
> 运行时 Actor 引用缓存（标 Transient 防止序列化悬空指针致崩；当前不可达，防御性）

---
