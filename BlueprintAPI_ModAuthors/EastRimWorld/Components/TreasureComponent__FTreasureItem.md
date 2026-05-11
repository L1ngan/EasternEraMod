# `struct` `FTreasureItem`

**源码头文件：** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁商品

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ID;` |

**源码注释：**

> 商品ID(和对应物品表的ID一致，比如装备就要和装备表ID一致，Item就要和Item的ID一致)

---

### 属性 `GroundInventoryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGroundInventoryType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**源码注释：**

> 商品类型

---

### 属性 `TreasureIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureIndex = 0;` |

**源码注释：**

> 珍宝阁大类

---

### 属性 `TreasureSubIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureSubIndex = 0;` |

**源码注释：**

> 珍宝阁子类

---

### 属性 `TreasureItemWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TreasureItemWeight = 0;` |

**源码注释：**

> 珍宝阁道具权重

---

### 属性 `TreasureItemprice`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TreasureItemprice = 0;` |

**源码注释：**

> 珍宝阁道具价格

---

### 属性 `BuyOnceNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BuyOnceNum = 0;` |

**源码注释：**

> 珍宝阁道具买一次的数量

---

### 属性 `FormatItemDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FFormatText FormatItemDescription;` |

**源码注释：**

> 格式化后的描述

---
