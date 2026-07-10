# `class` `AEmergenceDirector`

**源码头文件:** `EastRimWorld/System/Emergence/Core/EmergenceDirectorSubsystem.h`

---

## 功能说明（来自头文件注释）

> 涌现导演 — v3.0 的"江湖导演"。
> 【存档】曾是 UWorldSubsystem, 但 Savior 不持久化世界子系统的 SaveGame 字段(沉寂闭环/冷却/快照/桥记录会丢)。
>   故改为单一 Actor 管理器(纯数据驱动, 与 ADominionManager / AApprenticeshipManager 同写法):
>   ALActor + ISAVIOR_Serializable + ISAVIOR_Procedural, SaveGame 字段随 Actor 经 Savior 入档。
>   由 UWorldManagerSystem::FindOrCreateWorldManageActors 用 StaticClass 直接 spawn; 单例 GetEmergenceDirector()。
> 不开 Tick; 绑 AWorldDirector::OnGameDayChanged 驱动心跳, 跨存档相位连续(LastBeatDay 入档)。
> 业务初始化在 OnInitialCallCompletion(Savior 恢复数据后/世界与各管理器就绪时), 不在 BeginPlay。

## 蓝图暴露变量

### 属性 `OnEmergentEventSpawned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEmergentEventSpawned` |
| 反射说明符 | BlueprintAssignable, Category="Emergence|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Events") FOnEmergentEventSpawned OnEmergentEventSpawned;` |

**说明:**

> ── 委托 ───────────────────────────────────────────────────────────────────

---

### 属性 `OnPressureUpdated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEmergencePressureUpdated` |
| 反射说明符 | BlueprintAssignable, Category="Emergence|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Events") FOnEmergencePressureUpdated OnPressureUpdated;` |

**说明:**

> On Pressure Updated 事件或回调。

---

## 蓝图暴露函数

### 函数 `GetEmergenceDirector`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AEmergenceDirector](EmergenceDirectorSubsystem__AEmergenceDirector.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) static AEmergenceDirector* GetEmergenceDirector();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> ── 单例 ──

---

### 函数 `Heartbeat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void Heartbeat();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 立即跑一拍心跳(调试用)

---

### 函数 `GetCurrentSnapshot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence" |
| 返回类型 | [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") FEmergencePressureSnapshot GetCurrentSnapshot() const { return CurrentSnapshot; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取当前压力快照(只读, 不触发重算)

---

### 函数 `GetPressureValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Dim` | [EEmergencePressureDim](../Data/EmergenceTypes__EEmergencePressureDim.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") float GetPressureValue(EEmergencePressureDim Dim) const { return CurrentSnapshot.GetValue(Dim); }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取某维度当前压力值 [0,1]

---

### 函数 `MarkPlaceEventOccurred`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void MarkPlaceEventOccurred(FGuid PlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 标记某地"刚出过事" — 闭合沉寂闭环(策划案 §3)。事件落到某地或外部系统出事时调用。
> 把该地沉寂度归零(记录当前游戏天)。

---

### 函数 `MarkForcePairClash`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceA` | `FGuid` |
| `ForceB` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void MarkForcePairClash(FGuid ForceA, FGuid ForceB);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 标记一对势力"刚火并/暗杀" — 闭合结仇冷却闭环(结仇压力步骤 5)。
> 火并/暗杀事件落地时调用, 记录当前游戏天, 使该对结仇压力在 FeudCooldownDays 内被线性压制。

---

### 函数 `ForceSpawnEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence|Debug" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence|Debug") FGuid ForceSpawnEvent(FName EventID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调试: 强制冒出指定事件(无视压力/冷却)直接落地

---

### 函数 `FindBridgeByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `UEmergenceEventBridgeBase*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InstanceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") UEmergenceEventBridgeBase* FindBridgeByGuid(const FGuid& InstanceGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按实例 Guid 取活跃桥(UI: 日志条目 EventInstanceGuid → 桥)

---

### 函数 `FindFirstBridgeByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `UEmergenceEventBridgeBase*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | [EEmergentBridgeType](../Data/EmergenceTypes__EEmergentBridgeType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") UEmergenceEventBridgeBase* FindFirstBridgeByType(EEmergentBridgeType Type) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取首个指定类型的活跃桥(论剑等单实例用)

---

### 函数 `GetBridgesByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | [EEmergentBridgeType](../Data/EmergenceTypes__EEmergentBridgeType.md) |
| `Out` | `TArray<UEmergenceEventBridgeBase*>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void GetBridgesByType(EEmergentBridgeType Type, TArray<UEmergenceEventBridgeBase*>& Out) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取所有指定类型的活跃桥(矿脉/强袭等多实例用)

---

### 函数 `GetSwordMeetBridge`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence" |
| 返回类型 | class [USwordMeetBridge](../Bridges/SwordMeetBridge__USwordMeetBridge.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") class USwordMeetBridge* GetSwordMeetBridge() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 便捷: 取当前论剑大会桥(单实例; 无活跃大会返回 null)。UI 报名界面用: GetSwordMeetPickCount/CheckPlayerCanJoinSwordMeet 等

---

### 函数 `GetRivalRaidBridge`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence" |
| 返回类型 | class [URivalRaidBridge](../Bridges/RivalRaidBridge__URivalRaidBridge.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") class URivalRaidBridge* GetRivalRaidBridge() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 便捷: 取当前强袭宿敌桥(该事件至多单实例; 无活跃强袭返回 null)。UI 应战界面用: GetPendingRivalDisciple/IsDiscipleAbleToFight/StartDuel

---

### 函数 `IsEventInStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InstanceGuid` | `const FGuid&` |
| `Stage` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") bool IsEventInStage(const FGuid& InstanceGuid, int32 Stage) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 某事件实例当前是否仍处指定阶段(桥仍活跃 且 GetCurrentStage()==Stage)。供日志超链接有效性判定

---

### 函数 `ReloadEventLibrary`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void ReloadEventLibrary();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重新装载事件库(策划改表后热重载)

---

### 函数 `InitRuntime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence") void InitRuntime();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> (重)初始化运行期: 重载调参资产 + 事件库表。原本每拍 Heartbeat 里跑的热载职责移到此处:
> 初始化时(TryBindToDirector)调一次, 之后由 emergence.init 控制台命令按需触发(PIE 调手感)。
> 不含沉寂闭环种子(那需世界地点就绪, 仍由首次 OnGameDayTick 负责)。

---
