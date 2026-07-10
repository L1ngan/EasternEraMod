# `class` `AWorldBattleTickManager`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## Functional description (from header comments)

> AWorldBattleTickManager — 周期化抽象战管理器（PR-7 实装）。
>  - 承接 FIFO 排队队列（PendingBattleQueue）与活跃推演场（ActiveTimedBattleGuids + TimedBattleRecords）。
>  - StartTimedBattle：建抽象战记录 + 占用并发名额 + 起 5 秒周期定时器推进。
>  - 4 阶段状态机（集结/交战/僵持/决战）+ 5 秒 Tick 势头公式（BattleAdvantage ±100）。
>  - EndBattle：势头到 ±100 时触发三选一处置结算（复用 AWorldForce 处置入口）后出队联动。
>  - 战报 / 关键事件：本 PR 只埋回调钩子点 + TODO PR-8；关键事件对 Advantage 的影响留接口。

## Blueprint-exposed variables

### Property `OnWarReportBroadcast`

| Field | Details |
|------|------|
| C++ type | `FOnWarReportBroadcast` |
| Reflection specifiers | BlueprintAssignable, Category="SectWar|Timed|Report" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "SectWar|Timed|Report") FOnWarReportBroadcast OnWarReportBroadcast;` |

**Notes:**

> ── PR-8 UI 广播委托（UI 层监听）────────────────────────────────────────────
> 每次战报选中后广播（挑文案→替换占位符→广播）。

---

### Property `OnCriticalMomentBroadcast`

| Field | Details |
|------|------|
| C++ type | `FOnCriticalMomentBroadcast` |
| Reflection specifiers | BlueprintAssignable, Category="SectWar|Timed|Report" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "SectWar|Timed|Report") FOnCriticalMomentBroadcast OnCriticalMomentBroadcast;` |

**Notes:**

> 每次关键事件触发后广播（事件名 + Advantage 影响增量）。

---

## Blueprint-exposed functions

### Function `GetWorldBattleTickManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| Return type | [AWorldBattleTickManager](WorldBattleTickManager__AWorldBattleTickManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") static AWorldBattleTickManager* GetWorldBattleTickManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前世界里的周期化战斗管理器实例。

---

### Function `StartTimedBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SectWar|Timed" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |
| `TeamInfo` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md)& |
| `AttackerCombat` | `float` |
| `DefenderCombat` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SectWar|Timed") FGuid StartTimedBattle(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid, const FBattleTeamInfo& TeamInfo, float AttackerCombat, float DefenderCombat);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 接口契约（PR-6 定，PR-7 实现）。建抽象战记录 + 占名额 + 起 5 秒周期 Tick。
> 返回本场周期化战的标识 Guid（EndBattle 出队联动用）。

---

### Function `EndBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="SectWar|Timed" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "SectWar|Timed") void EndBattle(const FGuid& TimedBattleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 一场周期化战斗结束时调用：先触发三选一处置结算，再从活跃集移除并尝试出队下一条。

---

### Function `IsBattlePlayerRelevant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") bool IsBattlePlayerRelevant(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 玩家相关性判定（窄口径）：攻方或守方势力 == PlayerForceGuid，或目标为玩家据点。

---

### Function `GetActiveTimedBattleNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") int32 GetActiveTimedBattleNum() const { return ActiveTimedBattleGuids.Num(); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前活跃周期化推演场数量（= 并发计数源）。

---

### Function `IsAtConcurrencyLimit`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") bool IsAtConcurrencyLimit() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否已达并发上限（读配置 MaxConcurrentTimedBattles）。

---

### Function `OnBattleReport`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintNativeEvent, Category="SectWar|Timed|Report" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |
| `Phase` | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| `CurrentAdvantage` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent, Category = "SectWar|Timed|Report") void OnBattleReport(const FGuid& TimedBattleGuid, ETimedBattlePhase Phase, float CurrentAdvantage);`

**Usage:** **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> ── PR-8 战报/关键事件钩子 ──────────────────────────────────────────────────
> 每 Tick 30% 概率回调：读 DT_WarReports 按 Phase+Trigger 筛选→随机→占位符替换→广播 OnWarReportBroadcast。
> BlueprintNativeEvent：C++ 提供默认实现，蓝图可覆盖。

---

### Function `OnCriticalMoment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintNativeEvent, Category="SectWar|Timed|Report" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |
| `Phase` | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| `CurrentAdvantage` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent, Category = "SectWar|Timed|Report") float OnCriticalMoment(const FGuid& TimedBattleGuid, ETimedBattlePhase Phase, float CurrentAdvantage);`

**Usage:** **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 僵持期 20% / 交战期 5% 概率回调：读 DT_BattleCriticalMoments 随机取一条→计算 Advantage 增量→广播 OnCriticalMomentBroadcast。
> 返回值 = 对 BattleAdvantage 的增量（PR-7 会加到 Advantage）。
> BlueprintNativeEvent：C++ 提供默认实现，蓝图可覆盖。

---
