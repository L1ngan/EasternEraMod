# `class` `UInventoryManagerComponent`

**Source header:** `EastRimWorld/Inventory/InventoryManagerComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `UseItemSaveData`

| Field | Details |
|------|------|
| C++ type | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**Source comments:**

> 存档时临时复制 存档结束后删除

---

### Property `CollectSaveDataMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FCollectSaveDataList](../Struct/ItemStruct__FCollectSaveDataList.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TMap<FName,FCollectSaveDataList> CollectSaveDataMap;` |

---

### Property `FarmlandPlantSaveDataMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FFarmlandPlantSaveDataList](../Struct/ItemStruct__FFarmlandPlantSaveDataList.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TMap<FName,FFarmlandPlantSaveDataList> FarmlandPlantSaveDataMap;` |

---

### Property `InventoryItemNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) int InventoryItemNumber = 0;` |

---

### Property `CharacterBackpackSlotNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere , Blueprintable) int32 CharacterBackpackSlotNum;` |

---

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid , UInventoryItemInstance*> ItemData;` |

**Source comments:**

> Guid对应的物品实例

---

### Property `InventoryItemSetType`

| Field | Details |
|------|------|
| C++ type | `EInventoryItemSetType` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryManagerComponent|Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryManagerComponent|Inventory", Meta = (AllowPrivateAccess = "true"),SaveGame) EInventoryItemSetType InventoryItemSetType = EInventoryItemSetType::None;` |

**Source comments:**

> 此组件的拥有者的库存类型

---

### Property `NotPutInItemTagContainer`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGameplayTagContainer NotPutInItemTagContainer;` |

**Source comments:**

> 不可放入的类型

---

### Property `StoragePriority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) int32 StoragePriority;` |

**Source comments:**

> 仓库存储优先级

---

### Property `TradeAreaEndGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGridPosition TradeAreaEndGridPos;` |

**Source comments:**

> UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame)
> FGridPosition TradeAreaStartGridPos;

---

### Property `TradeAreaStartPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaStartPos;` |

---

### Property `TradeAreaEndPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaEndPos;` |

---

### Property `TradeAreaThirdPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaThirdPos;` |

---

### Property `TradeAreaCurGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGridPosition TradeAreaCurGridPos;` |

---

### Property `ItemActions`

