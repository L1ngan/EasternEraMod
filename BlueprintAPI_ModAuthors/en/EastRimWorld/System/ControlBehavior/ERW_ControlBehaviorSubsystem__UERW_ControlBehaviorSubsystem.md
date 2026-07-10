# `class` `UERW_ControlBehaviorSubsystem`

**Source header:** `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorSubsystem.h`

---

## Functional description (from header comments)

> RW Control Behavior Subsystem UObject type.

## Blueprint-exposed functions

### Function `GetControlBehaviorSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ControlBehaviorSubsystem" |
| Return type | [UERW_ControlBehaviorSubsystem](ERW_ControlBehaviorSubsystem__UERW_ControlBehaviorSubsystem.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") static UERW_ControlBehaviorSubsystem* GetControlBehaviorSubsystem();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Control Behavior Subsystem.

---

### Function `GetTargetBehaviorList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ControlBehaviorSubsystem" |
| Return type | TArray<[FTargetBehaviorInfo](ERW_ControlBehaviorTypes__FTargetBehaviorInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ControlBehaviorSubsystem") TArray<FTargetBehaviorInfo> GetTargetBehaviorList(UObject* TargetObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取行为列表

---

### Function `ExecuteControlBehavior`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ControlBehaviorSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetObject` | `UObject*` |
| `ActionType` | const [FControlBehaviorActionType](ERW_ControlBehaviorTypes__FControlBehaviorActionType.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ControlBehaviorSubsystem") bool ExecuteControlBehavior(UObject* TargetObject, const FControlBehaviorActionType& ActionType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Execute Control Behavior field.

---

### Function `CheckHumanCanExecute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ControlBehaviorSubsystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Human` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") bool CheckHumanCanExecute(AEastRimWorldCharacter_Human* Human);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 弟子是否可执行行为；失败时在函数内弹出提示

---

### Function `GetSelectedHuman`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ControlBehaviorSubsystem" |
| Return type | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") AEastRimWorldCharacter_Human* GetSelectedHuman();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前选中角色(只能选择一个)

---
