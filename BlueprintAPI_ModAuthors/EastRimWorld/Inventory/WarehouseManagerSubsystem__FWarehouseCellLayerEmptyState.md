# `struct` `FWarehouseCellLayerEmptyState`

**源码头文件：** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 单个坐标格在某一层的空余状态（用于缓存，避免 TMap 套 TMap）

## 蓝图暴露变量

### 属性 `GridPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGridPosition` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGridPosition GridPosition;` |

**源码注释：**

> 坐标格

---

### 属性 `LayerNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 LayerNumber = 0;` |

**源码注释：**

> 层级索引

---

### 属性 `EmptySlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 EmptySlotCount = 0;` |

**源码注释：**

> 该格该层空余小格数量（0~4），使用时若需判断是否可放 4 格物品可直接判断 EmptySlotCount == 4

---
