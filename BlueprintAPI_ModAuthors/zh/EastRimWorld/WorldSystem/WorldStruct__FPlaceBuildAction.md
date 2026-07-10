# `struct` `FPlaceBuildAction`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Place Build Action 数据结构。

## 蓝图暴露变量

### 属性 `ActionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlaceBuildActionType](WorldStruct__EPlaceBuildActionType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildActionType ActionType = EPlaceBuildActionType::None;` |

**说明:**

> 操作类型

---

### 属性 `TargetBuildID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TargetBuildID;` |

**说明:**

> 目标建筑id

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 Priority = 0;` |

**说明:**

> 目标等级
> UPROPERTY(BlueprintReadOnly,EditAnywhere)
> int32 TargetLevel;
> 优先级

---

### 属性 `TargetPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) AWorldPlace* TargetPlace = nullptr;` |

**说明:**

> Target Place 字段。

---
