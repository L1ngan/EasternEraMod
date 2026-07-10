# `class` `AApprenticeshipManager`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipManager.h`

---

## Functional description (from header comments)

> 弟子历练管理器 — 单一 Actor 管理器(纯数据驱动)
> 取代 UApprenticeshipComponent + UApprenticeshipSubsystem +
> UApprenticeshipDispatchManager + UApprenticeshipMapIconManager。
> 全部历练以 FApprenticeshipRecord(纯数据)承载在 Records 里;玩家/NPC 同一套流程,
> 差异仅 bIsNPC + 收益分流。地图移动与表现归 AWorldMapManage,本管理器只做数据计算,
> 状态变化(出发/逗留/转城/归途)时调用 AWorldMapManage 更新 2D 移动。
> 驱动:
>   - 每日推进:绑定 AWorldDirector::OnGameDayChanged → OnGameDayChangedHandler
>   - 抵达驱动:AWorldMapManage::UpdateWorldActorMoveState2D 的历练钩子 → OnDiscipleArrivedCity/Home
> 日志:LLOG/LLOGW/LLOGE

## Blueprint-exposed variables

### Property `Records`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipRecord](ApprenticeshipTypes__FApprenticeshipRecord.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") TArray<FApprenticeshipRecord> Records;` |

**Notes:**

> 所有历练记录(玩家 + NPC,主键 RecordGuid = 2D 移动表 key)

---

### Property `CurrentDispatchedCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") int32 CurrentDispatchedCount = 0;` |

**Notes:**

> 在外弟子计数缓存(由 RecalcDispatchedCount 维护)

---

### Property `TempDestinations`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FApprenticeshipTempDestination](ApprenticeshipManager__FApprenticeshipTempDestination.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") TMap<FGuid, FApprenticeshipTempDestination> TempDestinations;` |

**Notes:**

> [涌现 §4.8] 临时历练目的地: PlaceGuid → 目的地数据(涌现注册, 每日检查过期)

---

### Property `OnDispatchSucceeded`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipDispatchSucceeded` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchSucceeded OnDispatchSucceeded;` |

**Notes:**

> ── 委托 ──

---

### Property `OnDispatchFailed`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipDispatchFailed` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchFailed OnDispatchFailed;` |

**Notes:**

> On Dispatch Failed event or callback.

---

### Property `OnRecallSucceeded`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipRecallSucceeded` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipRecallSucceeded OnRecallSucceeded;` |

**Notes:**

> On Recall Succeeded event or callback.

---

### Property `OnDispatchCountChanged`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipDispatchCountChanged` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchCountChanged OnDispatchCountChanged;` |

**Notes:**

> On Dispatch Count Changed event or callback.

---

### Property `OnDispatchLimitReached`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipDispatchLimitReached` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchLimitReached OnDispatchLimitReached;` |

**Notes:**

> On Dispatch Limit Reached event or callback.

---

### Property `OnApprenticeshipEventTriggered`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipEventTriggered` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipEventTriggered OnApprenticeshipEventTriggered;` |

**Notes:**

> [涌现 §4.8] 历练遭遇大事(EventID 对应历练事件模板)/ 弟子历险归来; 供涌现订阅生成长线江湖事件

---

### Property `OnApprenticeshipReturned`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipReturned` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipReturned OnApprenticeshipReturned;` |

**Notes:**

> On Apprenticeship Returned event or callback.

---

### Property `OnTempDestExpired`

| Field | Details |
|------|------|
| C++ type | `FOnApprenticeshipTempDestExpired` |
| Reflection specifiers | BlueprintAssignable, Category="Apprenticeship|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipTempDestExpired OnTempDestExpired;` |

**Notes:**

> [限时地点事件] 临时目的地到期未触发被清除时广播(涌现播报"限时结束")

---

## Blueprint-exposed functions

### Function `GetApprenticeshipManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AApprenticeshipManager](ApprenticeshipManager__AApprenticeshipManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static AApprenticeshipManager* GetApprenticeshipManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> ── 单例 ──

---

### Function `DispatchDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `TargetCityGuid` | `FGuid` |
| `PaymentSilver` | `int32` |
| `MaxDays` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") bool DispatchDisciple(FGuid DiscipleGuid, FGuid TargetCityGuid, int32 PaymentSilver, float MaxDays);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 派遣玩家弟子历练(纯数据:不再要求弟子 Actor 在场)
> @param DiscipleGuid   弟子角色 Guid
> @param TargetCityGuid 目标城真实 Guid
> @param PaymentSilver  初始盘缠
> @param MaxDays        单城逗留上限

---

### Function `RecallDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RecordGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") bool RecallDisciple(FGuid RecordGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 召回(按 RecordGuid;触发 2D 回程)

---

