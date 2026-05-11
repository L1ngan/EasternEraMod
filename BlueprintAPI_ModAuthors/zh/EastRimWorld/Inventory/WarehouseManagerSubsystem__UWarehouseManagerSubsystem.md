# `class` `UWarehouseManagerSubsystem`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 仓库管理器：记录每个仓库的放置状态、空余格子、是否满仓等。
> 当类型为 Warehouse 的 InventoryManagerComponent 会注册到此管理器。
> 有物品放入/取出时标记为需要更新，在下次获取空位或状态时再执行更新。

## 蓝图暴露函数

### 函数 `IsWarehouseFull`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WarehouseManager" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") bool IsWarehouseFull(UInventoryManagerComponent* WarehouseComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取仓库是否已满仓。若被标记为需要更新，会先更新再返回缓存值。

---

### 函数 `GetWarehouseState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WarehouseManager" |
| 返回类型 | [FWarehouseCacheState](WarehouseManagerSubsystem__FWarehouseCacheState.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `bOutValid` | `bool&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") FWarehouseCacheState GetWarehouseState(UInventoryManagerComponent* WarehouseComponent, bool& bOutValid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取仓库缓存状态（空位、满仓等）。若需要更新会先更新。
> @param WarehouseComponent
> @param bOutValid 是否找到有效缓存

---

### 函数 `GetCanPlaceItemNumberByInstanceFromCache`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WarehouseManager" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `NewInventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") int32 GetCanPlaceItemNumberByInstanceFromCache(UInventoryManagerComponent* WarehouseComponent, UInventoryItemInstance* NewInventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过仓库缓存判断指定物品实例还能放入多少数量（返回 0 表示无法放入或缓存无效）。
> 仅根据缓存中的堆叠剩余空间与空余小格做近似判断，不会触发重新扫描仓库格子。

---

### 函数 `CanPlaceItemInWarehouseByItemData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WarehouseManager" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WarehouseComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |
| `InventoryData` | const [FInventoryGeneralData](../Struct/ItemStruct__FInventoryGeneralData.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") bool CanPlaceItemInWarehouseByItemData(UInventoryManagerComponent* WarehouseComponent, const FInventoryGeneralData & InventoryData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 判断指定物品数据是否可以放入指定仓库中。
> 不判断具体可放数量，只判断占格是否足够，或仓库中是否已有同 ID 且无堆叠上限的物品堆。

---

### 函数 `GetRegisteredWarehouses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WarehouseManager" |
| 返回类型 | TArray<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WarehouseManager") TArray<UInventoryManagerComponent*> GetRegisteredWarehouses() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有已注册的仓库组件（用于遍历，如按优先级找空位）

---
