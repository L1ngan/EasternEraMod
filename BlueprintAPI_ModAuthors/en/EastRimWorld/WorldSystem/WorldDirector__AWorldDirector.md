# `class` `AWorldDirector`

**Source header:** `EastRimWorld/WorldSystem/WorldDirector.h`

---

## Functional description (from header comments)

> World Director actor type.

## Blueprint-exposed variables

### Property `CommonTaskComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonTaskComponent](../System/Task/CommonTaskComponent__UCommonTaskComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<UCommonTaskComponent> CommonTaskComponent;` |

**Notes:**

> 通用任务组件

---

### Property `GameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) float GameTime = 0.f;` |

**Notes:**

> 游戏时长

---

### Property `GameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) int32 GameDay = 1;` |

**Notes:**

> 游戏天数

---

### Property `GameYear`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 GameYear = 1;` |

**Notes:**

> 游戏年份

---

### Property `GameMonth`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 GameMonth = 1;` |

**Notes:**

> 游戏月份

---

### Property `GameDate`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 GameDate = 1;` |

**Notes:**

> 日期

---

### Property `GameHour`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 GameHour = 0.f;` |

**Notes:**

> 小时

---

### Property `AllForceFavorability`

| Field | Details |
|------|------|
| C++ type | TArray<[FForceFavorabilityInfo](WorldStruct__FForceFavorabilityInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FForceFavorabilityInfo> AllForceFavorability;` |

**Notes:**

> 所有势力的好感度

---

### Property `PlayerForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid PlayerForceGuid;` |

**Notes:**

> 玩家势力Guid

---

### Property `bPlayerForceCreated`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bPlayerForceCreated = false;` |

**Notes:**

> 玩家是否创建门派

---

### Property `PlayerForceCreatedTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerForceCreatedTime = 0.f;` |

**Notes:**

> 玩家创建门派的时间（创建时的游戏时长）

---

### Property `TeamBuffData`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FApplyTeamBuffData](WorldDirector__FApplyTeamBuffData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<int32,FApplyTeamBuffData> TeamBuffData;` |

**Notes:**

> 团队buff

---

### Property `WorldAgreements`

| Field | Details |
|------|------|
| C++ type | TMap<[FWorldAgreement](WorldStruct__FWorldAgreement.md),bool> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FWorldAgreement,bool> WorldAgreements;` |

**Notes:**

> 势力间签署的协议<协议数据,是否签署成功>

---

### Property `GameDaySeconds`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 GameDaySeconds = 24*40;` |

**Notes:**

> 游戏一天的秒数

---

### Property `WeatheringTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatheringTime = 0.f;` |

**Notes:**

> 天气已经持续的时间

---

### Property `WeatherMaxTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatherMaxTime = 10.f;` |

**Notes:**

> 天气最大时间

---

### Property `bIsWeatherLock`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bIsWeatherLock = false;` |

**Notes:**

> 天气锁定

---

### Property `PlayerWealthPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerWealthPoints = 0.f;` |

**Notes:**

> 玩家财富点(临时缓存)

---

### Property `LastCalculateTime_PlayerWealthPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastCalculateTime_PlayerWealthPoints = 0.f;` |

**Notes:**

> 最近一次计算玩家财富点数的时间

---

### Property `CalculateInterval_PlayerWealthPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CalculateInterval_PlayerWealthPoints = 2.f;` |

**Notes:**

> 玩家财富点数计算间隔

---

### Property `PlayerUnitsPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerUnitsPoints = 0.f;` |

**Notes:**

> 玩家单位点数(临时缓存)

---

### Property `LastCalculateTime_PlayerUnitsPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastCalculateTime_PlayerUnitsPoints = 0.f;` |

**Notes:**

> 最近一次计算玩家单位点数的时间

---

### Property `CalculateInterval_PlayerUnitsPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CalculateInterval_PlayerUnitsPoints = 2.f;` |

**Notes:**

> 玩家单位点数计算间隔

---

### Property `CurWorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<AWorldPlace> CurWorldPlace;` |

**Notes:**

> 当前所在的位置

---

### Property `CurrentSeason`

| Field | Details |
|------|------|
| C++ type | [EERWSeason](WorldStruct__EERWSeason.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) EERWSeason CurrentSeason = EERWSeason::Spring;` |

**Notes:**

> 当前季节

---

### Property `CurrentHour`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) int CurrentHour = 0;` |

**Notes:**

> 当前小时

---

### Property `CurrentWeather`

| Field | Details |
|------|------|
| C++ type | [EERWWeather](WorldStruct__EERWWeather.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) EERWWeather CurrentWeather = EERWWeather::None;` |

**Notes:**

> 当前天气类型

---

### Property `CurrentWorldPlaceWeatherInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FWorldPlaceWeatherInfo CurrentWorldPlaceWeatherInfo;` |

**Notes:**

> 当前天气信息

---

### Property `CurrentActualWeatherInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FWorldPlaceWeatherInfo CurrentActualWeatherInfo;` |

**Notes:**

> 当前实际天气变化包含过渡天气

---

### Property `OnUpdateWorldPlaceTemperature`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateWorldPlaceTemperature` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateWorldPlaceTemperature OnUpdateWorldPlaceTemperature;` |

**Notes:**

> 更新当前地点的实际温度

---

### Property `OnUpdateTemperatureChange`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTemperatureChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTemperatureChange OnUpdateTemperatureChange;` |

**Notes:**

> 更新当前气象相关的变化温度

---

### Property `OnUpdateTimeChange`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTimeChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTimeChange OnUpdateTimeChange;` |

**Notes:**

> 更新时间广播

---

### Property `OnWeatherChange`

| Field | Details |
|------|------|
| C++ type | `FOnWeatherChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWeatherChange OnWeatherChange;` |

**Notes:**

> 配置生成最终的天气变化

---

### Property `OnUDWWeatherChange`

| Field | Details |
|------|------|
| C++ type | `FOnUDWWeatherChange` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnUDWWeatherChange OnUDWWeatherChange;` |

**Notes:**

> 配置生成最终的天气变化

---

### Property `WeatherPlantEfficiency`

| Field | Details |
|------|------|
| C++ type | TMap<[EERWWeather](WorldStruct__EERWWeather.md),float> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EERWWeather,float> WeatherPlantEfficiency;` |

**Notes:**

> 天气对植物的影响效率

---

### Property `WeatherPregnantEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatherPregnantEfficiency = 1.f;` |

**Notes:**

> 天气对孕育效率的影响

---

### Property `WorldLightActors`

| Field | Details |
|------|------|
| C++ type | TArray<TObjectPtr<[AWorldLightActor](WorldLightActor__AWorldLightActor.md)>> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<TObjectPtr<AWorldLightActor>> WorldLightActors;` |

**Notes:**

> 世界中的光照Actor

---

### Property `OnGameDayChanged`

| Field | Details |
|------|------|
| C++ type | `FOnGameDayChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameDayChanged OnGameDayChanged;` |

**Notes:**

> 游戏天数改变

---

### Property `OnGameSeasonChanged`

| Field | Details |
|------|------|
| C++ type | `FOnGameSeasonChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameSeasonChanged OnGameSeasonChanged;` |

**Notes:**

> 游戏季节改变

---

### Property `OnGameYearChanged`

| Field | Details |
|------|------|
| C++ type | `FOnGameYearChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGameYearChanged OnGameYearChanged;` |

**Notes:**

> 游戏年份改变

---

### Property `OnInitCurWorldPlaced`

| Field | Details |
|------|------|
| C++ type | `FOnInitCurWorldPlaced` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnInitCurWorldPlaced OnInitCurWorldPlaced;` |

**Notes:**

> 初始化

---

### Property `OnUnlockWorldPlace`

| Field | Details |
|------|------|
| C++ type | `FOnUnlockWorldPlace` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUnlockWorldPlace OnUnlockWorldPlace;` |

**Notes:**

> 解锁新的地点

---

### Property `bWorldSuspend`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bWorldSuspend = false;` |

**Notes:**

> 世界是否暂停

---

### Property `OnUpdateTipsDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTipsDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTipsDelegate OnUpdateTipsDelegate;` |

**Notes:**

> On Update Tips Delegate event or callback.

---

### Property `PlayerWorldForce`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [AWorldForce](WorldForce__AWorldForce.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<class AWorldForce> PlayerWorldForce;` |

**Notes:**

> 玩家势力

---

### Property `PlayerTeam`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGenericTeamId PlayerTeam;` |

**Notes:**

> 玩家队id

---

### Property `OnCreatePopWidget`

| Field | Details |
|------|------|
| C++ type | `FOnCreatePopWidget` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnCreatePopWidget;` |

**Notes:**

> On Create Pop Widget event or callback.

---

### Property `OnFinishCreateForce`

| Field | Details |
|------|------|
| C++ type | `FOnCreatePopWidget` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnFinishCreateForce;` |

**Notes:**

> 创建势力完成事件

---

### Property `OnForceMasterDeath`

| Field | Details |
|------|------|
| C++ type | `FOnCreatePopWidget` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnForceMasterDeath;` |

**Notes:**

> On Force Master Death event or callback.

---

### Property `OnCreateWindowWidget`

| Field | Details |
|------|------|
| C++ type | `FOnCreateWindowWidget` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCreateWindowWidget OnCreateWindowWidget;` |

**Notes:**

> On Create Window Widget event or callback.

---

### Property `OnChangeSceneWidgetVisibility`

| Field | Details |
|------|------|
| C++ type | `FOnChangeSceneWidgetVisibility` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangeSceneWidgetVisibility OnChangeSceneWidgetVisibility;` |

**Notes:**

> On Change Scene Widget Visibility event or callback.

---

### Property `OnChangePlayerTotalReputation`

| Field | Details |
|------|------|
| C++ type | `FOnChangePlayerTotalReputation` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangePlayerTotalReputation OnChangePlayerTotalReputation;` |

**Notes:**

> 玩家总声望值改变

---

### Property `bAllInitializationComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bAllInitializationComplete = false;` |

**Notes:**

> 所有的初始化完成

---

### Property `OnAllInitializationCompleteDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnAllInitializationCompleteDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnAllInitializationCompleteDelegate OnAllInitializationCompleteDelegate;` |

**Notes:**

> 当前世界所有初始化完成

---

### Property `OnRecoverFinished`

| Field | Details |
|------|------|
| C++ type | `FOnRecoverFinished` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRecoverFinished OnRecoverFinished;` |

**Notes:**

> WorldPlace恢复完成

---

### Property `bNeedSeasonChange`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bNeedSeasonChange = false;` |

**Notes:**

> 是否需要切换季节函数

---

### Property `TotaledSeasonChangeTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float TotaledSeasonChangeTime = 5.f;` |

**Notes:**

> 过渡总时间

---

### Property `SeasonChangeStartValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float SeasonChangeStartValue = 0.f;` |

**Notes:**

> 初始值

---

### Property `SeasonChangeEndValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float SeasonChangeEndValue = 1.f;` |

**Notes:**

> 结束值

---

### Property `SeasonParmName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName SeasonParmName = FName(TEXT("Autumn"));` |

**Notes:**

> 参数名称

---

### Property `CurPlaceDynamicSkyActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TObjectPtr<AActor> CurPlaceDynamicSkyActor;` |

**Notes:**

> 当前地点天空actor

---

### Property `CurPlaceDynamicWeatherActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TObjectPtr<AActor> CurPlaceDynamicWeatherActor;` |

**Notes:**

> 当前地点天气actor

---

### Property `WorldForces`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,TObjectPtr<class [AWorldForce](WorldForce__AWorldForce.md)>> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldForce>> WorldForces;` |

**Notes:**

> /世界势力 Start****************************/

---

### Property `WorldAreas`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,TObjectPtr<class [AWorldArea](WorldArea__AWorldArea.md)>> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldArea>> WorldAreas;` |

**Notes:**

> World Areas field.

---

### Property `WorldPlaces`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,TObjectPtr<class [AWorldPlace](WorldPlace__AWorldPlace.md)>> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldPlace>> WorldPlaces;` |

**Notes:**

> World Places field.

---

### Property `PlaceAttackRegistry`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FGuidArr](../Struct/CommonStruct__FGuidArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid, FGuidArr> PlaceAttackRegistry;` |

**Notes:**

> ——进攻登记表:哪些势力正在攻打哪些城市(进行中的持续战;瞬时结算不登记)。运行期,不入档。key=被攻据点Guid,value=攻方势力Guid数组——

---

## Blueprint-exposed functions

### Function `GetWorldDirector`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldDirector](WorldDirector__AWorldDirector.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static AWorldDirector * GetWorldDirector();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get World Director.

---

### Function `CreateAllWorldForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateAllWorldForce();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Create All World Force operation.

---

### Function `CreateAllWorldArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateAllWorldArea();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Create All World Area operation.

---

### Function `GetPlayerTeamID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetPlayerTeamID() const {return PlayerTeam;};`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取玩家队伍ID

---

### Function `GetAllCharacterBeInPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FCharacterSaveData> GetAllCharacterBeInPlace(const AWorldPlace * WorldPlace);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取地点内所有的角色

---

### Function `GetCurWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetCurWorldPlace();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前所在地点

---

### Function `GetWorldPlaceByLevelName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetWorldPlaceByLevelName(FName LevelName);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get World Place By Level Name.

---

### Function `GetWorldPlaceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetWorldPlaceByID(FName PlaceID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 通过ID获取世界地点

---

### Function `CreateWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | [AWorldArea](WorldArea__AWorldArea.md) *OuterArea |
| `WorldPlaceInfo` | const [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldPlace * CreateWorldPlace(AWorldArea *OuterArea,const FWorldPlaceInfo & WorldPlaceInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建世界地点

---

### Function `GetWorldPlaceCanAutoSaveGame`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool GetWorldPlaceCanAutoSaveGame();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查当前地点是否自动存档

---

### Function `MoveToPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool MoveToPlace(AWorldPlace * WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移动到此区域

---

### Function `MoveToPlaceByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void MoveToPlaceByGuid(const FGuid & PlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移动到此区域

---

### Function `MoveToPlaceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void MoveToPlaceByID(const FName & PlaceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移动到此区域

---

### Function `SpawnCurWorldPlaceCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnCurWorldPlaceCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成当前地点需要生成的角色

---

### Function `GetCharacterInCurWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter* GetCharacterInCurWorldPlace(FGuid CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID获取当前世界地点的角色

---

### Function `BirthToCurWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BirthToCurWorldPlace(AEastRimWorldCharacter * Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重生在当前的世界地点中

---

### Function `DestroyToCurWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestroyToCurWorldPlace(FGuid CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 销毁在当前的世界地点中

---

### Function `GetPlaceTemperatureInfoByTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldPlaceTemperatureInfo](WorldStruct__FWorldPlaceTemperatureInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Season` | [EERWSeason](WorldStruct__EERWSeason.md) |
| `Time` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldPlaceTemperatureInfo GetPlaceTemperatureInfoByTime(EERWSeason Season,int Time);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询具体季节时间的温度变化

---

### Function `GetPlaceLightInfoByTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldPlaceLightInfo](WorldStruct__FWorldPlaceLightInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Season` | [EERWSeason](WorldStruct__EERWSeason.md) |
| `Time` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfo GetPlaceLightInfoByTime(EERWSeason Season,int Time);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Place Light Info By Time.

---

### Function `GetCurTimeTemperatureVariation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetCurTimeTemperatureVariation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前时间的温度变化值

---

### Function `GetCurWeatherTemperatureVariation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutWorldPlaceWeatherInfo` | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetCurWeatherTemperatureVariation(FWorldPlaceWeatherInfo & OutWorldPlaceWeatherInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前的温度变化

---

### Function `ChangeWorldLight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bWorldMap` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeWorldLight(bool bWorldMap);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换光照

---

### Function `SetGameDayTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SecondOfDay` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetGameDayTime(int32 SecondOfDay);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置日期为当天的时段

---

### Function `InitGameDayTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitGameDayTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置初始日期数据

---

### Function `K2_OnDayChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,meta = (DisplayName = "OnDayChange")) void K2_OnDayChange();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnDayChange".

**Notes:**

> On Day Change field.

---

### Function `GetCharacterWorldMoveInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid &` |
| `InTargetPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| `Resource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |
| `(unnamed / type only)` | `FVector EnterPlacePosition = FVector::ZeroVector` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterWorldMoveInfo GetCharacterWorldMoveInfo(const TArray<FGuid> & CharacterGuid,const FGuid & InStartPlaceGuid,const FGuid & InTargetPlaceGuid,EWorldMapMoveType WorldMapMoveType,const TMap<FName,FItemSimpleData>& Resource,FVector EnterPlacePosition = FVector::ZeroVector);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取移动预设信息

---

### Function `CharacterMoveToPlaceByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWorldMoveInfo` | UPARAM(ref) [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |
| `(unnamed / type only)` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../ERW_Enumerations__ETransportationType.md)::Walking |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CharacterMoveToPlaceByGuid(UPARAM(ref) FCharacterWorldMoveInfo & CharacterWorldMoveInfo , ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色移动到这个地点

---

### Function `CharacterWanderOnWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharacterWanderOnWorldMap(const TArray<FGuid> & CharacterGuid,const FGuid & InStartPlaceGuid,EWorldMapMoveType WorldMapMoveType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色游荡于世界地图

---

### Function `CharacterMoveToBattlefield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid&` |
| `StartPosition` | `const FVector &` |
| `InTargetPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| `InBattlefieldGuid` | `const FGuid &` |
| `(unnamed / type only)` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../ERW_Enumerations__ETransportationType.md)::Walking |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterWorldMoveInfo CharacterMoveToBattlefield(const TArray<FGuid> & CharacterGuid,const FGuid& InStartPlaceGuid,const FVector & StartPosition,const FGuid & InTargetPlaceGuid,EWorldMapMoveType WorldMapMoveType,const FGuid & InBattlefieldGuid,ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色移动到战场

---

### Function `CharacterMoveToBattlefield2D`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid>&` |
| `ForceSGUID` | `const FGuid&` |
| `InStartPlaceGuid` | `const FGuid&` |
| `InTargetPlaceGuid` | `const FGuid&` |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| `InBattlefieldGuid` | `const FGuid&` |
| `(unnamed / type only)` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../ERW_Enumerations__ETransportationType.md)::Walking |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterWorldMoveInfo2D CharacterMoveToBattlefield2D(const TArray<FGuid>& CharacterGuid, const FGuid& ForceSGUID,const FGuid& InStartPlaceGuid, const FGuid& InTargetPlaceGuid, EWorldMapMoveType WorldMapMoveType, const FGuid& InBattlefieldGuid, ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色移动到战场 2D

---

### Function `SpawnCurWorldPlacePawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnCurWorldPlacePawn();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成当前地点的Pawn

---

### Function `SpawnWorldMapPawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnWorldMapPawn();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成世界地图Pawn

---

### Function `BroadcastUpdateTips`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tip` | [FCommonTips](WorldStruct__FCommonTips.md) |
| `IsAddTip` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastUpdateTips(FCommonTips Tip, bool IsAddTip);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Broadcast Update Tips operation.

---

### Function `InitGlobalTeamBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitGlobalTeamBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化全局阵营buff

---

### Function `ClearGlobalTeamBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearGlobalTeamBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清除全局阵营buff

---

### Function `BroadCastSetSceneWidgetVisibility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bVisivility` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadCastSetSceneWidgetVisibility(bool bVisivility);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Broad Cast Set Scene Widget Visibility field.

---

### Function `GetWorldPlaceType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EWorldPlaceType GetWorldPlaceType();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前地点模式

---

### Function `GetPlayerMainConstructionBase`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldPlace * GetPlayerMainConstructionBase();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取玩家的主要建造基地

---

### Function `RegisterWorldLightActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldLight` | [AWorldLightActor](WorldLightActor__AWorldLightActor.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterWorldLightActor(AWorldLightActor * WorldLight);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注册世界光照actor

---

### Function `UnregisterWorldLightActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldLight` | [AWorldLightActor](WorldLightActor__AWorldLightActor.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterWorldLightActor(AWorldLightActor * WorldLight);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注销世界光照actor

---

### Function `GetWorldLightActorsByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | TArray<[AWorldLightActor](WorldLightActor__AWorldLightActor.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LightType` | [EWorldLightType](WorldLightActor__EWorldLightType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AWorldLightActor*> GetWorldLightActorsByType(EWorldLightType LightType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 根据类型获取世界灯光Actor

---

### Function `SetAllWorldLightsEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bEnable` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAllWorldLightsEnabled(bool bEnable);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置所有灯光的开关状态

---

### Function `SetWorldLightsEnabledByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LightType` | [EWorldLightType](WorldLightActor__EWorldLightType.md) |
| `bEnable` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWorldLightsEnabledByType(EWorldLightType LightType, bool bEnable);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据类型设置灯光的开关状态

---

### Function `GetCurWorldPlaceDynamicSkyAndWeather`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `AActor * &OutDynamicSkyActor` |
| `(unnamed / type only)` | `AActor * &OutDynamicWeather` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void GetCurWorldPlaceDynamicSkyAndWeather(AActor * &OutDynamicSkyActor,AActor * &OutDynamicWeather);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获取当前地点的天空组件和天气组件

---

### Function `K2_InitCurWorldPlaceDynamicSkyAndWeather`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,meta = (DisplayName = "InitCurWorldPlaceDynamicSkyAndWeather")) void K2_InitCurWorldPlaceDynamicSkyAndWeather();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "InitCurWorldPlaceDynamicSkyAndWeather".

**Notes:**

> Init Cur World Place Dynamic Sky And Weather field.

---

### Function `RecycledWorldResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResources` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecycledWorldResource(const TMap<FName,FItemSimpleData> & InResources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 回收物资

---

### Function `InitWorldPlaceDistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitWorldPlaceDistance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化地点到各地点的距离

---

### Function `FindWorldForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldForce](WorldForce__AWorldForce.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForce(const FGuid & WorldForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找对应的势力

---

### Function `FindWorldForceByTeamID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldForce](WorldForce__AWorldForce.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForceByTeamID(int32 TeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find World Force By Team ID.

---

### Function `FindWorldForceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldForce](WorldForce__AWorldForce.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForceByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find World Force By ID.

---

### Function `GetForceFavorabilityType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EForceFavorabilityType](WorldStruct__EForceFavorabilityType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EForceFavorabilityType GetForceFavorabilityType(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取两个势力的关系

---

### Function `GetForceFavorabilityInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FForceFavorabilityInfo](WorldStruct__FForceFavorabilityInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FForceFavorabilityInfo & GetForceFavorabilityInfo(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取两个势力的关系

---

### Function `ForceFavorabilityChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |
| `ChangeValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ForceFavorabilityChange(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid,float ChangeValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改变势力之间的好感度

---

### Function `AttackCityFavorabilityChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `const FGuid` |
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AttackCityFavorabilityChange(const FGuid ForceGuid,const AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 攻打城市好感度变化

---

### Function `GetPlayerWorldForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldForce](WorldForce__AWorldForce.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldForce * GetPlayerWorldForce();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取玩家势力

---

### Function `RenamePlayerWorldForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewForceName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RenamePlayerWorldForce(FText NewForceName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家势力改名

---

### Function `IsPlayerWorldForceCreated`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsPlayerWorldForceCreated();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查玩家势力是否创建

---

### Function `GetPlayerWorldForceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlayerWorldForceLevel();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取玩家势力等级

---

### Function `CreatePlayerWorldForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewForceName` | `FText` |
| `NewForceType` | [EForceType](WorldStruct__EForceType.md) |
| `Leader` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CreatePlayerWorldForce(FText NewForceName, EForceType NewForceType, FGuid Leader);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建玩家势力(势力已经在地图上了，只是没有激活)

---

### Function `FindCharacterSaveDatas`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuids` | `const TArray<FGuid>&` |
| `OutCharacterDatas` | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindCharacterSaveDatas(const TArray<FGuid>& CharacterGuids,TArray<FCharacterSaveData>& OutCharacterDatas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find Character Save Datas.

---

### Function `SortCharacterSaveDatasByCombatScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterDatas` | UPARAM(ref) TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SortCharacterSaveDatasByCombatScore(UPARAM(ref) TArray<FCharacterSaveData>& InCharacterDatas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sort Character Save Datas By Combat Score field.

---

### Function `GetCharacterEquipmentsBySaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |
| `OutEquipments` | TArray<[FCharacterApparel](../Struct/ItemStruct__FCharacterApparel.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCharacterEquipmentsBySaveData(const FCharacterSaveData& InCharacterData,TArray<FCharacterApparel>& OutEquipments);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从CharacterSaveData中获取角色穿戴的外观装备

---

### Function `AddTeamBuffByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |
| `BuffID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTeamBuffByID(int32 TeamId,FName BuffID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Add Team Buff By ID operation.

---

### Function `GetTeamBuffInfoByTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetTeamBuffInfoByTeamId(int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过teamId查询团队buff信息

---

### Function `GetPlayerTeamBuffInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetPlayerTeamBuffInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取玩家势力的buff信息

---

### Function `AddTeamBuffByInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |
| `BuffInfo` | const [FCommonBuff](../Struct/CommonStruct__FCommonBuff.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTeamBuffByInfo(int32 TeamId,const FCommonBuff & BuffInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Add Team Buff By Info operation.

---

### Function `RemoveTeamBuffByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |
| `BuffGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTeamBuffByGuid(int32 TeamId,const FGuid & BuffGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Remove Team Buff By Guid operation.

---

### Function `RemoveTeamBuffByOriginGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |
| `OriginGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTeamBuffByOriginGuid(int32 TeamId,const FGuid & OriginGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Remove Team Buff By Origin Guid operation.

---

### Function `CheckCanSignWorldAgreement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanSignWorldAgreement(const FWorldAgreement& WorldAgreement);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否签署传入的协议

---

### Function `ForceSignWorldAgreement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |
| `IsSuccess` | `const bool&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ForceSignWorldAgreement(const FWorldAgreement& WorldAgreement,const bool& IsSuccess);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 势力签署协议

---

### Function `GetWorldForceName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FText GetWorldForceName(int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取势力名字

---

### Function `FindWorldArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldArea](WorldArea__AWorldArea.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldAreaGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldArea * FindWorldArea(const FGuid & WorldAreaGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找对应的区域

---

### Function `FindWorldAreaByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldArea](WorldArea__AWorldArea.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldArea * FindWorldAreaByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find World Area By ID.

---

### Function `RegisterPlaceAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterPlaceAttack(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 登记一次进攻(发起持续战时调; 重复攻方不叠加)

---

### Function `UnregisterPlaceAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttackerForceGuid` | `const FGuid&` |
| `TargetPlaceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterPlaceAttack(const FGuid& AttackerForceGuid, const FGuid& TargetPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注销某攻方对某据点的进攻(战斗结算/瞬时结算结束时按攻方注销)

---

### Function `IsPlaceUnderAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetPlaceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaceUnderAttack(const FGuid& TargetPlaceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 某据点当前是否正被攻打

---

### Function `GetPlaceAttackers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetPlaceGuid` | `const FGuid&` |
| `OutAttackers` | `TArray<FGuid>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetPlaceAttackers(const FGuid& TargetPlaceGuid, TArray<FGuid>& OutAttackers) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取正在攻打某据点的势力列表

---

### Function `FindWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldPlace * FindWorldPlace(const FGuid & WorldPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找对应的地点

---

### Function `FindWorldPlaceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPlaceID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldPlace* FindWorldPlaceByID(const FName& InPlaceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find World Place By ID.

---

### Function `FindWorldPlaceByIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPlaceIDs` | `const TArray<FName>&` |
| `OutPlaces` | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FindWorldPlaceByIDs(const TArray<FName>& InPlaceIDs,TArray<AWorldPlace*>& OutPlaces);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过ID数组查找地点

---

### Function `GetPlayerDeployableCities`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|Battle" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCities` | TArray<[FDeployableCityOption](WorldDirector__FDeployableCityOption.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|Battle") void GetPlayerDeployableCities(TArray<FDeployableCityOption>& OutCities);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取玩家可作为出兵起点的城(玩家拥有 ∩ 在 PointMap 内)，喂出征界面「出发地点」下拉

---

### Function `OnHourChangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Hour` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnHourChangeEvent(int Hour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> On Hour Change Event event or callback.

---

### Function `OnSeasonChangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SeasonId` | [EERWSeason](WorldStruct__EERWSeason.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnSeasonChangeEvent(EERWSeason SeasonId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> On Season Change Event event or callback.

---

### Function `OnSeasonChangeParm`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SeasonId` | `FName` |
| `SeasonChangeValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void OnSeasonChangeParm(FName SeasonId,float SeasonChangeValue);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 季节切换过渡参数设置

---

### Function `OnWeatherChangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeatherId` | [EERWWeather](WorldStruct__EERWWeather.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnWeatherChangeEvent(EERWWeather WeatherId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 天气切换（不包括过渡天气状态，相同天气不会触发）

---

### Function `OnAllWeatherChangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeatherId` | [EERWWeather](WorldStruct__EERWWeather.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnAllWeatherChangeEvent(EERWWeather WeatherId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 天气切换(包含过渡天气)

---

### Function `SetGameTimeToUDS`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void SetGameTimeToUDS(float GTime);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> C++设置游戏时间来设置UDS的时间

---

### Function `SetGameWeatherToUDW`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeatherId` | [EERWWeather](WorldStruct__EERWWeather.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void SetGameWeatherToUDW(EERWWeather WeatherId);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> C++设置游戏天气来设置UDW的天气

---

### Function `TriggerTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGuid TriggerTaskByID(const FName TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> /任务 Start****************************/

---

### Function `TriggerTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGuid TriggerTask(const FCommonTaskInfo& TaskInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Trigger Task field.

---

### Function `TriggerTaskByInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGuid TriggerTaskByInstance(const FCommonTaskInstance& TaskInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Trigger Task By Instance field.

---

### Function `CompleteTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CompleteTaskByID(const FName TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Complete Task By ID field.

---

### Function `GetGoapActionBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FBuildPersonConfigData](../ERW_ConfigTypes__FBuildPersonConfigData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoalID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FBuildPersonConfigData> GetGoapActionBuildings(FName InGoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询GoapAction对应的建筑物数组

---

### Function `CheckBuildGoap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `FName` |
| `GoalID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckBuildGoap(FName BuildId, FName GoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查建筑类型是否有对应的GOAP功能

---

### Function `CheckNeedBedForPlayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckNeedBedForPlayer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否需要床位

---

### Function `CheckCharacterNeedCloth`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckCharacterNeedCloth();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查玩家是否缺少衣服

---

### Function `ChangeWeatherById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeatherId` | `FName` |
| `(unnamed / type only)` | `float TransitionTime = 5.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeWeatherById(FName WeatherId,float TransitionTime = 5.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过ID改变天气

---

### Function `ChangeRandomWeather`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeRandomWeather();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 随机改变天气

---

### Function `BindOrUnbindCameraMoveEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsBind` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BindOrUnbindCameraMoveEvent(bool bIsBind);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Bind Or Unbind Camera Move Event field.

---

### Function `CheckAllBuildNeedMaterial`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckAllBuildNeedMaterial();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查所有在建建筑是否有足够的材料

---

### Function `CheckHaveResearchBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveResearchBuilding() ;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否有建设完成的研究建筑物

---

### Function `CheckHaveBuildingByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildType` | [EBuildingType](../ERW_Enumerations__EBuildingType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveBuildingByType(EBuildingType BuildType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否有传入类型建筑物

---

### Function `CalcuCharacterFightingScoreByData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `InCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static float CalcuCharacterFightingScoreByData(AERW_GameModeBase* InGameMode,const FCharacterSaveData& InCharacterData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算角色战力

---

### Function `CalcuCharacterFightingScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `InCharacter` | const class [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static float CalcuCharacterFightingScore(AERW_GameModeBase* InGameMode,const class AEastRimWorldCharacter* InCharacter);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Calcu Character Fighting Score field.

---

### Function `CalcuUIDisplayAttributesByData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `TMap<FString,float>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `InCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static TMap<FString,float> CalcuUIDisplayAttributesByData(AERW_GameModeBase* InGameMode,const FCharacterSaveData& InCharacterData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 根据存档数据中的角色ID查表基础属性+装备词条属性+势力培养属性,计算UI需要显示的临时属性(配置见UGamePlayConfigurationAsset::UIDisplayTempAttributes),npc培养时调用刷新UIDisplayAttributes

---

### Function `GetFocreJobName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `JobType` | const [EForceJobType](WorldStruct__EForceJobType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FText GetFocreJobName(const EForceJobType JobType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取职位名称

---

### Function `SortByDiscipleNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByDiscipleNum(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按弟子数量排序

---

### Function `SortByPower`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByPower(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按战力排序

---

### Function `SortByFavorability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByFavorability(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按好感度排序

---

### Function `SortByWorldplaceType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByWorldplaceType(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按worldplacetype度排序

---

### Function `SortByReputation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByReputation(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按势力声望度排序

---

### Function `SortByForcePower`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByForcePower(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按势力战力排序

---

### Function `SortByPlaceNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByPlaceNum(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按领地数量排序

---

### Function `SortByForceDiziNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByForceDiziNum(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按势力弟子数量排序

---

### Function `SortByFavorWithPlayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByFavorWithPlayer(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按势力对玩家好感排序

---

### Function `AddItemBySimpleData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItem` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddItemBySimpleData(const FItemSimpleData& InItem);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加物品到玩家自建或驿站物品存放区

---

### Function `AddItemToPostStation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItems` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddItemToPostStation(const TMap<FName,FItemSimpleData>& InItems);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加物品到玩家自建或驿站物品存放区

---

### Function `AddItemInstanceToPostStation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddItemInstanceToPostStation(UInventoryItemInstance * InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加物品到玩家自建或驿站物品存放区

---

### Function `GetEnemyForces`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MainWorldForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> GetEnemyForces(const FGuid& MainWorldForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取敌对势力

---

### Function `GetOtherForcesMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<[AWorldForce](WorldForce__AWorldForce.md)*,float> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MainWorldForceGuid` | `const FGuid&` |
| `true` | `bool HeightToLow =` |
| `(unnamed / type only)` | `int32 TopNum = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<AWorldForce*,float> GetOtherForcesMap(const FGuid& MainWorldForceGuid,bool HeightToLow = true,int32 TopNum = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 插槽敌对势力和好感度

---

### Function `GetPlayerWealthPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetPlayerWealthPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算玩家的财富点数

---

### Function `GetPlayerUnitsPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetPlayerUnitsPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取玩家单位点数

---
