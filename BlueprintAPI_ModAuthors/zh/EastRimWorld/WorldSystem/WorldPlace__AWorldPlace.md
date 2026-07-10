# `class` `AWorldPlace`

**源码头文件:** `EastRimWorld/WorldSystem/WorldPlace.h`

---

## 功能说明（来自头文件注释）

> World Place Actor 类型。

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid SGUID;` |

**说明:**

> GUID。

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**说明:**

> Scene Component 字段。

---

### 属性 `MapDataMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_MapDataMgr](../Components/ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**说明:**

> 地图信息管理组件

---

### 属性 `HISMManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**说明:**

> HISMManager

---

### 属性 `OnWorldPlaceForceChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldPlaceForceChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldPlaceForceChanged OnWorldPlaceForceChanged;` |

**说明:**

> 所属势力变更通知(占领/变无主时广播, 蓝图据此刷新 UI; 据点新归属读 WorldForceGUID)

---

### 属性 `OnWorldPlaceSiegeChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldPlaceSiegeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldPlaceSiegeChanged OnWorldPlaceSiegeChanged;` |

**说明:**

> 围城状态变更通知(SetUnderSiege 中 bUnderSiege 变化时广播, 蓝图据此刷新围城图标)

---

### 属性 `OnMonsterCountChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMonsterCountChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMonsterCountChange OnMonsterCountChange;` |

**说明:**

> 怪物数量变化

---

### 属性 `OnUpdateTeamUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTeamUI` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamUI OnUpdateTeamUI;` |

**说明:**

> 招募入队后通知

---

### 属性 `OnOutputResourceStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOutputResourceStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOutputResourceStateChanged OnOutputResourceStateChanged;` |

**说明:**

> 产出状态变化通知

---

### 属性 `GOAP_ManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ManagerComponent* GOAP_ManagerComponent { nullptr };` |

**说明:**

> GOAP管理组件

---

### 属性 `TimerManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_TimerManager](../Components/ERW_TimerManager__UERW_TimerManager.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TimerManager* TimerManager { nullptr };` |

**说明:**

> 计时器管理组件

---

### 属性 `WorkScheduleComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_WorkScheduleComponent](../Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_WorkScheduleComponent* WorkScheduleComponent { nullptr };` |

**说明:**

> 工作日程管理组件

---

### 属性 `GenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**说明:**

> 事件生成角色组件

---

### 属性 `LogComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UCommonLogComponent> LogComponent {nullptr};` |

**说明:**

> Log Component 字段。

---

### 属性 `BeginnerGuideComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UBeginnerGuideComponent](../System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UBeginnerGuideComponent* BeginnerGuideComponent { nullptr };` |

**说明:**

> 新手引导组件

---

### 属性 `InitWorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) EWorldPlaceType InitWorldPlaceType = EWorldPlaceType::CenterCity;` |

**说明:**

> 初始地点类型

---

### 属性 `WorldForceGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid WorldForceGUID;` |

**说明:**

> 拥有此地点的势力GUID

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid BattlePlaceGuid;` |

**说明:**

> 战场Guid

---

### 属性 `bPlayerPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bPlayerPlace = false;` |

**说明:**

> 是否是玩家拥有的地点

---

### 属性 `PlayerOccupyTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadOnly) int32 PlayerOccupyTimes = 0;` |

**说明:**

> 被玩家占领的次数

---

### 属性 `bUnderSiege`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnderSiege = false;` |

**说明:**

> 是否正被围城(有部队进入围城状态围攻本城)；变更时广播 OnWorldPlaceForceChanged 供 UI 刷新

---

### 属性 `OnWorldAreaGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) FGuid OnWorldAreaGuid;` |

**说明:**

> 所在的区域

---

### 属性 `bUnlockPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnlockPlace = false;` |

**说明:**

> 是否解锁此地点

---

### 属性 `PlaceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere) int32 PlaceLevel = 1;` |

**说明:**

> 地点等级

---

### 属性 `WorldPlaceDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FGuid,float> WorldPlaceDistance;` |

**说明:**

> 世界地点之间的距离

---

