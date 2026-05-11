# `class` `AEasternEraTradeAreaActor`

**源码头文件:** `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `StaticMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

---

### 属性 `TransportGoodsActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

---

### 属性 `NeedGoods`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

---

### 属性 `WaitGoodsQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> WaitGoodsQueue;` |

**源码注释:**

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

**源码注释:**

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

---

### 函数 `TestPutItemToTradeArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TestPutItemToTradeArea();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
