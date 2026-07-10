# `struct` `FTreasureStatisticsTotalInfo`

**源码头文件:** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁商品总共已售统计数据

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) FName ID;` |

**说明:**

> 商品ID

---

### 属性 `GroundInventoryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**说明:**

> 商品类型

---

### 属性 `InventoryNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 InventoryNum = 0;` |

**说明:**

> 库存数量

---

### 属性 `CurSoldNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 CurSoldNum = 0;` |

**说明:**

> 当期已售数量

---

### 属性 `TotalSoldNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 TotalSoldNum = 0;` |

**说明:**

> 总共已售数量

---

### 属性 `MonasticReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 MonasticReputation = 0;` |

**说明:**

> 商品对应的宗门信仰值，用于按宗门信仰排序。

---
