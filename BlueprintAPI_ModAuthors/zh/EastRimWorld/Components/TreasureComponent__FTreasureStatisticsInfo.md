# `struct` `FTreasureStatisticsInfo`

**源码头文件:** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁商品当期已售统计数据

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) FName ID;` |

**说明:**

> 商品ID(和对应物品表的ID一致，比如装备就要和装备表ID一致，Item就要和Item的ID一致)

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

### 属性 `Stall`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 Stall = 0;` |

**说明:**

> 货架

---

### 属性 `SoldNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere ,SaveGame) int32 SoldNum = 0;` |

**说明:**

> 已售数量（当期和总共的区分开）

---
