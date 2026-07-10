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

**Notes:**

> Save GUID uniquely identifying this environment data

---

### Property `Layer`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Layer { 0 };` |

**Notes:**

> 所在层

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**Notes:**

> 环境类型

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Notes:**

> 屋顶部位类型

---

### Property `Durability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Durability { 0 };` |

**Notes:**

> 耐久度

---

### Property `RotateOrientation`

| Field | Details |
|------|------|
| C++ type | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**Notes:**

> 旋转朝向

---

### Property `GenerateMode`

| Field | Details |
|------|------|
| C++ type | [EGenerateMode](../ERW_Enumerations__EGenerateMode.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**Notes:**

> 创建方式

---

### Property `EntranceGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**Notes:**

> 入口格子坐标

---

### Property `ExtraEnvironInfos`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**Notes:**

> 额外占位信息

---

### Property `EntranceValidInfos`

| Field | Details |
|------|------|
| C++ type | TMap<[EPositionType](../ERW_Enumerations__EPositionType.md) , bool> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**Notes:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### Property `DistributionInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**Notes:**

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

**Notes:**

> 是否建造完成

---

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**Notes:**

> 占格子尺寸

---

### Property `ZIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**Notes:**

> 所处高度

---

### Property `MinGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridPosition MinGridPos;` |

**Notes:**

> 占格子最小坐标

---

### Property `MaxGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGridPosition MaxGridPos;` |

**Notes:**

> 占格子最大坐标

---

### Property `ExtraCoverage`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**Notes:**

> 额外支撑范围

---

### Property `SupportingObjects`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**Notes:**

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

**Notes:**

> 格子的高低差

---

### Property `CanPutDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool CanPutDown { true };` |

**Notes:**

> 能否放下

---
