# `class` `AWorldPlace`

**Source header:** `EastRimWorld/WorldSystem/WorldPlace.h`

---

## Functional description (from header comments)

> World Place actor type.

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid SGUID;` |

**Notes:**

> GUID.

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**Notes:**

> Scene Component field.

---

### Property `MapDataMgr`

| Field | Details |
|------|------|
| C++ type | [UERW_MapDataMgr](../Components/ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**Notes:**

> 地图信息管理组件

---

### Property `HISMManager`

| Field | Details |
|------|------|
| C++ type | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**Notes:**

> HISMManager

---

### Property `OnWorldPlaceForceChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldPlaceForceChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldPlaceForceChanged OnWorldPlaceForceChanged;` |

**Notes:**

> 所属势力变更通知(占领/变无主时广播, 蓝图据此刷新 UI; 据点新归属读 WorldForceGUID)

---

### Property `OnWorldPlaceSiegeChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldPlaceSiegeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldPlaceSiegeChanged OnWorldPlaceSiegeChanged;` |

**Notes:**

> 围城状态变更通知(SetUnderSiege 中 bUnderSiege 变化时广播, 蓝图据此刷新围城图标)

---

### Property `OnMonsterCountChange`

| Field | Details |
|------|------|
| C++ type | `FOnMonsterCountChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMonsterCountChange OnMonsterCountChange;` |

**Notes:**

> 怪物数量变化

---

### Property `OnUpdateTeamUI`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTeamUI` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamUI OnUpdateTeamUI;` |

**Notes:**

> 招募入队后通知

---

### Property `OnOutputResourceStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnOutputResourceStateChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnOutputResourceStateChanged OnOutputResourceStateChanged;` |

**Notes:**

> 产出状态变化通知

---

### Property `GOAP_ManagerComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ManagerComponent* GOAP_ManagerComponent { nullptr };` |

**Notes:**

> GOAP管理组件

---

### Property `TimerManager`

| Field | Details |
|------|------|
| C++ type | [UERW_TimerManager](../Components/ERW_TimerManager__UERW_TimerManager.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TimerManager* TimerManager { nullptr };` |

**Notes:**

> 计时器管理组件

---

### Property `WorkScheduleComponent`

