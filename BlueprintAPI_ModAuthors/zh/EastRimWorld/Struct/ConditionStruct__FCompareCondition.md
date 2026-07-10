# `struct` `FCompareCondition`

**源码头文件:** `EastRimWorld/Struct/ConditionStruct.h`

---

## 功能说明（来自头文件注释）

> Compare Condition 数据结构。

## 蓝图暴露变量

### 属性 `Query`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<ELUniQuery>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ELUniQuery> Query = ELUniQuery::IsEqualTo;` |

**说明:**

> 比较类型

---

### 属性 `UniValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLUniValue` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FLUniValue UniValue;` |

**说明:**

> 数值

---

### 属性 `ConditionDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ConditionDescribe;` |

**说明:**

> 条件描述

---
