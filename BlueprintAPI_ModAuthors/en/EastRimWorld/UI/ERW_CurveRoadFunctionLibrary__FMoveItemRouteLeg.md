# `struct` `FMoveItemRouteLeg`

**Source header:** `EastRimWorld/UI/ERW_CurveRoadFunctionLibrary.h`

---

## Functional description (from header comments)

> moveitem 移动路线的一段缓存:对应一条 WBP_CurveRoad 的 城A→城B 子路由(Road 为空时走 PosA→PosB 直线兜底)

## Blueprint-exposed variables

### Property `Road`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UERW_CurveRoadWidget](ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") TObjectPtr<UERW_CurveRoadWidget> Road = nullptr;` |

**Notes:**

> Road field.

---

### Property `RoadOffset`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D RoadOffset = FVector2D::ZeroVector;` |

**Notes:**

> 这条路控件在其父画布(CanvasPanel_127)里的位置偏移;路内部坐标 + 此偏移 = 容器坐标

---

### Property `CityA`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FName CityA;` |

**Notes:**

> City A field.

---

### Property `CityB`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FName CityB;` |

**Notes:**

> City B field.

---

### Property `PosA`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D PosA = FVector2D::ZeroVector;` |

**Notes:**

> Pos A field.

---

### Property `PosB`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D PosB = FVector2D::ZeroVector;` |

**Notes:**

> Pos B field.

---

### Property `LegLen`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") float LegLen = 0.f;` |

**Notes:**

> Leg Len field.

---

### Property `CumStart`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") float CumStart = 0.f;` |

**Notes:**

> Cum Start field.

---
