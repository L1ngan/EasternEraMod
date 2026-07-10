# `struct` `FWarehouseItemReservedCapacity`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 某仓库某物品的预约容量（不绑定具体格位）

## 蓝图暴露变量

### 属性 `ReservedStackCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedStackCapacity = 0;` |

**说明:**

> 已预约的堆叠容量

---

### 属性 `ReservedEmptySmallGridSlots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedEmptySmallGridSlots = 0;` |

**说明:**

> 已预约的空余小格数量

---

### 属性 `SmallGridCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 SmallGridCount = 1;` |

**说明:**

> 该 ItemID 的 SmallGridCount。用于在 ApplyReservedCapacityToCacheState 中区分
> 4 格物品(必须扣 EmptySlotCount==4 的整格) 与 1 格物品(优先扣已破坏的零散格)。

---
