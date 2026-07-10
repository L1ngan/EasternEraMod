# `struct` `FWorldPlaceEconomyState`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## 功能说明（来自头文件注释）

> 据点税收 / 流民相关的累计计数(SaveGame)

## 蓝图暴露变量

### 属性 `Order`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float Order = 70.f;` |

**说明:**

> 当前治安(0-100),初始来自 FWorldPlaceInfo::InitOrder

---

### 属性 `TaxDecreasePopulationCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 TaxDecreasePopulationCount = 0;` |

**说明:**

> 因税收高而导致人口减少的连续次数(产生流民后重置为 0)

---

### 属性 `PendingBuildingTax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PendingBuildingTax = 0;` |

**说明:**

> 累计的"未发放"建筑产出税收(税收周期内)

---

### 属性 `PendingTradeTax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PendingTradeTax = 0;` |

**说明:**

> 累计的"未发放"商贸产出税收(税收周期内)

---

### 属性 `LastTaxSettleGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float LastTaxSettleGameTime = 0.f;` |

**说明:**

> 上一次税收结算的 GameTime

---