### 属性 `AttackEarlyWarning`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FAttackEarlyWarning](WorldStruct__FAttackEarlyWarning.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FAttackEarlyWarning AttackEarlyWarning;` |

**说明:**

> 已有的攻击预警

---

### 属性 `Population`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 Population = 0.f;` |

**说明:**

> 当前人口

---

### 属性 `PopulationIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PopulationIncrease = 0.f;` |

**说明:**

> 人口增长

---

### 属性 `PopulationGrowthEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float PopulationGrowthEfficiency = 1.0f;` |

**说明:**

> 人口增长效率

---

### 属性 `TaxationCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float TaxationCoefficient = 0.f;` |

**说明:**

> 当前税收比例(被占领后才有)

---

### 属性 `EnterPlaceTax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float EnterPlaceTax = 150.f;` |

**说明:**

> 在税收周期中对在城中游历的角色收取的入城费

---

### 属性 `ProsperityGrowthEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float ProsperityGrowthEfficiency = 1.0f;` |

**说明:**

> 繁荣度增长效率

---

### 属性 `Order`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Economy|Order" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Order") float Order = 70.f;` |

**说明:**

> [新增-策划文档"五、治安"]当前治安(0-100)

---

### 属性 `RiotState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldPlaceRiotState](WorldEconomyStruct__FWorldPlaceRiotState.md) |
| 反射说明符 | BlueprintReadOnly, Category="Economy|Riot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Riot") FWorldPlaceRiotState RiotState;` |

**说明:**

> [新增-策划文档"六、暴乱"]暴乱运行时状态

---

### 属性 `TaxDecreasePopulationCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Economy|Population" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Population") int32 TaxDecreasePopulationCount = 0;` |

**说明:**

> [新增-策划文档"二、人口/流民"]因税收高而连续减人口的次数(产生流民后重置)

---

### 属性 `PendingTradeTax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Economy|Tax" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Tax") int32 PendingTradeTax = 0;` |

**说明:**

> [#6b 移除 PendingBuildingTax]建筑产出钱币现在由 GetBuildingCoinOutput() 在 TickTaxation 中即时统计,不需要预累积
> [新增-策划文档"四、税收/结算"]已累积但尚未发放的商贸税收

---

### 属性 `LastTaxSettleGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Economy|Tax" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category="Economy|Tax") float LastTaxSettleGameTime = 0.f;` |

**说明:**

> [新增-策划文档"四、税收/结算"]上一次税收结算时间(GameTime,秒)

---

### 属性 `PlaceLevelInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FPlaceLevelInfo](WorldStruct__FPlaceLevelInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FPlaceLevelInfo PlaceLevelInfo;` |

**说明:**

> 当前地点的等级信息

---

### 属性 `bFirstTimeEnter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bFirstTimeEnter = true;` |

**说明:**

> 是否是第一次进入此地点

---

### 属性 `WorldPlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FName WorldPlaceID;` |

**说明:**

> 地点ID

---

### 属性 `Prosperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float Prosperity;` |

**说明:**

> 地点繁荣度

---

### 属性 `ProsperityIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float ProsperityIncrease;` |

**说明:**

> 每日繁荣度增长

---

### 属性 `LootRecoverCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LootRecoverCD = 0.f;` |

**说明:**

> 被劫掠后恢复的CD

---

### 属性 `LastPlunderGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastPlunderGameTime = 0.f;` |

**说明:**

> [劫掠CD] 上次被劫掠的游戏时间(GameTime,秒)；0=从未。与摧毁各自独立冷却。

---

### 属性 `LastPlunderRewardMultiple`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastPlunderRewardMultiple = 0.f;` |

**说明:**

> [劫掠CD] 上次劫掠时的 RewardMultiple；用于冷却时长=产出周期×倍率。

---

### 属性 `LastDestroyGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastDestroyGameTime = 0.f;` |

**说明:**

> [摧毁CD] 上次被摧毁的游戏时间(GameTime,秒)；0=从未。与劫掠各自独立冷却。

---

### 属性 `LastDestroyRewardMultiple`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastDestroyRewardMultiple = 0.f;` |

**说明:**

> [摧毁CD] 上次摧毁时的 RewardMultiple；用于冷却时长=产出周期×倍率。

---

