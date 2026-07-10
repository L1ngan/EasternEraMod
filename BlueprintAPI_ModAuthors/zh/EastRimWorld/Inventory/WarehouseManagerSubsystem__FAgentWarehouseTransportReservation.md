# `struct` `FAgentWarehouseTransportReservation`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 角色搬运预约记录（仅用于中断时扣回该角色占用的容量）

## 蓝图暴露变量

### 属性 `WarehouseComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TWeakObjectPtr<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TWeakObjectPtr<UInventoryManagerComponent> WarehouseComponent;` |

**说明:**

> 目标仓库的库存管理组件（弱引用）

---

### 属性 `ItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName ItemID;` |

**说明:**

> 预约搬运物品的ID

---

### 属性 `ReservedStackCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedStackCapacity = 0;` |

**说明:**

> 预约占用的堆叠容量

---

### 属性 `ReservedEmptySmallGridSlots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedEmptySmallGridSlots = 0;` |

**说明:**

> 预约占用的空余小格数量

---

### 属性 `SmallGridCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 SmallGridCount = 1;` |

**说明:**

> 该 ItemID 的 SmallGridCount。事务回滚时要用同样的 SmallGridCount 重新写回全局预约表。

---
