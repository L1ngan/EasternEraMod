# `class` `UCanUseInventoryItemInstance`

**源码头文件:** `EastRimWorld/Inventory/CanUseInventoryItemInstance.h`

---

## 功能说明（来自头文件注释）

> 可以使用的物品实例的基类

## 蓝图暴露变量

### 属性 `ResidueItemShelfLife`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ResidueItemShelfLife;` |

**源码注释:**

> 剩余物品的保质期

---

### 属性 `ItemOwnEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<int> ItemOwnEffects;` |

**源码注释:**

> 此时物品自身生效的效果

---

### 属性 `ItemUseState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemUseState` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EItemUseState ItemUseState = EItemUseState::None;` |

**源码注释:**

> 物品使用状态（穿戴中、搬运中等）

---

### 属性 `UsedNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 UsedNum = 0;` |

**源码注释:**

> 物品所处的环境
> UPROPERTY(blueprintReadWrite,EditAnywhere)
> EStorageSpace StorageSpace = EStorageSpace::OutDoor;
> 已经使用的次数

---

### 属性 `StorageSpaceEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float StorageSpaceEfficiency = 1.f;` |

**源码注释:**

> 环境效率

---

## 蓝图暴露函数

### 函数 `SetUseInventoryItemState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewItemUseState` | `EItemUseState` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetUseInventoryItemState(EItemUseState NewItemUseState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置物品的使用状态

---

### 函数 `GetUseInventoryItemInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [FInventoryItem](../Struct/ItemStruct__FInventoryItem.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) FInventoryItem GetUseInventoryItemInfo();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获取物品信息

---

### 函数 `ActivateItemToGenerateRobot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ActivateItemToGenerateRobot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
