# `struct` `FPassGameConditionDescribe`

**源码头文件：** `EastRimWorld/Struct/ForceStruct.h`

---

## 功能说明（来自头文件注释）

> 通关条件表结构体

## 蓝图暴露变量

### 属性 `PassGameName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText PassGameName;` |

**源码注释：**

> 通关条件名称

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> Icon;` |

**源码注释：**

> 图标

---

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText Describe;` |

**源码注释：**

> 通关条件描述

---

### 属性 `OpenConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ECondType,[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> OpenConditions;` |

**源码注释：**

> 开启条件

---

### 属性 `PassConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ECondType,[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> PassConditions;` |

**源码注释：**

> 通关条件

---
