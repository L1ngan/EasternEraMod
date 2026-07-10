# `class` `AApprenticeshipManager`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipManager.h`

---

## 功能说明（来自头文件注释）

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

## 蓝图暴露变量

### 属性 `Records`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipRecord](ApprenticeshipTypes__FApprenticeshipRecord.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") TArray<FApprenticeshipRecord> Records;` |

**说明:**

> 所有历练记录(玩家 + NPC,主键 RecordGuid = 2D 移动表 key)

---

### 属性 `CurrentDispatchedCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") int32 CurrentDispatchedCount = 0;` |

**说明:**

> 在外弟子计数缓存(由 RecalcDispatchedCount 维护)

---

### 属性 `TempDestinations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FApprenticeshipTempDestination](ApprenticeshipManager__FApprenticeshipTempDestination.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Runtime") TMap<FGuid, FApprenticeshipTempDestination> TempDestinations;` |

**说明:**

> [涌现 §4.8] 临时历练目的地: PlaceGuid → 目的地数据(涌现注册, 每日检查过期)

---

### 属性 `OnDispatchSucceeded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipDispatchSucceeded` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchSucceeded OnDispatchSucceeded;` |

**说明:**

> ── 委托 ──

---

### 属性 `OnDispatchFailed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipDispatchFailed` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchFailed OnDispatchFailed;` |

**说明:**

> On Dispatch Failed 事件或回调。

---

### 属性 `OnRecallSucceeded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipRecallSucceeded` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipRecallSucceeded OnRecallSucceeded;` |

**说明:**

> On Recall Succeeded 事件或回调。

---

### 属性 `OnDispatchCountChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipDispatchCountChanged` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchCountChanged OnDispatchCountChanged;` |

**说明:**

> On Dispatch Count Changed 事件或回调。

---

### 属性 `OnDispatchLimitReached`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipDispatchLimitReached` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipDispatchLimitReached OnDispatchLimitReached;` |

**说明:**

> On Dispatch Limit Reached 事件或回调。

---

### 属性 `OnApprenticeshipEventTriggered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipEventTriggered` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipEventTriggered OnApprenticeshipEventTriggered;` |

**说明:**

> [涌现 §4.8] 历练遭遇大事(EventID 对应历练事件模板)/ 弟子历险归来; 供涌现订阅生成长线江湖事件

---

### 属性 `OnApprenticeshipReturned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipReturned` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipReturned OnApprenticeshipReturned;` |

**说明:**

> On Apprenticeship Returned 事件或回调。

---

### 属性 `OnTempDestExpired`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnApprenticeshipTempDestExpired` |
| 反射说明符 | BlueprintAssignable, Category="Apprenticeship|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Apprenticeship|Events") FOnApprenticeshipTempDestExpired OnTempDestExpired;` |

**说明:**

> [限时地点事件] 临时目的地到期未触发被清除时广播(涌现播报"限时结束")

---

## 蓝图暴露函数

### 函数 `GetApprenticeshipManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AApprenticeshipManager](ApprenticeshipManager__AApprenticeshipManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) static AApprenticeshipManager* GetApprenticeshipManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> ── 单例 ──

---

### 函数 `DispatchDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `TargetCityGuid` | `FGuid` |
| `PaymentSilver` | `int32` |
| `MaxDays` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") bool DispatchDisciple(FGuid DiscipleGuid, FGuid TargetCityGuid, int32 PaymentSilver, float MaxDays);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 派遣玩家弟子历练(纯数据:不再要求弟子 Actor 在场)
> @param DiscipleGuid   弟子角色 Guid
> @param TargetCityGuid 目标城真实 Guid
> @param PaymentSilver  初始盘缠
> @param MaxDays        单城逗留上限

---

### 函数 `RecallDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RecordGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") bool RecallDisciple(FGuid RecordGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 召回(按 RecordGuid;触发 2D 回程)

---

### 函数 `RegisterTempDestination`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `FGuid` |
| `EventIDs` | `const TArray<FName>&` |
| `DurationDays` | `int32` |
| `0` | `int32 MaxTriggerCount =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") void RegisterTempDestination(FGuid PlaceGuid, const TArray<FName>& EventIDs, int32 DurationDays, int32 MaxTriggerCount = 0);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [涌现 §4.8 / 限时地点事件] 注册临时历练目的地: 地点成为可派遣处并叠加专属事件, DurationDays 天后失效。
> @param MaxTriggerCount 限次(0=不限次); 专属事件累计触发达此数即撤销目的地(走限次, 不发"到期"信号)

---

### 函数 `UnregisterTempDestination`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Dispatch" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Dispatch") void UnregisterTempDestination(FGuid PlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [涌现 §4.8] 注销临时历练目的地

---

### 函数 `GetWorldMapDiscipleCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") int32 GetWorldMapDiscipleCount() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前在外历练弟子总数(玩家 + NPC)= 未结算 Records 数

