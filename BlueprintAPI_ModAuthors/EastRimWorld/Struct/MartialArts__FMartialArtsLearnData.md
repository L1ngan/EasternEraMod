# `struct` `FMartialArtsLearnData`

**源码头文件：** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 学习的武学信息

## 蓝图暴露变量

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="LearnData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") int Level = 0;` |

**源码注释：**

> 等级

---

### 属性 `TotalExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LearnData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float TotalExperience = 0.f;` |

**源码注释：**

> 总经验

---

### 属性 `CurExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LearnData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float CurExperience = 0.f;` |

**源码注释：**

> 当前

---

### 属性 `MartialArtsBookID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="LearnData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LearnData") FName MartialArtsBookID;` |

**源码注释：**

> 武学数据的ID

---

### 属性 `AttributeClassification`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsAttributeClassification` |
| 反射说明符 | BlueprintReadWrite, Category="LearnData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LearnData") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**源码注释：**

> 武学属性分类

---
