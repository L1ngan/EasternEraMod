# `struct` `FTargetBehaviorInfo`

**源码头文件:** `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes.h`

---

## 功能说明（来自头文件注释）

> Target Behavior Info 数据结构。

## 蓝图暴露变量

### 属性 `ActionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FControlBehaviorActionType](ERW_ControlBehaviorTypes__FControlBehaviorActionType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FControlBehaviorActionType ActionType;` |

**说明:**

> Action Type 字段。

---

### 属性 `BehaviorTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UObject>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UObject> BehaviorTarget = nullptr;` |

**说明:**

> 实际执行行为的目标（建筑内物品时为 ItemInstance，否则为选中目标）

---

### 属性 `ButtonText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText ButtonText;` |

**说明:**

> 按钮内容

---

### 属性 `ConditionText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText ConditionText;` |

**说明:**

> 条件文本

---
