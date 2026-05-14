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

---

### 属性 `Layer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Layer { 0 };` |

**源码注释:**

> 所在层

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEnvironType` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**源码注释:**

> 环境类型

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERoofPartType` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**源码注释:**

> 屋顶部位类型

---

### 属性 `Durability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Durability { 0 };` |

**源码注释:**

> 耐久度

---

### 属性 `RotateOrientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERotateOrientation` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**源码注释:**

> 旋转朝向

---

### 属性 `GenerateMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGenerateMode` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**源码注释:**

> 创建方式

---

### 属性 `EntranceGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**源码注释:**

> 入口格子坐标

---

### 属性 `ExtraEnvironInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EEnvironType , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**源码注释:**

> 额外占位信息

---

### 属性 `EntranceValidInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EPositionType , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**源码注释:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### 属性 `DistributionInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , EGridDistributionType> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**源码注释:**

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

**源码注释:**

> 是否建造完成

---

### 属性 `Size`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**源码注释:**

> 占格子尺寸

---

### 属性 `ZIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**源码注释:**

> 所处高度

---

### 属性 `MinGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridPosition MinGridPos;` |

**源码注释:**

> 占格子最小坐标

---

### 属性 `MaxGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridPosition MaxGridPos;` |

**源码注释:**

> 占格子最大坐标

---

### 属性 `ExtraCoverage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**源码注释:**

> 额外支撑范围

---

### 属性 `SupportingObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EEnvironType , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**源码注释:**

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

**源码注释:**

> 格子的高低差

---

### 属性 `CanPutDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool CanPutDown { true };` |

**源码注释:**

> 能否放下

---
