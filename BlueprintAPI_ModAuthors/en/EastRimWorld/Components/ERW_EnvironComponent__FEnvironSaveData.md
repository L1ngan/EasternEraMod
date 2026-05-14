# `struct` `FEnvironSaveData`

**Source header:** `EastRimWorld/Components/ERW_EnvironComponent.h`

---

## Functional description (from header comments)

> 环境信息关数据

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid SGUID = FGuid();` |

---

### Property `Layer`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Layer { 0 };` |

**Source comments:**

> 所在层

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | `EEnvironType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**Source comments:**

> 环境类型

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | `ERoofPartType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Source comments:**

> 屋顶部位类型

---

### Property `Durability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Durability { 0 };` |

**Source comments:**

> 耐久度

---

### Property `RotateOrientation`

| Field | Details |
|------|------|
| C++ type | `ERotateOrientation` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**Source comments:**

> 旋转朝向

---

### Property `GenerateMode`

| Field | Details |
|------|------|
| C++ type | `EGenerateMode` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**Source comments:**

> 创建方式

---

### Property `EntranceGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**Source comments:**

> 入口格子坐标

---

### Property `ExtraEnvironInfos`

| Field | Details |
|------|------|
| C++ type | TMap<EEnvironType , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**Source comments:**

> 额外占位信息

---

### Property `EntranceValidInfos`

| Field | Details |
|------|------|
| C++ type | `TMap<EPositionType , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**Source comments:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### Property `DistributionInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , EGridDistributionType> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**Source comments:**

> 所占格子分布信息
> TMap<格子坐标 , 分布类型>

---

### Property `IsBuildComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsBuildComplete = false;` |

**Source comments:**

> 是否建造完成

---

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**Source comments:**

> 占格子尺寸

---

### Property `ZIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**Source comments:**

> 所处高度

---

### Property `MinGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridPosition MinGridPos;` |

**Source comments:**

> 占格子最小坐标

---

### Property `MaxGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridPosition MaxGridPos;` |

**Source comments:**

> 占格子最大坐标

---

### Property `ExtraCoverage`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**Source comments:**

> 额外支撑范围

---

### Property `SupportingObjects`

| Field | Details |
|------|------|
| C++ type | TMap<EEnvironType , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**Source comments:**

> 配套物体
> TMap<环境类型 , 配套物体数据>

---

### Property `HeightDifference`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float HeightDifference { 0.f };` |

**Source comments:**

> 格子的高低差

---

### Property `CanPutDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool CanPutDown { true };` |

**Source comments:**

> 能否放下

---
