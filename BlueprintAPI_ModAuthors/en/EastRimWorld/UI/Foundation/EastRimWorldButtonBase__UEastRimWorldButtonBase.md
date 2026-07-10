# `class` `UEastRimWorldButtonBase`

**Source header:** `EastRimWorld/UI/Foundation/EastRimWorldButtonBase.h`

---

## Functional description (from header comments)

> East Rim World Button Base UObject type.

## Blueprint-exposed functions

### Function `SetButtonText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetButtonText(const FText& InText);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Button Text operation.

---

### Function `UpdateButtonText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonText(const FText& InText);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Executes the Update Button Text operation.

---

### Function `UpdateButtonStyle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonStyle();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Executes the Update Button Style operation.

---

### Function `UpdateButtonState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void UpdateButtonState();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新按钮的状态

---
