# `class` `UEastRimWorldActivatableWidget`

**Source header:** `EastRimWorld/UI/EastRimWorldActivatableWidget.h`

---

## Functional description (from header comments)

> An activatable widget that automatically drives the desired input config when activated

## Blueprint-exposed functions

### Function `GetPopupPanelInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Position` | `FVector2D&` |
| `Size` | `FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void GetPopupPanelInfo(FVector2D& Position , FVector2D& Size);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得信息窗口的位置和尺寸

---

### Function `GetPopupPanelButtonInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Position` | `FVector2D&` |
| `Size` | `FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void GetPopupPanelButtonInfo(const FName& ID , FVector2D& Position , FVector2D& Size);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得信息窗口按钮的位置和尺寸

---
