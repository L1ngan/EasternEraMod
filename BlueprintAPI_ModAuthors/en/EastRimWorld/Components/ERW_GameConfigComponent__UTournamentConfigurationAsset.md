# `class` `UTournamentConfigurationAsset`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> 门派战配置资产

## Blueprint-exposed variables

### Property `SingleBattlePrepareTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattlePrepareTime = 5.f;` |

**Notes:**

> 每场战斗的准备时间(连线时间)

---

### Property `SingleBattleStartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleStartTime = 5.f;` |

**Notes:**

> 每场战斗的开始时间

---

### Property `SingleBattleInProgressTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleInProgressTime = 5.f;` |

**Notes:**

> 每场战斗的战斗中时间

---

### Property `SingleBattleEndTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleEndTime = 5.f;` |

**Notes:**

> 每场战斗的结束展示

---

### Property `SingleBattleSettleTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SingleBattleSettleTime = 5.f;` |

**Notes:**

> 每场战斗的结算展示(连线时间)

---

### Property `NextRoundIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float NextRoundIntervalTime = 5.f;` |

**Notes:**

> 每轮的间隔时间

---

### Property `SkipCurRoundIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SkipCurRoundIntervalTime = 5.f;` |

**Notes:**

> 跳过本轮战斗时间隔时间

---

### Property `DefaultBehaviorTree`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<class UBehaviorTree>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<class UBehaviorTree> DefaultBehaviorTree;` |

**Notes:**

> 武林大会默认行为树

---

### Property `SoloTournamentIntervalTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SoloTournamentIntervalTime = 19200;` |

**Notes:**

> 单人比赛的时间间隔

---

### Property `SoloTournamentFirstDelayTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SoloTournamentFirstDelayTime = 10;` |

**Notes:**

> 单人比赛的首次的时间延迟 注意 不会与游戏初始时间相加

---

### Property `TeamTournamentIntervalTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamTournamentIntervalTime = 38400;` |

**Notes:**

> 多人比赛的时间间隔

---

### Property `TeamTournamentFirstDelayTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamTournamentFirstDelayTime = 10;` |

**Notes:**

> 多人比赛的首次的时间延迟 注意 不会与游戏初始时间相加

---

### Property `RankRewardIntervalTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 RankRewardIntervalTime = 38400;` |

**Notes:**

> 门派排名奖励发放间隔

---

### Property `SlowTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SlowTime = 1;` |

**Notes:**

> 时停的时间下的展示时间

---

### Property `TimeSpeedMultiplier`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TimeSpeedMultiplier = 0.1;` |

**Notes:**

> 时停的时间倍数

---

### Property `BattleEndIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float BattleEndIntervalTime = 1;` |

**Notes:**

> 战斗结束后显示界面的间隔时间

---
