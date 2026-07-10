# `struct` `FAssemblePartTransform`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 组装建筑部位的Transform

## Blueprint-exposed variables

### Property `AssemblePartType`

| Field | Details |
|------|------|
| C++ type | [EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EAssemblePartType AssemblePartType = EAssemblePartType::None;` |

**Notes:**

> 组装部位类型

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**Notes:**

> 相对坐标

---
