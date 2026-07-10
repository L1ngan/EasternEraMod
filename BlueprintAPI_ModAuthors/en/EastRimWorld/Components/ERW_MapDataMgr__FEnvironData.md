# `struct` `FEnvironData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 环境数据

## Blueprint-exposed variables

### Property `EnvironData`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FActorData](ERW_MapDataMgr__FActorData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FActorData> EnvironData;` |

**Notes:**

> TMap<环境类型 , 每个朝向对应的Actor数据>

---

### Property `TopHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float TopHeight { 0.f };` |

**Notes:**

> 顶部高度

---
