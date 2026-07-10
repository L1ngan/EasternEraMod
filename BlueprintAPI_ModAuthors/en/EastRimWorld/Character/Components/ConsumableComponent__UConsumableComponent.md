# `class` `UConsumableComponent`

**Source header:** `EastRimWorld/Character/Components/ConsumableComponent.h`

---

## Functional description (from header comments)

> 耗材组件：行为开始/结束时自动使用角色背包中状态为"角色拥有"的耗材
> 触发入口：AEastRimWorldAIController::BroadCastActionChange（行为切换时旧行为结束/新行为开始）

## Blueprint-exposed variables

### Property `LastConsumableUseTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float LastConsumableUseTime = -1.f;` |

**Notes:**

> 上次使用耗材的时间（AWorldDirector::GameTime 秒）小于0表示从未使用 用于耗材公共CD（CD数值配置在UConsumableConfigAsset）

---

## Blueprint-exposed functions

### Function `TryTriggerConsumableUse`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionID` | `const FName&` |
| `bActionStart` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TryTriggerConsumableUse(const FName& ActionID,bool bActionStart);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 行为开始/结束时尝试触发耗材使用（从背包中满足条件的耗材里随机使用一个 ActionID=GOAP_Action_Data表行名）

---

### Function `CheckConsumableConditions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConsumableData` | const [FConsumableData](../../Struct/ConsumableStruct__FConsumableData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckConsumableConditions(const FConsumableData& ConsumableData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查耗材的使用条件是否全部满足

---

### Function `CheckConsumableConditionIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionIDs` | `const TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckConsumableConditionIDs(const TArray<FName>& ConditionIDs) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查一组耗材条件（耗材条件表ID）是否全部满足（配置了ID但表中查不到视为不满足）

---

### Function `ApplyConsumableEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EffectID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ApplyConsumableEffect(const FName& EffectID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 应用单个耗材效果（耗材效果表ID）

---
