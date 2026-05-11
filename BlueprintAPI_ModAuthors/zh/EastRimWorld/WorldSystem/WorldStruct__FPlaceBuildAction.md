# `struct` `FPlaceBuildAction`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ActionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPlaceBuildActionType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildActionType ActionType = EPlaceBuildActionType::None;` |

**源码注释:**

> 操作类型

---

### 属性 `TargetBuildID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TargetBuildID;` |

**源码注释:**

> 目标建筑id

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 Priority = 0;` |

**源码注释:**

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

---
