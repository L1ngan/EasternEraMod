# `struct` `FBreakdownActionConfigData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 崩溃行为配置结构

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Name;` |

**说明:**

> 名称

---

### 属性 `BreakdownType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBreakdownType](ERW_Enumerations__EBreakdownType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBreakdownType BreakdownType = EBreakdownType::Depression;` |

**说明:**

> 崩溃类型

---

### 属性 `Exist`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EBreakdownExistType](ERW_Enumerations__EBreakdownExistType.md) , int32> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<EBreakdownExistType , int32> Exist;` |

**说明:**

> 崩溃存在类型

---

### 属性 `RecoverBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName RecoverBuffID;` |

**说明:**

> 崩溃结束后触发的恢复BUFF

---

### 属性 `NoBreakdownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 NoBreakdownTime { 0 };` |

**说明:**

> 恢复期间不会崩溃持续时间(秒)

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FText> Desc;` |

**说明:**

> 描述

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Weight { 0 };` |

**说明:**

> 权重

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonConditionType](ERW_Enumerations__ECommonConditionType.md) , [FConditions](ERW_CommonTypes__FConditions.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ECommonConditionType , FConditions> Conditions;` |

**说明:**

> 满足条件
> TMap<条件类型 , 条件>

---
