# `struct` `FBuildObjectData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 建筑模型Instance的数据

## Blueprint-exposed variables

### Property `Floor`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Floor { 0 };` |

**Notes:**

> 建筑所在层

---

### Property `Index`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Index { INDEX_NONE };` |

**Notes:**

> 模型在ISM中的索引

---

### Property `VariantIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 VariantIndex { INDEX_NONE };` |

**Notes:**

> 变体索引

---

### Property `ZIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**Notes:**

> Z坐标偏移

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FTransform Transform;` |

**Notes:**

> 模型的Transform

---

### Property `BuildObjectState`

| Field | Details |
|------|------|
| C++ type | [EBuildObjectState](ERW_Enumerations__EBuildObjectState.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildObjectState BuildObjectState { EBuildObjectState::NoResource };` |

**Notes:**

> 建造物体状态

---

### Property `VisibleISMType`

| Field | Details |
|------|------|
| C++ type | [EISMType](ERW_Enumerations__EISMType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EISMType VisibleISMType { EISMType::Normal };` |

**Notes:**

> 当前显示的ISM类型

---

### Property `EmbeddedWallType`

| Field | Details |
|------|------|
| C++ type | [EEmbeddedWallType](ERW_Enumerations__EEmbeddedWallType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EEmbeddedWallType EmbeddedWallType { EEmbeddedWallType::None };` |

**Notes:**

> 嵌入式墙体类型

---

### Property `EmbeddedWallGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FGuid> EmbeddedWallGuids;` |

**Notes:**

> 门或窗占据的嵌入式墙体的Guid

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | [ERoofPartType](ERW_Enumerations__ERoofPartType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Notes:**

> 屋顶部位类型

---

### Property `Visible`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool Visible { false };` |

**Notes:**

> 是否显示

---

### Property `WallDisplayType`

| Field | Details |
|------|------|
| C++ type | [EWallDisplayType](ERW_Enumerations__EWallDisplayType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EWallDisplayType WallDisplayType { EWallDisplayType::Normal };` |

**Notes:**

> 墙显示类型

---

### Property `AssemblePartInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FAssemblePartInfo](ERW_CommonTypes__FAssemblePartInfo.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FAssemblePartInfo> AssemblePartInfos;` |

**Notes:**

> 组装建筑部位信息

---
