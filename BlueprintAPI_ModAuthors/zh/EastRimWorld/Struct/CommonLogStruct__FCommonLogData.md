# `struct` `FCommonLogData`

**源码头文件:** `EastRimWorld/Struct/CommonLogStruct.h`

---

## 功能说明（来自头文件注释）

> Common Log Data 数据结构。

## 蓝图暴露变量

### 属性 `LogGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid LogGuid;` |

**说明:**

> Log Guid 字段。

---

### 属性 `LogContent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString LogContent;` |

**说明:**

> 日志内容

---

### 属性 `Time`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Time = 0.f;` |

**说明:**

> 生成的游戏时间

---

### 属性 `LogGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonLogGroup](CommonLogStruct__ECommonLogGroup.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogGroup LogGroup = ECommonLogGroup::None;` |

**说明:**

> Log Group 字段。

---

### 属性 `FilterString`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString FilterString;` |

**说明:**

> 用来查询此条目的字符串

---
