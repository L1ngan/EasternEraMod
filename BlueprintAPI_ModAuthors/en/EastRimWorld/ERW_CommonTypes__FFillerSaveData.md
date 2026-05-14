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

**Source comments:**

> 格子坐标

---

### Property `LayerIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 LayerIndex { INDEX_NONE };` |

**Source comments:**

> 所在层的索引

---

### Property `PartType`

| Field | Details |
|------|------|
| C++ type | `EPositionPartType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EPositionPartType PartType { EPositionPartType::COUNT };` |

**Source comments:**

> 九宫格部分类型

---

### Property `AutoTileType`

| Field | Details |
|------|------|
| C++ type | `EAutoTileType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EAutoTileType AutoTileType { EAutoTileType::Flat };` |

**Source comments:**

> 九宫格类型

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FTransform Transform;` |

**Source comments:**

> 填充模型的Transform

---
