# `class` `AEastRimWorldFarmlandActor`

**Source header:** `EastRimWorld/Farmland/EastRimWorldFarmlandActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `FarmlandGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) FGuid FarmlandGuid = FGuid();` |

**Source comments:**

> ~ Save

---

### Property `CollectItemId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName CollectItemId;` |

**Source comments:**

> 作物的id

---

### Property `CollectItemData`

| Field | Details |
|------|------|
| C++ type | [FCollectItem](../Struct/ItemStruct__FCollectItem.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FCollectItem CollectItemData;` |

**Source comments:**

> 作物的数据

---

### Property `DecalComponents`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),TObjectPtr<UDecalComponent>> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGridPosition,TObjectPtr<UDecalComponent>> DecalComponents;` |

**Source comments:**

> 贴花组件

---

### Property `CubeComponents`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),TObjectPtr<UStaticMeshComponent>> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGridPosition,TObjectPtr<UStaticMeshComponent>> CubeComponents;` |

**Source comments:**

> 盒子组件(除草)

---

### Property `PlantActionsPosition`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, VisibleAnywhere,BlueprintReadOnly) TArray<FVector> PlantActionsPosition;` |

**Source comments:**

> 种植的Action

---

### Property `IsPreDesignActor`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool IsPreDesignActor;` |

**Source comments:**

> 是否直接从UI上创建出来的

---

### Property `SelectedDecalComponents`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UDecalComponent>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TObjectPtr<UDecalComponent>> SelectedDecalComponents;` |

---

### Property `MountISMCompent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInstancedStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UInstancedStaticMeshComponent> MountISMCompent;` |

**Source comments:**

> 小土包

---

### Property `LabelCylinderComponents`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UStaticMeshComponent>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TObjectPtr<UStaticMeshComponent>> LabelCylinderComponents;` |

**Source comments:**

> 四角标牌立柱

---

### Property `EnvironComponent`

| Field | Details |
|------|------|
| C++ type | [UERW_EnvironComponent](../Components/ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_EnvironComponent* EnvironComponent;` |

---

### Property `bSelectState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bSelectState = false;` |

**Source comments:**

> 是否是选中状态

---

### Property `DesigningSize`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGridPosition DesigningSize;` |

---

### Property `MountTransforms`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FTransform> MountTransforms;` |

**Source comments:**

> 小土包位置

---

### Property `FarmerPlantLocation`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,FVector>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TMap<FGuid,FVector> FarmerPlantLocation;` |

**Source comments:**

> 角色对应的种植位置(存来给GA确定种植点,种植完成后移除，种植被打断时用这个来查找位置放回PlantActionsPosition)

---

### Property `OriginGirdPosition`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGridPosition OriginGirdPosition;` |

**Source comments:**

> 保存此农田创建时的起始格子坐标和世界坐标

---

### Property `OriginLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FVector OriginLocation;` |

---

### Property `PreviewStartGrid`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess)) FGridPosition PreviewStartGrid;` |

**Source comments:**

> 预览开始格子

---

### Property `FarmlandEdgeGrids`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),int32> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FGridPosition,int32> FarmlandEdgeGrids;` |

**Source comments:**

> 农田的边界格子位置,边缘类型

---

### Property `AllFarmlandGrid`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md),[FFarmlandData](../Struct/FarmlandStruct__FFarmlandData.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FGridPosition,FFarmlandData> AllFarmlandGrid;` |

**Source comments:**

> 田的格子数据

---

### Property `AllFarmlandPlants`

| Field | Details |
|------|------|
| C++ type | TArray<[UFarmlandPlantInstance](../Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)*> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess)) TArray<UFarmlandPlantInstance*> AllFarmlandPlants;` |

**Source comments:**

> 田里的植物

---

### Property `bProhibitPlant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) bool bProhibitPlant;` |

**Source comments:**

> 是否禁止种植

---

### Property `bAutoHarvestPlant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) bool bAutoHarvestPlant;` |

**Source comments:**

> 是否自动收获植物

---

### Property `AutoHarvestPlantLimit`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(AllowPrivateAccess),SaveGame) TMap<FName,int32> AutoHarvestPlantLimit;` |

**Source comments:**

> 自动收获植物数量限制(当仓库有n个植物后不再自动收获 <0表示一直收)

---

## Blueprint-exposed functions

