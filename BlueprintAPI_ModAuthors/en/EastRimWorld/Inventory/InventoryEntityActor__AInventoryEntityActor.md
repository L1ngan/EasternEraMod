# `class` `AInventoryEntityActor`

**Source header:** `EastRimWorld/Inventory/InventoryEntityActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `IsHarvest`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsHarvest { false };` |

**Source comments:**

> 是否是收割

---

### Property `BoxComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UBoxComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UBoxComponent> BoxComponent;` |

---

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

---

### Property `InventoryItemInstance`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInventoryItemInstance> InventoryItemInstance;` |

---

### Property `bSelectState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bSelectState;` |

**Source comments:**

> 是否是选中状态

---

### Property `bHoveringState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bHoveringState = false;` |

**Source comments:**

> 是否是悬浮状态

---

### Property `PlayerControllerBase`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_PlayerControllerBase](../Framework/ERW_PlayerControllerBase__AERW_PlayerControllerBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<AERW_PlayerControllerBase> PlayerControllerBase;` |

---

### Property `bAllowCPUAccess`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) bool bAllowCPUAccess = false;` |

---

### Property `CustomDepthStencilValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 CustomDepthStencilValue { 0 };` |

---

## Blueprint-exposed functions

### Function `OnSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void OnSaveData();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 当存档时

---

### Function `OnLoadData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void OnLoadData();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 当读档时

---

### Function `EntityActorDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EntityActorDestroy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `InitData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool LoadData =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitData(bool LoadData = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化数据

---

### Function `K2_InitEntityActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "InitEntityActor") void K2_InitEntityActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 初始化actor

---

### Function `K2_PlayEntityAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CollectActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "PlayEntityAnimation") void K2_PlayEntityAnimation(AActor * CollectActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 播放操作动画

---

### Function `K2_PlayDeathEntityAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CollectActor` | `AActor *` |
| `NextGorGrowStage` | `EGrowStageType` |
| `bDestroyCollect` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "PlayDeathEntityAnimation") void K2_PlayDeathEntityAnimation(AActor * CollectActor,EGrowStageType NextGorGrowStage,bool bDestroyCollect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 播放销毁的动画

---

### Function `K2_UpdateEntityActorScale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewScale` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "UpdateEntityActorScale") void K2_UpdateEntityActorScale(float InNewScale);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_UpdateEntityStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGrowStage` | `EGrowStageType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "UpdateEntityStage") void K2_UpdateEntityStage(EGrowStageType InGrowStage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_SetSelectEntityActorState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSelect` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetSelectEntityActorState") void K2_SetSelectEntityActorState(bool bSelect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_SetHoveringEntityActorState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bHovering` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetHoveringEntityActorState") void K2_SetHoveringEntityActorState(bool bHovering);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `InitSmartObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitSmartObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化智能对象

---

### Function `OnCollectOnce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Workload` | `int32` |
| `nullptr` | `AActor * CollectActor =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool OnCollectOnce(int32 Workload,AActor * CollectActor = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 采集动作完成一次

---

### Function `CollectionDone`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionID` | `const FName&` |
| `Outputs` | `TMap<FName , int32>&` |
| `nullptr` | `AActor * CollectActor =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectionDone(const FName& ActionID,TMap<FName , int32>& Outputs,AActor * CollectActor = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 采集完成

---

### Function `GetGOAPActionID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonButtonType` | `ECommonButtonType` |
| `ActionID` | `FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetGOAPActionID(ECommonButtonType CommonButtonType,FName& ActionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取GOAP Action ID

---

### Function `AddGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)& |
| `GOAPManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddGOAPAction(const FGOAP_Action& Action , UGOAP_ManagerComponent* GOAPManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入GOAP Action

---

### Function `RemoveGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `GOAPManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| `true` | `bool AbortAgent =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGOAPAction(const FName& GoalID , UGOAP_ManagerComponent* GOAPManagerComponent , bool AbortAgent = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除GOAP Action

---

### Function `SetOperationState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bOperation` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetOperationState(bool bOperation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置操作状态

---

### Function `RemoveGOAPActionByActionID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActionID` | `const FName&` |
| `GOAPManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGOAPActionByActionID(const FName& InActionID, UGOAP_ManagerComponent* GOAPManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ActionID移除GOAP Action

---
