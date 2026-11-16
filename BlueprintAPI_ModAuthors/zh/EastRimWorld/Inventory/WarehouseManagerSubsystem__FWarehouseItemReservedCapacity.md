# `struct` `FWarehouseItemReservedCapacity`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 某仓库某物品的预约容量（不绑定具体格位）
>  预约分两部分: 对已存在实堆余量的预约(ReservedStackCapacity), 对空格上"虚拟新堆"的预约(ReservedNewPileItemNum)。
>  同 ItemID 的多个角色预约空格时物理上会叠进同一堆, 因此虚拟新堆按数量共享;
>  预约占用的空格数是派生量 = ceil(ReservedNewPileItemNum / MaxStackSize) * SmallGridCount, 不单独存、不按角色分配。

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

### 属性 `ReservedNewPileItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 ReservedNewPileItemNum = 0;` |

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

### 属性 `MaxStackSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 MaxStackSize = 1;` |

**说明:**

> 该 ItemID 的堆叠上限, 用于把虚拟新堆数量换算成占用的空格数

---
