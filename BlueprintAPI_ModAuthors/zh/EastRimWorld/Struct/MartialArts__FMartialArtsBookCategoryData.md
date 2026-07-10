# `struct` `FMartialArtsBookCategoryData`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学书籍种类

## 蓝图暴露变量

### 属性 `CategoryName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText CategoryName;` |

**说明:**

> 种类名称

---

### 属性 `MartialArtsBooks`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") TArray<FName> MartialArtsBooks;` |

**说明:**

> 包含的武学书籍

---

### 属性 `BookType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsBookType](MartialArts__EMartialArtsBookType.md) |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsBookType BookType = EMartialArtsBookType::None;` |

**说明:**

> 秘籍顶层类型（图鉴左侧顶层标签分组用）

---

### 属性 `BookQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FName BookQuality;` |

**说明:**

> 秘籍品质

---

### 属性 `CollectPrize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FName CollectPrize;` |

**说明:**

> 集齐奖励(称号ID)

---

### 属性 `BookDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FText BookDesc;` |

**说明:**

> 秘籍介绍

---

### 属性 `Founder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FText Founder;` |

**说明:**

> 祖师

---
