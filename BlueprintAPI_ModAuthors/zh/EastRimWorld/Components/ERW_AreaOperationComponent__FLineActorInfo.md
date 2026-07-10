# `struct` `FLineActorInfo`

**源码头文件:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## 功能说明（来自头文件注释）

> 沿格子边线生成的Actor的信息

## 蓝图暴露变量

### 属性 `Location`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FVector Location = FVector::ZeroVector;` |

**说明:**

> 世界坐标位置

---

### 属性 `DistributionInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**说明:**

> Actor所占格子分布信息
> TMap<所占格子 , 分布类型>

---
