# `struct` `FTimedBattleRecord`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## 功能说明（来自头文件注释）

> 一场正在推演中的周期化抽象战运行时数据（SaveGame，与队列 FPendingTimedBattle 分开存）。

## 蓝图暴露变量

### 属性 `TimedBattleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid TimedBattleGuid;` |

**说明:**

> 本场周期化战标识（= StartTimedBattle 返回值，EndBattle 入参）

---

### 属性 `AttackerForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid AttackerForceGuid;` |

**说明:**

> 进攻方势力 SGUID

---

### 属性 `TargetPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid TargetPlaceGuid;` |

**说明:**

> 目标据点 SGUID（守方据点）

---

### 属性 `TeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FBattleTeamInfo TeamInfo;` |

**说明:**

> 抽取结果（出战人员），仅作展示/PR-8 战报上下文，本类不消费战斗内核

---

### 属性 `AttackerCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float AttackerCombat = 0.f;` |

**说明:**

> 攻方有效战力（势头公式 Oe）

---

### 属性 `DefenderCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float DefenderCombat = 0.f;` |

**说明:**

> 守方有效战力（势头公式 De）

---

### 属性 `BattleAdvantage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float BattleAdvantage = 0.f;` |

**说明:**

> 势头条：0 起，攻方占优 +、守方占优 -；到 +100 攻方胜、-100 守方胜

---

### 属性 `CurrentPhase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ETimedBattlePhase CurrentPhase = ETimedBattlePhase::Muster;` |

**说明:**

> 当前阶段

---

### 属性 `PhaseElapsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float PhaseElapsed = 0.f;` |

**说明:**

> 已推进时长（秒），每 Tick += TimedBattleTickInterval

---

### 属性 `TotalDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float TotalDuration = 0.f;` |

**说明:**

> 本场总时长（秒），按规模档随机（文档 §9）

---

### 属性 `BaseAdvantageGain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float BaseAdvantageGain = 0.f;` |

**说明:**

> 每 Tick 势头基础增益（按规模档，文档 §9）

---

### 属性 `bPlayerRelevant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool bPlayerRelevant = false;` |

**说明:**

> 入队/创建时算好的玩家相关性（决定结算 UI 走向、永不 fallback 等）

---
