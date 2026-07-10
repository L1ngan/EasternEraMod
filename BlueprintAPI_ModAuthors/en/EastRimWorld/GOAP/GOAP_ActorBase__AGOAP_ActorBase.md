# `class` `AGOAP_ActorBase`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> GOAP Actor的基类

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame,EditAnywhere) FGuid SGUID = FGuid();` |

**Notes:**

> ----------------------------- SaveGame -----------------------------

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

**Notes:**

> ----------------------------- SaveGame -----------------------------

---

### Property `GameMode`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_GameModeBase> GameMode;` |

**Notes:**

> Cached reference to the game mode (AERW_GameModeBase)

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `USceneComponent*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere , BlueprintReadOnly) USceneComponent* SceneComponent { nullptr };` |

**Notes:**

> 根组件

---

### Property `HISMManager`

| Field | Details |
|------|------|
| C++ type | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UERW_HISMManager* HISMManager { nullptr };` |

**Notes:**

> HISMManager

---

### Property `ConstructionComponent`

| Field | Details |
|------|------|
| C++ type | [UERW_ConstructionComponent](../Components/ERW_ConstructionComponent__UERW_ConstructionComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_ConstructionComponent* ConstructionComponent { nullptr };` |

**Notes:**

> 建造组件

---

### Property `GOAP_ActionComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_ActionComponent](GOAP_ActionComponent__UGOAP_ActionComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ActionComponent* GOAP_ActionComponent { nullptr };` |

**Notes:**

> GOAP行动组件

---

### Property `GOAP_MemoryComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_MemoryComponent](GOAP_MemoryComponent__UGOAP_MemoryComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_MemoryComponent* GOAP_MemoryComponent { nullptr };` |

**Notes:**

> GOAP记忆组件

---

### Property `DoorCollisionComponent`

| Field | Details |
|------|------|
| C++ type | [UERW_DoorCollisionComponent](../Components/ERW_DoorCollisionComponent__UERW_DoorCollisionComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_DoorCollisionComponent* DoorCollisionComponent { nullptr };` |

**Notes:**

> 门碰撞管理组件

---

### Property `SmartObjectComponent`

| Field | Details |
|------|------|
| C++ type | `USmartObjectComponent*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) USmartObjectComponent* SmartObjectComponent { nullptr };` |

**Notes:**

> 智能对象组件

---

### Property `ObjectID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FName ObjectID;` |

**Notes:**

> 物体的ID

---

### Property `OldObjectID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FName OldObjectID;` |

**Notes:**

> 重建前的物体ID

---

### Property `Selected`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool Selected { false };` |

**Notes:**

> 是否选中

---

### Property `Hovered`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool Hovered { false };` |

**Notes:**

> 是否被鼠标指中

---

### Property `IsInMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsInMap { false };` |

**Notes:**

> 是否放置在地图中

---

### Property `IsDestroyed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsDestroyed { false };` |

**Notes:**

> 是否销毁

---

### Property `bBuildComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) bool bBuildComplete = false;` |

**Notes:**

> 是否建造完成

---

### Property `SlotHandle`

| Field | Details |
|------|------|
| C++ type | `FSmartObjectSlotHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FSmartObjectSlotHandle SlotHandle;` |

**Notes:**

> 选中的智能对象插槽

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,VisibleAnywhere) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Notes:**

> 相关按钮的状态 是否选中

---

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**Notes:**

> 库存组件 当此actor可以储存物品时生成

---

### Property `FabricateActorComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFabricateActorComponent](../Components/FabricateActorComponent__UFabricateActorComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UFabricateActorComponent> FabricateActorComponent;` |

**Notes:**

> 制造组件 当此actor可制造物品时生成

---

### Property `TreasureComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UTreasureComponent](../Components/TreasureComponent__UTreasureComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UTreasureComponent> TreasureComponent;` |

**Notes:**

> 珍宝阁组件 当此actor是珍宝阁时生成

---

### Property `TradeAreaComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UTradeAreaComponent](../Components/TradeAreaComponent__UTradeAreaComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UTradeAreaComponent> TradeAreaComponent;` |

**Notes:**

> Trade area component

---

## Blueprint-exposed functions

### Function `GetFuelData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FuelData` | [FFuelData](GOAP_ActorBase__FFuelData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetFuelData(FFuelData& FuelData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the fuel-related data

---

### Function `GetEnergyData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnergyData` | [FEnergyData](GOAP_ActorBase__FEnergyData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetEnergyData(FEnergyData& EnergyData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the energy-related data

---

### Function `GetCeremonyData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CeremonyData` | [FCeremonyData](GOAP_ActorBase__FCeremonyData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetCeremonyData(FCeremonyData& CeremonyData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the ceremony-related data

---

