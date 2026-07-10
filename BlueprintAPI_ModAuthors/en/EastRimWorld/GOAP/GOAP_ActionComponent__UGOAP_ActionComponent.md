# `class` `UGOAP_ActionComponent`

**Source header:** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## Functional description (from header comments)

> GOAP行动组件

## Blueprint-exposed variables

### Property `GOAP_Users`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Users](GOAP_ActionComponent__FGOAP_Users.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Users> GOAP_Users = {};` |

**Notes:**

> GOAP的用户
> TMap<GOAP Action的ID , 用户的数组>

---

### Property `GOAP_Actions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Action](GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> GOAP_Actions = {};` |

**Notes:**

> 已注册的GOAP Action
> TMap<GOAP Action的ID , GOAP Action>

---

### Property `ActionForbiddenStates`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , bool> ActionForbiddenStates;` |

**Notes:**

> GOAP Action的禁用状态
> TMap<GOAP Action的ID , 是否禁用>

---

### Property `ReservedList`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> ReservedList = {};` |

**Notes:**

> 预留物品列表
> TMap<物品ID , 数量>

---

## Blueprint-exposed functions

### Function `RegisterUser`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void RegisterUser(const FGOAP_Action& Action , AEastRimWorldAIController* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 注册GOAP用户

---

### Function `UnregisterUser`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void UnregisterUser(const FGOAP_Action& Action , AEastRimWorldAIController* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 注销GOAP用户

---

### Function `RegisterGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) bool RegisterGOAPAction(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 注册GOAP Action

---

### Function `UnregisterGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `AbortUsers` | TArray<[AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void UnregisterGOAPAction(const FGOAP_Action& Action , TArray<AEastRimWorldAIController*>& AbortUsers);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 注销GOAP Action

---

### Function `GetActionUsers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Users` | TArray<[AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetActionUsers(const FGOAP_Action& Action , TArray<AEastRimWorldAIController*>& Users);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得Action的用户

---

### Function `CheckActionState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ManagerComponent` | [UGOAP_ManagerComponent](GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckActionState(UGOAP_ManagerComponent* ManagerComponent , const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查并更新Action的状态(是否活跃)

---

### Function `CheckUserNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ManagerComponent` | [UGOAP_ManagerComponent](GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckUserNum(UGOAP_ManagerComponent* ManagerComponent , const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查执行人数以设置Action是否活跃

---

### Function `AddReservedUser`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `User` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddReservedUser(AEastRimWorldAIController* User , const FName& ItemID , int32 Num);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入预留物品的用户

---

### Function `RemoveReservedUser`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `User` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveReservedUser(AEastRimWorldAIController* User);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除预留物品的用户

---

### Function `AddReservedList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddReservedList(const FName& ItemID , int32 Num);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入物品预留列表

---

### Function `RemoveReservedList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveReservedList(const FName& ItemID , int32 Num);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除物品预留列表

---

### Function `ReservedCorrection`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `Condition` | const [FGOAP_Condition](GOAP_Data__FGOAP_Condition.md)& |
| `GOAPValue` | UPARAM(ref) [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReservedCorrection(AERW_GameModeBase* GameMode , const FGOAP_Condition& Condition , UPARAM(ref) FGOAP_Value& GOAPValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据预留物品修正GOAP记忆值

---

### Function `GetActionDataByActionID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](GOAP_Data__FGOAP_Action.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActionID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action GetActionDataByActionID(const FName & InActionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据ActionID 获取ActionData

---

### Function `GetActionIDByGoalID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="GOAP" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "GOAP") FName GetActionIDByGoalID(const FName& GoalID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 按 GoalID 在已注册的 GOAP_Actions 中查找对应 ActionID

---

### Function `GetActionIDByPracticeGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="GOAP" |
| Return type | `FName` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "GOAP") FName GetActionIDByPracticeGoal() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 按修炼 GoalID 模糊匹配（"Practice" 或 "Practice_" 前缀）查找 ActionID

---

### Function `UnregisterAllGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterAllGOAPAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注销当前Actor所有的GOAP并且打断其他人的执行

---

### Function `ImproveActionPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ImproveActionPriority();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Boosts the priority of this actor's GOAP actions listed in the CanImprovePriorityActions config (lowers their cost by ActionReduceCostValue).

---

### Function `CancelImproveActionPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelImproveActionPriority();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Cancels the priority boost of this actor's boostable GOAP actions (adds back the previously subtracted action cost).

---
