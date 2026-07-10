# `struct` `FWorldMapRoadCityLink`

**Source header:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## Functional description (from header comments)

> 曲线路单条连接：CityId + 在路面(控件)局部空间的连接点。对应 UERW_CurveRoadWidget 的 FCurveRoadCity

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

> Point field.

---
