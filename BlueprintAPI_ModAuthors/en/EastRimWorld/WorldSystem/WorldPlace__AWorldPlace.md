# `class` `AWorldPlace`

**Source header:** `EastRimWorld/WorldSystem/WorldPlace.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid SGUID;` |

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

---

### Property `WidgetComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidgetComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UWidgetComponent> WidgetComponent;` |

---

### Property `VaFogAgentCharReconnaissance`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UVaFogAgentComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UVaFogAgentComponent> VaFogAgentCharReconnaissance;` |

---

### Property `VaFogAgentCharWorld`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UVaFogAgentComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UVaFogAgentComponent> VaFogAgentCharWorld;` |

---

### Property `StaticMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

---

### Property `MapDataMgr`

| Field | Details |
|------|------|
| C++ type | [UERW_MapDataMgr](../Components/ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**Source comments:**

> 地图信息管理组件

---

### Property `HISMManager`

| Field | Details |
|------|------|
| C++ type | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**Source comments:**

> HISMManager

---

### Property `OnMonsterCountChange`

| Field | Details |
|------|------|
| C++ type | `FOnMonsterCountChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMonsterCountChange OnMonsterCountChange;` |

**Source comments:**

> 怪物数量变化

---

### Property `OnUpdateTeamUI`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTeamUI` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamUI OnUpdateTeamUI;` |

**Source comments:**

> 招募入队后通知

---

### Property `OnOutputResourceStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnOutputResourceStateChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnOutputResourceStateChanged OnOutputResourceStateChanged;` |

**Source comments:**

> 产出状态变化通知

---

### Property `GOAP_ManagerComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ManagerComponent* GOAP_ManagerComponent { nullptr };` |

**Source comments:**

> GOAP管理组件

---

### Property `TimerManager`

| Field | Details |
|------|------|
| C++ type | [UERW_TimerManager](../Components/ERW_TimerManager__UERW_TimerManager.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TimerManager* TimerManager { nullptr };` |

**Source comments:**

> 计时器管理组件

---

### Property `WorkScheduleComponent`

| Field | Details |
|------|------|
| C++ type | [UERW_WorkScheduleComponent](../Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_WorkScheduleComponent* WorkScheduleComponent { nullptr };` |

**Source comments:**

> 工作日程管理组件

---

### Property `GenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**Source comments:**

> 事件生成角色组件

---

### Property `LogComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UCommonLogComponent> LogComponent {nullptr};` |

---

### Property `BeginnerGuideComponent`

| Field | Details |
|------|------|
| C++ type | [UBeginnerGuideComponent](../System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UBeginnerGuideComponent* BeginnerGuideComponent { nullptr };` |

**Source comments:**

> 新手引导组件

---

### Property `InitWorldPlaceType`

| Field | Details |
|------|------|
| C++ type | `EWorldPlaceType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) EWorldPlaceType InitWorldPlaceType = EWorldPlaceType::CenterCity;` |

**Source comments:**

> 初始地点类型

---

### Property `WorldForceGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid WorldForceGUID;` |

**Source comments:**

> 拥有此地点的势力GUID

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid BattlePlaceGuid;` |

**Source comments:**

> 战场Guid

---

### Property `bPlayerPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bPlayerPlace = false;` |

**Source comments:**

> 是否是玩家拥有的地点

---

### Property `OnWorldAreaGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) FGuid OnWorldAreaGuid;` |

**Source comments:**

> 所在的区域

---

### Property `bUnlockPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnlockPlace = false;` |

**Source comments:**

> 是否解锁此地点

---

### Property `PlaceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 PlaceLevel = 1;` |

**Source comments:**

> 地点等级

---

### Property `WorldPlaceDistance`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FGuid,float> WorldPlaceDistance;` |

**Source comments:**

> 世界地点之间的距离

---

### Property `AttackEarlyWarning`

| Field | Details |
|------|------|
| C++ type | [FAttackEarlyWarning](WorldStruct__FAttackEarlyWarning.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FAttackEarlyWarning AttackEarlyWarning;` |

**Source comments:**

> 已有的攻击预警

---

### Property `Population`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 Population = 0.f;` |

**Source comments:**

> 当前人口

---

### Property `PopulationIncrease`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PopulationIncrease = 0.f;` |

**Source comments:**

> 人口增长

---

### Property `PopulationGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float PopulationGrowthEfficiency = 1.0f;` |

**Source comments:**

> 人口增长效率

---

### Property `TaxationCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float TaxationCoefficient = 0.f;` |

**Source comments:**

> 当前税收比例(被占领后才有)

---

### Property `ProsperityGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float ProsperityGrowthEfficiency = 1.0f;` |

**Source comments:**

> 繁荣度增长效率

---

### Property `PlaceLevelInfo`

| Field | Details |
|------|------|
| C++ type | [FPlaceLevelInfo](WorldStruct__FPlaceLevelInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FPlaceLevelInfo PlaceLevelInfo;` |

**Source comments:**

> 当前地点的等级信息

---

### Property `bFirstTimeEnter`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bFirstTimeEnter = true;` |

**Source comments:**

> 是否是第一次进入此地点

---

### Property `WorldPlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FName WorldPlaceID;` |

**Source comments:**

> 地点ID

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float Prosperity;` |

**Source comments:**

> 地点繁荣度

---

### Property `ProsperityIncrease`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float ProsperityIncrease;` |

**Source comments:**

> 每日繁荣度增长

---

### Property `LootRecoverCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LootRecoverCD = 0.f;` |

**Source comments:**

> 被劫掠后恢复的CD

---

### Property `WorldPlaceBuilds`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FWorldPlaceBuildInfo> WorldPlaceBuilds;` |

**Source comments:**

> 建筑设施

---

### Property `TotalCanBuildNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 TotalCanBuildNum;` |

**Source comments:**

> 建筑设施总计可建造数量

---

### Property `BuildConsumeEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float BuildConsumeEfficiency = 1.0f;` |

**Source comments:**

> 建造建筑设施消耗比例

---

### Property `Coin`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int Coin;` |

**Source comments:**

> 钱币

---

### Property `CoinIncrease`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int CoinIncrease;` |

**Source comments:**

> 钱币增长

---

### Property `LordAppointTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LordAppointTime;` |

**Source comments:**

> 城主就任的游戏时间点

---

### Property `LordGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid LordGuid;` |

**Source comments:**

> 城主的guid

---

### Property `WorldPlaceEffects`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FWorldPlaceEffectInfo](WorldStruct__FWorldPlaceEffectInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FWorldPlaceEffectInfo> WorldPlaceEffects;` |

**Source comments:**

> 城镇效果id,是否激活

---

### Property `OwnedSpecialEffectIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "SpecialEffect") TArray<FName> OwnedSpecialEffectIds;` |

**Source comments:**

> 地点拥有的特殊效果 ID 列表（存档）；进入地点时在 EnterWorldPlace 中重新应用并缓存到 CachedSpecialEffectValues

---

### Property `SpecialEffectBuffOriginGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<FName, FGuid> SpecialEffectBuffOriginGuids;` |

**Source comments:**

> 「添加阵营全局 Buff」效果施加时使用的 OriginGuid（效果ID->OriginGuid），用于移除时按来源清除；不存档

---

### Property `MaxStationedCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 MaxStationedCharacterNum;` |

**Source comments:**

> 最多驻扎角色数量

---

### Property `OutPutEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float OutPutEfficiency = 1.f;` |

**Source comments:**

> 城镇物品产出比例

---

### Property `PlaceOutPut`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FItemSimpleData> PlaceOutPut;` |

**Source comments:**

> 城镇周期产出的物品

---

### Property `CurrentOutPutInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 CurrentOutPutInterval = 0;` |

**Source comments:**

> 距离下次产出物资的时间(天)

---

### Property `OutputResourceState`

| Field | Details |
|------|------|
| C++ type | `EPlaceOutputResourceStateType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) EPlaceOutputResourceStateType OutputResourceState;` |

**Source comments:**

> 产出物资状态

---

### Property `TowerMartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> TowerMartialArtsEntries;` |

**Source comments:**

> 防御塔武学词条

---

### Property `WorldPlaceInteractionAction`

| Field | Details |
|------|------|
| C++ type | `TMap<EWorldMapMoveType,FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EWorldMapMoveType,FGuid> WorldPlaceInteractionAction;` |

**Source comments:**

> 地点正在被交互的操作（类型，Info）

---

### Property `bMainConstructionBase`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bMainConstructionBase = false;` |

**Source comments:**

> 是否是主基地 一个势力只会存在一个

---

### Property `WorldPlaceInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldPlaceInfo WorldPlaceInfo;` |

**Source comments:**

> ///////////////////////save end
> 地点信息

---

### Property `CachedSpecialEffectValues`

| Field | Details |
|------|------|
| C++ type | `TMap<EWorldPlaceSpecialEffectType, float>` |
| Reflection specifiers | BlueprintReadOnly, Category="SpecialEffect" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<EWorldPlaceSpecialEffectType, float> CachedSpecialEffectValues;` |

**Source comments:**

> 按效果类型汇总的当前数值（不存档，读档后由特殊效果系统重算）

---

### Property `bOnCurPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bOnCurPlace = false;` |

**Source comments:**

> 是否在当前的地点

---

### Property `CurrentTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentTemperature = 0.f;` |

**Source comments:**

> 当前的温度

---

### Property `CurrentLight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentLight = 0.f;` |

**Source comments:**

> //当前光照

---

### Property `CurLightInfluenceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurLightInfluenceID;` |

**Source comments:**

> 当前光照影响ID

---

### Property `bWorldPlaceInit`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bWorldPlaceInit = false;` |

**Source comments:**

> 是否初始化完成

---

### Property `PostStationActor`

| Field | Details |
|------|------|
| C++ type | [AEasternEraPostStationActor](../PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AEasternEraPostStationActor* PostStationActor;` |

---

### Property `bWidgetIsHoverd`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bWidgetIsHoverd;` |

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 按钮相关的功能

---

### Property `SaveWarningTips`

| Field | Details |
|------|------|
| C++ type | TMap<ETipsType,[FCommonTipsArr](WorldStruct__FCommonTipsArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadOnly) TMap<ETipsType,FCommonTipsArr> SaveWarningTips;` |

---

### Property `TreasureHouse`

| Field | Details |
|------|------|
| C++ type | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ABuildingActorBase * TreasureHouse;` |

---

### Property `TaskPlaceMainTaskGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") FGuid TaskPlaceMainTaskGuid;` |

**Source comments:**

> 任务地点主要任务GUID

---

### Property `bTaskPlaceStart`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") bool bTaskPlaceStart = false;` |

---

### Property `TaskPlaceTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="TaskPlace" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") float TaskPlaceTimeLimit = -1.f;` |

**Source comments:**

> 任务地点时间限制

---

### Property `OnTaskSuccessEnd`

| Field | Details |
|------|------|
| C++ type | `FOnTaskSuccessEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTaskSuccessEnd OnTaskSuccessEnd;` |

**Source comments:**

> 副本战斗胜利

---

### Property `OnTaskFaileEnd`

| Field | Details |
|------|------|
| C++ type | `FOnTaskFaileEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTaskFaileEnd OnTaskFaileEnd;` |

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 占领地点(调用前要调用占领势力能否占领AWorldForce::CheckCanOccupyPlace)

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 升级地点等级

---

### Function `CheckUpgradePlaceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `EUpgradeErrorType` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EUpgradeErrorType CheckUpgradePlaceLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 获取城镇周期产出

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `GetStationedCharacterNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetStationedCharacterNumber() const{ return StationedCharacter.Num();}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `CheckCanAddStationedCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanAddStationedCharacter() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 移除所有的驻守弟子

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

---

### Function `GetWorldPlaceCombatScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetWorldPlaceCombatScore() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

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

**Source comments:**

> 重置进入地图后存储的数据

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `GetPlayerSurvivalPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetPlayerSurvivalPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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
| `TestType` | `EThreatType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TestAtcion(TArray<FName> TestIDs,EThreatType TestType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

---

### Function `ExitTaskPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExitTaskPlace();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 主动退出

---
