# `struct` `FWorldMapRoadBranchConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## Functional description (from header comments)

> 曲线路一条分支的配置：CityId + [岔路口] + 各红点(按序，末点 = 通向该城的连接点)，局部坐标。对应内部 FCurveRoadBranchData

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

### Property `Points`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="CurveRoad" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") TArray<FVector2D> Points;` |

**Notes:**

> Points field.

---
