# `struct` `FAssemblePartInfo`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 组装建筑的部位信息

## Blueprint-exposed variables

### Property `AssemblePartType`

| Field | Details |
|------|------|
| C++ type | [EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) EAssemblePartType AssemblePartType { EAssemblePartType::None };` |

**Notes:**

> 组装部位类型

---

### Property `Index`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 Index { INDEX_NONE };` |

**Notes:**

> 模型在ISM中的索引

---

### Property `RelativeTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FTransform RelativeTransform;` |

**Notes:**

> 模型的相对Transform

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FTransform Transform;` |

**Notes:**

> 模型的绝对Transform

---
