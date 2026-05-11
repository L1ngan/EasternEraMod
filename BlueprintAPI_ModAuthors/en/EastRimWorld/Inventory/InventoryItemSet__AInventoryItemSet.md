# `class` `AInventoryItemSet`

**Source header:** `EastRimWorld/Inventory/InventoryItemSet.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

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
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bHoveringState;` |

**Source comments:**

> 是否是悬浮状态

---

### Property `InventoryItemSetType`

| Field | Details |
|------|------|
| C++ type | `EInventoryItemSetType` |
| Reflection specifiers | BlueprintReadWrite, Category="InventoryItemSet|Inventory" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryItemSet|Inventory",SaveGame) EInventoryItemSetType InventoryItemSetType = EInventoryItemSetType::PCGActor;` |

**Source comments:**

> 此集合的类型

---

### Property `BoxComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UBoxComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryItemSet|Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryItemSet|Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UBoxComponent> BoxComponent;` |

---

### Property `NiagaraComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryItemSet|Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryItemSet|Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UNiagaraComponent> NiagaraComponent;` |

---

### Property `InstancedStaticMeshComponents`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,TObjectPtr<UInstancedStaticMeshComponent>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TMap<FName,TObjectPtr<UInstancedStaticMeshComponent>> InstancedStaticMeshComponents;` |

---

### Property `InventoryItemWidget`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryItemWidgetActor> InventoryItemWidget;` |

---

## Blueprint-exposed functions

### Function `GetItemInstancesByRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Min` | `const FVector&` |
| `Max` | `const FVector&` |
| `Instances` | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetItemInstancesByRange(const FVector& Min , const FVector& Max , TArray<UInventoryItemInstance*>& Instances) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得指定范围内的实例

---

### Function `GetOnBoxItemInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintNativeEvent |
| Return type | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPoints` | `const TArray<FVector> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure,BlueprintNativeEvent) TArray<UInventoryItemInstance*> GetOnBoxItemInstances(const TArray<FVector> & InPoints) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 获取在框中的道具实例

---

### Function `GetItemInstancesByTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* GetItemInstancesByTransform(const FTransform & InTransform) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取在实例对象

---

### Function `SetISMCollisionProfile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetISMCollisionProfile();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置所有组件碰撞

---

### Function `PlayItemCountChangeAnim`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void PlayItemCountChangeAnim();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 播放动画

---

### Function `PCGGenerate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void PCGGenerate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> PCG生成植被

---

### Function `PCGGenerateComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PCGGenerateComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearPCG`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ClearPCG();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 清除pcg

---

### Function `ClearPCGComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearPCGComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清除pcg完成

---

### Function `AddNewItemInstancesByItemID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `const FName &` |
| `InOffsetTransform` | `const FTransform &` |
| `1` | `int AddItemNumber =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddNewItemInstancesByItemID(const FName & InItemID,const FTransform & InOffsetTransform,int AddItemNumber = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加实例，通过ISM组件显示

---

### Function `InitItemInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `const FName &` |
| `InventoryType` | `EGroundInventoryType` |
| `1` | `int AddItemNumber =` |
| `true` | `bool bUnlockInfo =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitItemInfo(const FName & InItemID,EGroundInventoryType InventoryType , int AddItemNumber = 1,bool bUnlockInfo = true );`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化创建物品 并显示静态模型及 ui显示

---

### Function `InitInfoItemInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentInfo` | `const FInstancedStruct &` |
| `1` | `int AddItemNumber =` |
| `true` | `bool bUnlockInfo =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * InitInfoItemInfo(const FInstancedStruct & EquipmentInfo,int AddItemNumber = 1,bool bUnlockInfo = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化创建装备 并显示静态模型及 ui显示

---

### Function `ItemSetDestroy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ItemSetDestroy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 集合销毁

---

### Function `InitializationComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitializationComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化完成

---

### Function `SetActorWorldLocationAndSyncItemTransforms`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="InventoryItemSet|Inventory" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewWorldLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "InventoryItemSet|Inventory") void SetActorWorldLocationAndSyncItemTransforms(const FVector& NewWorldLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置 Actor 世界坐标，并将相同位移同步到集合内所有物品实例的 ItemTransform（用于整体挪动物品堆等）

---

### Function `InitItemInfoByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| `(unnamed / type only)` | `FTransform NewTransform = FTransform()` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitItemInfoByInstance(UInventoryItemInstance* InventoryItemInstance,FTransform NewTransform = FTransform());`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过物品实例初始化物品信息

---

### Function `InitResourcePackageByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| `(unnamed / type only)` | `FTransform NewTransform = FTransform()` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitResourcePackageByInstance(UInventoryItemInstance* InventoryItemInstance,FTransform NewTransform = FTransform());`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过物品实例初始化物资包

---

### Function `InitItemInfoBySimpleData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AcceptResource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitItemInfoBySimpleData(const TMap<FName,FItemSimpleData>& AcceptResource);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过简单的物品信息初始化

---

### Function `PlantAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UFarmlandPlantInstance](FarmlandPlantInstance__UFarmlandPlantInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |
| `CollectItemData` | const [FCollectItem](../Struct/ItemStruct__FCollectItem.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UFarmlandPlantInstance* PlantAtLocation(const FVector& Location,const FCollectItem& CollectItemData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 在给定位置生成一个种植物实例

---

### Function `AddGetWriteCopyBookAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void AddGetWriteCopyBookAction();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 加入获取抄录书籍Action

---

### Function `RemoveGetWriteCopyBookAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void RemoveGetWriteCopyBookAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 移除获取抄录书籍Action

---

### Function `K2_SetSelectItemSetState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSelect` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetSelectEntityActorState") void K2_SetSelectItemSetState(bool bSelect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_SetHoveringItemSetState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bHovering` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetHoveringEntityActorState") void K2_SetHoveringItemSetState(bool bHovering);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---
