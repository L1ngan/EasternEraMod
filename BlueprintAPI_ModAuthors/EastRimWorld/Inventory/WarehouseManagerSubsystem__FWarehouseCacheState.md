# `struct` `FWarehouseCacheState`

**源码头文件：** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 单个仓库在管理器中的缓存状态

## 蓝图暴露变量

### 属性 `bIsFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bIsFull = false;` |

**源码注释：**

> 是否已满仓

---

### 属性 `bIsKeepClear`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bIsKeepClear = false;` |

**源码注释：**

> 是否保持清空

---

### 属性 `CellLayerEmptyStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWarehouseCellLayerEmptyState](WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FWarehouseCellLayerEmptyState> CellLayerEmptyStates;` |

**源码注释：**

> 每个坐标格对应层数的空余状态列表（无嵌套 TMap，按格+层一条条存储）

---

### 属性 `ItemIDToRemainingStackCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName, int32> ItemIDToRemainingStackCapacity;` |

**源码注释：**

> 每种物品在仓库中还能堆叠的总数（ItemID -> 剩余可堆叠个数，由各堆 MaxStackSize - CurrentCount 汇总）

---

### 属性 `TransportToWarehouseCache`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FTransportToWarehouseCache](WarehouseManagerSubsystem__FTransportToWarehouseCache.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FTransportToWarehouseCache> TransportToWarehouseCache;` |

**源码注释：**

> 物品缓存状态

---
