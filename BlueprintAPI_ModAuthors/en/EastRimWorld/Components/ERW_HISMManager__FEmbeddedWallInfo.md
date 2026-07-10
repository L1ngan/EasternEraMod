# `struct` `FEmbeddedWallInfo`

**Source header:** `EastRimWorld/Components/ERW_HISMManager.h`

---

## Functional description (from header comments)

> 嵌入式墙体在ISM中的信息

## Blueprint-exposed variables

### Property `Wall`

| Field | Details |
|------|------|
| C++ type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* Wall { nullptr };` |

**Notes:**

> 原有墙体Actor

---

### Property `Index`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 Index { INDEX_NONE };` |

**Notes:**

> 嵌入式墙体模型在ISM中的索引

---

### Property `Transforms`

| Field | Details |
|------|------|
| C++ type | TMap<[EISMType](../ERW_Enumerations__EISMType.md) , FTransform> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<EISMType , FTransform> Transforms;` |

**Notes:**

> 嵌入式墙体模型的Transform
> TMap<ISM类型 , Transform>

---

### Property `VisibleISMType`

| Field | Details |
|------|------|
| C++ type | [EISMType](../ERW_Enumerations__EISMType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EISMType VisibleISMType { EISMType::Normal };` |

**Notes:**

> 当前显示的ISM类型

---

### Property `Visible`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool Visible { false };` |

**Notes:**

> 是否显示

---
