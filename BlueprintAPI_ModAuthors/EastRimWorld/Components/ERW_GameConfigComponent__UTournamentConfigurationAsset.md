# `class` `UTournamentConfigurationAsset`

**源码头文件：** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 门派战配置资产

## 蓝图暴露变量

### 属性 `SingleBattlePrepareTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattlePrepareTime = 5.f;` |

**源码注释：**

> 每场战斗的准备时间(连线时间)

---

### 属性 `SingleBattleStartTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleStartTime = 5.f;` |

**源码注释：**

> 每场战斗的开始时间

---

### 属性 `SingleBattleInProgressTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleInProgressTime = 5.f;` |

**源码注释：**

> 每场战斗的战斗中时间

---

### 属性 `SingleBattleEndTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleEndTime = 5.f;` |

**源码注释：**

> 每场战斗的结束展示

---

### 属性 `SingleBattleSettleTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleSettleTime = 5.f;` |

**源码注释：**

> 每场战斗的结算展示(连线时间)

---

### 属性 `NextRoundIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float NextRoundIntervalTime = 5.f;` |

**源码注释：**

> 每轮的间隔时间

---

### 属性 `SkipCurRoundIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SkipCurRoundIntervalTime = 5.f;` |

**源码注释：**

> 跳过本轮战斗时间隔时间

---

### 属性 `DefaultBehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UBehaviorTree>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<class UBehaviorTree> DefaultBehaviorTree;` |

**源码注释：**

> 武林大会默认行为树

---

### 属性 `SoloTournamentIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SoloTournamentIntervalTime = 19200;` |

**源码注释：**

> 单人比赛的时间间隔

---

### 属性 `SoloTournamentFirstDelayTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SoloTournamentFirstDelayTime = 10;` |

**源码注释：**

> 单人比赛的首次的时间延迟 注意 不会与游戏初始时间相加

---

### 属性 `TeamTournamentIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamTournamentIntervalTime = 38400;` |

**源码注释：**

> 多人比赛的时间间隔

---

### 属性 `TeamTournamentFirstDelayTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamTournamentFirstDelayTime = 10;` |

**源码注释：**

> 多人比赛的首次的时间延迟 注意 不会与游戏初始时间相加

---

### 属性 `RankRewardIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 RankRewardIntervalTime = 38400;` |

**源码注释：**

> 门派排名奖励发放间隔

---

### 属性 `SlowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SlowTime = 1;` |

**源码注释：**

> 时停的时间下的展示时间

---

### 属性 `TimeSpeedMultiplier`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TimeSpeedMultiplier = 0.1;` |

**源码注释：**

> 时停的时间倍数

---

### 属性 `BattleEndIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float BattleEndIntervalTime = 1;` |

**源码注释：**

> 战斗结束后显示界面的间隔时间

---