### 属性 `WorldPlaceBuilds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FWorldPlaceBuildInfo> WorldPlaceBuilds;` |

**说明:**

> 建筑设施

---

### 属性 `TotalCanBuildNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 TotalCanBuildNum;` |

**说明:**

> 建筑设施总计可建造数量

---

### 属性 `BuildConsumeEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float BuildConsumeEfficiency = 1.0f;` |

**说明:**

> 建造建筑设施消耗比例

---

### 属性 `Coin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int Coin;` |

**说明:**

> 钱币

---

### 属性 `CoinIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int CoinIncrease;` |

**说明:**

> 钱币增长

---

### 属性 `LordAppointTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LordAppointTime;` |

**说明:**

> 城主就任的游戏时间点

---

### 属性 `LordGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid LordGuid;` |

**说明:**

> 城主的guid

---

### 属性 `WorldPlaceEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FWorldPlaceEffectInfo](WorldStruct__FWorldPlaceEffectInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FWorldPlaceEffectInfo> WorldPlaceEffects;` |

**说明:**

> 城镇效果id,是否激活

---

### 属性 `OwnedSpecialEffectIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "SpecialEffect") TArray<FName> OwnedSpecialEffectIds;` |

**说明:**

> 地点拥有的特殊效果 ID 列表（存档）；进入地点时在 EnterWorldPlace 中重新应用并缓存到 CachedSpecialEffectValues

---

### 属性 `SpecialEffectBuffOriginGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<FName, FGuid> SpecialEffectBuffOriginGuids;` |

**说明:**

> 「添加阵营全局 Buff」效果施加时使用的 OriginGuid（效果ID->OriginGuid），用于移除时按来源清除；不存档

---

### 属性 `MaxStationedCharacterNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 MaxStationedCharacterNum;` |

**说明:**

> 最多驻扎角色数量

---

### 属性 `OutPutEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float OutPutEfficiency = 1.f;` |

**说明:**

> 城镇物品产出比例

---

### 属性 `PlaceOutPut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FItemSimpleData> PlaceOutPut;` |

**说明:**

> 城镇周期产出的物品

---

### 属性 `ExtraOutPut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FItemSimpleData> ExtraOutPut;` |

**说明:**

> 额外产出(与等级无关的临时/外部注入产出, 如玄铁矿脉特产; 由注入方增删并调 CalcuOutput; 非存档, 由注入方读档后重注入)

---

### 属性 `CurrentOutPutInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 CurrentOutPutInterval = 0;` |

**说明:**

> 距离下次产出物资的时间(天)

---

### 属性 `OutputResourceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlaceOutputResourceStateType](WorldStruct__EPlaceOutputResourceStateType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) EPlaceOutputResourceStateType OutputResourceState;` |

**说明:**

> 产出物资状态

---

### 属性 `PendingOutputResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FItemSimpleData> PendingOutputResources;` |

**说明:**

> [在途累积]已产出但尚未发车运走的待运物资(马车在途期间持续累积,避免产出丢失)

---

### 属性 `TowerMartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> TowerMartialArtsEntries;` |

**说明:**

> 防御塔武学词条

---

### 属性 `WorldPlaceInteractionAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md),FGuid> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EWorldMapMoveType,FGuid> WorldPlaceInteractionAction;` |

**说明:**

> 地点正在被交互的操作（类型，Info）

---

### 属性 `bMainConstructionBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bMainConstructionBase = false;` |

**说明:**

> 是否是主基地 一个势力只会存在一个

---

### 属性 `WorldPlaceInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldPlaceInfo WorldPlaceInfo;` |

**说明:**

> ///////////////////////save end
> 地点信息

---

### 属性 `CachedSpecialEffectValues`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldPlaceSpecialEffectType](WorldStruct__EWorldPlaceSpecialEffectType.md), float> |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<EWorldPlaceSpecialEffectType, float> CachedSpecialEffectValues;` |

**说明:**

> 按效果类型汇总的当前数值（不存档，读档后由特殊效果系统重算）

---

### 属性 `bOnCurPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bOnCurPlace = false;` |

**说明:**

> 是否在当前的地点

---

### 属性 `CurrentTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentTemperature = 0.f;` |

