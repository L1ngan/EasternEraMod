# `struct` `FCommonButton`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CommonButtonType`

| Field | Details |
|------|------|
| C++ type | `ECommonButtonType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonButtonType CommonButtonType = ECommonButtonType::None;` |

**Source comments:**

> 按钮类型

---

### Property `ButtonText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ButtonText;` |

**Source comments:**

> 按钮内容

---

### Property `ButtonSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector2D ButtonSize;` |

**Source comments:**

> 按钮大小

---

### Property `TipsTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsTitle;` |

**Source comments:**

> 按钮提示标题

---

### Property `TipsContent`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsContent;` |

**Source comments:**

> 按钮提示标题

---

### Property `FormatTipsContent`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FFormatText FormatTipsContent;` |

**Source comments:**

> 格式化提示内容

---

### Property `TipsType`

| Field | Details |
|------|------|
| C++ type | `ECommonBtnTipType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonBtnTipType TipsType;` |

**Source comments:**

> 按钮提示类型

---

### Property `TipsClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UUserWidget> TipsClass;` |

**Source comments:**

> 按钮提示框类型

---

### Property `bTipsHaveOperator`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bTipsHaveOperator;` |

**Source comments:**

> 按钮提示框是否有快捷键提示

---

### Property `TipsOperatorIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) TSoftObjectPtr<UTexture2D> TipsOperatorIcon;` |

**Source comments:**

> 提示框快捷键Icon

---

### Property `TipsOpratorText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) FText TipsOpratorText;` |

**Source comments:**

> 提示框快捷键文本

---

### Property `NormalIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> NormalIcon;` |

**Source comments:**

> 普通按钮状态

---

### Property `HoveredIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> HoveredIcon;` |

**Source comments:**

> 普通按钮悬浮

---

### Property `PressedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> PressedIcon;` |

**Source comments:**

> 普通按钮按下

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bCanSelect;` |

**Source comments:**

> 按钮能否选中

---

### Property `SelectIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> SelectIcon;` |

**Source comments:**

> 普通按钮选中

---

### Property `RightTopSelectedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopSelectedIcon;` |

**Source comments:**

> 按钮选中右上角的图片

---

### Property `RightTopDeselectedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopDeselectedIcon;` |

**Source comments:**

> 按钮未选中右上角的图片

---

### Property `DisabledIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> DisabledIcon;` |

**Source comments:**

> 不可点击

---

### Property `ButtonStyle`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonButtonStyle>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UCommonButtonStyle> ButtonStyle;` |

**Source comments:**

> button样式

---

### Property `ButtonWidget`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldButtonBase](../Foundation/EastRimWorldButtonBase__UEastRimWorldButtonBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldButtonBase> ButtonWidget;` |

**Source comments:**

> 主要界面

---

### Property `ConflictButtonType`

| Field | Details |
|------|------|
| C++ type | `TArray<ECommonButtonType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<ECommonButtonType>ConflictButtonType;` |

**Source comments:**

> 冲突的按钮

---

### Property `bOnMultipleSelectShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bOnMultipleSelectShow = false;` |

**Source comments:**

> 多选时是否显示

---

### Property `ActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ActionID = NAME_None;` |

**Source comments:**

> 按钮会执行的的ActionID 如果有

---
