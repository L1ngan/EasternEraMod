# `struct` `FCityDominionState`

**源码头文件:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## 功能说明（来自头文件注释）

> 一座城市的割据状态(key=城市Guid)

## 蓝图暴露变量

### 属性 `ResidentSects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FSectResidencyInfo> ResidentSects;` |

**说明:**

> 城内附属门派(不含城主自己)

---

### 属性 `PendingMoveInForces`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FGuid> PendingMoveInForces;` |

**说明:**

> 申请迁入待城主批准的门派Guid(流浪门派或他城门派)

---

### 属性 `LastGovernanceGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 LastGovernanceGameDay = 0;` |

**说明:**

> 上次NPC城主治理决策的游戏天数

---

### 属性 `CityTributeRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float CityTributeRatio = 0.f;` |

**说明:**

> 城市缴税比例

---
