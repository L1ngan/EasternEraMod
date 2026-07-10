# `struct` `FCurveRoadCity`

**Source header:** `EastRimWorld/UI/ERW_CurveRoadWidget.h`

---

## Functional description (from header comments)

> 一条路能达到的城市:id + 在路面(本控件)局部空间的连接点(分支末端)

## Blueprint-exposed variables

### Property `CityId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FName CityId;` |

**Notes:**

> City Id field.

---

### Property `Point`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D Point = FVector2D::ZeroVector;` |

**Notes:**

> 城市在路面(本控件)局部空间的连接点。单路径模式下应大致落在路径上(会投影到最近的路径弧长位置)

---