### Function `GetPuppetData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetData` | [FPuppetData](GOAP_ActorBase__FPuppetData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetPuppetData(FPuppetData& PuppetData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the puppet-related data

---

### Function `GetFacilityBelongData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FacilityBelongData` | TArray<[FFacilityBelongData](GOAP_ActorBase__FFacilityBelongData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetFacilityBelongData(TArray<FFacilityBelongData>& FacilityBelongData) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the list of facility ownership data

---

### Function `GetAutoOutputWorkloadTimerID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetAutoOutputWorkloadTimerID() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the timer ID used for automatic workload output

---

### Function `GetEnvironSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironSaveData` | [FEnvironSaveData](../Components/ERW_EnvironComponent__FEnvironSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetEnvironSaveData(FEnvironSaveData& EnvironSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the environment save data; returns true if present

---

### Function `GetHeatSourceData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `HeatSourceData` | [FHeatSourceData](GOAP_ActorBase__FHeatSourceData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool GetHeatSourceData(FHeatSourceData& HeatSourceData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the heat source data; returns true if present

---

### Function `GetAreaData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAreaData` | [FAreaBuildingData](../System/AreaControl/AreaControlTypes__FAreaBuildingData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAreaData(FAreaBuildingData& OutAreaData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the building's area data (FAreaBuildingData); returns true if present

---

### Function `NeedSaveObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintNativeEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent) bool NeedSaveObject() const;`

**Usage:** **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> Returns whether this object needs to be saved

---

### Function `GetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGenericTeamId` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> ~IEastRimWorldTeamAgentInterface interface

---

### Function `SetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the actor's generic team ID

---

### Function `OnLoadFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnLoadFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 加载完成

---

### Function `UpdateFillersOnLoading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateFillersOnLoading();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 读档时重新更新填充模型

---

### Function `SetHISMManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetHISMManager();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置HISMManager

---

### Function `IsRebuilt`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsRebuilt() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否是重建建筑

---

