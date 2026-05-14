# `struct` `FPillarSaveData`

**Source header:** `EastRimWorld/Components/ERW_HISMManager.h`

---

## Functional description (from header comments)

> 建筑柱子的存档数据

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName ID;` |

**Source comments:**

> 墙的配置表ID

---

### Property `LayerIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 LayerIndex { INDEX_NONE };` |

**Source comments:**

> 模型所在层的索引

---

### Property `SeamPoint`

| Field | Details |
|------|------|
| C++ type | [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridSeamPoint SeamPoint;` |

**Source comments:**

> 所在接缝点

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FTransform Transform;` |

**Source comments:**

> 模型的Transform

---

### Property `VisibleISMType`

| Field | Details |
|------|------|
| C++ type | `EISMType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EISMType VisibleISMType { EISMType::Normal };` |

**Source comments:**

> 当前显示的ISM类型

---

### Property `BuildObjectState`

| Field | Details |
|------|------|
| C++ type | `EBuildObjectState` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildObjectState BuildObjectState { EBuildObjectState::NoResource };` |

**Source comments:**

> 建造状态

---
