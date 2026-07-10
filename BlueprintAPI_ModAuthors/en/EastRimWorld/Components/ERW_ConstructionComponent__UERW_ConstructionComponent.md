# `class` `UERW_ConstructionComponent`

**Source header:** `EastRimWorld/Components/ERW_ConstructionComponent.h`

---

## Functional description (from header comments)

> 建造组件

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid SGUID = FGuid();` |

**Notes:**

> ~ Save

---

### Property `Batch`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 Batch { INDEX_NONE };` |

**Notes:**

> Action所在批次

---

### Property `IsPullDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool IsPullDown { false };` |

**Notes:**

> 是否是拆除建筑

---

### Property `IsPriori`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool IsPriori { false };` |

**Notes:**

> 是否加入优先执行

---

### Property `TransBuildingType`

| Field | Details |
|------|------|
| C++ type | [ETransBuildingType](../ERW_Enumerations__ETransBuildingType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) ETransBuildingType TransBuildingType { ETransBuildingType::None };` |

**Notes:**

> 移动建筑类型

---

### Property `WorkType`

| Field | Details |
|------|------|
| C++ type | [EConstructionWorkType](ERW_ConstructionComponent__EConstructionWorkType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EConstructionWorkType WorkType { EConstructionWorkType::Construction };` |

**Notes:**

> Current construction work type (construction or building repair)

---

### Property `RebuiltID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName RebuiltID;` |

**Notes:**

> 重建后的建筑ID

---

### Property `NeedResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> NeedResources;` |

**Notes:**

> 建造所需资源
> TMap<资源ID , 数量>

---

### Property `CurrentResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> CurrentResources;` |

**Notes:**

> 当前拥有资源
> TMap<资源ID , 数量>

---

### Property `MaxWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 MaxWorkload { 0 };` |

**Notes:**

> 完成建造需要工作量

---

### Property `CurrentWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CurrentWorkload { 0 };` |

**Notes:**

> 当前接收工作量

---

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> Actions;` |

**Notes:**

> 建造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### Property `ConstructAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGOAP_Action ConstructAction;` |

**Notes:**

> 建造Action

---

### Property `GetBuildingAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGOAP_Action GetBuildingAction;` |

**Notes:**

> 获得建筑Action

---

### Property `TransferAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGOAP_Action TransferAction;` |

**Notes:**

> 迁移Action

---

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FUObjectData OwnerData;` |

**Notes:**

> Owner的数据

---

### Property `OnAddResourceChange`

| Field | Details |
|------|------|
| C++ type | `FOnAddResourceChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnAddResourceChange OnAddResourceChange;` |

**Notes:**

> 通知建造资源变化（id+最新的数量）

---

### Property `OnWorkloadChange`

| Field | Details |
|------|------|
| C++ type | `FOnWorkloadChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorkloadChange OnWorkloadChange;` |

**Notes:**

> 通知工作量发生改变

---

## Blueprint-exposed functions

### Function `InitResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |
| `Workload` | `int32` |
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `LayerNum` | `int32` |
| `ExtraConsume` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitResources(const TMap<FName , int32>& Resources , int32 Workload , AGOAP_ActorBase* BuildObject , int32 LayerNum , float ExtraConsume);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化所需资源

---

### Function `CreateConstructionGOAP`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBatch` | `int32` |
| `false` | `bool FromLoading =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateConstructionGOAP(int32 InBatch , bool FromLoading = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建建造GOAP

---

### Function `CreateGetBuildingAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool FromLoading =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateGetBuildingAction(bool FromLoading = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建获得建筑Action

---

### Function `RemoveGetBuildingAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGetBuildingAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除获得建筑Action

---

### Function `CreateTransferAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool FromLoading =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateTransferAction(bool FromLoading = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建移动建筑Action

---

### Function `RemoveTransferAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTransferAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除移动建筑Action

---

### Function `GetCarryItemNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetCarryItemNum(const FName& ItemID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得搬运物品数量

---

### Function `OnAddResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnAddResources(const TMap<FName , int32>& Resources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 有人提交建造资源时

---

### Function `HasEnoughPlayerResourcesForRemaining`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Construction" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Construction") bool HasEnoughPlayerResourcesForRemaining() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 玩家背包是否满足剩余建材缺口

---

### Function `OnReceiveWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Workload` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool OnReceiveWorkload(AEastRimWorldAIController* Agent , int32 Workload);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 接收工作量

---

### Function `ResetWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Workload` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetWorkload(const int32& Workload);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重置工作量

---

### Function `OnReceivePullDowWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Workload` | `const int32&` |
| `OutPercent` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool OnReceivePullDowWorkload(const int32& Workload,float& OutPercent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拆除工作

---

### Function `RemoveConstructionGOAP`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveConstructionGOAP();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除建造GOAP

---

### Function `AddToPrioriBatchActions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddToPrioriBatchActions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将所有建造相关的Action加入优先Action中

---

### Function `RemoveFromPrioriBatchActions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveFromPrioriBatchActions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将所有建造相关的Action从优先Action中移除

---