### Function `InitFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `InCollectItemId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitFarmland(const TSet<FDesignFarmlandGridData>& GridDatas,FName InCollectItemId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CheckBeginnerGuideProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void CheckBeginnerGuideProgress();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `ResizeFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `bAdd` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResizeFarmland(const TSet<FDesignFarmlandGridData>& GridDatas,bool bAdd);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetAllPlantPosAndGrids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |
| `OutPos` | `TArray<FVector>&` |
| `OutGirds` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllPlantPosAndGrids(const TSet<FDesignFarmlandGridData>& GridDatas,TArray<FVector>& OutPos,TArray<FGridPosition>& OutGirds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取输入网格能种植的点

---

### Function `PlantAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlantAtLocation(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 种植物

---

### Function `ChangePlant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangePlant(FName Id);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更换种植物

---

### Function `RemoveOtherPlant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveOtherPlant(const TSet<FDesignFarmlandGridData>& GridDatas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检测、移除田内的其他采集物

---

### Function `RemoveFarmlandPlantAndGoapActionPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridDatas` | const TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveFarmlandPlantAndGoapActionPosition(const TSet<FDesignFarmlandGridData>& GridDatas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检测、移除田的采集物 种植Action位置

---

### Function `GetAllFarmlandPlants`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | const TArray<[UFarmlandPlantInstance](../Inventory/FarmlandPlantInstance__UFarmlandPlantInstance.md)*>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) const TArray<UFarmlandPlantInstance*>& GetAllFarmlandPlants();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `SetAutoHarvestPlantLimit`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemId` | `const FName&` |
| `InNum` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAutoHarvestPlantLimit(const FName& ItemId,const int32& InNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 修改自动收获植物的上限

---

### Function `TestShowFarmlandEdge`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TestShowFarmlandEdge();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 测试函数：显示农田边界

---

### Function `DestoryFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestoryFarmland();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `UpdateFarmlandEdge`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFarmlandEdge();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新农田边界

---

### Function `FilterCanPlaceFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartGrid` | [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EndGrid` | [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `OutCanPlaceGrid` | TSet<[FDesignFarmlandGridData](../Struct/FarmlandStruct__FDesignFarmlandGridData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FilterCanPlaceFarmland(FGridPosition& StartGrid,FGridPosition& EndGrid,TSet<FDesignFarmlandGridData>& OutCanPlaceGrid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 过滤掉不能放置农田的格子

---

### Function `StartPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsAddPreview` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartPreview(bool IsAddPreview);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ------------------预览-------------
> 预览开始

---

### Function `K2_StartPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsAddPreview` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_StartPreview(bool IsAddPreview);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `CancelPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelPreview();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_CancelPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_CancelPreview();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `StartDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartLocation` | `const FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartDesigningFarmland(const FVector & StartLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始设计田地

---

### Function `K2_StartDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartLocation` | `const FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_StartDesigningFarmland(const FVector & StartLocation);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `CancelDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelDesigningFarmland();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 取消设计田地

---

### Function `K2_CancelDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_CancelDesigningFarmland();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `EndDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EndLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndDesigningFarmland(const FVector& EndLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_EndDesigningFarmland`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EndLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_EndDesigningFarmland(const FVector& EndLocation);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `UpdatePreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePreview();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新田地预览

---

### Function `K2_UpdatePreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_UpdatePreview();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `UpdateDesigning`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateDesigning();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_UpdateDesigning`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RowGridNum` | `const int32&` |
| `ColGridNum` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void K2_UpdateDesigning(const int32& RowGridNum,const int32& ColGridNum);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `GetPreviewType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `EFarmlandPreviewType` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) EFarmlandPreviewType GetPreviewType(){return PreviewType;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetFarmerPlantLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector GetFarmerPlantLocation(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据角色id取对应的种植点

---

### Function `PutbackPlantGoapPos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPos` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutbackPlantGoapPos(const FVector& InPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 种植行为被取消时放回未完成的种植点

---

### Function `PutbackPlantGoapPosByAgentGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AgentGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutbackPlantGoapPosByAgentGuid(const FGuid& AgentGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveFarmerPlantLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 RemoveFarmerPlantLocation(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetPlaceGridSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetPlaceGridSize();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取农田大小

---

### Function `CalcuPlantLocationOccupyGrids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPlantLocation` | `const FVector&` |
| `OutOccupyGrids` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcuPlantLocationOccupyGrids(const FVector& InPlantLocation,TArray<FGridPosition>& OutOccupyGrids);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算种植位置会占据的格子

---
