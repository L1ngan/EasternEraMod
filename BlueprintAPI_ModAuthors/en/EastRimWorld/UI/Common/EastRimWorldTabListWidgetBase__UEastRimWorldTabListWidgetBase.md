# `class` `UEastRimWorldTabListWidgetBase`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnTabContentCreated`

| Field | Details |
|------|------|
| C++ type | `FOnTabContentCreated` |
| Reflection specifiers | BlueprintAssignable, Category="Tab List" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Tab List") FOnTabContentCreated OnTabContentCreated;` |

**Source comments:**

> Broadcasts when a new tab is created.

---

## Blueprint-exposed functions

### Function `GetPreregisteredTabInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Tab List" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TabNameId` | `const FName` |
| `OutTabInfo` | [FEastRimWorldTabDescriptor](EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") bool GetPreregisteredTabInfo(const FName TabNameId, FEastRimWorldTabDescriptor& OutTabInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `SetTabHiddenState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Tab List" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TabNameId` | `FName` |
| `bHidden` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Tab List") void SetTabHiddenState(FName TabNameId, bool bHidden);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated

---

### Function `RegisterDynamicTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Tab List" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TabDescriptor` | const [FEastRimWorldTabDescriptor](EastRimWorldTabListWidgetBase__FEastRimWorldTabDescriptor.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool RegisterDynamicTab(const FEastRimWorldTabDescriptor& TabDescriptor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `IsFirstTabActive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Tab List" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool IsFirstTabActive() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `IsLastTabActive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Tab List" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool IsLastTabActive() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `IsTabVisible`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Tab List" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TabId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") bool IsTabVisible(FName TabId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetVisibleTabCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Tab List" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") int32 GetVisibleTabCount();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---
