# `struct` `FResourcePackage`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 新游戏资源包

## 蓝图暴露变量

### 属性 `ResourceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") FName ResourceName;` |

**源码注释:**

> 资源名称

---

### 属性 `ResourcePrice`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") int32 ResourcePrice = 0;` |

**源码注释:**

> 资源价格

---

### 属性 `EResourceCategories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EResourceCategories` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") EResourceCategories EResourceCategories = EResourceCategories::None;` |

**源码注释:**

> 资源UI显示分类

---

### 属性 `ResourceId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") FName ResourceId;` |

**源码注释:**

> 资源ID

---

### 属性 `ResourceNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") int32 ResourceNum = 1;` |

**源码注释:**

> 资源数量

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGroundInventoryType` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") EGroundInventoryType ItemType = EGroundInventoryType::None;` |

**源码注释:**

> 资源分类

---

### 属性 `ResourceEnable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="ResourcePackage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") bool ResourceEnable = true;` |

**源码注释:**

> 是否启用

---
