# `struct` `FFillerSaveData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 填充模型存档数据

## Blueprint-exposed variables

### Property `GridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridPosition GridPos;` |

**Notes:**

> 格子坐标

---

### Property `LayerIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 LayerIndex { INDEX_NONE };` |

**Notes:**

> 所在层的索引

---

### Property `PartType`

| Field | Details |
|------|------|
| C++ type | [EPositionPartType](ERW_Enumerations__EPositionPartType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EPositionPartType PartType { EPositionPartType::COUNT };` |

**Notes:**

> 九宫格部分类型

---

### Property `AutoTileType`

| Field | Details |
|------|------|
| C++ type | [EAutoTileType](ERW_Enumerations__EAutoTileType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EAutoTileType AutoTileType { EAutoTileType::Flat };` |

**Notes:**

> 九宫格类型

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FTransform Transform;` |

**Notes:**

> 填充模型的Transform

---
