# `struct` `FTradeAreaSaveData`

**源码头文件:** `EastRimWorld/Components/TradeAreaComponent.h`

---

## 功能说明（来自头文件注释）

> 交易区存档数据(搬运货物Action、所需货物与等待创建的搬运队列)

## 蓝图暴露变量

### 属性 `TransportGoodsActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**说明:**

> 搬运货物的GOAP Action映射(物品ID→Action)

---

### 属性 `NeedGoods`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

**说明:**

> 所需货物及数量的映射(物品ID→数量)

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
