# `class` `AERW_HUDBase`

**Source header:** `EastRimWorld/ERW_HUDBase.h`

---

## Functional description (from header comments)

> HUD基类

## Blueprint-exposed functions

### Function `AddMouseMoveBoxWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void AddMouseMoveBoxWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Adds the mouse drag-selection box widget (Blueprint implementable event)

---

### Function `UpdateMouseSelectBox`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InStartPoint` | `const FVector2D &` |
| `InEndStartPoint` | `const FVector2D &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void UpdateMouseSelectBox(const FVector2D & InStartPoint,const FVector2D & InEndStartPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新鼠标选中框

---
