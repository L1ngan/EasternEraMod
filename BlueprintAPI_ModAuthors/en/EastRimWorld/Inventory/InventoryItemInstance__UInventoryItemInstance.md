# `class` `UInventoryItemInstance`

**Source header:** `EastRimWorld/Inventory/InventoryItemInstance.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ItemGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid ItemGuid;` |

---

### Property `ItemTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ItemTransform;` |

**Source comments:**

> 物品在世界中的位置

---

### Property `InstanceIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 InstanceIndex = -1;` |

**Source comments:**

> 在持有者上的索引 例如ISM组件上的实例索引-1时无效 通常为不可靠 只有在PCGActor上可靠

---

### Property `SmallGrids`

| Field | Details |
|------|------|
| C++ type | TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FWarehouseSmallGrid> SmallGrids;` |

**Source comments:**

> 此物品占用的小格子信息

---

### Property `GroundSoilType`

| Field | Details |
|------|------|
| C++ type | `EGroundSoilType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**Source comments:**

> 物品所在的地面类型

---

### Property `GroundRichPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GroundRichPercent = 1;` |

**Source comments:**

> 物品所在的地面肥沃度

---

### Property `CurStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UStaticMesh> CurStaticMesh;` |

**Source comments:**

> 当前显示的模型

---

### Property `bOperationMark`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bOperationMark = false;` |

**Source comments:**

> 是否被操作标记

---

### Property `bSelectState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bSelectState = false;` |

**Source comments:**

> 是否是选中状态

---

### Property `bHoveringState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bHoveringState = false;` |

**Source comments:**

> 是否是悬浮状态

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 相关按钮的状态 是否选中

---

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent = nullptr;` |

**Source comments:**

> 他是谁在管理(目前仅指管理器) ,不可为空

---

### Property `SubstituteActor`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryEntityActor> SubstituteActor = nullptr;` |

**Source comments:**

> 此实例的替身actor

---

### Property `InventoryItemWidgetActor`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryItemWidgetActor> InventoryItemWidgetActor = nullptr;` |

**Source comments:**

> 此实例的ui显示actor

---

### Property `OnItemDestory`

| Field | Details |
|------|------|
| C++ type | `FOnItemDestory` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnItemDestory OnItemDestory;` |

---

### Property `CurDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CurDurability = -1;` |

**Source comments:**

> 当前耐久度

---

### Property `CopyedTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CopyedTime = 0.f;` |

**Source comments:**

> 复制时间（已经进行复制的时间）

---

### Property `CopyNum`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int CopyNum= 0;` |

**Source comments:**

> 已经复制的次数

---

### Property `CurAirDryingDegree`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int CurAirDryingDegree = 0;` |

**Source comments:**

> 当前风干度

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### Property `InventoryItemInfo`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly, Category="ItemaInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category= "ItemaInfo") FInstancedStruct InventoryItemInfo;` |

**Source comments:**

> 道具的信息

---

### Property `InventoryItemStateType`

| Field | Details |
|------|------|
| C++ type | `EInventoryItemStateType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**Source comments:**

> 物品状态

---

## Blueprint-exposed functions

### Function `IsItemEnough`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsItemEnough();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查物品数量是否足够

---

### Function `RemoveReservedList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveReservedList();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除预留物品列表

---

### Function `ItemDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void ItemDestroy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 销毁

---

### Function `OnInventoryManagerOwnerDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void OnInventoryManagerOwnerDestroy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当所属的InventoryManagerComponent销毁/EndPlay时调用。
> 注意：不要在这里再去回调管理器的Add/Remove接口（管理器可能已不可用）。

---

### Function `SetNewInventoryManagerComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `InManifestationObject` | `UObject*` |
| `(unnamed / type only)` | `int InInstanceIndex = -1` |
| `true` | `bool bAddInventoryManager =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNewInventoryManagerComponent(UInventoryManagerComponent * InNewInventoryManagerComponent,UObject* InManifestationObject,int InInstanceIndex = -1,bool bAddInventoryManager = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ~End IEastRimWorldCommonInterface
> 设置新拥有者 管理器与拥有者时深度绑定 在管理器或持有者变动时理应一起变动

---

### Function `SetSubstituteActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSubstituteActor` | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSubstituteActor(AInventoryEntityActor * InSubstituteActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置替身actor

---

### Function `CreateInventorySubstitute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* CreateInventorySubstitute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建替身

