# `struct` `FGOAPMemorySaveData`

**Source header:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## Functional description (from header comments)

> GOAP记忆存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Source comments:**

> 组件的Guid

---

### Property `Memories`

| Field | Details |
|------|------|
| C++ type | TMap<EGOAP_ConditionType , [FMemoryData](GOAP_MemoryComponent__FMemoryData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EGOAP_ConditionType , FMemoryData> Memories;` |

**Source comments:**

> GOAP前置条件类型对应的记忆值
> TMap<GOAP前置条件类型 , 记忆数据>

---
