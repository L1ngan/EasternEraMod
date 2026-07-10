# `struct` `FMartialArtsLevel`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学等级

## 蓝图暴露变量

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") int Level = 0;` |

**说明:**

> 等级

---

### 属性 `MartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<FName> MartialArtsEntries;` |

**说明:**

> 词条属性 关联MartialArtsEntries 配置

---

### 属性 `EntriesDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText EntriesDescribe;` |

**说明:**

> 词条属性描述

---

### 属性 `FormatEntriesDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FFormatText FormatEntriesDescribe;` |

**说明:**

> 词条属性描述（格式化文本）

---

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText LevelName;` |

**说明:**

> 等级名字

---

### 属性 `DescribeTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<FGameplayTag> DescribeTag;` |

**说明:**

> 描述中的详细标签 顺序取值

---

### 属性 `DescribeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<float> DescribeValue;` |

**说明:**

> 描述中的详细数值 顺序取值

---
