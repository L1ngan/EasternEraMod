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

> 本角色对已存在实堆余量的预约数量

---

### 属性 `ReservedNewPileItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedNewPileItemNum = 0;` |

**说明:**

> 本角色落在虚拟新堆(空格)上的预约数量; 核销/释放时按此回写仓库级 ReservedNewPileItemNum

---

### 属性 `SmallGridCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 SmallGridCount = 1;` |

**说明:**

> 该 ItemID 的 SmallGridCount / MaxStackSize, 事务回滚与派生格数计算要用

---

### 属性 `MaxStackSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 MaxStackSize = 1;` |

---
