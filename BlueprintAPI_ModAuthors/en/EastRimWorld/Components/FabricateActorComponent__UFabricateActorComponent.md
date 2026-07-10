# `class` `UFabricateActorComponent`

**Source header:** `EastRimWorld/Components/FabricateActorComponent.h`

---

## Functional description (from header comments)

> Fabricate component managing a building's fabricate task queue, resource GOAP actions and fabricated item generation

## Blueprint-exposed variables

### Property `FabricateTaskQueue`

| Field | Details |
|------|------|
| C++ type | TArray<[FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FFabricateTaskData> FabricateTaskQueue;` |

**Notes:**

> 当前任务的制造队列

---

### Property `CurFabricateTaskGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid CurFabricateTaskGuid;` |

**Notes:**

> 当前制造任务信息

---

### Property `CorrelationID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CorrelationID;` |

**Notes:**

> 此组件相关联的数据ID 例如建筑物ID

---

### Property `OnAddFabricateTaskQueue`

| Field | Details |
|------|------|
| C++ type | `FOnFabricateTaskQueueChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnAddFabricateTaskQueue;` |

**Notes:**

> 添加制造队列委托

---

### Property `OnRemoveFabricateTaskQueue`

| Field | Details |
|------|------|
| C++ type | `FOnFabricateTaskQueueChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnRemoveFabricateTaskQueue;` |

**Notes:**

> 移除制造队列委托

---

### Property `OnUpdateFabricateTask`

| Field | Details |
|------|------|
| C++ type | `FOnFabricateTaskQueueChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnUpdateFabricateTask;` |

**Notes:**

> 制造任务更新

---

### Property `OnUpdateAllFabricateTask`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateAllFabricateTask` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateAllFabricateTask OnUpdateAllFabricateTask;` |

**Notes:**

> 刷新整个任务

---

### Property `Owner`

| Field | Details |
|------|------|
| C++ type | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) ABuildingActorBase * Owner { nullptr };` |

**Notes:**

> Owner

---

### Property `GOAPManagerComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UGOAP_ManagerComponent* GOAPManagerComponent { nullptr };` |

**Notes:**

> GOAP管理组件

---

### Property `ResourceActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> ResourceActions;` |

**Notes:**

> 制造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### Property `SelectableResourceAction`

| Field | Details |
|------|------|
| C++ type | TMap<FGameplayTag , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGameplayTag , FGOAP_Action> SelectableResourceAction;` |

**Notes:**

> 可选资源对应的GOAPAction
> TMap<Tag , GOAPAction>

---

### Property `FabricateAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGOAP_Action FabricateAction;` |

**Notes:**

> 制造GOAPAction

---

### Property `WaitingGenerateItem`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool WaitingGenerateItem { false };` |

**Notes:**

> 是否在等待生成制造物品

---

### Property `bAutoFabricate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bAutoFabricate = false;` |

**Notes:**

> 是否是自动制造

---

## Blueprint-exposed functions

### Function `InitFabricateActorComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCorrelationID` | `FName` |
| `OwnerBuilding` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitFabricateActorComponent(FName InCorrelationID,ABuildingActorBase * OwnerBuilding);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化制造组件

---

### Function `AddFabricateToQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFormulaData` | const [FFormulaData](../Struct/CommonStruct__FFormulaData.md)& |
| `InSelectableConsumingResourceTag` | `const TArray<FGameplayTag> &` |
| `InFabricateRule` | [EFabricateRule](../Struct/CommonStruct__EFabricateRule.md) |
| `InTargetNumber` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddFabricateToQueue(const FFormulaData& InFormulaData, const TArray<FGameplayTag> & InSelectableConsumingResourceTag,EFabricateRule InFabricateRule, int InTargetNumber);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加制造任务

---

### Function `RemoveFabricateToQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRemoveGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveFabricateToQueue(const FGuid& InRemoveGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除一个制造任务

---

### Function `RemoveAllFabricateToQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAllFabricateToQueue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除所有的订单

---

### Function `SetFabricateQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateGuid` | `const FGuid&` |
| `NewQueueIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetFabricateQueue(const FGuid& InFabricateGuid, int NewQueueIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置制造任务的优先级

---

### Function `GetCurFabricateTaskData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FFabricateTaskData& GetCurFabricateTaskData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前执行的任务

---

### Function `AddWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorkload` | `float` |
| `InQualityValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddWorkload(float InWorkload, float InQualityValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加任务的工作量

---

### Function `CheckCurFabricateTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FabricateTaskData` | UPARAM(ref)[FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCurFabricateTask(UPARAM(ref)FFabricateTaskData& FabricateTaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查当前制造任务是否完成

---

### Function `TryGenerateItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TryGenerateItem(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试生成制造物品

---

### Function `SetCurFabricateTaskState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewFabricateState` | [EFabricateState](../Struct/CommonStruct__EFabricateState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCurFabricateTaskState(EFabricateState NewFabricateState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置当前任务的状态

---

### Function `GetAllFabricates`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FFormulaData](../Struct/CommonStruct__FFormulaData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ButtonType` | [ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FFormulaData> GetAllFabricates(ECommonButtonType ButtonType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有相关联已经解锁的配方

---

### Function `GenerateFabricateItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateFabricateItem(const FFabricateTaskData& InFabricateTaskData,const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成配方物品

---

### Function `CharactersEnterStartFabricate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharactersEnterStartFabricate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 人物进入开始制造

---

### Function `CharactersBreakOffFabricate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharactersBreakOffFabricate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 人物中断制造

---

### Function `CharactersManufacturingCompleted`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharactersManufacturingCompleted();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 人物制造完成

---

### Function `AddResourceToFabricateTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FName, int>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAddResource` | `const TMap<FName, int>&` |
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName, int> AddResourceToFabricateTask(const TMap<FName, int>& InAddResource , const FGameplayTag& Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加资源

---

### Function `SetFabricateTaskNewInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetFabricateTaskNewInfo(const FFabricateTaskData& InFabricateTaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置任务新的信息

---

### Function `FortifyFabricateTaskSequence`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FortifyFabricateTaskSequence(const FFabricateTaskData& InFabricateTaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 提高制造任务的顺序

---

### Function `ReduceFabricateTaskSequence`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReduceFabricateTaskSequence(const FFabricateTaskData& InFabricateTaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 降低制造任务的顺序

---

### Function `FindFabricateTaskData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFabricateGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FFabricateTaskData FindFabricateTaskData(const FGuid& InFabricateGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找制造队列中的任务

---

### Function `UpdateFabricateTaskState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFabricateTaskState(UInventoryItemInstance * InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Updates the state of the fabricate task

---

### Function `AddFabricateGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddFabricateGOAPAction(const FFabricateTaskData& FabricateTaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入制造GOAP Action

---

### Function `RemoveFabricateGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldAIController*> RemoveFabricateGOAPAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除制造GOAP Action

---

### Function `StopFabricateTaskRemoveAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopFabricateTaskRemoveAction(const FFabricateTaskData& TaskData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 停止制造并移除action

---

### Function `GetAlreadyAddResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FName, int>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName, int> GetAlreadyAddResource();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取已经添加进来的物资

---

### Function `AddAutoFabricateGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FabricateTaskData` | const [FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)& |
| `bStartAutoFabricate` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAutoFabricateGOAPAction(const FFabricateTaskData& FabricateTaskData , bool bStartAutoFabricate);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入自动制造GOAP Action

---

### Function `AutoFabricateOpenComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AutoFabricateOpenComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 自动制造开启完成

---

### Function `AutoFabricateWorkComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AutoFabricateWorkComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 自动制造工作完成

---