---

### Function `ReleaseInventorySubstitute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReleaseInventorySubstitute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放替身

---

### Function `ReleaseInventoryWidgetActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReleaseInventoryWidgetActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放数量actor

---

### Function `GetInventoryActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* GetInventoryActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取可以操作此物品的实体 如果是ISM组件的实例则创建替身操作

---

### Function `DepositOnWarehouse`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `DepositionActor` | `AActor *` |
| `InSmallGrids` | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DepositOnWarehouse(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 存放到仓库中

---

### Function `DepositOnTradeArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `DepositionActor` | `AActor *` |
| `InSmallGrids` | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> & |
| `true` | `bool bShowMesh =` |
| `true` | `bool bShowUI =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DepositOnTradeArea(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids,bool bShowMesh = true,bool bShowUI = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CheckSameType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckSameType(UInventoryItemInstance * OtherItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否是相同的物品

---

### Function `CheckSameTypeByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherItemID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckSameTypeByID(FName OtherItemID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否是相同的物品

---

### Function `ChangeItemCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InChangeNumber` | `int` |
| `InShelfLife` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual int ChangeItemCount(int InChangeNumber,float InShelfLife);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 增加物品的数量 返回当前的数量

---

### Function `CheckMaxStack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCanPlace` | `int &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckMaxStack(int & OutCanPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 物品是否已经堆叠到上限

---

### Function `GetItemCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) int GetItemCount();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取物品的数量

---

### Function `UpdateItemShowInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateItemShowInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新静态网格体的样式

---

### Function `CreateStaticMeshComponentToActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UStaticMeshComponent *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UStaticMeshComponent * CreateStaticMeshComponentToActor(AActor * InActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 基于actor 创建静态网格体组件

---

### Function `CreateItemWidgetToActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActor` | `AActor *` |
| `true` | `bool bAutoSet =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AInventoryItemWidgetActor * CreateItemWidgetToActor(AActor * InActor,bool bAutoSet = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建显示的ui

---

### Function `SetInventoryItemTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetInventoryItemTransform(const FTransform & InNewTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置新的位置旋转

---

### Function `SetInventoryWidgetActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInventoryItemWidgetActor` | [AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetInventoryWidgetActor(AInventoryItemWidgetActor* InInventoryItemWidgetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置新的ui显示

---

### Function `UpdateInventoryItemInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 广播更新物品信息

---

### Function `GetInventoryGeneralData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FInventoryGeneralData](../Struct/ItemStruct__FInventoryGeneralData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInventoryGeneralData GetInventoryGeneralData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取物品的基础信息

---

### Function `GetCarryItemNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController_Human](../Player/EastRimWorldAIController_Human__AEastRimWorldAIController_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetCarryItemNumber(AEastRimWorldAIController_Human* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取搬运物品的数量

---

### Function `UpdateInventoryItemTemperature`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemTemperature();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新物品所在的温度

---

### Function `GetTemperatureEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetTemperatureEfficiency();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 更新温度

---

### Function `GetTemperatureOnLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual int GetTemperatureOnLocation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取物品所在位置的温度

---

### Function `EatItemByActionID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EatActor` | `AActor *` |
| `ActionID` | `const FName &` |
| `Number` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void EatItemByActionID(AActor * EatActor,const FName & ActionID,int32 Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过action ID食用物品

---

### Function `GetStorageSpace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `EStorageSpace` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual EStorageSpace GetStorageSpace(){return EStorageSpace::OutDoor;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前的环境

---

### Function `GetStorageSpaceEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetStorageSpaceEfficiency(){return 1.0f;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前的环境效率

---

### Function `WriteCopyBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void WriteCopyBook();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 抄录书籍

---

### Function `ItemChangeOrDestroyRemoveAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void ItemChangeOrDestroyRemoveAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 物品改变或者销毁时处理action

---
