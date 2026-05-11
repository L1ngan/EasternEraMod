# `struct` `FModBuildUIData`

**源码头文件:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## 功能说明（来自头文件注释）

> mod建筑物UI

## 蓝图暴露变量

### 属性 `Category`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Category;` |

**源码注释:**

> 建造类别(对应BuildTabConfig表行名)

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;` |

**源码注释:**

> 显示名称（界面显示）

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UTexture2D *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D * Icon = nullptr;` |

**源码注释:**

> UI图标

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Desc;` |

**源码注释:**

> 描述

---
