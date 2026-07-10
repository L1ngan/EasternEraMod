# `class` `AERW_PlayerControllerBase`

**Source header:** `EastRimWorld/Framework/ERW_PlayerControllerBase.h`

---

## Functional description (from header comments)

> Base PlayerController class handling inventory resource management, item spawning, team character queries and main UI

## Blueprint-exposed variables

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**Notes:**

> Inventory manager component

---

### Property `OnInventoryItemInstanceDestroy`

| Field | Details |
|------|------|
| C++ type | `FOnInventoryItemInstance` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceDestroy;` |

**Notes:**

> ~End of IInventoryInterface interface
> 物品删除

---

### Property `OnInventoryItemInstanceAddition`

| Field | Details |
|------|------|
| C++ type | `FOnInventoryItemInstance` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceAddition;` |

**Notes:**

> 物品添加

---

### Property `OnInventoryItemInstanceUpdate`

| Field | Details |
|------|------|
| C++ type | `FOnInventoryItemInstance` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceUpdate;` |

**Notes:**

> 更新物品信息

---

### Property `OnPopupInfoUIChange`

| Field | Details |
|------|------|
| C++ type | `FOnPopupInfoUIChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPopupInfoUIChange OnPopupInfoUIChange;` |

**Notes:**

> 更新通用信息界面

---

### Property `OnCreateRobotDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnCreateRobotDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCreateRobotDelegate OnCreateRobotDelegate;` |

**Notes:**

> 创建机关人

---

### Property `OnDestoryRobotDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnDestoryRobotDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnDestoryRobotDelegate OnDestoryRobotDelegate;` |

**Notes:**

> 销毁机关人

---

### Property `OnItemUseStateChangeEvent`

| Field | Details |
|------|------|
| C++ type | `FOnItemUseStateChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnItemUseStateChange OnItemUseStateChangeEvent;` |

**Notes:**

> [自定义事件]当物品的使用状态改变

---

### Property `OnUnLockItemEvent`

| Field | Details |
|------|------|
| C++ type | `FOnUnLockItem` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUnLockItem OnUnLockItemEvent;` |

**Notes:**

> 解锁了物品(建筑菜单红点)

---

### Property `IsLeftShiftPressed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool IsLeftShiftPressed { false };` |

**Notes:**

> 左Shift键是否按下

---

### Property `SelectedCharacterTabIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 SelectedCharacterTabIndex = 0;` |

**Notes:**

> Index of the currently selected character tab

---

### Property `OnStartSettleAccountsDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnBattlefieldDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBattlefieldDelegate OnStartSettleAccountsDelegate;` |

**Notes:**

> 结算开始委托

---

### Property `OnAttackerMoveToWorldPlaceDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnBattlefieldDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBattlefieldDelegate OnAttackerMoveToWorldPlaceDelegate;` |

**Notes:**

> 攻击方已经到达战场

---

### Property `OnCharactersStartWanderDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnCharactersStartWanderDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCharactersStartWanderDelegate OnCharactersStartWanderDelegate;` |

**Notes:**

> 角色开始游荡

---

## Blueprint-exposed functions

### Function `K2_InitWorldPlayerController`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, DisplayName= "InitWorldPlayerController") void K2_InitWorldPlayerController();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint-implemented event for initializing the controller after entering the world

---

### Function `K2_InitPlayerControllerOnWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, DisplayName= "InitPlayerControllerOnWorldPlace") void K2_InitPlayerControllerOnWorldPlace();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint-implemented event for initializing the controller after entering a world place

---

