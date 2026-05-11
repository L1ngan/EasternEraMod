# `class` `UBeginnerGuideComponent`

**Source header:** `EastRimWorld/System/Task/BeginnerGuideComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GameModeBase`

| Field | Details |
|------|------|
| C++ type | class [AERW_GameModeBase](../../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| Reflection specifiers | BlueprintReadWrite, Category="Guide" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Guide") class AERW_GameModeBase* GameModeBase = nullptr;` |

---

### Property `GameInstance`

| Field | Details |
|------|------|
| C++ type | class [UERW_GameInstanceBase](../../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md) * |
| Reflection specifiers | BlueprintReadWrite, Category="Guide" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Guide") class UERW_GameInstanceBase * GameInstance = nullptr;` |

---

### Property `IsCompleteGuide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Guide" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Guide") bool IsCompleteGuide = false;` |

**Source comments:**

> 是否已经完成了新手引导

---

### Property `NoviceTaskInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Guide" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame, Category = "Guide") TArray<FCommonTaskInstance> NoviceTaskInfo;` |

**Source comments:**

> 新手任务

---

### Property `CurNoviceTaskInfo`

| Field | Details |
|------|------|
| C++ type | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Guide" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame, Category = "Guide") FCommonTaskInstance CurNoviceTaskInfo;` |

**Source comments:**

> 当前的新手引导任务

---

### Property `CountNoviceTaskNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Guide" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame, Category = "Guide") int CountNoviceTaskNumber = 0;` |

**Source comments:**

> 总的新手引导任务数量

---

### Property `UnlockIDs`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , EBeginnerGuideUnlockType>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**Source comments:**

> 已解锁的ID
> TMap<ID , 解锁类型>

---

### Property `WaitingQueue`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool WaitingQueue { false };` |

**Source comments:**

> 是否是等待队列(UI动画播放中已完成的条件应该加入等待队列中)

---

### Property `SelectActor`

| Field | Details |
|------|------|
| C++ type | [AGOAP_ActorBase](../../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* SelectActor = nullptr;` |

**Source comments:**

> 选中的Actor

---

### Property `SelectItemInstance`

| Field | Details |
|------|------|
| C++ type | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UInventoryItemInstance* SelectItemInstance { nullptr };` |

**Source comments:**

> 选中的物品

---

### Property `SceneManager`

| Field | Details |
|------|------|
| C++ type | [AERW_SceneManager](../../ERW_SceneManager__AERW_SceneManager.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AERW_SceneManager* SceneManager { nullptr };` |

---

### Property `DialogueIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 DialogueIndex { 0 };` |

**Source comments:**

> 对话索引

---

### Property `TipsIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 TipsIndex { 0 };` |

**Source comments:**

> Tips索引

---

### Property `OnUpdateNextNoviceTask`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateNextNoviceTask` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateNextNoviceTask OnUpdateNextNoviceTask;` |

**Source comments:**

> 更新下个新手引导任务

---

### Property `OnNextDialogue`

| Field | Details |
|------|------|
| C++ type | `FOnNextDialogue` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnNextDialogue OnNextDialogue;` |

**Source comments:**

> 下一步新手引导对话通知

---

### Property `OnNextCoverTips`

| Field | Details |
|------|------|
| C++ type | `FOnNextCoverTips` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnNextCoverTips OnNextCoverTips;` |

**Source comments:**

> 遮罩Tips下一步通知

---

### Property `ShowCoverTips`

| Field | Details |
|------|------|
| C++ type | `FShowCoverTips` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FShowCoverTips ShowCoverTips;` |

**Source comments:**

> 显示遮罩Tips通知

---

### Property `OnAddWaitingQueue`

| Field | Details |
|------|------|
| C++ type | `FOnAddWaitingQueue` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnAddWaitingQueue OnAddWaitingQueue;` |

**Source comments:**

> 加入等待队列通知

---

### Property `OnBeginnerGuideDelegate`

| Field | Details |
|------|------|
| C++ type | `FBeginnerGuideDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FBeginnerGuideDelegate OnBeginnerGuideDelegate;` |

**Source comments:**

> 更新任务委托

---

### Property `OnCompleteBeginnerGuideDelegate`

| Field | Details |
|------|------|
| C++ type | `FCompleteBeginnerGuideDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FCompleteBeginnerGuideDelegate OnCompleteBeginnerGuideDelegate;` |

**Source comments:**

> 更新任务委托

---

## Blueprint-exposed functions

### Function `ReceiveAward`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | [ANewGameResourceSpawnerActor](../../Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReceiveAward(ANewGameResourceSpawnerActor* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 领取奖励

---

### Function `UpdateNextNoviceTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateNextNoviceTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 下一个新手任务

---

### Function `InitNoviceGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNoviceTaskInfos` | `const TArray<FName>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitNoviceGuide(const TArray<FName> InNoviceTaskInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化新手引导

---

### Function `UpdateNoviceTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateNoviceTask(FCommonTaskInstance TaskInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新任务

---

### Function `CheckCurrentTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckCurrentTask(const FName& ConditionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查当前任务

---

### Function `BroadcastBeginnerGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) &Task |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastBeginnerGuide(const FCommonTaskInstance &Task);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 调用委托

---

### Function `CompleteAllBeginnerGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CompleteAllBeginnerGuide();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 完成所有新手引导任务

---

### Function `BroadcastCompleteBeginnerGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastCompleteBeginnerGuide();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 调用委托

---

### Function `GetNextNoviceTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCommonTaskInstance GetNextNoviceTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取下一个新手任务

---

### Function `CheckNoviceTaskComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckNoviceTaskComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新任务

---

### Function `CheckHaveGuideTaskComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveGuideTaskComplete(const FName TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddShownCoverTips`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddShownCoverTips(const FName& ConditionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入显示过遮罩Tips的条件

---

### Function `IsConditionFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |
| `RequiredID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsConditionFinished(ECommonTaskConditionType ConditionType , const FName& RequiredID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查条件是否完成

---

### Function `IsFinishedCurTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsFinishedCurTask() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查当前任务是否完成

---

### Function `GetConditionData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |
| `RequiredID` | `const FName&` |
| `ConditionData` | [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetConditionData(ECommonTaskConditionType ConditionType , const FName& RequiredID , FCommonTaskCondition& ConditionData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得条件数据

---

### Function `HasCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool HasCondition(ECommonTaskConditionType ConditionType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查当前新手引导是否有指定条件

---

### Function `IsConditionExist`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |
| `RequiredID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsConditionExist(ECommonTaskConditionType ConditionType , const FName& RequiredID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查指定条件是否存在

---

### Function `HasRequiredID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool HasRequiredID(const FName& ID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查当前新手引导是否有指定ID

---

### Function `GetConditionTypeByRequiredID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `ECommonTaskConditionType` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) ECommonTaskConditionType GetConditionTypeByRequiredID(const FName& ID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过指定ID获得条件类型

---

### Function `GetConditionByConditionType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |
| `TaskCondition` | [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetConditionByConditionType(ECommonTaskConditionType ConditionType , FCommonTaskCondition& TaskCondition) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过条件类型获得条件数据

---

### Function `NextDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void NextDialogue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 下一步对话

---

### Function `NextCoverTips`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void NextCoverTips();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 遮罩Tips下一步

---

### Function `CurrentTaskEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CurrentTaskEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前任务结束

---

### Function `CloseBeginnerGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | [ANewGameResourceSpawnerActor](../../Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CloseBeginnerGuide(ANewGameResourceSpawnerActor* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 关闭新手引导

---

### Function `AddUnlockID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `UnlockType` | `EBeginnerGuideUnlockType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddUnlockID(const FName& ID , EBeginnerGuideUnlockType UnlockType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入已解锁ID

---

### Function `UpdateGuideProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | `ECommonTaskConditionType` |
| `RequiredID` | `const FName&` |
| `0` | `int32 ExtraParam1 =` |
| `1` | `int32 Num =` |
| `false` | `bool CheckSubsequentTask =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateGuideProgress(ECommonTaskConditionType ConditionType , const FName& RequiredID , int32 ExtraParam1 = 0 , int32 Num = 1 , bool CheckSubsequentTask = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新新手引导进度

---
