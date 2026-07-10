# `struct` `FSectDominionInfo`

**源码头文件:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## 功能说明（来自头文件注释）

> 单个门派的割据全局记录(key=势力Guid)

## 蓝图暴露变量

### 属性 `ExpelledByCities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FGuid> ExpelledByCities;` |

**说明:**

> 驱逐记录:被哪些城市驱逐过(被驱逐过的城市不能再迁入;某城城主变化时清空对该城的驱逐记录)

---

### 属性 `bWanderingSect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) bool bWanderingSect = false;` |

**说明:**

> 是否为流浪门派(失去落脚地;实力大幅削弱,玩家攻打获胜即灭门)

---

### 属性 `BecameWanderingGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 BecameWanderingGameDay = 0;` |

**说明:**

> 转为流浪门派的游戏天数

---
