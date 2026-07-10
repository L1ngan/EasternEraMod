# `class` `UWarehouseManagerSubsystem`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 仓库管理器：记录每个仓库的放置状态、空余格子、是否满仓等。
> 当类型为 Warehouse 的 InventoryManagerComponent 会注册到此管理器。
> 有物品放入/取出时标记为需要更新，在下次获取空位或状态时再执行更新。

## Blueprint-exposed functions

### Function `IsWarehouseFull`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WarehouseManager" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") bool IsWarehouseFull(UInventoryManagerComponent* WarehouseComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取仓库是否已满仓。若被标记为需要更新，会先更新再返回缓存值。

---

### Function `GetWarehouseState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WarehouseManager" |
| Return type | [FWarehouseCacheState](WarehouseManagerSubsystem__FWarehouseCacheState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `bOutValid` | `bool&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") FWarehouseCacheState GetWarehouseState(UInventoryManagerComponent* WarehouseComponent, bool& bOutValid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取仓库缓存状态（空位、满仓等）。若需要更新会先更新。
> @param WarehouseComponent
> @param bOutValid 是否找到有效缓存

---

### Function `GetCanPlaceItemNumberByInstanceFromCache`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WarehouseManager" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `NewInventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") int32 GetCanPlaceItemNumberByInstanceFromCache(UInventoryManagerComponent* WarehouseComponent, UInventoryItemInstance* NewInventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过仓库缓存判断指定物品实例还能放入多少数量（返回 0 表示无法放入或缓存无效）。
> 仅根据缓存中的堆叠剩余空间与空余小格做近似判断，不会触发重新扫描仓库格子。

---

### Function `CanPlaceItemInWarehouseByItemData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WarehouseManager" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `InventoryData` | const [FInventoryGeneralData](../Struct/ItemStruct__FInventoryGeneralData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") bool CanPlaceItemInWarehouseByItemData(UInventoryManagerComponent* WarehouseComponent, const FInventoryGeneralData & InventoryData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断指定物品数据是否可以放入指定仓库中。
> 不判断具体可放数量，只判断占格是否足够，或仓库中是否已有同 ID 且无堆叠上限的物品堆。

---

### Function `GetRegisteredWarehouses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WarehouseManager" |
| Return type | TArray<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") TArray<UInventoryManagerComponent*> GetRegisteredWarehouses() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有已注册的仓库组件（用于遍历，如按优先级找空位）

---

### Function `TryReserveWarehouseFromTransportPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Plans` | const TArray<struct [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)>& |
| `InCarryNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TryReserveWarehouseFromTransportPlans(AEastRimWorldAIController* Agent, const TArray<struct FGOAP_Action>& Plans, int32 InCarryNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从 CurrentPlans 解析搬运目标并尝试预约仓库容量；失败时返回 false

---
