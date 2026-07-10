# `class` `UGOAP_ManagerComponent`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> GOAP管理组件

## Blueprint-exposed variables

### Property `NormalActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FActionData](GOAP_ManagerComponent__FActionData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FName , FActionData> NormalActions;` |

**Notes:**

> 普通Action
> TMap<GOAP目标配置表ID , ActionData>

---

### Property `TransBuildingOwnerData`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FUObjectData](../ERW_CommonTypes__FUObjectData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FUObjectData , FUObjectData> TransBuildingOwnerData;` |

**Notes:**

> 移动建筑Action的OwnerData关联数据
> TMap<获得建筑Action的OwnerData , 移动建筑Action的OwnerData>

---

### Property `ItemActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FItemActions](GOAP_ManagerComponent__FItemActions.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName , FItemActions> ItemActions;` |

**Notes:**

> 物品相关的Action
> TMap<物品相关GOAP目标 , 物品对应的Action>

---

### Property `BatchActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FBatchData](GOAP_ManagerComponent__FBatchData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName , FBatchData> BatchActions;` |

**Notes:**

> 批量处理的Action
> TMap<GOAP目标配置表ID , 批量处理的数据>

---

### Property `PrioriBatchActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPrioriActionData](GOAP_ManagerComponent__FPrioriActionData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FPrioriActionData> PrioriBatchActions;` |

**Notes:**

> 优先考虑的批量Action
> TMap<GOAP目标配置表ID , 优先批量处理的数据>

---

### Property `PreActionData`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FPreActionData](GOAP_ManagerComponent__FPreActionData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData , FPreActionData> PreActionData;` |

**Notes:**

> 前置Action
> TMap<当前物体的数据 , 前置Action数据>

---

### Property `ConstructPreActionData`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FPreActionData](GOAP_ManagerComponent__FPreActionData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FPreActionData> ConstructPreActionData;` |

**Notes:**

> 建造Action相关的前置Action
> TMap<建造批次 , 前置Action数据>

---

### Property `SuspendGrowItems`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FOccupyObject](GOAP_ManagerComponent__FOccupyObject.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData , FOccupyObject> SuspendGrowItems;` |

**Notes:**

> 暂停生长的采集物
> TMap<采集物的数据 , 占据采集物的建筑数据>

---

### Property `PracticeActions`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FGOAP_Actions](GOAP_ManagerComponent__FGOAP_Actions.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FUObjectData , FGOAP_Actions> PracticeActions;` |

**Notes:**

> 修炼相关的Action

---

### Property `RemovedAfterCompleteGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FName> RemovedAfterCompleteGoals;` |

**Notes:**

> 完成后可以被移除的GOAP目标

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

**Notes:**

> Reference to the world place this component belongs to

---

### Property `OnActionAdded`

| Field | Details |
|------|------|
| C++ type | `FOnActionAdded` |
| Reflection specifiers | BlueprintReadWrite, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintReadWrite) FOnActionAdded OnActionAdded;` |

**Notes:**

> 当Action添加后广播

---

## Blueprint-exposed functions

### Function `RecoverLargeUserAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `ActionComponent` | [UGOAP_ActionComponent](GOAP_ActionComponent__UGOAP_ActionComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverLargeUserAction(const FGOAP_Action& Action , UGOAP_ActionComponent* ActionComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读档后恢复大数量用户的Action

---

### Function `AddSpecifiedItemAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddSpecifiedItemAction(AEastRimWorldAIController* Agent , UInventoryItemInstance* ItemInstance , const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入指定物品Action

---

### Function `RemoveSpecifiedItemAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemAction(AEastRimWorldAIController* Agent , UInventoryItemInstance* ItemInstance , const FName& GoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除指定物品Action

---

### Function `RemoveSpecifiedItemAllAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemAllAction(UInventoryItemInstance* ItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除指定物品所有相关的Action

---

### Function `AddTransBuildingOwnerData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromOwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `ToOwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTransBuildingOwnerData(const FUObjectData& FromOwnerData , const FUObjectData& ToOwnerData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入移动建筑OwnerData

---

### Function `RemoveTransBuildingOwnerData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromOwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTransBuildingOwnerData(const FUObjectData& FromOwnerData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除移动建筑OwnerData

---

### Function `GetTransBuildingOwnerData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromOwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `ToOwnerData` | [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetTransBuildingOwnerData(const FUObjectData& FromOwnerData , FUObjectData& ToOwnerData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得移动建筑OwnerData

---

### Function `AddAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAction(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加Action

---

### Function `RemoveAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAction(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除Action

---

### Function `GetBatchIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetBatchIndex(const FName& GoalID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得批次

---

### Function `AddRTreeNode`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRTreeNode(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入新节点到R树中

---

### Function `RemoveRTreeNode`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRTreeNode(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从R树中删除节点

---

### Function `RemoveSuspendGrowItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObjectData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveSuspendGrowItems(const FUObjectData& BuildObjectData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除暂停生长的采集物

---

### Function `UpdateActionActivity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Active` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateActionActivity(const FGOAP_Action& Action , bool Active);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新Action是否活跃

---

### Function `RemoveCompleteAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveCompleteAction(const FGOAP_Action& Action);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除已完成的Action

---

### Function `CheckCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Target` | `UObject*` |
| `MinCost` | `float` |
| `OwnerLocation` | `const FVector&` |
| `IsPathGoal` | `bool` |
| `Plans` | TArray<[FGOAP_Action](GOAP_Data__FGOAP_Action.md)>& |
| `NAME_None` | `FName SpecifiedGoal =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CheckCondition(const FGOAP_Action& Action , AEastRimWorldAIController* Agent , UObject* Target , float MinCost , const FVector& OwnerLocation , bool IsPathGoal , TArray<FGOAP_Action>& Plans,FName SpecifiedGoal = NAME_None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查条件是否满足

---

### Function `IsPracticeGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool IsPracticeGoal(const FName& GoalID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether the given GOAP goal is a practice-type goal

---

### Function `CheckSpecifiedItemAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckSpecifiedItemAction(UInventoryItemInstance* ItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查指定物品Action是否存在

---

### Function `CheckHaveCharacterGetEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveCharacterGetEquipment(AEastRimWorldAIController* Agent , EEquipmentType EquipmentType , EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否正在获取某个部位的装备

---

### Function `GetIsGettingEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* GetIsGettingEquipment(AEastRimWorldAIController* Agent , EEquipmentType EquipmentType , EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取正在获取的某个装备

---
