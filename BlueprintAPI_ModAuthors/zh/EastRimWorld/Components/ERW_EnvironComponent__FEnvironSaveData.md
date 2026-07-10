# `struct` `FEnvironSaveData`

**源码头文件:** `EastRimWorld/Components/ERW_EnvironComponent.h`

---

## 功能说明（来自头文件注释）

> 环境信息关数据

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid SGUID = FGuid();` |

**说明:**

> 存档用GUID（环境数据的唯一标识）

---

### 属性 `Layer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Layer { 0 };` |

**说明:**

> 所在层

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**说明:**

> 环境类型

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**说明:**

> 屋顶部位类型

---

### 属性 `Durability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Durability { 0 };` |

**说明:**

> 耐久度

---

### 属性 `RotateOrientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**说明:**

> 旋转朝向

---

### 属性 `GenerateMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerateMode](../ERW_Enumerations__EGenerateMode.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**说明:**

> 创建方式

---

### 属性 `EntranceGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**说明:**

> 入口格子坐标

---

### 属性 `ExtraEnvironInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**说明:**

> 额外占位信息

---

### 属性 `EntranceValidInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EPositionType](../ERW_Enumerations__EPositionType.md) , bool> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**说明:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### 属性 `DistributionInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**说明:**

> 所占格子分布信息
> TMap<格子坐标 , 分布类型>

---

### 属性 `IsBuildComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsBuildComplete = false;` |

**说明:**

> 是否建造完成

---

### 属性 `Size`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**说明:**

> 占格子尺寸

---

### 属性 `ZIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**说明:**

> 所处高度

---

### 属性 `MinGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridPosition MinGridPos;` |

**说明:**

> 占格子最小坐标

---

### 属性 `MaxGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridPosition MaxGridPos;` |

**说明:**

> 占格子最大坐标

---

### 属性 `ExtraCoverage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**说明:**

> 额外支撑范围

---

### 属性 `SupportingObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**说明:**

> 配套物体
> TMap<环境类型 , 配套物体数据>

---

### 属性 `HeightDifference`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float HeightDifference { 0.f };` |

**说明:**

> 格子的高低差

---

### 属性 `CanPutDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool CanPutDown { true };` |

**说明:**

> 能否放下

---
