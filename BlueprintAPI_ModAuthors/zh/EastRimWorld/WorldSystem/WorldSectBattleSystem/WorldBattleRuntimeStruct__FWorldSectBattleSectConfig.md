# `struct` `FWorldSectBattleSectConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> World Sect Battle Sect Config 数据结构。

## 蓝图暴露变量

### 属性 `SectName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText SectName;` |

**说明:**

> 门派名字。

---

### 属性 `FlagPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldSectBattleFlagPointConfig](WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWorldSectBattleFlagPointConfig> FlagPoints;` |

**说明:**

> 本门派战配置的旗子点位列表。

---

### 属性 `EventSpawnPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldSectBattleEventSpawnPointConfig](WorldBattleRuntimeStruct__FWorldSectBattleEventSpawnPointConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWorldSectBattleEventSpawnPointConfig> EventSpawnPoints;` |

**说明:**

> 本门派战事件刷新点列表。事件库只配置刷新点类型，具体坐标从这里按类型随机取。

---

### 属性 `ChestSpawnTransforms`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> ChestSpawnTransforms;` |

**说明:**

> 本门派战宝箱刷新点列表

---

### 属性 `CarriageSpawnTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform CarriageSpawnTransform;` |

**说明:**

> 本门派战马车（一辆）的生成 Transform（坐标 + 旋转）。马车 Actor 类在 manager 的 CarriageActorClass 上设。

---

### 属性 `MoraleEventInitialChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float MoraleEventInitialChance = 0.5f;` |

**说明:**

> 士气事件初始触发概率。每次士气变化时按该概率尝试触发士气库事件，取值 0~1。

---

### 属性 `MoraleEventChanceDeltaAfterTrigger`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoraleEventChanceDeltaAfterTrigger = -0.1f;` |

**说明:**

> 士气事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### 属性 `MoraleBuffByMoraleValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32, FName> MoraleBuffByMoraleValue;` |

**说明:**

> 士气 buff 配置。key = 士气值，value = 该士气值对应的 buff 行名（DT_CommonBuff 的 RowName）。
> 	   按当前士气值查此表拿到 buff 名 → 应用给对应阵营。

---

### 属性 `KillEventInitialChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float KillEventInitialChance = 0.5f;` |

**说明:**

> 击杀事件初始触发概率。击杀有名字的敌方弟子时按该概率尝试触发击杀库事件，取值 0~1。

---

### 属性 `KillEventChanceDeltaAfterTrigger`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float KillEventChanceDeltaAfterTrigger = -0.1f;` |

**说明:**

> 击杀事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### 属性 `bEnableEnemyKillEventTrigger`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bEnableEnemyKillEventTrigger = false;` |

**说明:**

> 是否允许敌方击杀我方弟子时触发击杀库事件。默认关闭，只允许我方击杀敌方触发。

---

### 属性 `WealthEventInitialChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float WealthEventInitialChance = 0.f;` |

**说明:**

> 财富事件初始触发概率。开宝箱前的基础概率，取值 0~1。

---

### 属性 `WealthEventChanceDeltaPerChest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WealthEventChanceDeltaPerChest = 0.1f;` |

**说明:**

> 每打开一个宝箱时财富事件概率增加值。例如 0.1 表示每开一个宝箱增加 10% 概率。

---

### 属性 `CountdownEventInitialChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CountdownEventInitialChance = 0.5f;` |

**说明:**

> 倒计时事件初始触发概率。进入最后一段时间后，每隔固定秒数按该概率尝试触发倒计时库事件，取值 0~1。

---

### 属性 `CountdownEventChanceDeltaAfterTrigger`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CountdownEventChanceDeltaAfterTrigger = -0.1f;` |

**说明:**

> 倒计时事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### 属性 `CountdownEventStartPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CountdownEventStartPercent = 0.4f;` |

**说明:**

> 倒计时事件开始触发的剩余时间比例。例如 0.4 表示战斗剩余最后 40% 时间时开始检测。

---

### 属性 `CountdownEventIntervalSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "1.0")) float CountdownEventIntervalSeconds = 60.f;` |

**说明:**

> 倒计时事件检测间隔秒数。进入最后一段时间后，每隔该秒数尝试触发一次倒计时库事件。

---

### 属性 `BattleDurationMinutes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleDurationMinutes = 15.f;` |

**说明:**

> 本场门派战持续时间，单位：分钟。运行时会乘以 60 转成秒。

---
