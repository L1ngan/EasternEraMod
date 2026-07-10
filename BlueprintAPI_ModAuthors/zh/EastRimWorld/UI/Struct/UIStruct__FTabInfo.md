# `struct` `FTabInfo`

**源码头文件:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## 功能说明（来自头文件注释）

> Tab Info 数据结构。

## 蓝图暴露变量

### 属性 `NormalBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalBase;` |

**说明:**

> 普通按钮状态

---

### 属性 `NormalHovered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalHovered;` |

**说明:**

> 普通按钮悬浮

---

### 属性 `NormalPressed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateBrush NormalPressed;` |

**说明:**

> 普通按钮按下

---

### 属性 `LabelModuleIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> LabelModuleIds;` |

**说明:**

> 对应的模块UIid

---

### 属性 `TipTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipTitle;` |

**说明:**

> 页签tip标题

---

### 属性 `LabelTipContent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText LabelTipContent;` |

**说明:**

> 页签tip内容

---

### 属性 `FuncButtonIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> FuncButtonIds;` |

**说明:**

> 要添加的模块功能按钮id

---
