# `struct` `FWorldSectBattleSectConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> World Sect Battle Sect Config data structure.

## Blueprint-exposed variables

### Property `SectName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText SectName;` |

**Notes:**

> 门派名字。

---

### Property `FlagPoints`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldSectBattleFlagPointConfig](WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWorldSectBattleFlagPointConfig> FlagPoints;` |

**Notes:**

> 本门派战配置的旗子点位列表。

---

### Property `EventSpawnPoints`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldSectBattleEventSpawnPointConfig](WorldBattleRuntimeStruct__FWorldSectBattleEventSpawnPointConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWorldSectBattleEventSpawnPointConfig> EventSpawnPoints;` |

**Notes:**

> 本门派战事件刷新点列表。事件库只配置刷新点类型，具体坐标从这里按类型随机取。

---

### Property `ChestSpawnTransforms`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTransform> ChestSpawnTransforms;` |

**Notes:**

> 本门派战宝箱刷新点列表

---

### Property `CarriageSpawnTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform CarriageSpawnTransform;` |

**Notes:**

> 本门派战马车（一辆）的生成 Transform（坐标 + 旋转）。马车 Actor 类在 manager 的 CarriageActorClass 上设。

---

### Property `MoraleEventInitialChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float MoraleEventInitialChance = 0.5f;` |

**Notes:**

> 士气事件初始触发概率。每次士气变化时按该概率尝试触发士气库事件，取值 0~1。

---

### Property `MoraleEventChanceDeltaAfterTrigger`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoraleEventChanceDeltaAfterTrigger = -0.1f;` |

**Notes:**

> 士气事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### Property `MoraleBuffByMoraleValue`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32, FName> MoraleBuffByMoraleValue;` |

**Notes:**

> 士气 buff 配置。key = 士气值，value = 该士气值对应的 buff 行名（DT_CommonBuff 的 RowName）。
> 	   按当前士气值查此表拿到 buff 名 → 应用给对应阵营。

---

### Property `KillEventInitialChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float KillEventInitialChance = 0.5f;` |

**Notes:**

> 击杀事件初始触发概率。击杀有名字的敌方弟子时按该概率尝试触发击杀库事件，取值 0~1。

---

### Property `KillEventChanceDeltaAfterTrigger`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float KillEventChanceDeltaAfterTrigger = -0.1f;` |

**Notes:**

> 击杀事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### Property `bEnableEnemyKillEventTrigger`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bEnableEnemyKillEventTrigger = false;` |

**Notes:**

> 是否允许敌方击杀我方弟子时触发击杀库事件。默认关闭，只允许我方击杀敌方触发。

---

### Property `WealthEventInitialChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float WealthEventInitialChance = 0.f;` |

**Notes:**

> 财富事件初始触发概率。开宝箱前的基础概率，取值 0~1。

---

### Property `WealthEventChanceDeltaPerChest`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WealthEventChanceDeltaPerChest = 0.1f;` |

**Notes:**

> 每打开一个宝箱时财富事件概率增加值。例如 0.1 表示每开一个宝箱增加 10% 概率。

---

### Property `CountdownEventInitialChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CountdownEventInitialChance = 0.5f;` |

**Notes:**

> 倒计时事件初始触发概率。进入最后一段时间后，每隔固定秒数按该概率尝试触发倒计时库事件，取值 0~1。

---

### Property `CountdownEventChanceDeltaAfterTrigger`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CountdownEventChanceDeltaAfterTrigger = -0.1f;` |

**Notes:**

> 倒计时事件触发成功后的概率变化值。填负数表示每次触发后递减，例如 -0.1。

---

### Property `CountdownEventStartPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CountdownEventStartPercent = 0.4f;` |

**Notes:**

> 倒计时事件开始触发的剩余时间比例。例如 0.4 表示战斗剩余最后 40% 时间时开始检测。

---

### Property `CountdownEventIntervalSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ClampMin = "1.0")) float CountdownEventIntervalSeconds = 60.f;` |

**Notes:**

> 倒计时事件检测间隔秒数。进入最后一段时间后，每隔该秒数尝试触发一次倒计时库事件。

---

### Property `BattleDurationMinutes`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleDurationMinutes = 15.f;` |

**Notes:**

> 本场门派战持续时间，单位：分钟。运行时会乘以 60 转成秒。

---
