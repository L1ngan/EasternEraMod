# `struct` `FTriggerFunction`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 触发额外功能

## 蓝图暴露变量

### 属性 `OriginTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName OriginTaskID;` |

**说明:**

> Origin Task ID 字段。

---

### 属性 `OriginTaskGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OriginTaskGUID;` |

**说明:**

> Origin Task GUID 字段。

---

### 属性 `TriggerFunctionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETriggerFunctionType](CommonTaskStruct__ETriggerFunctionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETriggerFunctionType TriggerFunctionType = ETriggerFunctionType::None;` |

**说明:**

> 触发额外功能的类型

---

### 属性 `TriggerTimingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETriggerTimingType](CommonTaskStruct__ETriggerTimingType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETriggerTimingType TriggerTimingType = ETriggerTimingType::None;` |

**说明:**

> 触发的时机

---

### 属性 `DelayTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float DelayTime;` |

**说明:**

> 延迟触发时间 配置-1则代表立即

---

### 属性 `TriggerPeriod`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FIntPoint TriggerPeriod;` |

**说明:**

> 触发时段范围值(0-23)可以配置跨天(例(22~4))

---

### 属性 `NameParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NameParams;` |

**说明:**

> FName类型参数列表 （看TriggerFunctionType的注释）

---

### 属性 `IntParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> IntParams;` |

**说明:**

> Int Params 字段。

---