| Field | Details |
|------|------|
| C++ type | [UERW_WorkScheduleComponent](../Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_WorkScheduleComponent* WorkScheduleComponent { nullptr };` |

**Notes:**

> 工作日程管理组件

---

### Property `GenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**Notes:**

> 事件生成角色组件

---

### Property `LogComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UCommonLogComponent> LogComponent {nullptr};` |

**Notes:**

> Log Component field.

---

### Property `BeginnerGuideComponent`

| Field | Details |
|------|------|
| C++ type | [UBeginnerGuideComponent](../System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UBeginnerGuideComponent* BeginnerGuideComponent { nullptr };` |

**Notes:**

> 新手引导组件

---

### Property `InitWorldPlaceType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) EWorldPlaceType InitWorldPlaceType = EWorldPlaceType::CenterCity;` |

**Notes:**

> 初始地点类型

---

### Property `WorldForceGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid WorldForceGUID;` |

**Notes:**

> 拥有此地点的势力GUID

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid BattlePlaceGuid;` |

**Notes:**

> 战场Guid

---

### Property `bPlayerPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bPlayerPlace = false;` |

**Notes:**

> 是否是玩家拥有的地点

---

### Property `PlayerOccupyTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadOnly) int32 PlayerOccupyTimes = 0;` |

**Notes:**

> 被玩家占领的次数

---

### Property `bUnderSiege`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnderSiege = false;` |

**Notes:**

> 是否正被围城(有部队进入围城状态围攻本城)；变更时广播 OnWorldPlaceForceChanged 供 UI 刷新

---

### Property `OnWorldAreaGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) FGuid OnWorldAreaGuid;` |

**Notes:**

> 所在的区域

---

### Property `bUnlockPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnlockPlace = false;` |

**Notes:**

> 是否解锁此地点

---

### Property `PlaceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere) int32 PlaceLevel = 1;` |

**Notes:**

> 地点等级

---

### Property `WorldPlaceDistance`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FGuid,float> WorldPlaceDistance;` |

**Notes:**

> 世界地点之间的距离

---

### Property `AttackEarlyWarning`

| Field | Details |
|------|------|
| C++ type | [FAttackEarlyWarning](WorldStruct__FAttackEarlyWarning.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FAttackEarlyWarning AttackEarlyWarning;` |

**Notes:**

> 已有的攻击预警

---

### Property `Population`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 Population = 0.f;` |

**Notes:**

> 当前人口

---

### Property `PopulationIncrease`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PopulationIncrease = 0.f;` |

**Notes:**

> 人口增长

---

### Property `PopulationGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float PopulationGrowthEfficiency = 1.0f;` |

**Notes:**

> 人口增长效率

---

### Property `TaxationCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float TaxationCoefficient = 0.f;` |

**Notes:**

> 当前税收比例(被占领后才有)

---

### Property `EnterPlaceTax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float EnterPlaceTax = 150.f;` |

**Notes:**

> 在税收周期中对在城中游历的角色收取的入城费

---

### Property `ProsperityGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float ProsperityGrowthEfficiency = 1.0f;` |

**Notes:**

> 繁荣度增长效率

---

### Property `Order`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Economy|Order" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Order") float Order = 70.f;` |

**Notes:**

> [新增-策划文档"五、治安"]当前治安(0-100)

---

### Property `RiotState`

| Field | Details |
|------|------|
| C++ type | [FWorldPlaceRiotState](WorldEconomyStruct__FWorldPlaceRiotState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Economy|Riot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Riot") FWorldPlaceRiotState RiotState;` |

**Notes:**

> [新增-策划文档"六、暴乱"]暴乱运行时状态

---

### Property `TaxDecreasePopulationCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Economy|Population" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Population") int32 TaxDecreasePopulationCount = 0;` |

**Notes:**

> [新增-策划文档"二、人口/流民"]因税收高而连续减人口的次数(产生流民后重置)

---

### Property `PendingTradeTax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Economy|Tax" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Tax") int32 PendingTradeTax = 0;` |

**Notes:**

> [#6b 移除 PendingBuildingTax]建筑产出钱币现在由 GetBuildingCoinOutput() 在 TickTaxation 中即时统计,不需要预累积
> [新增-策划文档"四、税收/结算"]已累积但尚未发放的商贸税收

---

### Property `LastTaxSettleGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Economy|Tax" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Tax") float LastTaxSettleGameTime = 0.f;` |

**Notes:**

> [新增-策划文档"四、税收/结算"]上一次税收结算时间(GameTime,秒)

---

### Property `PlaceLevelInfo`

| Field | Details |
|------|------|
| C++ type | [FPlaceLevelInfo](WorldStruct__FPlaceLevelInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FPlaceLevelInfo PlaceLevelInfo;` |

**Notes:**

> 当前地点的等级信息

---

### Property `bFirstTimeEnter`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bFirstTimeEnter = true;` |

**Notes:**

> 是否是第一次进入此地点

---

### Property `WorldPlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FName WorldPlaceID;` |

**Notes:**

> 地点ID

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float Prosperity;` |

**Notes:**

> 地点繁荣度

---

### Property `ProsperityIncrease`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float ProsperityIncrease;` |

**Notes:**

> 每日繁荣度增长

---

### Property `LootRecoverCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LootRecoverCD = 0.f;` |

**Notes:**

> 被劫掠后恢复的CD

---

### Property `LastPlunderGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastPlunderGameTime = 0.f;` |

**Notes:**

> [劫掠CD] 上次被劫掠的游戏时间(GameTime,秒)；0=从未。与摧毁各自独立冷却。

---

### Property `LastPlunderRewardMultiple`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastPlunderRewardMultiple = 0.f;` |

**Notes:**

> [劫掠CD] 上次劫掠时的 RewardMultiple；用于冷却时长=产出周期×倍率。

---

### Property `LastDestroyGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastDestroyGameTime = 0.f;` |

**Notes:**

> [摧毁CD] 上次被摧毁的游戏时间(GameTime,秒)；0=从未。与劫掠各自独立冷却。

---

### Property `LastDestroyRewardMultiple`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastDestroyRewardMultiple = 0.f;` |

**Notes:**

> [摧毁CD] 上次摧毁时的 RewardMultiple；用于冷却时长=产出周期×倍率。

---

### Property `WorldPlaceBuilds`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FWorldPlaceBuildInfo> WorldPlaceBuilds;` |

**Notes:**

> 建筑设施

---

### Property `TotalCanBuildNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 TotalCanBuildNum;` |

**Notes:**

> 建筑设施总计可建造数量

---

### Property `BuildConsumeEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float BuildConsumeEfficiency = 1.0f;` |

**Notes:**

> 建造建筑设施消耗比例

---

### Property `Coin`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int Coin;` |

**Notes:**

> 钱币

---

### Property `CoinIncrease`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int CoinIncrease;` |

**Notes:**

> 钱币增长

---

### Property `LordAppointTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LordAppointTime;` |

**Notes:**

> 城主就任的游戏时间点

---

### Property `LordGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid LordGuid;` |

**Notes:**

> 城主的guid

---

### Property `WorldPlaceEffects`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FWorldPlaceEffectInfo](WorldStruct__FWorldPlaceEffectInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FWorldPlaceEffectInfo> WorldPlaceEffects;` |

**Notes:**

> 城镇效果id,是否激活

---

### Property `OwnedSpecialEffectIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "SpecialEffect") TArray<FName> OwnedSpecialEffectIds;` |

**Notes:**

> 地点拥有的特殊效果 ID 列表（存档）；进入地点时在 EnterWorldPlace 中重新应用并缓存到 CachedSpecialEffectValues

---

### Property `SpecialEffectBuffOriginGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<FName, FGuid> SpecialEffectBuffOriginGuids;` |

**Notes:**

> 「添加阵营全局 Buff」效果施加时使用的 OriginGuid（效果ID->OriginGuid），用于移除时按来源清除；不存档

---

### Property `MaxStationedCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 MaxStationedCharacterNum;` |

**Notes:**

> 最多驻扎角色数量

---

### Property `OutPutEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float OutPutEfficiency = 1.f;` |

**Notes:**

> 城镇物品产出比例

---

### Property `PlaceOutPut`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FItemSimpleData> PlaceOutPut;` |

**Notes:**

> 城镇周期产出的物品

---

### Property `ExtraOutPut`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FItemSimpleData> ExtraOutPut;` |

**Notes:**

> 额外产出(与等级无关的临时/外部注入产出, 如玄铁矿脉特产; 由注入方增删并调 CalcuOutput; 非存档, 由注入方读档后重注入)

---

### Property `CurrentOutPutInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 CurrentOutPutInterval = 0;` |

**Notes:**

> 距离下次产出物资的时间(天)

---

### Property `OutputResourceState`

| Field | Details |
|------|------|
| C++ type | [EPlaceOutputResourceStateType](WorldStruct__EPlaceOutputResourceStateType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) EPlaceOutputResourceStateType OutputResourceState;` |

**Notes:**

> 产出物资状态

---

### Property `PendingOutputResources`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FItemSimpleData> PendingOutputResources;` |

**Notes:**

> [在途累积]已产出但尚未发车运走的待运物资(马车在途期间持续累积,避免产出丢失)

---

### Property `TowerMartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> TowerMartialArtsEntries;` |

**Notes:**

> 防御塔武学词条

---

### Property `WorldPlaceInteractionAction`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md),FGuid> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EWorldMapMoveType,FGuid> WorldPlaceInteractionAction;` |

**Notes:**

> 地点正在被交互的操作（类型，Info）

---

### Property `bMainConstructionBase`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bMainConstructionBase = false;` |

**Notes:**

> 是否是主基地 一个势力只会存在一个

---

### Property `WorldPlaceInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldPlaceInfo WorldPlaceInfo;` |

**Notes:**

> ///////////////////////save end
> 地点信息

---

### Property `CachedSpecialEffectValues`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldPlaceSpecialEffectType](WorldStruct__EWorldPlaceSpecialEffectType.md), float> |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<EWorldPlaceSpecialEffectType, float> CachedSpecialEffectValues;` |

**Notes:**

> 按效果类型汇总的当前数值（不存档，读档后由特殊效果系统重算）

---

### Property `bOnCurPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bOnCurPlace = false;` |

**Notes:**

> 是否在当前的地点

---

### Property `CurrentTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentTemperature = 0.f;` |

**Notes:**

> 当前的温度

---

### Property `CurrentLight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentLight = 0.f;` |

**Notes:**

> //当前光照

---

### Property `CurLightInfluenceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurLightInfluenceID;` |

**Notes:**

> 当前光照影响ID

---

### Property `bWorldPlaceInit`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bWorldPlaceInit = false;` |

**Notes:**

> 是否初始化完成

---

### Property `PostStationActor`

| Field | Details |
|------|------|
| C++ type | [AEasternEraPostStationActor](../PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AEasternEraPostStationActor* PostStationActor;` |

**Notes:**

> Post Station Actor field.

---

### Property `bWidgetIsHoverd`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bWidgetIsHoverd;` |

**Notes:**

> Boolean flag indicating whether Widget Is Hoverd is enabled or true.

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Notes:**

> 按钮相关的功能

---

### Property `ApprenticeshipVisitors`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category="Apprenticeship") TArray<FGuid> ApprenticeshipVisitors;` |

**Notes:**

> [D3-历练] 当前在本城历练逗留的弟子 Guid 列表; 独立于 StationedCharacter,
> 不参与城主/城防/驻防上限计数; 仅供城市横幅展示"在此历练的弟子"

---

### Property `SaveWarningTips`

| Field | Details |
|------|------|
| C++ type | TMap<[ETipsType](WorldStruct__ETipsType.md),[FCommonTipsArr](WorldStruct__FCommonTipsArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadOnly) TMap<ETipsType,FCommonTipsArr> SaveWarningTips;` |

**Notes:**

> Executes the Save Warning Tips operation.

---

### Property `TreasureHouse`

| Field | Details |
|------|------|
| C++ type | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ABuildingActorBase * TreasureHouse;` |

**Notes:**

> Treasure House field.

---

### Property `TaskPlaceMainTaskGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") FGuid TaskPlaceMainTaskGuid;` |

**Notes:**

> 任务地点主要任务GUID

---

### Property `bTaskPlaceStart`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") bool bTaskPlaceStart = false;` |

**Notes:**

> Boolean flag indicating whether Task Place Start is enabled or true.

---

### Property `TaskPlaceTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") float TaskPlaceTimeLimit = -1.f;` |

**Notes:**

> 任务地点时间限制

---

### Property `OnTaskSuccessEnd`

| Field | Details |
|------|------|
| C++ type | `FOnTaskSuccessEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTaskSuccessEnd OnTaskSuccessEnd;` |

**Notes:**

> 副本战斗胜利

---

### Property `OnTaskFaileEnd`

| Field | Details |
|------|------|
| C++ type | `FOnTaskFaileEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTaskFaileEnd OnTaskFaileEnd;` |

**Notes:**

> 副本战斗失败

---

## Blueprint-exposed functions

### Function `TryGetBeginnerGuideItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |
| `Pos` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* TryGetBeginnerGuideItem(const FName& ItemID , const FVector& Pos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试获得新手引导物品

---

### Function `TryGetBeginnerGuideBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildID` | `const FName&` |
| `Pos` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AGOAP_ActorBase* TryGetBeginnerGuideBuilding(const FName& BuildID , const FVector& Pos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试获得新手引导建筑

---

### Function `GetLocationOnWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector GetLocationOnWorldMap() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取在世界地图中的位置

---

### Function `SetWorldPlaceTipUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WidgetObject` | [UCommonModuleBase](../UI/Common/CommonModuleBase__UCommonModuleBase.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWorldPlaceTipUI(UCommonModuleBase * WidgetObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set World Place Tip UI operation.

---

### Function `UnlockFog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsRegister` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockFog(bool bIsRegister);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 进入地图注册迷雾组件

---

### Function `ExplorationPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExplorationPlace(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 探索此地点

---

### Function `ExplorationComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExplorationComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 探索完成

---

### Function `InitWorldPlaceWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitWorldPlaceWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 初始化世界地点ui

---

### Function `CheckCaptureWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCaptureWorldPlace();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否被占领

---

### Function `TriggerBeAttacked`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `const FGuid &` |
| `false` | `bool bImmediately =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerBeAttacked(const FGuid & ForceGuid,bool bImmediately = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 被攻击

---

### Function `OccupyPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool OccupyPlace(const FGuid & ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 占领地点(调用前要调用占领势力能否占领AWorldForce::CheckCanOccupyPlace)

---

### Function `SetUnderSiege`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bNewUnderSiege` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetUnderSiege(bool bNewUnderSiege);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置围城状态：值有变才生效并广播 OnWorldPlaceForceChanged(UI 刷新)

---

### Function `DestructionPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `const FGuid &` |
| `DestroyBuildingNumber` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestructionPlace(const FGuid & ForceGuid,int32 DestroyBuildingNumber);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 破坏地点

---

### Function `LootPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LootPlace(const FGuid & ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Loot Place field.

---

### Function `PlaceProsperityChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlaceProsperityChange(float ChangeValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 繁荣度变化

---

### Function `PlacePopulationChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeValue` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlacePopulationChange(int32 ChangeValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Place Population Change field.

---

### Function `CalcuMaxStationedCharacterNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcuMaxStationedCharacterNum();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算并更新最大可驻扎角色数量

---

### Function `AddExtraOutPut`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddExtraOutPut(const FItemSimpleData& ItemData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加一条额外产出(与等级无关的临时/外部注入, 如玄铁矿脉特产; 同 Id 多来源按 Num 累加, 不覆盖)并立即重算产出

---

### Function `RemoveExtraOutPut`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveExtraOutPut(const FItemSimpleData& ItemData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除一条额外产出(只扣减本次贡献的 Num, 保留其他来源的量; 扣到 <=0 才删该条目)并立即重算产出

---

### Function `IsEmergenceEventPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsEmergenceEventPlace() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否可作涌现事件发生地点: 已解锁 + 在地图显示(bShowInMap) + 类型属 驻地/中心城市/资源点 三者之一

---

### Function `SetPlaceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewPlaceLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SetPlaceLevel(int32 NewPlaceLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置地点等级

---

### Function `UpgradePlaceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpgradePlaceLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 升级地点等级

---

### Function `CheckUpgradePlaceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EUpgradeErrorType](WorldStruct__EUpgradeErrorType.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EUpgradeErrorType CheckUpgradePlaceLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否可以升级

---

### Function `GetPopulationIncrease`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetPopulationIncrease() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前每天人口的增长

---

### Function `GetProsperityIncrease`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetProsperityIncrease() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前每天繁荣度的增长

---

### Function `GetProsperityGrowthEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetProsperityGrowthEfficiency() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取繁荣度增长效率

---

### Function `GetPlaceOutput`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutOutput` | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetPlaceOutput(TMap<FName,FItemSimpleData>& OutOutput) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取城镇周期产出

---

### Function `IsInPlunderDestroyCooldown`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldPlace" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Disposal` | [EPlaceDisposalType](WorldStruct__EPlaceDisposalType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldPlace") bool IsInPlunderDestroyCooldown(EPlaceDisposalType Disposal) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [劫掠/摧毁CD] 按处置类型查询是否仍在冷却内；冷却时直接弹出提示，返回 true=冷却中(该类型不可再操作)。

---

### Function `AcceptOutPutResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AcceptResource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AcceptOutPutResource(const TMap<FName,FItemSimpleData>& AcceptResource);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 接收从其他地方送来的产出物

---

### Function `CheckCanBuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanBuild(const FName& BuildId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否新建某建筑设施

---

### Function `FindPlaceBuildInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |
| `OutBuildInfo` | [FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool FindPlaceBuildInfoByID(const FName& BuildId,FWorldPlaceBuildInfo& OutBuildInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 根据ID查找城镇建筑信息

---

### Function `CheckCanLevelUpBuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Build` | const [FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanLevelUpBuild(const FWorldPlaceBuildInfo& Build) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否升级某建筑设施

---

### Function `BuildNewPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BuildNewPlaceBuilding(const FName& BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 新建建筑设施 (先CheckCanBuild)

---

### Function `LevelUpPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool LevelUpPlaceBuilding(const FName& BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 升级一个建筑设施(先CheckCanLevelUpBuild)

---

### Function `FixedPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool FixedPlaceBuilding(const FName& BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 修复建筑设施(先CheckCanLevelUpBuild)

---

### Function `DestoryPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestoryPlaceBuilding(const FName& BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拆除建筑设施

---

### Function `SetPlaceLord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLordGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetPlaceLord(const FGuid& InLordGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置城主

---

### Function `PopupInfoUIChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弹出UI信息改变

---

### Function `GetInstanceGenerationActorInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FInstanceGenerationActorInfo](WorldStruct__FInstanceGenerationActorInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInstanceGenerationActorInfo GetInstanceGenerationActorInfo(const FGuid & GenerationInstanceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID获取对应的生成怪物信息实例信息

---

### Function `GetMonsterGenerationQueueInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FMonsterGenerationInfo](WorldStruct__FMonsterGenerationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FMonsterGenerationInfo GetMonsterGenerationQueueInfo(const FGuid & GenerationGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID获取对应的生成队列中的信息

---

### Function `GetMonsterArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FString, int32>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MonsterArray` | `const TArray<FString>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FString, int32> GetMonsterArray(const TArray<FString>& MonsterArray);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 归类怪物

---

### Function `GetAllGenerationCharacterByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllGenerationCharacterByGuid(const FGuid & GenerationInstanceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID获取所有生成的角色

---

### Function `HandlingVisitors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |
| `VisitorsActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `bAccept` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HandlingVisitors(const FGuid & GenerationInstanceGuid,AEastRimWorldCharacter * VisitorsActor,bool bAccept);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 处理来访人员

---

### Function `ConvertCharacterToPlayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `VisitorsActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ConvertCharacterToPlayer(AEastRimWorldCharacter * VisitorsActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将角色转为玩家所属

---

### Function `PlayBinkMedia`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool PlayBinkMedia();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 播放此关卡的视频

---

### Function `SkipBinkMedia`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipBinkMedia();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Skip Bink Media field.

---

### Function `FindMonsterNest`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AMonsterNestActor](../System/MonsterNest/MonsterNestActor__AMonsterNestActor.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMonsterNestGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AMonsterNestActor * FindMonsterNest(FGuid InMonsterNestGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找

---

### Function `ChangeWorldPlaceTip`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewLocation` | `FVector` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeWorldPlaceTip(FVector NewLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Change World Place Tip field.

---

### Function `GetStationedCharacterNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetStationedCharacterNumber() const{ return StationedCharacter.Num();}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Stationed Character Number.

---

### Function `CheckCanAddStationedCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanAddStationedCharacter() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否添加驻扎角色

---

### Function `AddStationedCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddStationedCharacter(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 派驻弟子(先CheckCanAddStationedCharacter)

---

### Function `RemoveStationedCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveStationedCharacter(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除驻扎的弟子

---

### Function `RemoveAllStationedCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAllStationedCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除所有的驻守弟子

---

### Function `AddApprenticeshipVisitor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Apprenticeship") void AddApprenticeshipVisitor(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [D3-历练] 登记一名历练弟子来本城逗留(不进 StationedCharacter,不影响驻防)

---

### Function `RemoveApprenticeshipVisitor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Apprenticeship" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Apprenticeship") void RemoveApprenticeshipVisitor(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [D3-历练] 弟子离开本城(逗留结束/回程)

---

### Function `GetApprenticeshipVisitors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Apprenticeship" |
| Return type | `const TArray<FGuid>&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Apprenticeship") const TArray<FGuid>& GetApprenticeshipVisitors() const { return ApprenticeshipVisitors; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [D3-历练] 供城市横幅读取:当前在本城历练逗留的弟子 Guid 列表

---

### Function `GetApprenticeshipVisitorCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Apprenticeship" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Apprenticeship") int32 GetApprenticeshipVisitorCount() const { return ApprenticeshipVisitors.Num(); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [D3-历练] 当前在本城历练的弟子数量

---

### Function `GetAllStationedCharacterGuids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutStationedCharacter` | `TArray<FGuid>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllStationedCharacterGuids(TArray<FGuid>& OutStationedCharacter) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get All Stationed Character Guids.

---

### Function `GetWorldPlaceCombatScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetWorldPlaceCombatScore() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取城镇战力

---

### Function `ResetEnterLevelArchiveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetEnterLevelArchiveData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重置进入地图后存储的数据

---

### Function `GetOrderStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Order" |
| Return type | [EWorldPlaceOrderStage](WorldEconomyStruct__EWorldPlaceOrderStage.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Order") EWorldPlaceOrderStage GetOrderStage() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前治安阶段(安宁/纷扰/混乱/动荡)

---

### Function `AddOrder`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Order" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Delta` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Order") void AddOrder(float Delta);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 治安变化(带 Clamp 0-100,变化后自动触发暴乱概率判定)

---

### Function `GetOrderBuildingCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Order" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Order") int32 GetOrderBuildingCount() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 统计当前据点的"治安建筑"数量(AddOrder > 0 且处于 Normal 状态)

---

### Function `ApplyBattleAftermath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Battle" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Battle") void ApplyBattleAftermath();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 任何战斗结束都调用:扣繁荣(5-10%) + 扣治安 Rand(-10,-30)

---

### Function `TryTriggerRiot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Riot" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TryTriggerRiot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查并触发暴乱(基于当前治安);已在暴乱中或无归属时不触发

---

### Function `TickRiot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Riot" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TickRiot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 暴乱周期 Tick(每 RiotTickInterval 秒被 WorldDirector 调度一次,完成时调用 EndRiot)

---

### Function `EndRiot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Riot" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void EndRiot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 暴乱结束 -> 判定是否触发叛乱

---

### Function `TriggerRebellion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Rebellion" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Rebellion") void TriggerRebellion();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 叛乱处理:归属置空、转移驻扎弟子(就近 stub)、一次性扣繁荣/人口

---

### Function `TickTaxation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Tax" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void TickTaxation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 税收结算周期 Tick;由 WorldDirector 按 TaxationCycle 调度
> 顺序:人口基础消耗 → 驻扎弟子消耗 → 余下转化为玩家 Coin / NPC 成长积分

---

### Function `ApplyTradeProsperity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Trade" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherPopulation` | `int32` |
| `OtherFavorability` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Trade") void ApplyTradeProsperity(int32 OtherPopulation, float OtherFavorability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 商贸结算时使用:对方人口 + 对方好感 → 加繁荣(策划公式)

---

### Function `AccumulateTradeTax`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Tax" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CoinAmount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void AccumulateTradeTax(int32 CoinAmount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 累积"未结算"的商贸税收(由商贸结算时调用)

---

### Function `GetEstimatedTaxIncome`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Tax" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Tax") float GetEstimatedTaxIncome() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 预估税收(UI 显示用),不消耗也不修改状态;公式:T × [(建筑+商贸+人口产出) - (建筑维持+人口基础+弟子消耗)]

---

### Function `IsInRiot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Riot" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Riot") bool IsInRiot() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [UI] 是否处于暴乱中(供控件 Visibility 绑定:暴乱时显示"暴乱持续"文本)

---

### Function `GetOrderDisplayText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Order" |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Order") FText GetOrderDisplayText() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [UI] 治安显示文本:仅整数;暴乱中追加"(暴乱)",例如 25(暴乱)

---

### Function `GetRiotRemainingText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Riot" |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Riot") FText GetRiotRemainingText() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [UI] 暴乱剩余时间文本"暴乱持续: X天X时"(镇守下方显示);非暴乱返回空

---

### Function `SetTaxationCoefficient`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Tax" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTaxRatio` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void SetTaxationCoefficient(float NewTaxRatio);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [新增 #8] 修改本据点的税收比例(Clamp 0-1),蓝图可调用

---

### Function `SetEnterPlaceTax`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Tax" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTax` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void SetEnterPlaceTax(float NewTax);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [新增 #8] 修改本据点的入城费,蓝图可调用

---

### Function `RecalcBuildRunStateByPopulation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Population" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Population") void RecalcBuildRunStateByPopulation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [新增 #1] 校验当前人口能否养活所有建筑;不足则按建造顺序后建的建筑先 Stop

---

### Function `TryGenerateRefugees`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Population" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Population") void TryGenerateRefugees();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [新增] 触发流民(策划文档"二、人口/流民");仅当连续减人口次数达概率阈值时拆股流向邻近据点

---

### Function `TickRiotIfDue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Economy|Riot" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TickRiotIfDue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [新增] 周期 Tick(由 AWorldPlace::Tick 调度,按 RiotTickInterval 检查)

---

### Function `GetBuildingCoinOutput`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Tax" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingCoinOutput() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [新增] 取建筑本周期产出的钱币(只统计 Normal/LevelUp 状态,且作为税收来源)

---

### Function `GetBuildingMaintenanceCost`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Tax" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingMaintenanceCost() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [新增] 取建筑本周期维持消耗的钱币(只统计 Normal/LevelUp/Stop 状态)

---

### Function `GetBuildingMaintenancePopulation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Economy|Tax" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingMaintenancePopulation() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [新增] 取建筑本周期维持总共需要的人口(只统计 Normal/LevelUp/Stop 状态)

---

### Function `GetApprenticeshipEventIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Apprenticeship" |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Apprenticeship") TArray<FName> GetApprenticeshipEventIDs() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取本地点可触发的历练事件 ID 列表 —— 统一出口 = 配置 WorldPlaceInfo.ApprenticeshipEventIDs
> + 临时目的地(限时地点事件)动态注入(经 AApprenticeshipManager::AppendActiveTempDestEventIDs)。
> 调用方一律走本接口, 勿直接读字段。实现见 WorldPlace.cpp。

---

### Function `GetAllPlaceLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllPlaceLog(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取所有日志

---

### Function `GetPlaceLogByCharacterGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetPlaceLogByCharacterGuid(const FGuid& InCharacterGuid,TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Place Log By Character Guid.

---

### Function `GenerateRealmLeveUpLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterDataPtr` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateRealmLeveUpLog(const FCharacterSaveData& CharacterDataPtr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成境界提升日志

---

### Function `IsCharacterHaveNewLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsCharacterHaveNewLog(const FGuid& InCharacterGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 角色是否有新日志

---

### Function `IsAnyCharacterHaveNewLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsAnyCharacterHaveNewLog() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 任意角色是否有新日志

---

### Function `GetAllCharacterNewLogFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutFlags` | `TArray<FGuid>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllCharacterNewLogFlag(TArray<FGuid>& OutFlags) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get All Character New Log Flag.

---

### Function `RemoveCharacterNewLogFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveCharacterNewLogFlag(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除角色新日志标记

---

### Function `RemoveAllCharacterNewLogFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAllCharacterNewLogFlag();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除所有角色新日志标记

---

### Function `GetPlayerCanBattleCharactersInPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FCharacterSaveData> GetPlayerCanBattleCharactersInPlace() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取地点中所有可以战斗的角色

---

### Function `UpdateTips`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tip` | [FCommonTips](WorldStruct__FCommonTips.md) |
| `IsAddTip` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateTips(FCommonTips Tip, bool IsAddTip);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Update Tips operation.

---

### Function `GetPlayerSurvivalPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetPlayerSurvivalPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前玩家的生存点数

---

### Function `CalCurPlayerRaidPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 CalCurPlayerRaidPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算当前玩家的袭击点数

---

### Function `TestAtcion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TestIDs` | `TArray<FName>` |
| `TestType` | [EThreatType](WorldStruct__EThreatType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TestAtcion(TArray<FName> TestIDs,EThreatType TestType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 测试袭击事件

---

### Function `SetTaskPlaceMainTaskGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FORCEINLINE void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskGuid` | `const FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FORCEINLINE void SetTaskPlaceMainTaskGuid(const FGuid TaskGuid){TaskPlaceMainTaskGuid = TaskGuid;}`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Task Place Main Task Guid operation.

---

### Function `ExitTaskPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExitTaskPlace();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 主动退出

---
