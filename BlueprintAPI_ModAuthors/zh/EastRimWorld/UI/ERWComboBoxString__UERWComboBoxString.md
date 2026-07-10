# `class` `UERWComboBoxString`

**源码头文件:** `EastRimWorld/UI/ERWComboBoxString.h`

---

## 功能说明（来自头文件注释）

> The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.

## 蓝图暴露变量

### 属性 `WidgetStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FComboBoxStyle` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Style, meta=( DisplayName="Style" )) FComboBoxStyle WidgetStyle;` |

**说明:**

> The style.

---

### 属性 `ComboBoxStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FComboBoxStyle` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category=Style) FComboBoxStyle ComboBoxStyle;` |

**说明:**

> Combo Box Style 字段。

---

### 属性 `bOpenButtonStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Style) bool bOpenButtonStyle;` |

**说明:**

> 是否 Open Button Style 的布尔标记。

---

### 属性 `OpenComboBoxStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FComboBoxStyle` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Style, meta=( EditCondition="bOpenButtonStyle" )) FComboBoxStyle OpenComboBoxStyle;` |

**说明:**

> 执行 Open Combo Box Style 操作。

---

### 属性 `ItemStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTableRowStyle` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Style) FTableRowStyle ItemStyle;` |

**说明:**

> The item row style.

---

### 属性 `ScrollBarStyle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FScrollBarStyle` |
| 反射说明符 | BlueprintReadOnly, Category="Style" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category="Style") FScrollBarStyle ScrollBarStyle;` |

**说明:**

> The scroll bar style.

---

### 属性 `ContentPadding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FMargin` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Content) FMargin ContentPadding;` |

**说明:**

> Content Padding 字段。

---

### 属性 `MaxListHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Content, AdvancedDisplay) float MaxListHeight;` |

**说明:**

> The max height of the combobox list that opens

---

### 属性 `HasDownArrow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter = "IsHasDownArrow", Setter = "SetHasDownArrow", Category = Content, AdvancedDisplay) bool HasDownArrow;` |

**说明:**

> When false, the down arrow is not generated and it is up to the API consumer
> to make their own visual hint that this is a drop down.

---

### 属性 `EnableGamepadNavigationMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter = "IsEnableGamepadNavigationMode", Setter = "SetEnableGamepadNavigationMode", Category = Content, AdvancedDisplay) bool EnableGamepadNavigationMode;` |

**说明:**

> When false, directional keys will change the selection. When true, ComboBox 
> must be activated and will only capture arrow input while activated.

---

### 属性 `Font`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateFontInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category=Style) FSlateFontInfo Font;` |

**说明:**

> The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent
> to factory each new entry.

---

### 属性 `ForegroundColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category=Style, meta=(DesignerRebuild)) FSlateColor ForegroundColor;` |

**说明:**

> The foreground color to pass through the hierarchy.

---

### 属性 `TextColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Style, meta=(DesignerRebuild)) FSlateColor TextColor;` |

**说明:**

> Text Color 字段。

---

### 属性 `OpenTextColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Style, meta=(DesignerRebuild)) FSlateColor OpenTextColor;` |

**说明:**

> 执行 Open Text Color 操作。

---

### 属性 `bIsFocusable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter= "IsFocusable", Category=Interaction) bool bIsFocusable;` |

**说明:**

> 是否 Is Focusable 的布尔标记。

---

### 属性 `OnSelectionChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSelectionChangedEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category=Events) FOnSelectionChangedEvent OnSelectionChanged;` |

**说明:**

> Called when a new item is selected in the combobox.

---

### 属性 `OnOpening`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOpeningEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category=Events) FOnOpeningEvent OnOpening;` |

**说明:**

> Called when the combobox is opening

---

## 蓝图暴露函数

### 函数 `AddOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Option` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void AddOption(const FString& Option);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Add Option 操作。

---

### 函数 `RemoveOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Option` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API bool RemoveOption(const FString& Option);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Remove Option 操作。

---

### 函数 `FindOptionIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Option` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 FindOptionIndex(const FString& Option) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Find Option Index。

---

### 函数 `GetOptionAtIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Index` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API FString GetOptionAtIndex(int32 Index) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Option At Index。

---

### 函数 `ClearOptions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void ClearOptions();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear Options 操作。

---

### 函数 `ClearSelection`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void ClearSelection();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear Selection 操作。

---

### 函数 `RefreshOptions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void RefreshOptions();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Refreshes the list of options.  If you added new ones, and want to update the list even if it's
> currently being displayed use this.

---

### 函数 `SetSelectedOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Option` | `FString` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void SetSelectedOption(FString Option);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Selected Option 操作。

---

### 函数 `SetSelectedIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Index` | `const int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ComboBox") EASTRIMWORLD_API void SetSelectedIndex(const int32 Index);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Selected Index 操作。

---

### 函数 `GetSelectedOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API FString` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API FString GetSelectedOption() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Selected Option。

---

### 函数 `GetSelectedIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 GetSelectedIndex() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Selected Index。

---

### 函数 `GetOptionCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 GetOptionCount() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Returns the number of options

---

### 函数 `IsOpen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ComboBox" |
| 返回类型 | `EASTRIMWORLD_API bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="ComboBox", Meta = (ReturnDisplayName = "bOpen")) EASTRIMWORLD_API bool IsOpen() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Is Open。

---
