# `struct` `FTravelerGoodsInfo`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 商人商品配置

## 蓝图暴露变量

### 属性 `ItemData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**说明:**

> 商品信息

---

### 属性 `CurrentPriceBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentPriceBase;` |

**说明:**

> 当前价格(基础价格*价格系数)

---

### 属性 `bUnlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bUnlock;` |

**说明:**

> 是否 Unlock 的布尔标记。

---

### 属性 `UnlockFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UnlockFavorability;` |

**说明:**

> Unlock Favorability 字段。

---

### 属性 `BeEquipped`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool BeEquipped;` |

**说明:**

> 是否包含已经装备的物品

---

### 属性 `NeedReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float NeedReputation;` |

**说明:**

> 声望单价(> 0 时，这个商品被视为声望商品)

---

### 属性 `bTechnology`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bTechnology;` |

**说明:**

> 是否是解锁科技商品(为true时，使用ItemData里的ID作为科技ID)

---
