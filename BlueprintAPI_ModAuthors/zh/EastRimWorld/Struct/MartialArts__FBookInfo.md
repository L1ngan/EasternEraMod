# `struct` `FBookInfo`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 书籍

## 蓝图暴露变量

### 属性 `BookClassificationType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBookClassificationType` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") EBookClassificationType BookClassificationType = EBookClassificationType::None;` |

**源码注释:**

> 书籍分类

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") TMap<FGameplayAttribute,float> Attributes;` |

**源码注释:**

> 需要的属性值

---

### 属性 `bCanReadRepeatedly`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") bool bCanReadRepeatedly = false;` |

**源码注释:**

> 是否可以反复阅读(阅读完后是否可以再次阅读，阅读完以阅读时间为准)

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") int RealmLevel = 0;` |

**源码注释:**

> 阅读需要的境界等级(最小境界)

---

### 属性 `ReadingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") float ReadingTime = 60.f;` |

**源码注释:**

> 阅读时间

---

### 属性 `ReadAddExpAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") TMap<FGameplayAttribute,float> ReadAddExpAttribute;` |

**源码注释:**

> 阅读后增加属性值

---

### 属性 `CopyTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") float CopyTime = 60.f;` |

**源码注释:**

> 单次抄录完需要的时间

---

### 属性 `MaxCopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") int MaxCopyNum = 1;` |

**源码注释:**

> 最大可复制(抄录)次数

---

### 属性 `UnlockFormulaID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="BookInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") FName UnlockFormulaID;` |

**源码注释:**

> 解锁的配方 DT_FormulaData ID 字段

---
