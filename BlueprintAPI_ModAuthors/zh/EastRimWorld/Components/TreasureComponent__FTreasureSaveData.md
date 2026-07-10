# `struct` `FTreasureSaveData`

**源码头文件:** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁保存信息

## 蓝图暴露变量

### 属性 `TreasureItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FTreasureItemSubData> TreasureItems;` |

**说明:**

> 商品信息

---

### 属性 `TreasureResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FSaveItemArr](TreasureComponent__FSaveItemArr.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<int32 , FSaveItemArr> TreasureResource;` |

**说明:**

> 存档的各货柜商品信息映射，key为货柜编号。

---

### 属性 `SaveStalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<int32 , FStallInfo> SaveStalls;` |

**说明:**

> 存档的货架信息映射，key为货架编号。

---

### 属性 `AutomaticReplenishmentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) float AutomaticReplenishmentTime = 0.f;` |

**说明:**

> 自动补货冷却时间

---

### 属性 `SaveLog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FLogData> SaveLog;` |

**说明:**

> 存档的珍宝阁见闻日志记录列表。

---

### 属性 `TreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FTreasureStatisticsInfo> TreasureCount;` |

**说明:**

> 存档的商品当期兑换统计列表。

---

### 属性 `TotalTreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

**说明:**

> 存档的商品总兑换统计映射，key为商品ID。

---
