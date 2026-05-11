# `struct` `FLineActorInfo`

**Source header:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## Functional description (from header comments)

> 沿格子边线生成的Actor的信息

## Blueprint-exposed variables

### Property `Location`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FVector Location = FVector::ZeroVector;` |

**Source comments:**

> 世界坐标位置

---

### Property `DistributionInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , EGridDistributionType> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**Source comments:**

> Actor所占格子分布信息
> TMap<所占格子 , 分布类型>

---
