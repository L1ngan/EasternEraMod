# `struct` `FApprenticeshipTempDestination`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipManager.h`

---

## 功能说明（来自头文件注释）

> [涌现 §4.8 江湖现洞府] 临时历练目的地 — 涌现侦测沉寂地"现洞府"后运行时注册,
> 让该地点(可非中心城)成为可派遣历练目的地并叠加专属探宝事件, 到期自动失效。

## 蓝图暴露变量

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid PlaceGuid;` |

**说明:**

> 目的地地点 Guid(AWorldDirector::WorldPlaces 的 key)

---

### 属性 `EventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FName> EventIDs;` |

**说明:**

> 该地点叠加的专属历练事件 ID(并入候选; 空则只走通用事件库)

---

### 属性 `ExpireGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 ExpireGameDay = 0;` |

**说明:**

> 失效游戏天(GameDay 超过即清除)

---

### 属性 `MaxTriggerCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 MaxTriggerCount = 0;` |

**说明:**

> 限次: 本目的地专属事件累计触发达此数即撤销(0=不限次, 沿用旧"江湖现洞府")

---

### 属性 `TriggeredCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 TriggeredCount = 0;` |

**说明:**

> 已触发次数(专属事件每命中一次 +1)

---
