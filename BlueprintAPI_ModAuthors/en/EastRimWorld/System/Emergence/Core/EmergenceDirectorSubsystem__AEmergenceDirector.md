# `class` `AEmergenceDirector`

**Source header:** `EastRimWorld/System/Emergence/Core/EmergenceDirectorSubsystem.h`

---

## Functional description (from header comments)

> 涌现导演 — v3.0 的"江湖导演"。
> 【存档】曾是 UWorldSubsystem, 但 Savior 不持久化世界子系统的 SaveGame 字段(沉寂闭环/冷却/快照/桥记录会丢)。
>   故改为单一 Actor 管理器(纯数据驱动, 与 ADominionManager / AApprenticeshipManager 同写法):
>   ALActor + ISAVIOR_Serializable + ISAVIOR_Procedural, SaveGame 字段随 Actor 经 Savior 入档。
>   由 UWorldManagerSystem::FindOrCreateWorldManageActors 用 StaticClass 直接 spawn; 单例 GetEmergenceDirector()。
> 不开 Tick; 绑 AWorldDirector::OnGameDayChanged 驱动心跳, 跨存档相位连续(LastBeatDay 入档)。
> 业务初始化在 OnInitialCallCompletion(Savior 恢复数据后/世界与各管理器就绪时), 不在 BeginPlay。

## Blueprint-exposed variables

### Property `OnEmergentEventSpawned`

| Field | Details |
|------|------|
| C++ type | `FOnEmergentEventSpawned` |
| Reflection specifiers | BlueprintAssignable, Category="Emergence|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Events") FOnEmergentEventSpawned OnEmergentEventSpawned;` |

**Notes:**

> ── 委托 ───────────────────────────────────────────────────────────────────

---

### Property `OnPressureUpdated`

| Field | Details |
|------|------|
| C++ type | `FOnEmergencePressureUpdated` |
| Reflection specifiers | BlueprintAssignable, Category="Emergence|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Events") FOnEmergencePressureUpdated OnPressureUpdated;` |

**Notes:**

> On Pressure Updated event or callback.

---

## Blueprint-exposed functions

### Function `GetEmergenceDirector`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AEmergenceDirector](EmergenceDirectorSubsystem__AEmergenceDirector.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static AEmergenceDirector* GetEmergenceDirector();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> ── 单例 ──

---

### Function `Heartbeat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void Heartbeat();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 立即跑一拍心跳(调试用)

---

### Function `GetCurrentSnapshot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence" |
| Return type | [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") FEmergencePressureSnapshot GetCurrentSnapshot() const { return CurrentSnapshot; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取当前压力快照(只读, 不触发重算)

---

### Function `GetPressureValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Dim` | [EEmergencePressureDim](../Data/EmergenceTypes__EEmergencePressureDim.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") float GetPressureValue(EEmergencePressureDim Dim) const { return CurrentSnapshot.GetValue(Dim); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取某维度当前压力值 [0,1]

---

### Function `MarkPlaceEventOccurred`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void MarkPlaceEventOccurred(FGuid PlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 标记某地"刚出过事" — 闭合沉寂闭环(策划案 §3)。事件落到某地或外部系统出事时调用。
> 把该地沉寂度归零(记录当前游戏天)。

---

### Function `MarkForcePairClash`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceA` | `FGuid` |
| `ForceB` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void MarkForcePairClash(FGuid ForceA, FGuid ForceB);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 标记一对势力"刚火并/暗杀" — 闭合结仇冷却闭环(结仇压力步骤 5)。
> 火并/暗杀事件落地时调用, 记录当前游戏天, 使该对结仇压力在 FeudCooldownDays 内被线性压制。

---

### Function `ForceSpawnEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence|Debug" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence|Debug") FGuid ForceSpawnEvent(FName EventID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 调试: 强制冒出指定事件(无视压力/冷却)直接落地

---

### Function `FindBridgeByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `UEmergenceEventBridgeBase*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InstanceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") UEmergenceEventBridgeBase* FindBridgeByGuid(const FGuid& InstanceGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按实例 Guid 取活跃桥(UI: 日志条目 EventInstanceGuid → 桥)

---

### Function `FindFirstBridgeByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `UEmergenceEventBridgeBase*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | [EEmergentBridgeType](../Data/EmergenceTypes__EEmergentBridgeType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") UEmergenceEventBridgeBase* FindFirstBridgeByType(EEmergentBridgeType Type) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取首个指定类型的活跃桥(论剑等单实例用)

---

### Function `GetBridgesByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | [EEmergentBridgeType](../Data/EmergenceTypes__EEmergentBridgeType.md) |
| `Out` | `TArray<UEmergenceEventBridgeBase*>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void GetBridgesByType(EEmergentBridgeType Type, TArray<UEmergenceEventBridgeBase*>& Out) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取所有指定类型的活跃桥(矿脉/强袭等多实例用)

---

### Function `GetSwordMeetBridge`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence" |
| Return type | class [USwordMeetBridge](../Bridges/SwordMeetBridge__USwordMeetBridge.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") class USwordMeetBridge* GetSwordMeetBridge() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 便捷: 取当前论剑大会桥(单实例; 无活跃大会返回 null)。UI 报名界面用: GetSwordMeetPickCount/CheckPlayerCanJoinSwordMeet 等

---

### Function `GetRivalRaidBridge`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence" |
| Return type | class [URivalRaidBridge](../Bridges/RivalRaidBridge__URivalRaidBridge.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") class URivalRaidBridge* GetRivalRaidBridge() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 便捷: 取当前强袭宿敌桥(该事件至多单实例; 无活跃强袭返回 null)。UI 应战界面用: GetPendingRivalDisciple/IsDiscipleAbleToFight/StartDuel

---

### Function `IsEventInStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InstanceGuid` | `const FGuid&` |
| `Stage` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence") bool IsEventInStage(const FGuid& InstanceGuid, int32 Stage) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 某事件实例当前是否仍处指定阶段(桥仍活跃 且 GetCurrentStage()==Stage)。供日志超链接有效性判定

---

### Function `ReloadEventLibrary`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void ReloadEventLibrary();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重新装载事件库(策划改表后热重载)

---

### Function `InitRuntime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence") void InitRuntime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> (重)初始化运行期: 重载调参资产 + 事件库表。原本每拍 Heartbeat 里跑的热载职责移到此处:
> 初始化时(TryBindToDirector)调一次, 之后由 emergence.init 控制台命令按需触发(PIE 调手感)。
> 不含沉寂闭环种子(那需世界地点就绪, 仍由首次 OnGameDayTick 负责)。

---
