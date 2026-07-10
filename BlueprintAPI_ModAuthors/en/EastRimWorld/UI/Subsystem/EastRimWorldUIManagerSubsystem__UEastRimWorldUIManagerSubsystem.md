# `class` `UEastRimWorldUIManagerSubsystem`

**Source header:** `EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem.h`

---

## Functional description (from header comments)

> East Rim World UI Manager Subsystem UObject type.

## Blueprint-exposed functions

### Function `GetPrimaryGameLayout`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UPrimaryGameLayout*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UPrimaryGameLayout* GetPrimaryGameLayout() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Primary Game Layout.

---

### Function `GetGameMainUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UCommonActivatableWidget*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* GetGameMainUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取游戏主UI

---

### Function `ClearGameMainUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearGameMainUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Clear Game Main UI operation.

---

### Function `GetLayoutUIByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UCommonActivatableWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `FGameplayTag` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* GetLayoutUIByTag(FGameplayTag Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过标签获取当前激活的UI

---

### Function `AddUIToLayout`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UCommonActivatableWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `FGameplayTag` |
| `WidgetClas` | `TSoftClassPtr<UCommonActivatableWidget>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* AddUIToLayout(FGameplayTag Tag,TSoftClassPtr<UCommonActivatableWidget> WidgetClas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Add UI To Layout operation.

---

### Function `ClearAllLayUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearAllLayUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Clear All Lay UI operation.

---
