# `struct` `FApprenticeshipExpEntry`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 详情-单项武学经验(分类短名 + 累计经验)

## 蓝图暴露变量

### 属性 `MartialClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") EMartialArtsAttributeClassification MartialClass = EMartialArtsAttributeClassification::None;` |

**说明:**

> Martial Class 字段。

---

### 属性 `ClassDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText ClassDisplayName;` |

**说明:**

> Class Display Name 字段。

---

### 属性 `Exp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float Exp = 0.f;` |

**说明:**

> Exp 字段。

---
