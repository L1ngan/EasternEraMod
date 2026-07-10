# `struct` `FCommonButton`

**源码头文件:** `EastRimWorld/UI/Struct/UIStruct.h`

---

## 功能说明（来自头文件注释）

> Common Button 数据结构。

## 蓝图暴露变量

### 属性 `CommonButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonButtonType](UIStruct__ECommonButtonType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonButtonType CommonButtonType = ECommonButtonType::None;` |

**说明:**

> 按钮类型

---

### 属性 `ButtonText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ButtonText;` |

**说明:**

> 按钮内容

---

### 属性 `ButtonSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector2D ButtonSize;` |

**说明:**

> 按钮大小

---

### 属性 `TipsTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsTitle;` |

**说明:**

> 按钮提示标题

---

### 属性 `TipsContent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsContent;` |

**说明:**

> 按钮提示标题

---

### 属性 `FormatTipsContent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FFormatText FormatTipsContent;` |

**说明:**

> 格式化提示内容

---

### 属性 `TipsType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonBtnTipType](UIStruct__ECommonBtnTipType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonBtnTipType TipsType;` |

**说明:**

> 按钮提示类型

---

### 属性 `TipsClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UUserWidget>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UUserWidget> TipsClass;` |

**说明:**

> 按钮提示框类型

---

### 属性 `bTipsHaveOperator`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bTipsHaveOperator;` |

**说明:**

> 按钮提示框是否有快捷键提示

---

### 属性 `TipsOperatorIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) TSoftObjectPtr<UTexture2D> TipsOperatorIcon;` |

**说明:**

> 提示框快捷键Icon

---

### 属性 `TipsOpratorText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bTipsHaveOperator" )) FText TipsOpratorText;` |

**说明:**

> 提示框快捷键文本

---

### 属性 `NormalIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> NormalIcon;` |

**说明:**

> 普通按钮状态

---

### 属性 `HoveredIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> HoveredIcon;` |

**说明:**

> 普通按钮悬浮

---

### 属性 `PressedIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> PressedIcon;` |

**说明:**

> 普通按钮按下

---

### 属性 `bCanSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(InlineEditConditionToggle)) bool bCanSelect;` |

**说明:**

> 按钮能否选中

---

### 属性 `SelectIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> SelectIcon;` |

**说明:**

> 普通按钮选中

---

### 属性 `RightTopSelectedIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopSelectedIcon;` |

**说明:**

> 按钮选中右上角的图片

---

### 属性 `RightTopDeselectedIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=( editcondition="bCanSelect" )) TSoftObjectPtr<UTexture2D> RightTopDeselectedIcon;` |

**说明:**

> 按钮未选中右上角的图片

---

### 属性 `DisabledIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UTexture2D> DisabledIcon;` |

**说明:**

> 不可点击

---

### 属性 `ButtonStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonButtonStyle>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UCommonButtonStyle> ButtonStyle;` |

**说明:**

> button样式

---

### 属性 `ButtonWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldButtonBase](../Foundation/EastRimWorldButtonBase__UEastRimWorldButtonBase.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UEastRimWorldButtonBase> ButtonWidget;` |

**说明:**

> 主要界面

---

### 属性 `ConflictButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ECommonButtonType](UIStruct__ECommonButtonType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<ECommonButtonType>ConflictButtonType;` |

**说明:**

> 冲突的按钮

---

### 属性 `bOnMultipleSelectShow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bOnMultipleSelectShow = false;` |

**说明:**

> 多选时是否显示

---

### 属性 `ActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ActionID = NAME_None;` |

**说明:**

> 按钮会执行的的ActionID 如果有

---
