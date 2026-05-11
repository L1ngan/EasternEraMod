# `struct` `FTransportToWarehouseCache`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 物品ID 对应的缓存

## 蓝图暴露变量

### 属性 `ItemInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FInstancedStruct ItemInfo;` |

**源码注释:**

> 物品ID

---

### 属性 `ItemCaches`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md),[FTransportItemCache](WarehouseManagerSubsystem__FTransportItemCache.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData,FTransportItemCache> ItemCaches;` |

**源码注释:**

> 物品action 对应的缓存

---

### 属性 `bCanPlaceItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bCanPlaceItem = true;` |

**源码注释:**

> 是否可以放置这个id的物品 初步计算是否堆叠上限 空格等

---
