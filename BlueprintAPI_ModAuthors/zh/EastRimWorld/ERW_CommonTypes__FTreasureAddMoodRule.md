# `struct` `FTreasureAddMoodRule`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁心情规则：满足弟子人数与商品种类数量条件时给予Buff心情，否则给予Debuff心情。

## 蓝图暴露变量

### 属性 `SatisfyDiscipleNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SatisfyDiscipleNum = 0;` |

**说明:**

> 需要满足的弟子人数

---

### 属性 `SatisfyGoodsTypeNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SatisfyGoodsTypeNum = 0;` |

**说明:**

> 需要满足的商品种类数量

---

### 属性 `UnsatisfiedBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName>UnsatisfiedBuff;` |

**说明:**

> Debuff心情

---

### 属性 `SatisfiedBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName>SatisfiedBuff;` |

**说明:**

> Buff心情

---
