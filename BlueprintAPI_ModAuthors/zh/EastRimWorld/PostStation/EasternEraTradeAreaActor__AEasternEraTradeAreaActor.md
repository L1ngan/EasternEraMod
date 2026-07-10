# `class` `AEasternEraTradeAreaActor`

**源码头文件:** `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

---

## 功能说明（来自头文件注释）

> 驿站交易区Actor，管理货物搬运GOAP行为与所需货物清单

## 蓝图暴露变量

### 属性 `StaticMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

**说明:**

> 交易区静态网格组件

---

### 属性 `TransportGoodsActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**说明:**

> 搬运货物的GOAP行为映射（物品ID→行为，随存档保存）

---

### 属性 `NeedGoods`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

**说明:**

> 所需货物清单（物品ID→数量，随存档保存）

---

### 属性 `WaitGoodsQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> WaitGoodsQueue;` |

**说明:**

> 等待创建的搬运

---

## 蓝图暴露函数

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

> 获取按与指定势力好感度计算的售货价格系数

---
