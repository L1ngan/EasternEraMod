# `struct` `FCompareCondition`

**源码头文件:** `EastRimWorld/Struct/ConditionStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `Query`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<ELUniQuery>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ELUniQuery> Query = ELUniQuery::IsEqualTo;` |

**源码注释:**

> 比较类型

---

### 属性 `UniValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLUniValue` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FLUniValue UniValue;` |

**源码注释:**

> 数值

---

### 属性 `ConditionDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ConditionDescribe;` |

**源码注释:**

> 条件描述

---
