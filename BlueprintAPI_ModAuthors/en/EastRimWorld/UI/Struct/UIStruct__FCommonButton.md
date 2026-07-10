# `struct` `FCommonButton`

**Source header:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## Functional description (from header comments)

> Common Button data structure.

## Blueprint-exposed variables

### Property `CommonButtonType`

| Field | Details |
|------|------|
| C++ type | [ECommonButtonType](UIStruct__ECommonButtonType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonButtonType CommonButtonType = ECommonButtonType::None;` |

**Notes:**

> 按钮类型

---

### Property `ButtonText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ButtonText;` |

**Notes:**

> 按钮内容

---

### Property `ButtonSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector2D ButtonSize;` |

**Notes:**

> 按钮大小

---

### Property `TipsTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsTitle;` |

**Notes:**

> 按钮提示标题

---

### Property `TipsContent`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsContent;` |

**Notes:**

> 按钮提示标题

---

### Property `FormatTipsContent`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FFormatText FormatTipsContent;` |

**Notes:**

> 格式化提示内容

---

### Property `TipsType`

| Field | Details |
|------|------|
| C++ type | [ECommonBtnTipType](UIStruct__ECommonBtnTipType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonBtnTipType TipsType;` |

**Notes:**

> 按钮提示类型

---

### Property `TipsClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UUserWidget> TipsClass;` |

**Notes:**

> 按钮提示框类型

---

### Property `bTipsHaveOperator`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bTipsHaveOperator;` |

**Notes:**

> 按钮提示框是否有快捷键提示

---

### Property `TipsOperatorIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) TSoftObjectPtr<UTexture2D> TipsOperatorIcon;` |

**Notes:**

> 提示框快捷键Icon

---

### Property `TipsOpratorText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) FText TipsOpratorText;` |

**Notes:**

> 提示框快捷键文本

---

### Property `NormalIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> NormalIcon;` |

**Notes:**

> 普通按钮状态

---

### Property `HoveredIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> HoveredIcon;` |

**Notes:**

> 普通按钮悬浮

---

### Property `PressedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> PressedIcon;` |

**Notes:**

> 普通按钮按下

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bCanSelect;` |

**Notes:**

> 按钮能否选中

---

### Property `SelectIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> SelectIcon;` |

**Notes:**

> 普通按钮选中

---

### Property `RightTopSelectedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopSelectedIcon;` |

**Notes:**

> 按钮选中右上角的图片

---

### Property `RightTopDeselectedIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopDeselectedIcon;` |

**Notes:**

> 按钮未选中右上角的图片

---

### Property `DisabledIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> DisabledIcon;` |

**Notes:**

> 不可点击

---

### Property `ButtonStyle`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonButtonStyle>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UCommonButtonStyle> ButtonStyle;` |

**Notes:**

> button样式

---

### Property `ButtonWidget`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldButtonBase](../Foundation/EastRimWorldButtonBase__UEastRimWorldButtonBase.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldButtonBase> ButtonWidget;` |

**Notes:**

> 主要界面

---

### Property `ConflictButtonType`

| Field | Details |
|------|------|
| C++ type | TArray<[ECommonButtonType](UIStruct__ECommonButtonType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<ECommonButtonType>ConflictButtonType;` |

**Notes:**

> 冲突的按钮

---

### Property `bOnMultipleSelectShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bOnMultipleSelectShow = false;` |

**Notes:**

> 多选时是否显示

---

### Property `ActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ActionID = NAME_None;` |

**Notes:**

> 按钮会执行的的ActionID 如果有

---
