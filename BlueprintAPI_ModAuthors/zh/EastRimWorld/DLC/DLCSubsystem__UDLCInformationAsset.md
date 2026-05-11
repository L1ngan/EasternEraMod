# `class` `UDLCInformationAsset`

**源码头文件:** `EastRimWorld/DLC/DLCSubsystem.h`

---

## 功能说明（来自头文件注释）

> DCL中的信息 放置于dlc包中

## 蓝图暴露变量

### 属性 `DLCId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DLCId = 0;` |

**源码注释:**

> DLCId 需与steam 主包中配置 id 统一

---

### 属性 `DLCWeGameID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int DLCWeGameID = 0;` |

**源码注释:**

> wegameID 统一id dlc包中的id steam上id

---

### 属性 `DLCName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText DLCName;` |

**源码注释:**

> 此DLC的名字

---

### 属性 `DLCIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> DLCIcon;` |

**源码注释:**

> DLC图标

---

### 属性 `AddDataTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EDLCConfigType,TSoftObjectPtr<UDataTable>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EDLCConfigType,TSoftObjectPtr<UDataTable>> AddDataTable;` |

**源码注释:**

> 此Dlc增加的配置项

---

### 属性 `bPurchase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bPurchase = false;` |

**源码注释:**

> 此DLC是否需要购买

---

### 属性 `DLCDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText DLCDescription;` |

**源码注释:**

> DLC的描述

---
