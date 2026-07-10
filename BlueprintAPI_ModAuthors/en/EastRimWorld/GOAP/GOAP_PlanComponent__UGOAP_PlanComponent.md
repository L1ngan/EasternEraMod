# `class` `UGOAP_PlanComponent`

**Source header:** `EastRimWorld/GOAP/GOAP_PlanComponent.h`

---

## Functional description (from header comments)

> 用于AI通过GOAP寻找计划的组件

## Blueprint-exposed variables

### Property `GameMode`

| Field | Details |
|------|------|
| C++ type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AERW_GameModeBase* GameMode { nullptr };` |

**Notes:**

> Cached reference to the game mode

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AWorldPlace> WorldPlace;` |

**Notes:**

> Reference to the world place this component belongs to

---

### Property `ItemUseStates`

| Field | Details |
|------|------|
| C++ type | TMap<FGameplayTag , [FItemUseState](GOAP_PlanComponent__FItemUseState.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGameplayTag , FItemUseState> ItemUseStates;` |

**Notes:**

> 物品使用状态
> TMap<总标签 , 状态>

---

### Property `Goals`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAPScoreData](GOAP_PlanComponent__FGOAPScoreData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , FGOAPScoreData> Goals;` |

**Notes:**

> Agent当前拥有的GOAP目标
> TMap<GOAP目标配置表ID , 分值数据>

---

### Property `DisabledGoals`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , bool> DisabledGoals;` |

**Notes:**

> 当前禁用的GOAP目标
> TMap<GOAP目标配置表ID , 占位符>

---

### Property `GoalPriorities`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , int32> GoalPriorities;` |

**Notes:**

> GOAP目标对应的工作优先级
> TMap<GOAP目标 , 优先级>

---

### Property `CurrentGoal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FName CurrentGoal;` |

**Notes:**

> 当前执行的GOAP目标

---

### Property `CurrentPlans`

| Field | Details |
|------|------|
| C++ type | TArray<[FGOAP_Action](GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TArray<FGOAP_Action> CurrentPlans;` |

**Notes:**

> 当前计划

---

### Property `OnCurrentWorkScheduleChanged`

| Field | Details |
|------|------|
| C++ type | `FOnCurrentWorkScheduleChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCurrentWorkScheduleChanged OnCurrentWorkScheduleChanged;` |

**Notes:**

> 当前工作日程改变时

---

## Blueprint-exposed functions

### Function `RecoverCurrentPlansData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool ForceFindObject =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverCurrentPlansData(bool ForceFindObject = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在蓝图中FindPlans调用时，可能还未加载，手动调用

---

### Function `InitItemUseStates`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tags` | `const TArray<FGameplayTag>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitItemUseStates(const TArray<FGameplayTag>& Tags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化物品使用状态

---

### Function `SetItemUseState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `const FGameplayTag&` |
| `State` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetItemUseState(const FGameplayTag& Tag , bool State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置物品使用状态

---

### Function `GetItemUseState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetItemUseState(const FGameplayTag& Tag) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取物品使用状态

---

### Function `GetActiveTagNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetActiveTagNum(const FGameplayTag& Tag) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得可用Tag数量

---

### Function `UpdateGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `ScoreData` | const [FGOAPScoreData](GOAP_PlanComponent__FGOAPScoreData.md)& |
| `Remove` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateGoal(const FName& GoalID , const FGOAPScoreData& ScoreData , bool Remove);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新GOAP目标

---

### Function `RemoveAllGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAllGoal();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新GOAP目标

---

### Function `SetGoalEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `Enable` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetGoalEnabled(const FName& GoalID , bool Enable);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置GOAP目标是否启用

---

### Function `InitWorkScheduleTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitWorkScheduleTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化工作日程检查计时器

---

### Function `InitGoalPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `Priority` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitGoalPriority(const FName& GoalID , int32 Priority);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化GOAP目标优先级

---

### Function `UpdateGoalPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `Priority` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateGoalPriority(const FName& GoalID , int32 Priority);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新GOAP目标优先级

---

### Function `CopyWorkPriorities`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromAgent` | const [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CopyWorkPriorities(const AEastRimWorldAIController* FromAgent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从其他角色复制非自定义工作优先级

---

### Function `CopyCustomWorkPriorities`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromAgent` | const [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CopyCustomWorkPriorities(const AEastRimWorldAIController* FromAgent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从其他角色复制自定义工作优先级

---

### Function `FindPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ManagerComponent` | [UGOAP_ManagerComponent](GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindPlans(UGOAP_ManagerComponent* ManagerComponent , AEastRimWorldAIController* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过当前拥有的GOAP目标寻找可执行的计划

---

### Function `OnFindPlanFailed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void OnFindPlanFailed(const FName& GoalID);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 当寻找计划失败时

---

### Function `IsBatchAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ManagerComponent` | [UGOAP_ManagerComponent](GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsBatchAction(UGOAP_ManagerComponent* ManagerComponent) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前执行的计划是不是批量处理的Action

---

### Function `GetCurrentWorkScheduleID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleID` | `FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetCurrentWorkScheduleID(FName& ScheduleID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得当前工作进程ID

---

### Function `GetCurrentFirstPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](GOAP_Data__FGOAP_Action.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action GetCurrentFirstPlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前第一个计划

---

### Function `GetCurrentNextPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](GOAP_Data__FGOAP_Action.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action GetCurrentNextPlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前下一个计划

---

### Function `RemoveFirstPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveFirstPlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除第一个计划

---

### Function `ClearAllPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearAllPlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清理所有计划

---

### Function `GetCurGoalScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurGoalScore(const FName& GoalID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前Goal的分值（通过工作加成后的分值）

---

### Function `HasGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HasGoal(const FName& GoalID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否拥有目标

---

### Function `ClearGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearGoals();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Clears all GOAP goals

---

### Function `CreatePrisonerRecruitedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ManagerComponent` | [UGOAP_ManagerComponent](GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreatePrisonerRecruitedAction(UGOAP_ManagerComponent* ManagerComponent,AEastRimWorldAIController* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Creates the corresponding GOAP action for a recruited prisoner

---
