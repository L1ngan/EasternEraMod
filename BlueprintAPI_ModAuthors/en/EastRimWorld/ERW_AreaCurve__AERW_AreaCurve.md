# `class` `AERW_AreaCurve`

**Source header:** `EastRimWorld/ERW_AreaCurve.h`

---

## Functional description (from header comments)

> 地图区域曲线

## Blueprint-exposed variables

### Property `RelativePoses`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FVector> RelativePoses;` |

**Notes:**

> 控点的相对位置

---

### Property `WorldPoses`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FVector> WorldPoses;` |

**Notes:**

> 控点的世界位置

---

### Property `Tangents`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FVector> Tangents;` |

**Notes:**

> 控点的正切值

---

### Property `SampleInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SampleInterval { 4 };` |

**Notes:**

> 曲线采样间隔

---

### Property `IsRestrictArea`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool IsRestrictArea { false };` |

**Notes:**

> 是否是限制区域(建筑必须放在非限制区域内, 但不能触碰到限制区域)

---
