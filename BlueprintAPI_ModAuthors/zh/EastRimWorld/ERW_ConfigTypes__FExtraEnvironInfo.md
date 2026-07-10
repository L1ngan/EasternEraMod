# `struct` `FExtraEnvironInfo`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 建筑额外的占位信息

## 蓝图暴露变量

### 属性 `GridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FGridPosition GridPos;` |

**说明:**

> 相对格子坐标

---

### 属性 `DistributionTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EGridDistributionType](ERW_Enumerations__EGridDistributionType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<EGridDistributionType> DistributionTypes;` |

**说明:**

> 格子分布类型

---

### 属性 `InvalidTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EGridDistributionType](ERW_Enumerations__EGridDistributionType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<EGridDistributionType> InvalidTypes;` |

**说明:**

> 无效的分布类型

---