| Field | Details |
|------|------|
| C++ type | TMap<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* , [UGOAP_ActionComponent](../GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TMap<UInventoryItemInstance* , UGOAP_ActionComponent*> ItemActions;` |

**Source comments:**

> 物品对应的GOAP Action
> TMap<物品数据 , GOAP Action组件>

---

### Property `ItemMemories`

| Field | Details |
|------|------|
| C++ type | TMap<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* , [UGOAP_MemoryComponent](../GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TMap<UInventoryItemInstance* , UGOAP_MemoryComponent*> ItemMemories;` |

**Source comments:**

> 物品对应的GOAP记忆
> TMap<物品数据 , GOAP记忆组件>

---

## Blueprint-exposed functions

### Function `DynamicAddInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UInstancedStaticMeshComponent *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInventoryItemInfo` | `const FInstancedStruct &` |
| `InstanceTransform` | `const FTransform &` |
| `OutIndex` | `int &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInstancedStaticMeshComponent * DynamicAddInstance(const FInstancedStruct & InInventoryItemInfo,const FTransform & InstanceTransform,int & OutIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加实例

---

### Function `GetItemNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetItemNum(FName ItemId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 查询物品的数量(不是总数，找到的第一堆物品的数量)

---

### Function `GetItemTotalNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetItemTotalNum(FName ItemId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 查询玩家拥有的某个物品的总数量

---

### Function `GetItemNumNotEquiped`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetItemNumNotEquiped(FName ItemId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 查询物品的数量(排除装备在身上的)

---

### Function `GetItemNumByItemState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `FName` |
| `InUseState` | `EItemUseState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetItemNumByItemState(FName ItemId,EItemUseState InUseState);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取对应状态的物品数量

---

### Function `GetItemInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) UInventoryItemInstance * GetItemInstance(FName ItemId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取对应id的物品实例

---

### Function `CreateCanUseInventoryItemInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="InventoryItemInstance" |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `InCollectItem` | `const FInstancedStruct&` |
| `InItemTransform` | `const FTransform &` |
| `InItemCount` | `const int32` |
| `(unnamed / type only)` | `EInventoryItemStateType InInventoryItemStateType = EInventoryItemStateType::Collected` |
| `nullptr` | `UObject * InManifestationObject =` |
| `(unnamed / type only)` | `const int32 InInstanceIndex = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "InventoryItemInstance") static UInventoryItemInstance * CreateCanUseInventoryItemInstance(UInventoryManagerComponent * InInventoryManagerComponent,const FInstancedStruct& InCollectItem,const FTransform & InItemTransform,const int32 InItemCount,EInventoryItemStateType InInventoryItemStateType = EInventoryItemStateType::Collected,UObject * InManifestationObject = nullptr,const int32 InInstanceIndex = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ~End of IInventoryInterface interface
> 创建一个物品实例到指定管理器

---

### Function `GetAllCanUseItemSimpleData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllCanUseItemSimpleData(TMap<FName,FItemSimpleData>& OutData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetAllItemsData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TArray<[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllItemsData(TArray<FTravelerGoodsInfo> & OutData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有物品的简单数据（不区分使用状态）

---

### Function `GetAllTradeGoodData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |
| `InUseState` | `EItemUseState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllTradeGoodData(TMap<FName,FTravelerGoodsInfo>& OutData,EItemUseState InUseState);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetUseItemSaveDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `FName` |
| `NeedNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FUseItemSaveData> GetUseItemSaveDataByID(FName InItemID , int32 NeedNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID拿指定数量的物品

---

### Function `GetAllInventoryItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> & |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TArray<UInventoryItemInstance*> & GetAllInventoryItems();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取此组件管理的所有实例

---

### Function `InitInventoryData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInventoryItemSetType` | `EInventoryItemSetType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitInventoryData(EInventoryItemSetType InInventoryItemSetType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化数据

---

### Function `GetCanPlaceItemNumberByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewInventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetCanPlaceItemNumberByInstance(UInventoryItemInstance * NewInventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以放置下此实例的数量

---

### Function `GetCanPlaceItemNumberByItemID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `FName` |
| `InNumber` | `int` |
| `GroundInventoryType` | `EGroundInventoryType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetCanPlaceItemNumberByItemID(FName InItemID,int InNumber,EGroundInventoryType GroundInventoryType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以放置下此ID物品的数量

---

### Function `GetCanUseGridNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BLueprintCallable,BlueprintPure) int32 GetCanUseGridNum();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `TakeOutInventoryItemInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * TakeOutInventoryItemInstance(const FName ItemID,int32 InItemCount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取对应数量的物品实例 取用仓库物品使用 InventoryItemInstanceTransferToOtherManager方法 (注意此时，物品仍然在原管理组件中，需操作返回的实例对象重新添加到另外的管理组件)

---

### Function `TakeOutInventoryItemInstanceByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| `InItemCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * TakeOutInventoryItemInstanceByInstance(UInventoryItemInstance * InItemInstance,int32 InItemCount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `InventoryItemInstanceTransferToOtherManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * InventoryItemInstanceTransferToOtherManager(UInventoryManagerComponent * OtherManagerComponent,const FName ItemID,int32 InItemCount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 转移对应数量的物品放入到另一个管理组件中 返回实际转移的实例 如果没有则为空

---

### Function `RemoveInventoryItemInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveInventoryItemInstance(const FName ItemID,int32 InItemCount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除对应数量的物品

---

### Function `ConsumeInventoryItemInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItems` | `UPARAM(ref) TMap<FName,int32> &` |
| `true` | `bool bEnoughConsume =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ConsumeInventoryItemInstance(UPARAM(ref) TMap<FName,int32> & InItems,bool bEnoughConsume = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> /消耗物品
> / @param bEnoughConsume 是否物品足够才消耗

---

### Function `GetInventoryItemByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemType` | `EGroundInventoryType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetInventoryItemByType(EGroundInventoryType ItemType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> / 按类型获取装备数组
> / @param ItemType 物品类型
> / @return

---

### Function `GetMartialArtsBookInstancesItemByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MajorCate` | `EMartialArtsMajorCategories` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetMartialArtsBookInstancesItemByType(EMartialArtsMajorCategories MajorCate);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> / 按类型获取武学书籍数组
> / @param MajorCate 武学大类（None表示查询全部）
> / @return

---

### Function `GetBookInfoDataByBookType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookType` | `EBookClassificationType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetBookInfoDataByBookType(EBookClassificationType BookType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> / 按书籍类型查询书籍信息
> / @param BookType
> / @return

---

### Function `GetFoodDataByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FoodType` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetFoodDataByType(int32 FoodType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 按类型获取食物数据

---

### Function `GetEquItemInstancesItemByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemType1` | `EEquipmentType` |
| `ArmorType2` | `EArmorType` |
| `UseState` | `EItemUseState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetEquItemInstancesItemByType(EEquipmentType ItemType1,EArmorType ArmorType2,EItemUseState UseState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> / 按类型获取装备和武器数组
> / @param ItemType 物品类型
> / @return

---

### Function `GetEquItemInstancesItemByType2`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemType1` | `EEquipmentType` |
| `ArmorType2` | `EArmorType` |
| `CharInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetEquItemInstancesItemByType2(EEquipmentType ItemType1,EArmorType ArmorType2,UInventoryManagerComponent* CharInventoryManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> / 查询未使用的装备和自己的装备
> / @param ItemType1 大类型
> / @param ArmorType2 小类型
> / @param CharInventoryManagerComponent 角色的物品管理组件
> / @return

---

### Function `GetPuppetEquipmentInstancesByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipType` | `EEquipmentType` |
| `ArmorType` | `EArmorType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetPuppetEquipmentInstancesByType(EEquipmentType EquipType,EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询傀儡装备

---

### Function `GetAllSmallGrid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TArray<FWarehouseSmallGrid>& GetAllSmallGrid();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddItemBySimpleData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FInstancedStruct>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResources` | const TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FInstancedStruct> AddItemBySimpleData(const TMap<FName, FItemSimpleData>& InResources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加物品通过简单的信息

---
