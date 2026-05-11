# `struct` `FCharacterAttributeInfo`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 属性的详细信息

## Blueprint-exposed variables

### Property `AttributeName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FText AttributeName;` |

**Source comments:**

> 属性名字

---

### Property `AttributeIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftObjectPtr<UTexture2D> AttributeIcon;` |

**Source comments:**

> 属性图标

---

### Property `GameplayAttribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FGameplayAttribute GameplayAttribute;` |

**Source comments:**

> 此属性类型

---

### Property `AttributeGameplayTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo",meta = (Categories = "SetByCaller")) FGameplayTag AttributeGameplayTag;` |

**Source comments:**

> 此属性标签

---

### Property `AttributeCategory`

| Field | Details |
|------|------|
| C++ type | `ECharacterAttributeCategoryType` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") ECharacterAttributeCategoryType AttributeCategory = ECharacterAttributeCategoryType::None;` |

**Source comments:**

> 属性的分类

---

### Property `bIsUIShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bIsUIShow = true;` |

**Source comments:**

> 是否在UI上显示

---

### Property `bIsUIShowPercent`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bIsUIShowPercent = true;` |

**Source comments:**

> UI显示百分比形式显示

---

### Property `bIsUIMinFractionalDigits`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") int bIsUIMinFractionalDigits = 0;` |

**Source comments:**

> 最小小数点后显示的位数

---

### Property `bIsUIMaxFractionalDigits`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") int bIsUIMaxFractionalDigits = 2;` |

**Source comments:**

> 最大小数点后显示的位数

---

### Property `AttributeDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") FText AttributeDescribe;` |

**Source comments:**

> 属性的描述

---

### Property `bShowChangeTipsToHead`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") bool bShowChangeTipsToHead = false;` |

**Source comments:**

> 属性变动时是否要显示在头上

---

### Property `AttributePromoteTips`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditConditionHides,EditCondition = "bShowChangeTipsToHead",Category = "CharacterAttributeInfo")) FText AttributePromoteTips = FText::GetEmpty();` |

**Source comments:**

> 属性提升提示

---

### Property `AttributeReduceTips`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(EditConditionHides,EditCondition = "bShowChangeTipsToHead",Category = "CharacterAttributeInfo")) FText AttributeReduceTips = FText::GetEmpty();` |

**Source comments:**

> 属性降低提示

---

### Property `TextStyleA`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonTextStyle>` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftClassPtr<UCommonTextStyle> TextStyleA;` |

**Source comments:**

> 属性在UI上显示的文字样式（大于0时）

---

### Property `TextStyleB`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonTextStyle>` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeInfo") TSoftClassPtr<UCommonTextStyle> TextStyleB;` |

**Source comments:**

> 属性在UI上显示的文字样式（小于等于0时）

---