---

### 函数 `CanNPCDispatchMore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") bool CanNPCDispatchMore() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> NPC 新派是否允许(在外总数 < 上限)

---

### 函数 `CanDispatchMore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Dispatch" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Dispatch") bool CanDispatchMore() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Can Dispatch More。

---

### 函数 `GetDispatchedDetails`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Query" |
| 返回类型 | TArray<[FApprenticeshipDispatchInfo](ApprenticeshipTypes__FApprenticeshipDispatchInfo.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") TArray<FApprenticeshipDispatchInfo> GetDispatchedDetails() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 在途弟子详情快照(供历练面板列表)

---

### 函数 `GetAvailableCities`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| 返回类型 | TArray<[FApprenticeshipCityInfo](ApprenticeshipTypes__FApprenticeshipCityInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `true` | `bool bOnlyUnlocked =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FApprenticeshipCityInfo> GetAvailableCities(bool bOnlyUnlocked = true) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 可派目的城(DT_CityEventConfig 白名单 ∩ 地图真实城)

---

### 函数 `GetDispatchableDisciples`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| 返回类型 | TArray<[FApprenticeshipDiscipleInfo](ApprenticeshipTypes__FApprenticeshipDiscipleInfo.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FApprenticeshipDiscipleInfo> GetDispatchableDisciples() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 可派遣的本派空闲弟子

---

### 函数 `GetDispatchableDiscipleGuids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<FGuid> GetDispatchableDiscipleGuids() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 可派遣本派空闲弟子的 Guid 列表(UI 选人用:配合 AWorldDirector::FindCharacterSaveDatas 转 CharacterSaveData)

---

### 函数 `GetDiscipleAvatar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Query" |
| 返回类型 | `UTexture2D*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |
| `AvatarType` | [EDiscipleAvatarType](../../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") UTexture2D* GetDiscipleAvatar(FGuid DiscipleGuid, EDiscipleAvatarType AvatarType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按弟子 Guid + 立绘类型取头像贴图(UI 通用:派遣弹框/游历卡 都用;走 GameMode->GetCharacterAvatar 同步加载软引用)

---

### 函数 `GetApprenticeshipDetail`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Query" |
| 返回类型 | [FApprenticeshipDetailInfo](ApprenticeshipTypes__FApprenticeshipDetailInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RecordGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") FApprenticeshipDetailInfo GetApprenticeshipDetail(FGuid RecordGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 单条历练详情(玩家点开在途弟子)——按 RecordGuid 取;查不到返回默认结构

---

### 函数 `GetApprenticeshipDetailByDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Query" |
| 返回类型 | [FApprenticeshipDetailInfo](ApprenticeshipTypes__FApprenticeshipDetailInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") FApprenticeshipDetailInfo GetApprenticeshipDetailByDisciple(FGuid DiscipleGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 单条历练详情——按弟子角色 Guid 取(UI 只持有 DiscipleGuid 时用)

---

### 函数 `GetDisciplesInCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Query" |
| 返回类型 | TArray<[FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Query") TArray<FCharacterSaveData> GetDisciplesInCity(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 当前在指定城市历练中(Roaming 已抵达)的弟子角色存档(玩家+NPC);CityGuid 无效返回空

---

### 函数 `GetCityRewardTypes`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| 返回类型 | TArray<[EApprenticeshipRewardType](ApprenticeshipRewardTypes__EApprenticeshipRewardType.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") TArray<EApprenticeshipRewardType> GetCityRewardTypes(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取目的城可获得的去重奖励类型集合(供派遣弹框显示特产图标)。
> 遍历路径: GetApprenticeshipEventIDs → FApprenticeshipEventRow.RewardPoolID
>           → FApprenticeshipRewardPoolRow.RewardSets[].SetID
>           → FApprenticeshipRewardSet.FixedRewardIDs + RandomRewards[].RewardID
>           → FApprenticeshipReward.Type (去重)
> 全程空指针安全, 查不到则跳过。

---

### 函数 `GetDispatchCityPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Apprenticeship|Query" |
| 返回类型 | [FApprenticeshipDispatchCityPreview](ApprenticeshipTypes__FApprenticeshipDispatchCityPreview.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Apprenticeship|Query") FApprenticeshipDispatchCityPreview GetDispatchCityPreview(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取目的城派遣预览快照(隶属势力 + 好感度 + 奖励类型)。
> 好感度取玩家势力 vs 城市所属势力的当前值。

---

### 函数 `OnDiscipleArrivedCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Internal" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RecordGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Internal") void OnDiscipleArrivedCity(FGuid RecordGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 去程抵达目标城:切 Roaming + 登记城市历练驻留

---

### 函数 `OnDiscipleArrivedHome`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship|Internal" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RecordGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Apprenticeship|Internal") void OnDiscipleArrivedHome(FGuid RecordGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 回程抵达起点城:结算归来并移除记录

---
