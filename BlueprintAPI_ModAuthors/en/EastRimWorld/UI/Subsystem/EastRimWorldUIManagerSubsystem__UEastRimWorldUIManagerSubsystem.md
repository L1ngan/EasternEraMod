# `class` `UEastRimWorldUIManagerSubsystem`

**Source header:** `EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `GetPrimaryGameLayout`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UPrimaryGameLayout*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UPrimaryGameLayout* GetPrimaryGameLayout() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetGameMainUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UCommonActivatableWidget*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* GetGameMainUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

---

### Function `ClearAllLayUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearAllLayUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
