# `struct` `FGOAP_Condition`

**源码头文件:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> GOAP判断条件

## 蓝图暴露变量

### 属性 `ConditionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGOAP_ConditionType](GOAP_Enumerations__EGOAP_ConditionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionType ConditionType { EGOAP_ConditionType::None };` |

**说明:**

> 前置条件类型

---

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ID;` |

**说明:**

> 前置条件类型对应的具体事物的ID

---

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGuid Guid;` |

**说明:**

> 前置条件类型对应的具体事物的ID

---

### 属性 `Attribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayAttribute Attribute;` |

**说明:**

> 前置条件类型对应的属性

---

### 属性 `TargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGOAP_ConditionTargetType](GOAP_Enumerations__EGOAP_ConditionTargetType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionTargetType TargetType { EGOAP_ConditionTargetType::Agent };` |

**说明:**

> 前置条件检测对象

---

### 属性 `ValueType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGOAP_ConditionValueType](GOAP_Enumerations__EGOAP_ConditionValueType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionValueType ValueType { EGOAP_ConditionValueType::Bool };` |

**说明:**

> 前置条件检测值类型

---

### 属性 `Query`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConditionQuery](../ERW_Enumerations__EConditionQuery.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EConditionQuery Query { EConditionQuery::IsEqualTo };` |

**说明:**

> 前置条件判断规则

---

### 属性 `GOAPValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Value](GOAP_Data__FGOAP_Value.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGOAP_Value GOAPValue;` |

**说明:**

> GOAP值

---

### 属性 `PathGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPathGoalData](GOAP_Data__FPathGoalData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TMap<FName , FPathGoalData> PathGoals;` |

**说明:**

> 条件不满足时的达成路径GOAP目标
> TMap<GOAP目标ID , 目标对应具体事物的ID>

---