### Function `InitBuildObjectInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RotateOrientation` | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| `BuildID` | `const FName&` |
| `TeamId` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void InitBuildObjectInfo(ERotateOrientation RotateOrientation , const FName& BuildID , const FGenericTeamId& TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 初始化建筑信息

---

### Function `CreateConstructionComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateConstructionComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建建造组件

---

### Function `DestroyConstructionComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestroyConstructionComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 销毁建造组件

---

### Function `OnActorDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void OnActorDestroy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 当Actor销毁时

---

### Function `SetNearestSlotHandle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNearestSlotHandle(AEastRimWorldAIController* Agent , const FGameplayTag& Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置最近的智能对象槽位

---

### Function `OnAddConstructionResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnAddConstructionResource(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 当有人来放置建造资源时

---

### Function `GetGoalID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) void GetGoalID(FName& GoalID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Gets the GOAP goal ID associated with this actor (Blueprint-implemented)

---

### Function `InitInventoryManagerComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | [EInventoryItemSetType](../Struct/ItemStruct__EInventoryItemSetType.md) InInventoryItemSetType = [EInventoryItemSetType](../Struct/ItemStruct__EInventoryItemSetType.md)::Warehouse |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitInventoryManagerComponent(EInventoryItemSetType InInventoryItemSetType = EInventoryItemSetType::Warehouse);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当建筑物是仓库类型时初始化库存组件

---

### Function `InitFabricateActorComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void InitFabricateActorComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当建筑物为制造建筑物时初始化制造组件

---

### Function `InitTreasureComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void InitTreasureComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当建筑物为珍宝阁时初始化珍宝阁组件

---

### Function `InitTradeAreaComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void InitTradeAreaComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Initializes the trade area component

---

### Function `GetBuildOpenWidgetID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `FName` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent ,BlueprintPure) FName GetBuildOpenWidgetID() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获取建造物品点击后创建的界面id

---

### Function `GetBuildingName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FText GetBuildingName(){return K2_GetBuildingName();}`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取建造物品的名字

---

### Function `K2_GetBuildingName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="GetBuildingName") FText K2_GetBuildingName();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Gets the building's display name (Blueprint-implemented)

---

### Function `CreateDoorCollisionComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateDoorCollisionComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建门碰撞管理组件

---

### Function `RecoverDoorCollision`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaveData` | const [FDoorCollisionSaveData](../Components/ERW_DoorCollisionComponent__FDoorCollisionSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void RecoverDoorCollision(const FDoorCollisionSaveData& SaveData);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 读档恢复门碰撞

---

### Function `GetDoorAnimPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) float GetDoorAnimPosition() const;`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获得门动画播放位置

---

### Function `OnNativeBuildingComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md) &BuildConfigData |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void OnNativeBuildingComplete(const FBuildConfigData &BuildConfigData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑物建造成功

---

### Function `OnNativeInitConstruction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildConfigData` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void OnNativeInitConstruction(const FBuildConfigData& BuildConfigData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Initializes the construction state from the given build config data

---

### Function `SetBuildObjectInstanceVisible`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bVisible` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetBuildObjectInstanceVisible(bool bVisible);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 隐藏建筑物模型

---

### Function `K2_SetBuildObjectInstanceVisible`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bVisible` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SetBuildObjectInstanceVisible") void K2_SetBuildObjectInstanceVisible(bool bVisible);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Sets the building's mesh instance visible or hidden (Blueprint-implemented)

---

### Function `CancelRebuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CancelRebuild();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 取消重建

---

### Function `DestoryBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void DestoryBuilding();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拆除建筑

---

### Function `ChangeBuildingDurability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void ChangeBuildingDurability(float ChangeValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改变建筑物耐久度

---

### Function `AttackBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDamage` | `float` |
| `AttackActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void AttackBuilding(float InDamage,AActor * AttackActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 攻击建筑物

---

### Function `SetBuildingRunState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RunState` | [EBuildingRunState](../ERW_Enumerations__EBuildingRunState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetBuildingRunState(EBuildingRunState RunState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置建筑物状态

---

### Function `SetBuildingEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnabledState` | [EBuildingEnableState](../ERW_Enumerations__EBuildingEnableState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetBuildingEnabled(EBuildingEnableState EnabledState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置建筑物开启或者关闭

---

### Function `UpdateOutlineShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FromHovering` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateOutlineShow(bool FromHovering);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 显示或隐藏描边

---

### Function `CanUseLineTraceResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Result` | `const FHitResult&` |
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool CanUseLineTraceResult(const FHitResult& Result , FVector& Location) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 能否使用射线检测结果

---

### Function `InitFacilityBelongData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Num` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitFacilityBelongData(int32 Num);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化设施归属数据

---

### Function `SetFacilityBelongData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Index` | `int32` |
| `BelongState` | [EFacilityBelongState](../ERW_Enumerations__EFacilityBelongState.md) |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetFacilityBelongData(int32 Index , EFacilityBelongState BelongState , AEastRimWorldAIController* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置设施归属数据

---

### Function `PopupInfoUIChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弹出UI信息改变

---

### Function `SetAutoFabricateTimerID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAutoFabricateTimerID(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置自动制造计时器ID

---

### Function `UnregisterAutoFabricateTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterAutoFabricateTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注销自动制造计时器

---

### Function `SetRoofPartType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RoofPartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetRoofPartType(ERoofPartType RoofPartType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置屋顶部位类型

---

### Function `SwitchRoofShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SwitchRoofShow(bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 切换屋顶显示

---

### Function `TryAddTransportAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void TryAddTransportAction();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 尝试添加搬运Action

---

### Function `RemoveTransportAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void RemoveTransportAction();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 移除搬运Action

---

### Function `GetActionCostChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetActionCostChange(FName ActionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取行为在这个建筑物上的消耗变化

---

### Function `SetStoragePriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewStoragePriority` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetStoragePriority(int32 NewStoragePriority);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置新的优先级

---

### Function `GetModelHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) float GetModelHeight() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获得模型高度

---

### Function `GetWallPillarParam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) int32 GetWallPillarParam() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获得墙接缝柱配置参数

---

### Function `UpdateWallRotation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DistributionTypes` | const TArray<[EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateWallRotation(const TArray<EGridDistributionType>& DistributionTypes);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新墙的旋转朝向

---

### Function `GetRealTargetActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintNativeEvent |
| Return type | [AGOAP_ActorBase](GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintPure) AGOAP_ActorBase* GetRealTargetActor();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 获得真正的目标Actor

---

### Function `CreateBeginnerGuideBillboard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CreateBeginnerGuideBillboard();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 创建新手引导指引箭头

---

### Function `DestroyBeginnerGuideBillboard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeActor` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyBeginnerGuideBillboard(bool ChangeActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 销毁新手引导指引箭头

---

### Function `UpdateEntranceArrow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ShowState` | [EEntranceArrowState](../ERW_Enumerations__EEntranceArrowState.md) |
| `false` | `bool UpdateSlotEnabled =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateEntranceArrow(EEntranceArrowState ShowState , bool UpdateSlotEnabled = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新建筑入口箭头

---

### Function `GetBuildingGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetBuildingGridPoses(TArray<FGridPosition>& GridPoses);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得建筑的格子

---

### Function `AddStairInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Height` | `float` |
| `IsFlat` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddStairInstance(const FGridPosition& GridPos , float Height , bool IsFlat);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 加入阶梯的模型

---

### Function `GetRoomUnitShowState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | [ERoomUnitShowState](../ERW_Enumerations__ERoomUnitShowState.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) ERoomUnitShowState GetRoomUnitShowState();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获得房间单元显示状态

---
