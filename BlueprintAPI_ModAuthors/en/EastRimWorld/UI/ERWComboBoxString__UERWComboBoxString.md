# `class` `UERWComboBoxString`

**Source header:** `EastRimWorld/UI/ERWComboBoxString.h`

---

## Functional description (from header comments)

> The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.

## Blueprint-exposed variables

### Property `WidgetStyle`

| Field | Details |
|------|------|
| C++ type | `FComboBoxStyle` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Style, meta=( DisplayName="Style" )) FComboBoxStyle WidgetStyle;` |

**Source comments:**

> The style.

---

### Property `ComboBoxStyle`

| Field | Details |
|------|------|
| C++ type | `FComboBoxStyle` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category=Style) FComboBoxStyle ComboBoxStyle;` |

---

### Property `bOpenButtonStyle`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Style) bool bOpenButtonStyle;` |

---

### Property `OpenComboBoxStyle`

| Field | Details |
|------|------|
| C++ type | `FComboBoxStyle` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Style, meta=( EditCondition="bOpenButtonStyle" )) FComboBoxStyle OpenComboBoxStyle;` |

---

### Property `ItemStyle`

| Field | Details |
|------|------|
| C++ type | `FTableRowStyle` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Style) FTableRowStyle ItemStyle;` |

**Source comments:**

> The item row style.

---

### Property `ScrollBarStyle`

| Field | Details |
|------|------|
| C++ type | `FScrollBarStyle` |
| Reflection specifiers | BlueprintReadOnly, Category="Style" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category="Style") FScrollBarStyle ScrollBarStyle;` |

**Source comments:**

> The scroll bar style.

---

### Property `ContentPadding`

| Field | Details |
|------|------|
| C++ type | `FMargin` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Content) FMargin ContentPadding;` |

---

### Property `MaxListHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter, Setter, Category=Content, AdvancedDisplay) float MaxListHeight;` |

**Source comments:**

> The max height of the combobox list that opens

---

### Property `HasDownArrow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter = "IsHasDownArrow", Setter = "SetHasDownArrow", Category = Content, AdvancedDisplay) bool HasDownArrow;` |

**Source comments:**

> When false, the down arrow is not generated and it is up to the API consumer
> to make their own visual hint that this is a drop down.

---

### Property `EnableGamepadNavigationMode`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Getter = "IsEnableGamepadNavigationMode", Setter = "SetEnableGamepadNavigationMode", Category = Content, AdvancedDisplay) bool EnableGamepadNavigationMode;` |

**Source comments:**

> When false, directional keys will change the selection. When true, ComboBox 
> must be activated and will only capture arrow input while activated.

---

### Property `Font`

| Field | Details |
|------|------|
| C++ type | `FSlateFontInfo` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category=Style) FSlateFontInfo Font;` |

**Source comments:**

> The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent
> to factory each new entry.

---

### Property `ForegroundColor`

| Field | Details |
|------|------|
| C++ type | `FSlateColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter, Category=Style, meta=(DesignerRebuild)) FSlateColor ForegroundColor;` |

**Source comments:**

> The foreground color to pass through the hierarchy.

---

### Property `TextColor`

| Field | Details |
|------|------|
| C++ type | `FSlateColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Style, meta=(DesignerRebuild)) FSlateColor TextColor;` |

---

### Property `OpenTextColor`

| Field | Details |
|------|------|
| C++ type | `FSlateColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Style, meta=(DesignerRebuild)) FSlateColor OpenTextColor;` |

---

### Property `bIsFocusable`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Getter= "IsFocusable", Category=Interaction) bool bIsFocusable;` |

---

### Property `OnSelectionChanged`

| Field | Details |
|------|------|
| C++ type | `FOnSelectionChangedEvent` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category=Events) FOnSelectionChangedEvent OnSelectionChanged;` |

**Source comments:**

> Called when a new item is selected in the combobox.

---

### Property `OnOpening`

| Field | Details |
|------|------|
| C++ type | `FOnOpeningEvent` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category=Events) FOnOpeningEvent OnOpening;` |

**Source comments:**

> Called when the combobox is opening

---

## Blueprint-exposed functions

### Function `AddOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Option` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void AddOption(const FString& Option);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Option` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API bool RemoveOption(const FString& Option);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `FindOptionIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Option` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 FindOptionIndex(const FString& Option) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetOptionAtIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Index` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API FString GetOptionAtIndex(int32 Index) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearOptions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void ClearOptions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearSelection`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void ClearSelection();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RefreshOptions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void RefreshOptions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Refreshes the list of options.  If you added new ones, and want to update the list even if it's
> currently being displayed use this.

---

### Function `SetSelectedOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Option` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API void SetSelectedOption(FString Option);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SetSelectedIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Index` | `const int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ComboBox") EASTRIMWORLD_API void SetSelectedIndex(const int32 Index);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetSelectedOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API FString` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API FString GetSelectedOption() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetSelectedIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 GetSelectedIndex() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetOptionCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox") EASTRIMWORLD_API int32 GetOptionCount() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Returns the number of options

---

### Function `IsOpen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ComboBox" |
| Return type | `EASTRIMWORLD_API bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="ComboBox", Meta = (ReturnDisplayName = "bOpen")) EASTRIMWORLD_API bool IsOpen() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
