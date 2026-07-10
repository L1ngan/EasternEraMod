# `class` `UTradeAreaComponent`

**源码头文件:** `EastRimWorld/Components/TradeAreaComponent.h`

---

## 功能说明（来自头文件注释）

> 交易区组件,创建搬运货物的GOAP行为并管理所需货物与出售价格好感度系数

## 蓝图暴露变量

### 属性 `TransportGoodsActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**说明:**

> 搬运货物的GOAP Action映射(物品ID→Action)

---

### 属性 `NeedGoods`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,int32> NeedGoods;` |

**说明:**

> 所需货物及数量的映射(物品ID→数量)

---

### 属性 `WaitGoodsQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,int32> WaitGoodsQueue;` |

**说明:**

> 等待创建的搬运

---

## 蓝图暴露函数

### 函数 `CreateTransportAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoodsInfos` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateTransportAction(const TMap<FName,FTravelerGoodsInfo>& InGoodsInfos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据货物信息创建搬运货物的GOAP行为

---

### 函数 `AddTradeGoods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItems` | const TArray<[UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddTradeGoods(const TArray<UInventoryItemInstance*>& InItems);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将给定的物品实例添加为交易货物

---

### 函数 `CancelTransportGoods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoodsInfoIds` | `const TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelTransportGoods(const TArray<FName>& InGoodsInfoIds);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消搬运货物

---

### 函数 `PopTradeGoods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoodsInfos` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PopTradeGoods(const TMap<FName,FTravelerGoodsInfo>& InGoodsInfos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按货物信息移出交易货物

---

### 函数 `GetSaleGoodsPriceFavorabilityRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherForceID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static float GetSaleGoodsPriceFavorabilityRate(const FName& OtherForceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取对指定势力出售货物时基于好感度的价格系数

---
