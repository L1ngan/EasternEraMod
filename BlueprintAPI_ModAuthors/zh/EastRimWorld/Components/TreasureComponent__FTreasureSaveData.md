# `struct` `FTreasureSaveData`

**源码头文件:** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁保存信息

## 蓝图暴露变量

### 属性 `AutomaticReplenishmentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) float AutomaticReplenishmentTime = 0.f;` |

**源码注释:**

> 自动补货冷却时间

---

### 属性 `SaveLog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FLogData> SaveLog;` |

---

### 属性 `TreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FTreasureStatisticsInfo> TreasureCount;` |

---

### 属性 `TotalTreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

---
