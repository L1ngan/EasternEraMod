# `struct` `FCombinationBuildAreaData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> Combination building area data: combination-satisfied flag, GUID, config ID, core building grid range and member building counts

## Blueprint-exposed variables

### Property `IsEnoughCombination`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) bool IsEnoughCombination;` |

**Notes:**

> 是否满足组合

---

### Property `CombinationGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FGuid CombinationGuid = FGuid();` |

**Notes:**

> guid

---

### Property `CombinationID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FName CombinationID;` |

**Notes:**

> 配置id

---

### Property `MinGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FGridPosition MinGridPos;` |

**Notes:**

> 核心建筑位置范围

---

### Property `MaxGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FGridPosition MaxGridPos;` |

**Notes:**

> Maximum grid position of the core building's location range

---

### Property `BuildIdNum`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) TMap<FName,int32> BuildIdNum;` |

**Notes:**

> 组合内各建筑id数量

---

### Property `BuildTabNum`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) TMap<FName,int32> BuildTabNum;` |

**Notes:**

> 组合内各建筑分类的数量

---