### Function `RegisterTempDestination`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `FGuid` |
| `EventIDs` | `const TArray<FName>&` |
| `DurationDays` | `int32` |
| `0` | `int32 MaxTriggerCount =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") void RegisterTempDestination(FGuid PlaceGuid, const TArray<FName>& EventIDs, int32 DurationDays, int32 MaxTriggerCount = 0);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [涌现 §4.8 / 限时地点事件] 注册临时历练目的地: 地点成为可派遣处并叠加专属事件, DurationDays 天后失效。
> @param MaxTriggerCount 限次(0=不限次); 专属事件累计触发达此数即撤销目的地(走限次, 不发"到期"信号)

---

### Function `UnregisterTempDestination`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") void UnregisterTempDestination(FGuid PlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [涌现 §4.8] 注销临时历练目的地

---

### Function `GetWorldMapDiscipleCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") int32 GetWorldMapDiscipleCount() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前在外历练弟子总数(玩家 + NPC)= 未结算 Records 数

---

### Function `CanNPCDispatchMore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") bool CanNPCDispatchMore() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> NPC 新派是否允许(在外总数 < 上限)

---

### Function `CanDispatchMore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") bool CanDispatchMore() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Can Dispatch More.

---

### Function `GetDispatchedDetails`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Query" |
| Return type | TArray<[FApprenticeshipDispatchInfo](ApprenticeshipTypes__FApprenticeshipDispatchInfo.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") TArray<FApprenticeshipDispatchInfo> GetDispatchedDetails() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在途弟子详情快照(供历练面板列表)

---

### Function `GetAvailableCities`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| Return type | TArray<[FApprenticeshipCityInfo](ApprenticeshipTypes__FApprenticeshipCityInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `true` | `bool bOnlyUnlocked =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FApprenticeshipCityInfo> GetAvailableCities(bool bOnlyUnlocked = true) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 可派目的城(DT_CityEventConfig 白名单 ∩ 地图真实城)

---

### Function `GetDispatchableDisciples`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| Return type | TArray<[FApprenticeshipDiscipleInfo](ApprenticeshipTypes__FApprenticeshipDiscipleInfo.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FApprenticeshipDiscipleInfo> GetDispatchableDisciples() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 可派遣的本派空闲弟子

---

### Function `GetDispatchableDiscipleGuids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| Return type | `TArray<FGuid>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FGuid> GetDispatchableDiscipleGuids() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 可派遣本派空闲弟子的 Guid 列表(UI 选人用:配合 AWorldDirector::FindCharacterSaveDatas 转 CharacterSaveData)

---

### Function `GetDiscipleAvatar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Query" |
| Return type | `UTexture2D*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `AvatarType` | [EDiscipleAvatarType](../../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") UTexture2D* GetDiscipleAvatar(FGuid DiscipleGuid, EDiscipleAvatarType AvatarType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按弟子 Guid + 立绘类型取头像贴图(UI 通用:派遣弹框/游历卡 都用;走 GameMode->GetCharacterAvatar 同步加载软引用)

---

### Function `GetApprenticeshipDetail`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Query" |
| Return type | [FApprenticeshipDetailInfo](ApprenticeshipTypes__FApprenticeshipDetailInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RecordGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") FApprenticeshipDetailInfo GetApprenticeshipDetail(FGuid RecordGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 单条历练详情(玩家点开在途弟子)——按 RecordGuid 取;查不到返回默认结构

---

### Function `GetApprenticeshipDetailByDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Query" |
| Return type | [FApprenticeshipDetailInfo](ApprenticeshipTypes__FApprenticeshipDetailInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") FApprenticeshipDetailInfo GetApprenticeshipDetailByDisciple(FGuid DiscipleGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 单条历练详情——按弟子角色 Guid 取(UI 只持有 DiscipleGuid 时用)

---

### Function `GetDisciplesInCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Query" |
| Return type | TArray<[FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") TArray<FCharacterSaveData> GetDisciplesInCity(FGuid CityGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当前在指定城市历练中(Roaming 已抵达)的弟子角色存档(玩家+NPC);CityGuid 无效返回空

---

### Function `GetCityRewardTypes`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| Return type | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<EApprenticeshipRewardType> GetCityRewardTypes(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取目的城可获得的去重奖励类型集合(供派遣弹框显示特产图标)。
> 遍历路径: GetApprenticeshipEventIDs → FApprenticeshipEventRow.RewardPoolID
>           → FApprenticeshipRewardPoolRow.RewardSets[].SetID
>           → FApprenticeshipRewardSet.FixedRewardIDs + RandomRewards[].RewardID
>           → FApprenticeshipReward.Type (去重)
> 全程空指针安全, 查不到则跳过。

---

### Function `GetDispatchCityPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| Return type | [FApprenticeshipDispatchCityPreview](ApprenticeshipTypes__FApprenticeshipDispatchCityPreview.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") FApprenticeshipDispatchCityPreview GetDispatchCityPreview(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取目的城派遣预览快照(隶属势力 + 好感度 + 奖励类型)。
> 好感度取玩家势力 vs 城市所属势力的当前值。

---

### Function `OnDiscipleArrivedCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Internal" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RecordGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Internal") void OnDiscipleArrivedCity(FGuid RecordGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 去程抵达目标城:切 Roaming + 登记城市历练驻留

---

### Function `OnDiscipleArrivedHome`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship|Internal" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RecordGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Internal") void OnDiscipleArrivedHome(FGuid RecordGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 回程抵达起点城:结算归来并移除记录

---