### Function `RemoveUnlockItemTip`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UnlockItemId` | `FName` |
| `UnlockItemType` | [ETechUnlockItemType](../Struct/TechnologyStruct__ETechUnlockItemType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveUnlockItemTip(FName UnlockItemId, ETechUnlockItemType UnlockItemType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除解锁物品提示

---

### Function `FindUnlockItemTip`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UnlockItemId` | `FName` |
| `UnlockItemType` | [ETechUnlockItemType](../Struct/TechnologyStruct__ETechUnlockItemType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool FindUnlockItemTip(FName UnlockItemId, ETechUnlockItemType UnlockItemType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找解锁物品提示

---

### Function `ShowNotifyMessage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Text` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ShowNotifyMessage(const FText& Text);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 显示通知消息

---

### Function `GetNumberOfResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GroundInventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| `InGameplayTag` | `FGameplayTag` |
| `InResourceID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetNumberOfResources(EGroundInventoryType GroundInventoryType,FGameplayTag InGameplayTag,FName InResourceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取拥有的资源数量

---

### Function `GetAllOwendResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutResources` | TArray<[FItemNumData](../Struct/ItemStruct__FItemNumData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllOwendResources(TArray<FItemNumData>& OutResources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets all currently owned resources with their quantities

---

### Function `GetAllOwendResourcesTagMapInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutResources` | UPARAM(ref) TMap<FGameplayTag,[FItemNumData](../Struct/ItemStruct__FItemNumData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllOwendResourcesTagMapInfo(UPARAM(ref) TMap<FGameplayTag,FItemNumData>& OutResources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取拥有的所有资源按照TMap<FGameplayTag,FInventoryGeneralData>的方式

---

### Function `CheckHaveOwenResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResource` | `const TMap<FName,int> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveOwenResource(const TMap<FName,int> & InResource);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取是否拥有这些资源

---

### Function `CheckHaveFood`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveFood();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否拥有实物

---

### Function `GetCanConsumeResourcesNums`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResourcesIDs` | `const TArray<FName> &` |
| `OutNum` | `TMap<FName,int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCanConsumeResourcesNums(const TArray<FName> & InResourcesIDs,TMap<FName,int32>& OutNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> /获取当前可用于消耗的物资(排除正在使用和预留的物品)

---

### Function `CheckCanComsumeResourceEnough`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResource` | `const TMap<FName,int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanComsumeResourceEnough(const TMap<FName,int32>& InResource);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查可消耗物资是否足够

---

### Function `ConsumeResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResource` | `UPARAM(ref) TMap<FName,int32> &` |
| `true` | `bool bEnoughConsume =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ConsumeResources(UPARAM(ref) TMap<FName,int32> & InResource,bool bEnoughConsume = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> /消耗物资(例如城镇升级),返回失败不产生消耗(排除正在使用和预留的物品)
> //// @param bEnoughConsume 是否物品足够才消耗,设为false即使不够也会把能消耗的都消耗掉

---

### Function `GenerateAllTypeItemToWorldByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResourceID` | `FName` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| `(unnamed / type only)` | `float InRadius = 500.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByID(FName InResourceID, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel, EGroundInventoryType InventoryType,float InRadius = 500.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据ID生成物品

---

### Function `GenerateAllTypeItemToWorldByInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInfo` | `FInstancedStruct` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `(unnamed / type only)` | `float InRadius = 500.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByInfo(FInstancedStruct ItemInfo, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel,float InRadius = 500.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据数据生成物品

---

### Function `GenerateAllTypeItemToWorldByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `(unnamed / type only)` | `float InRadius = 500.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByInstance(UInventoryItemInstance* ItemInstance, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel,float InRadius = 500.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据实例生成物品

---

### Function `CheckAndGetSuitableLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FTransform` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRadius` | `float` |
| `InSpawnTransform` | `FTransform` |
| `InResourceID` | `FName` |
| `InResourceNumber` | `int&` |
| `nullptr` | `AActor* ActorToIgnore =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTransform CheckAndGetSuitableLocation(float InRadius , FTransform InSpawnTransform , FName InResourceID , int& InResourceNumber , AActor* ActorToIgnore = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断位置是否合适，不合适随机周边一个位置，并判断周围是否有相同的物品

---

### Function `TryMergeNormalItemIntoNearbyStacks`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `FName` |
| `ItemCount` | `int32` |
| `SampleLocation` | `const FVector&` |
| `Radius` | `float` |
| `nullptr` | `AActor* ActorToIgnore =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 TryMergeNormalItemIntoNearbyStacks(FName ItemID , int32 ItemCount , const FVector& SampleLocation , float Radius , AActor* ActorToIgnore = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在半径内查找地面 SingleItem 中与 ItemID 相同的堆叠并尽量合并（用于 NormalItem）；返回剩余未能合并的数量。

---

### Function `GenerateIDItemToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResourceID` | `FName` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryItemSet * GenerateIDItemToWorld(FName InResourceID,int InResourceNumber,FTransform InSpawnTransform,ULevel * CurLevel , EGroundInventoryType InventoryType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Spawns an item set into the world by resource ID and returns the created AInventoryItemSet

---

### Function `GenerateEquipmentToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentQualityRang` | const [FEquipmentQualityRange](../Struct/CommonStruct__FEquipmentQualityRange.md) & |
| `InEquipmentNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryItemSet * GenerateEquipmentToWorld(const FEquipmentQualityRange & EquipmentQualityRang,int InEquipmentNumber,FTransform InSpawnTransform,ULevel * CurLevel,const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> void GenerateEquipmentData(const FEquipmentQualityRange & EquipmentQualityRang,FString CharacterName = "");
> 根据配置生成一个物品到世界中

---

### Function `GenerateInfoItemToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInfo` | `FInstancedStruct` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `1` | `int InEquipmentNumber =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryItemSet* GenerateInfoItemToWorld(FInstancedStruct ItemInfo,FTransform InSpawnTransform,ULevel * CurLevel,int InEquipmentNumber = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据装备信息生成一个物品丢到世界中

---

### Function `DebugDrawAIVision`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AI` | class [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `128` | `int32 NumSamples =` |
| `(unnamed / type only)` | `float Duration = 0.15f` |
| `(unnamed / type only)` | `float ZLift = 50.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DebugDrawAIVision(class AEastRimWorldAIController* AI , int32 NumSamples = 128 , float Duration = 0.15f , float ZLift = 50.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 调试绘制AI视野

---

### Function `GenerateInstanceItemToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryItemSet* GenerateInstanceItemToWorld(UInventoryItemInstance* ItemInstance,FTransform InSpawnTransform,ULevel * CurLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据实例生成一个物品丢到世界中

---

### Function `GenerateItemSaveDateToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UseItemSaveData` | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| `InRadius` | `float` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateItemSaveDateToWorld(FUseItemSaveData UseItemSaveData,float InRadius , FTransform InSpawnTransform,ULevel * CurLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据存档信息生成物品到世界中

---

### Function `CheckHaveOwenResourceByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayTags` | `TArray<FGameplayTag>` |
| `InResourceNumber` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveOwenResourceByTag(TArray<FGameplayTag> GameplayTags,int InResourceNumber);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否拥有包含这些标签的资源

---

### Function `GetAllPlayerTeamCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllPlayerTeamCharacter(TArray<AEastRimWorldCharacter_Human*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有玩家队伍角色

---

### Function `GetPlayerTeamCharacterByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter_Human* GetPlayerTeamCharacterByGuid(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID获取玩家队伍中一个角色信息

---

### Function `GetCharacterByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `true` | `bool bPlayerTeam =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter_Human* GetCharacterByGuid(const FGuid& CharacterGuid, bool bPlayerTeam = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过Guid查询角色（可以不限制玩家）

---

### Function `GetAllRobotTeamCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllRobotTeamCharacter(TArray<AEastRimWorldCharacter_Summons*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有玩家队伍机关人角色

---

### Function `GetAllFightRobotTeamCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllFightRobotTeamCharacter(TArray<AEastRimWorldCharacter_Summons*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有玩家队伍战斗机关人角色

---

### Function `GetAllAnimaTeamCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Animal](../Character/EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllAnimaTeamCharacter(TArray<AEastRimWorldCharacter_Animal*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有玩家队伍动物

---

### Function `GetAllCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllCharacter(TArray<AEastRimWorldCharacter*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有角色(包括人物 动物 召唤物)

---

### Function `GetAllCharacter2`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllCharacter2(TArray<AEastRimWorldCharacter*>& OutCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets all characters (humans, animals, summons); alternate version of GetAllCharacter

---

### Function `GetGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionID` | `const FName&` |
| `ItemID` | `const FName&` |
| `GOAPAction` | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void GetGOAPAction(const FName& ActionID , const FName& ItemID , FGOAP_Action& GOAPAction);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> /////////////临时做法 后续更改获取这个配置的方式*******///////////////////////////

---

### Function `FindItemByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* FindItemByGuid(FGuid InGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Finds an inventory item instance by its GUID

---

### Function `CreateMainUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MainWidgetUI` | const TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void CreateMainUI(const TSoftClassPtr<UEastRimWorldActivatableWidget> & MainWidgetUI);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 创建主界面UI

---

### Function `HideAllUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bHide` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void HideAllUI(bool bHide);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置所有ui隐藏

---

### Function `GetInputEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool GetInputEnabled();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether player input is currently enabled

---

### Function `SetPlayMoviesMask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bShow` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPlayMoviesMask(bool bShow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Sets whether the movie-playing mask is shown (implemented in Blueprint)

---

### Function `SpawnBuildingFaultProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| `AbilityProjectileStruct` | `const FAbilityProjectileStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnBuildingFaultProjectile(ABuildingActorBase * BuildingActor,const FAbilityProjectileStruct & AbilityProjectileStruct);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成建筑物故障投射物

---

### Function `ShowMessageBox`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Title` | `const FText&` |
| `Message` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMessageBox(const FText& Title,const FText& Message);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Shows a message box with the given title and message (implemented in Blueprint)

---

### Function `TestPrintCurrentCameraName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Debug" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Debug") void TestPrintCurrentCameraName();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 测试：在日志中输出 PlayerCameraManager、GetViewTarget、GetViewTargetPawn 名称

---

### Function `OnHumanControlledChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Vision|Debug" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Human` | class [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `bControlled` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void OnHumanControlledChanged(class AEastRimWorldCharacter_Human* Human, bool bControlled);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 征召目标变化：用于统一管理唯一显示的视野扇形（仅在被征召者上显示）

---

### Function `BeginVisionBatch`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Vision|Debug" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void BeginVisionBatch();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 批量征召开始：进入批量模式（期间不显示任何扇形）

---

### Function `EndVisionBatch`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Vision|Debug" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void EndVisionBatch();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 批量征召结束：根据人数决定显示（==1 显示；否则隐藏）

---

### Function `NotifyVisionSelectionChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Vision|Debug" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void NotifyVisionSelectionChanged();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选中状态变化后通知：立即按“征召+选中+唯一”规则重算显示

---

### Function `WM_TargetDump`

| Field | Details |
|------|------|
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `); (BlueprintCallable` |
| `InPlace` | Category="WM") void WM_SetSelectedPlace(class [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(Exec) void WM_TargetDump(); UFUNCTION(BlueprintCallable, Category="WM") void WM_SetSelectedPlace(class AWorldPlace* InPlace);`

**Usage:** See pins and category for this node in the Blueprint editor.

**Notes:**

> WM Target Dump field.

---
