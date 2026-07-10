# `struct` `FExtraEnvironInfo`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 建筑额外的占位信息

## Blueprint-exposed variables

### Property `GridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FGridPosition GridPos;` |

**Notes:**

> 相对格子坐标

---

### Property `DistributionTypes`

| Field | Details |
|------|------|
| C++ type | TArray<[EGridDistributionType](ERW_Enumerations__EGridDistributionType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<EGridDistributionType> DistributionTypes;` |

**Notes:**

> 格子分布类型

---

### Property `InvalidTypes`

| Field | Details |
|------|------|
| C++ type | TArray<[EGridDistributionType](ERW_Enumerations__EGridDistributionType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<EGridDistributionType> InvalidTypes;` |

**Notes:**

> 无效的分布类型

---