**说明:**

> 当前的温度

---

### 属性 `CurrentLight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentLight = 0.f;` |

**说明:**

> //当前光照

---

### 属性 `CurLightInfluenceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurLightInfluenceID;` |

**说明:**

> 当前光照影响ID

---

### 属性 `bWorldPlaceInit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bWorldPlaceInit = false;` |

**说明:**

> 是否初始化完成

---

### 属性 `PostStationActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEasternEraPostStationActor](../PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AEasternEraPostStationActor* PostStationActor;` |

**说明:**

> Post Station Actor 字段。

---

### 属性 `bWidgetIsHoverd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bWidgetIsHoverd;` |

**说明:**

> 是否 Widget Is Hoverd 的布尔标记。

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**说明:**

> 按钮相关的功能

---

### 属性 `ApprenticeshipVisitors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category="Apprenticeship") TArray<FGuid> ApprenticeshipVisitors;` |

**说明:**

> [D3-历练] 当前在本城历练逗留的弟子 Guid 列表; 独立于 StationedCharacter,
> 不参与城主/城防/驻防上限计数; 仅供城市横幅展示"在此历练的弟子"

---

### 属性 `SaveWarningTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ETipsType](WorldStruct__ETipsType.md),[FCommonTipsArr](WorldStruct__FCommonTipsArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadOnly) TMap<ETipsType,FCommonTipsArr> SaveWarningTips;` |

**说明:**

> 执行 Save Warning Tips 操作。

---

### 属性 `TreasureHouse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ABuildingActorBase * TreasureHouse;` |

**说明:**

> Treasure House 字段。

---

### 属性 `TaskPlaceMainTaskGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") FGuid TaskPlaceMainTaskGuid;` |

**说明:**

> 任务地点主要任务GUID

---

### 属性 `bTaskPlaceStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") bool bTaskPlaceStart = false;` |

**说明:**

> 是否 Task Place Start 的布尔标记。

---

### 属性 `TaskPlaceTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") float TaskPlaceTimeLimit = -1.f;` |

**说明:**

> 任务地点时间限制

---

### 属性 `OnTaskSuccessEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTaskSuccessEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTaskSuccessEnd OnTaskSuccessEnd;` |

**说明:**

> 副本战斗胜利

---

### 属性 `OnTaskFaileEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTaskFaileEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTaskFaileEnd OnTaskFaileEnd;` |

**说明:**

> 副本战斗失败

---

## 蓝图暴露函数

### 函数 `TryGetBeginnerGuideItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |
| `Pos` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* TryGetBeginnerGuideItem(const FName& ItemID , const FVector& Pos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试获得新手引导物品

---

### 函数 `TryGetBeginnerGuideBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildID` | `const FName&` |
| `Pos` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AGOAP_ActorBase* TryGetBeginnerGuideBuilding(const FName& BuildID , const FVector& Pos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试获得新手引导建筑

---

### 函数 `GetLocationOnWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector GetLocationOnWorldMap() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取在世界地图中的位置

---

### 函数 `SetWorldPlaceTipUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WidgetObject` | [UCommonModuleBase](../UI/Common/CommonModuleBase__UCommonModuleBase.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetWorldPlaceTipUI(UCommonModuleBase * WidgetObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set World Place Tip UI 操作。

---

### 函数 `UnlockFog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsRegister` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockFog(bool bIsRegister);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 进入地图注册迷雾组件

---

### 函数 `ExplorationPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExplorationPlace(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 探索此地点

---

### 函数 `ExplorationComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExplorationComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 探索完成

---

### 函数 `InitWorldPlaceWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitWorldPlaceWidget();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 初始化世界地点ui

---

### 函数 `CheckCaptureWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCaptureWorldPlace();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否被占领

---

### 函数 `TriggerBeAttacked`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `const FGuid &` |
| `false` | `bool bImmediately =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerBeAttacked(const FGuid & ForceGuid,bool bImmediately = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 被攻击

---

### 函数 `OccupyPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool OccupyPlace(const FGuid & ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 占领地点(调用前要调用占领势力能否占领AWorldForce::CheckCanOccupyPlace)

---

### 函数 `SetUnderSiege`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bNewUnderSiege` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetUnderSiege(bool bNewUnderSiege);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置围城状态：值有变才生效并广播 OnWorldPlaceForceChanged(UI 刷新)

---

### 函数 `DestructionPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `const FGuid &` |
| `DestroyBuildingNumber` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DestructionPlace(const FGuid & ForceGuid,int32 DestroyBuildingNumber);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 破坏地点

---

### 函数 `LootPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LootPlace(const FGuid & ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Loot Place 字段。

---

### 函数 `PlaceProsperityChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeValue` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlaceProsperityChange(float ChangeValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 繁荣度变化

---

### 函数 `PlacePopulationChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeValue` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlacePopulationChange(int32 ChangeValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Place Population Change 字段。

---

### 函数 `CalcuMaxStationedCharacterNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcuMaxStationedCharacterNum();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算并更新最大可驻扎角色数量

---

### 函数 `AddExtraOutPut`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddExtraOutPut(const FItemSimpleData& ItemData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加一条额外产出(与等级无关的临时/外部注入, 如玄铁矿脉特产; 同 Id 多来源按 Num 累加, 不覆盖)并立即重算产出

---

### 函数 `RemoveExtraOutPut`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveExtraOutPut(const FItemSimpleData& ItemData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除一条额外产出(只扣减本次贡献的 Num, 保留其他来源的量; 扣到 <=0 才删该条目)并立即重算产出

---

### 函数 `IsEmergenceEventPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsEmergenceEventPlace() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否可作涌现事件发生地点: 已解锁 + 在地图显示(bShowInMap) + 类型属 驻地/中心城市/资源点 三者之一

---

### 函数 `SetPlaceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewPlaceLevel` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SetPlaceLevel(int32 NewPlaceLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置地点等级

---

### 函数 `UpgradePlaceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpgradePlaceLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 升级地点等级

---

### 函数 `CheckUpgradePlaceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [EUpgradeErrorType](WorldStruct__EUpgradeErrorType.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) EUpgradeErrorType CheckUpgradePlaceLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以升级

---

### 函数 `GetPopulationIncrease`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetPopulationIncrease() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前每天人口的增长

---

### 函数 `GetProsperityIncrease`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetProsperityIncrease() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前每天繁荣度的增长

---

### 函数 `GetProsperityGrowthEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetProsperityGrowthEfficiency() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取繁荣度增长效率

---

### 函数 `GetPlaceOutput`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutOutput` | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetPlaceOutput(TMap<FName,FItemSimpleData>& OutOutput) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取城镇周期产出

---

### 函数 `IsInPlunderDestroyCooldown`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldPlace" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Disposal` | [EPlaceDisposalType](WorldStruct__EPlaceDisposalType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldPlace") bool IsInPlunderDestroyCooldown(EPlaceDisposalType Disposal) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [劫掠/摧毁CD] 按处置类型查询是否仍在冷却内；冷却时直接弹出提示，返回 true=冷却中(该类型不可再操作)。

---

### 函数 `AcceptOutPutResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AcceptResource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AcceptOutPutResource(const TMap<FName,FItemSimpleData>& AcceptResource);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 接收从其他地方送来的产出物

---

### 函数 `CheckCanBuild`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanBuild(const FName& BuildId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查能否新建某建筑设施

---

### 函数 `FindPlaceBuildInfoByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |
| `OutBuildInfo` | [FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool FindPlaceBuildInfoByID(const FName& BuildId,FWorldPlaceBuildInfo& OutBuildInfo);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 根据ID查找城镇建筑信息

---

### 函数 `CheckCanLevelUpBuild`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Build` | const [FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanLevelUpBuild(const FWorldPlaceBuildInfo& Build) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查能否升级某建筑设施

---

### 函数 `BuildNewPlaceBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BuildNewPlaceBuilding(const FName& BuildId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 新建建筑设施 (先CheckCanBuild)

---

### 函数 `LevelUpPlaceBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool LevelUpPlaceBuilding(const FName& BuildId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 升级一个建筑设施(先CheckCanLevelUpBuild)

---

### 函数 `FixedPlaceBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool FixedPlaceBuilding(const FName& BuildId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 修复建筑设施(先CheckCanLevelUpBuild)

---

### 函数 `DestoryPlaceBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DestoryPlaceBuilding(const FName& BuildId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 拆除建筑设施

---

### 函数 `SetPlaceLord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLordGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetPlaceLord(const FGuid& InLordGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置城主

---

### 函数 `PopupInfoUIChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弹出UI信息改变

---

### 函数 `GetInstanceGenerationActorInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FInstanceGenerationActorInfo](WorldStruct__FInstanceGenerationActorInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FInstanceGenerationActorInfo GetInstanceGenerationActorInfo(const FGuid & GenerationInstanceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取对应的生成怪物信息实例信息

---

### 函数 `GetMonsterGenerationQueueInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FMonsterGenerationInfo](WorldStruct__FMonsterGenerationInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FMonsterGenerationInfo GetMonsterGenerationQueueInfo(const FGuid & GenerationGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取对应的生成队列中的信息

---

### 函数 `GetMonsterArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FString, int32>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MonsterArray` | `const TArray<FString>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FString, int32> GetMonsterArray(const TArray<FString>& MonsterArray);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 归类怪物

---

### 函数 `GetAllGenerationCharacterByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllGenerationCharacterByGuid(const FGuid & GenerationInstanceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取所有生成的角色

---

### 函数 `HandlingVisitors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |
| `VisitorsActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `bAccept` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HandlingVisitors(const FGuid & GenerationInstanceGuid,AEastRimWorldCharacter * VisitorsActor,bool bAccept);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 处理来访人员

---

### 函数 `ConvertCharacterToPlayer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `VisitorsActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ConvertCharacterToPlayer(AEastRimWorldCharacter * VisitorsActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将角色转为玩家所属

---

### 函数 `PlayBinkMedia`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool PlayBinkMedia();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 播放此关卡的视频

---

### 函数 `SkipBinkMedia`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SkipBinkMedia();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Skip Bink Media 字段。

---

### 函数 `FindMonsterNest`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AMonsterNestActor](../System/MonsterNest/MonsterNestActor__AMonsterNestActor.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMonsterNestGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AMonsterNestActor * FindMonsterNest(FGuid InMonsterNestGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找

---

### 函数 `ChangeWorldPlaceTip`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewLocation` | `FVector` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangeWorldPlaceTip(FVector NewLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Change World Place Tip 字段。

---

### 函数 `GetStationedCharacterNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetStationedCharacterNumber() const{ return StationedCharacter.Num();}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Stationed Character Number。

---

### 函数 `CheckCanAddStationedCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanAddStationedCharacter() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查能否添加驻扎角色

---

### 函数 `AddStationedCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool AddStationedCharacter(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 派驻弟子(先CheckCanAddStationedCharacter)

---

### 函数 `RemoveStationedCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveStationedCharacter(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除驻扎的弟子

---

### 函数 `RemoveAllStationedCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveAllStationedCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除所有的驻守弟子

---

### 函数 `AddApprenticeshipVisitor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Apprenticeship") void AddApprenticeshipVisitor(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [D3-历练] 登记一名历练弟子来本城逗留(不进 StationedCharacter,不影响驻防)

---

### 函数 `RemoveApprenticeshipVisitor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Apprenticeship" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Apprenticeship") void RemoveApprenticeshipVisitor(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [D3-历练] 弟子离开本城(逗留结束/回程)

---

### 函数 `GetApprenticeshipVisitors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Apprenticeship" |
| 返回类型 | `const TArray<FGuid>&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Apprenticeship") const TArray<FGuid>& GetApprenticeshipVisitors() const { return ApprenticeshipVisitors; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [D3-历练] 供城市横幅读取:当前在本城历练逗留的弟子 Guid 列表

---

### 函数 `GetApprenticeshipVisitorCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Apprenticeship" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Apprenticeship") int32 GetApprenticeshipVisitorCount() const { return ApprenticeshipVisitors.Num(); }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [D3-历练] 当前在本城历练的弟子数量

---

### 函数 `GetAllStationedCharacterGuids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutStationedCharacter` | `TArray<FGuid>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllStationedCharacterGuids(TArray<FGuid>& OutStationedCharacter) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get All Stationed Character Guids。

---

### 函数 `GetWorldPlaceCombatScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetWorldPlaceCombatScore() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取城镇战力

---

### 函数 `ResetEnterLevelArchiveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResetEnterLevelArchiveData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置进入地图后存储的数据

---

### 函数 `GetOrderStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Order" |
| 返回类型 | [EWorldPlaceOrderStage](WorldEconomyStruct__EWorldPlaceOrderStage.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Order") EWorldPlaceOrderStage GetOrderStage() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前治安阶段(安宁/纷扰/混乱/动荡)

---

### 函数 `AddOrder`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Order" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delta` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Order") void AddOrder(float Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 治安变化(带 Clamp 0-100,变化后自动触发暴乱概率判定)

---

### 函数 `GetOrderBuildingCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Order" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Order") int32 GetOrderBuildingCount() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 统计当前据点的"治安建筑"数量(AddOrder > 0 且处于 Normal 状态)

---

### 函数 `ApplyBattleAftermath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Battle" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Battle") void ApplyBattleAftermath();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 任何战斗结束都调用:扣繁荣(5-10%) + 扣治安 Rand(-10,-30)

---

### 函数 `TryTriggerRiot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Riot" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TryTriggerRiot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查并触发暴乱(基于当前治安);已在暴乱中或无归属时不触发

---

### 函数 `TickRiot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Riot" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TickRiot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暴乱周期 Tick(每 RiotTickInterval 秒被 WorldDirector 调度一次,完成时调用 EndRiot)

---

### 函数 `EndRiot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Riot" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void EndRiot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暴乱结束 -> 判定是否触发叛乱

---

### 函数 `TriggerRebellion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Rebellion" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Rebellion") void TriggerRebellion();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 叛乱处理:归属置空、转移驻扎弟子(就近 stub)、一次性扣繁荣/人口

---

### 函数 `TickTaxation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Tax" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void TickTaxation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 税收结算周期 Tick;由 WorldDirector 按 TaxationCycle 调度
> 顺序:人口基础消耗 → 驻扎弟子消耗 → 余下转化为玩家 Coin / NPC 成长积分

---

### 函数 `ApplyTradeProsperity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Trade" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherPopulation` | `int32` |
| `OtherFavorability` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Trade") void ApplyTradeProsperity(int32 OtherPopulation, float OtherFavorability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 商贸结算时使用:对方人口 + 对方好感 → 加繁荣(策划公式)

---

### 函数 `AccumulateTradeTax`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Tax" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CoinAmount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void AccumulateTradeTax(int32 CoinAmount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 累积"未结算"的商贸税收(由商贸结算时调用)

---

### 函数 `GetEstimatedTaxIncome`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Tax" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Tax") float GetEstimatedTaxIncome() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 预估税收(UI 显示用),不消耗也不修改状态;公式:T × [(建筑+商贸+人口产出) - (建筑维持+人口基础+弟子消耗)]

---

### 函数 `IsInRiot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Riot" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Riot") bool IsInRiot() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [UI] 是否处于暴乱中(供控件 Visibility 绑定:暴乱时显示"暴乱持续"文本)

---

### 函数 `GetOrderDisplayText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Order" |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Order") FText GetOrderDisplayText() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [UI] 治安显示文本:仅整数;暴乱中追加"(暴乱)",例如 25(暴乱)

---

### 函数 `GetRiotRemainingText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Riot" |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Riot") FText GetRiotRemainingText() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [UI] 暴乱剩余时间文本"暴乱持续: X天X时"(镇守下方显示);非暴乱返回空

---

### 函数 `SetTaxationCoefficient`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Tax" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTaxRatio` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void SetTaxationCoefficient(float NewTaxRatio);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [新增 #8] 修改本据点的税收比例(Clamp 0-1),蓝图可调用

---

### 函数 `SetEnterPlaceTax`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Tax" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTax` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Tax") void SetEnterPlaceTax(float NewTax);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [新增 #8] 修改本据点的入城费,蓝图可调用

---

### 函数 `RecalcBuildRunStateByPopulation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Population" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Population") void RecalcBuildRunStateByPopulation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [新增 #1] 校验当前人口能否养活所有建筑;不足则按建造顺序后建的建筑先 Stop

---

### 函数 `TryGenerateRefugees`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Population" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Population") void TryGenerateRefugees();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [新增] 触发流民(策划文档"二、人口/流民");仅当连续减人口次数达概率阈值时拆股流向邻近据点

---

### 函数 `TickRiotIfDue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Economy|Riot" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Economy|Riot") void TickRiotIfDue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [新增] 周期 Tick(由 AWorldPlace::Tick 调度,按 RiotTickInterval 检查)

---

### 函数 `GetBuildingCoinOutput`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Tax" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingCoinOutput() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [新增] 取建筑本周期产出的钱币(只统计 Normal/LevelUp 状态,且作为税收来源)

---

### 函数 `GetBuildingMaintenanceCost`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Tax" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingMaintenanceCost() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [新增] 取建筑本周期维持消耗的钱币(只统计 Normal/LevelUp/Stop 状态)

---

### 函数 `GetBuildingMaintenancePopulation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Economy|Tax" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="Economy|Tax") int32 GetBuildingMaintenancePopulation() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [新增] 取建筑本周期维持总共需要的人口(只统计 Normal/LevelUp/Stop 状态)

---

### 函数 `GetApprenticeshipEventIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Apprenticeship" |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Apprenticeship") TArray<FName> GetApprenticeshipEventIDs() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取本地点可触发的历练事件 ID 列表 —— 统一出口 = 配置 WorldPlaceInfo.ApprenticeshipEventIDs
> + 临时目的地(限时地点事件)动态注入(经 AApprenticeshipManager::AppendActiveTempDestEventIDs)。
> 调用方一律走本接口, 勿直接读字段。实现见 WorldPlace.cpp。

---

### 函数 `GetAllPlaceLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllPlaceLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有日志

---

### 函数 `GetPlaceLogByCharacterGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetPlaceLogByCharacterGuid(const FGuid& InCharacterGuid,TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Place Log By Character Guid。

---

### 函数 `GenerateRealmLeveUpLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterDataPtr` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateRealmLeveUpLog(const FCharacterSaveData& CharacterDataPtr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成境界提升日志

---

### 函数 `IsCharacterHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsCharacterHaveNewLog(const FGuid& InCharacterGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 角色是否有新日志

---

### 函数 `IsAnyCharacterHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsAnyCharacterHaveNewLog() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 任意角色是否有新日志

---

### 函数 `GetAllCharacterNewLogFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutFlags` | `TArray<FGuid>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllCharacterNewLogFlag(TArray<FGuid>& OutFlags) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get All Character New Log Flag。

---

### 函数 `RemoveCharacterNewLogFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveCharacterNewLogFlag(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除角色新日志标记

---

### 函数 `RemoveAllCharacterNewLogFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveAllCharacterNewLogFlag();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除所有角色新日志标记

---

### 函数 `GetPlayerCanBattleCharactersInPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FCharacterSaveData> GetPlayerCanBattleCharactersInPlace() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取地点中所有可以战斗的角色

---

### 函数 `UpdateTips`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tip` | [FCommonTips](WorldStruct__FCommonTips.md) |
| `IsAddTip` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateTips(FCommonTips Tip, bool IsAddTip);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Update Tips 操作。

---

### 函数 `GetPlayerSurvivalPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetPlayerSurvivalPoints();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前玩家的生存点数

---

### 函数 `CalCurPlayerRaidPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 CalCurPlayerRaidPoints();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算当前玩家的袭击点数

---

### 函数 `TestAtcion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TestIDs` | `TArray<FName>` |
| `TestType` | [EThreatType](WorldStruct__EThreatType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TestAtcion(TArray<FName> TestIDs,EThreatType TestType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 测试袭击事件

---

### 函数 `SetTaskPlaceMainTaskGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FORCEINLINE void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskGuid` | `const FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FORCEINLINE void SetTaskPlaceMainTaskGuid(const FGuid TaskGuid){TaskPlaceMainTaskGuid = TaskGuid;}`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Task Place Main Task Guid 操作。

---

### 函数 `ExitTaskPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExitTaskPlace();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 主动退出

---
