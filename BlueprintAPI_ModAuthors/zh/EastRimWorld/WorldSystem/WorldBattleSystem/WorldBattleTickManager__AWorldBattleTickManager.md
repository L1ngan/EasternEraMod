# `class` `AWorldBattleTickManager`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## 功能说明（来自头文件注释）

> AWorldBattleTickManager — 周期化抽象战管理器（PR-7 实装）。
>  - 承接 FIFO 排队队列（PendingBattleQueue）与活跃推演场（ActiveTimedBattleGuids + TimedBattleRecords）。
>  - StartTimedBattle：建抽象战记录 + 占用并发名额 + 起 5 秒周期定时器推进。
>  - 4 阶段状态机（集结/交战/僵持/决战）+ 5 秒 Tick 势头公式（BattleAdvantage ±100）。
>  - EndBattle：势头到 ±100 时触发三选一处置结算（复用 AWorldForce 处置入口）后出队联动。
>  - 战报 / 关键事件：本 PR 只埋回调钩子点 + TODO PR-8；关键事件对 Advantage 的影响留接口。

## 蓝图暴露变量

### 属性 `OnWarReportBroadcast`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWarReportBroadcast` |
| 反射说明符 | BlueprintAssignable, Category="SectWar|Timed|Report" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "SectWar|Timed|Report") FOnWarReportBroadcast OnWarReportBroadcast;` |

**说明:**

> ── PR-8 UI 广播委托（UI 层监听）────────────────────────────────────────────
> 每次战报选中后广播（挑文案→替换占位符→广播）。

---

### 属性 `OnCriticalMomentBroadcast`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCriticalMomentBroadcast` |
| 反射说明符 | BlueprintAssignable, Category="SectWar|Timed|Report" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "SectWar|Timed|Report") FOnCriticalMomentBroadcast OnCriticalMomentBroadcast;` |

**说明:**

> 每次关键事件触发后广播（事件名 + Advantage 影响增量）。

---

## 蓝图暴露函数

### 函数 `GetWorldBattleTickManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| 返回类型 | [AWorldBattleTickManager](WorldBattleTickManager__AWorldBattleTickManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") static AWorldBattleTickManager* GetWorldBattleTickManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前世界里的周期化战斗管理器实例。

---

### 函数 `StartTimedBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SectWar|Timed" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |
| `TeamInfo` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md)& |
| `AttackerCombat` | `float` |
| `DefenderCombat` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SectWar|Timed") FGuid StartTimedBattle(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid, const FBattleTeamInfo& TeamInfo, float AttackerCombat, float DefenderCombat);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 接口契约（PR-6 定，PR-7 实现）。建抽象战记录 + 占名额 + 起 5 秒周期 Tick。
> 返回本场周期化战的标识 Guid（EndBattle 出队联动用）。

---

### 函数 `EndBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SectWar|Timed" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SectWar|Timed") void EndBattle(const FGuid& TimedBattleGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 一场周期化战斗结束时调用：先触发三选一处置结算，再从活跃集移除并尝试出队下一条。

---

### 函数 `IsBattlePlayerRelevant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") bool IsBattlePlayerRelevant(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 玩家相关性判定（窄口径）：攻方或守方势力 == PlayerForceGuid，或目标为玩家据点。

---

### 函数 `GetActiveTimedBattleNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") int32 GetActiveTimedBattleNum() const { return ActiveTimedBattleGuids.Num(); }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前活跃周期化推演场数量（= 并发计数源）。

---

### 函数 `IsAtConcurrencyLimit`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SectWar|Timed" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SectWar|Timed") bool IsAtConcurrencyLimit() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否已达并发上限（读配置 MaxConcurrentTimedBattles）。

---

### 函数 `OnBattleReport`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintNativeEvent, Category="SectWar|Timed|Report" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |
| `Phase` | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| `CurrentAdvantage` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent, Category = "SectWar|Timed|Report") void OnBattleReport(const FGuid& TimedBattleGuid, ETimedBattlePhase Phase, float CurrentAdvantage);`

**用法说明:** **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> ── PR-8 战报/关键事件钩子 ──────────────────────────────────────────────────
> 每 Tick 30% 概率回调：读 DT_WarReports 按 Phase+Trigger 筛选→随机→占位符替换→广播 OnWarReportBroadcast。
> BlueprintNativeEvent：C++ 提供默认实现，蓝图可覆盖。

---

### 函数 `OnCriticalMoment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintNativeEvent, Category="SectWar|Timed|Report" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimedBattleGuid` | `const FGuid&` |
| `Phase` | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| `CurrentAdvantage` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent, Category = "SectWar|Timed|Report") float OnCriticalMoment(const FGuid& TimedBattleGuid, ETimedBattlePhase Phase, float CurrentAdvantage);`

**用法说明:** **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 僵持期 20% / 交战期 5% 概率回调：读 DT_BattleCriticalMoments 随机取一条→计算 Advantage 增量→广播 OnCriticalMomentBroadcast。
> 返回值 = 对 BattleAdvantage 的增量（PR-7 会加到 Advantage）。
> BlueprintNativeEvent：C++ 提供默认实现，蓝图可覆盖。

---
