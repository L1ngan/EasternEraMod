# `struct` `FCharacterAttributeInfo`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 属性的详细信息

## 蓝图暴露变量

### 属性 `AttributeName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FText AttributeName;` |

**说明:**

> 属性名字

---

### 属性 `AttributeIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftObjectPtr<UTexture2D> AttributeIcon;` |

**说明:**

> 属性图标

---

### 属性 `GameplayAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FGameplayAttribute GameplayAttribute;` |

**说明:**

> 此属性类型

---

### 属性 `AttributeGameplayTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo",meta = (Categories = "SetByCaller")) FGameplayTag AttributeGameplayTag;` |

**说明:**

> 此属性标签

---

### 属性 `AttributeCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterAttributeCategoryType](ItemStruct__ECharacterAttributeCategoryType.md) |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") ECharacterAttributeCategoryType AttributeCategory = ECharacterAttributeCategoryType::None;` |

**说明:**

> 属性的分类

---

### 属性 `bIsUIShow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bIsUIShow = true;` |

**说明:**

> 是否在UI上显示

---

### 属性 `bIsUIShowPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bIsUIShowPercent = true;` |

**说明:**

> UI显示百分比形式显示

---

### 属性 `bIsUIMinFractionalDigits`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") int bIsUIMinFractionalDigits = 0;` |

**说明:**

> 最小小数点后显示的位数

---

### 属性 `bIsUIMaxFractionalDigits`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") int bIsUIMaxFractionalDigits = 2;` |

**说明:**

> 最大小数点后显示的位数

---

### 属性 `AttributeDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FText AttributeDescribe;` |

**说明:**

> 属性的描述

---

### 属性 `bShowChangeTipsToHead`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bShowChangeTipsToHead = false;` |

**说明:**

> 属性变动时是否要显示在头上

---

### 属性 `AttributePromoteTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditConditionHides,EditCondition = "bShowChangeTipsToHead",Category = "CharacterAttributeInfo")) FText AttributePromoteTips = FText::GetEmpty();` |

**说明:**

> 属性提升提示

---

### 属性 `AttributeReduceTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditConditionHides,EditCondition = "bShowChangeTipsToHead",Category = "CharacterAttributeInfo")) FText AttributeReduceTips = FText::GetEmpty();` |

**说明:**

> 属性降低提示

---

### 属性 `TextStyleA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonTextStyle>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftClassPtr<UCommonTextStyle> TextStyleA;` |

**说明:**

> 属性在UI上显示的文字样式（大于0时）

---

### 属性 `TextStyleB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonTextStyle>` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftClassPtr<UCommonTextStyle> TextStyleB;` |

**说明:**

> 属性在UI上显示的文字样式（小于等于0时）

---
