# `struct` `FTargetBehaviorInfo`

**Source header:** `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorTypes.h`

---

## Functional description (from header comments)

> Target Behavior Info data structure.

## Blueprint-exposed variables

### Property `ActionType`

| Field | Details |
|------|------|
| C++ type | [FControlBehaviorActionType](ERW_ControlBehaviorTypes__FControlBehaviorActionType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FControlBehaviorActionType ActionType;` |

**Notes:**

> Action Type field.

---

### Property `BehaviorTarget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UObject>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UObject> BehaviorTarget = nullptr;` |

**Notes:**

> 实际执行行为的目标（建筑内物品时为 ItemInstance，否则为选中目标）

---

### Property `ButtonText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText ButtonText;` |

**Notes:**

> 按钮内容

---

### Property `ConditionText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText ConditionText;` |

**Notes:**

> 条件文本

---
