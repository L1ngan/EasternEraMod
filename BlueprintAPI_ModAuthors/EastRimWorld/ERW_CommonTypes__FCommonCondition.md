# `struct` `FCommonCondition`

**源码头文件：** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 通用条件

## 蓝图暴露变量

### 属性 `ValueType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EConditionValueType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EConditionValueType ValueType { EConditionValueType::Int };` |

**源码注释：**

> 条件检测值类型

---

### 属性 `Query`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EConditionQuery` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EConditionQuery Query { EConditionQuery::IsEqualTo };` |

**源码注释：**

> 条件判断规则

---

### 属性 `IdeaValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FConditionValue` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FConditionValue IdeaValue;` |

**源码注释：**

> 想法条件值

---
