# `struct` `FGarrisonRatio`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 驻守比例

## Blueprint-exposed variables

### Property `MinNumberOfPeople`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MinNumberOfPeople = 0;` |

**Source comments:**

> 最小人数 包含

---

### Property `MaxNumberOfPeople`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MaxNumberOfPeople = 0;` |

**Source comments:**

> 最大人数 包含

---

### Property `Ratio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(ClampMin = 0.0,ClampMax = 1.f,UIMin = 0.f, UIMax = 1.f)) float Ratio = 0.1;` |

**Source comments:**

> 比例

---
