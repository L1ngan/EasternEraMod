# `class` `AWorldPlace`

**源码头文件:** `EastRimWorld/WorldSystem/WorldPlace.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid SGUID;` |

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

---

### 属性 `WidgetComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UWidgetComponent> WidgetComponent;` |

---

### 属性 `VaFogAgentCharReconnaissance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UVaFogAgentComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UVaFogAgentComponent> VaFogAgentCharReconnaissance;` |

---

### 属性 `VaFogAgentCharWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UVaFogAgentComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UVaFogAgentComponent> VaFogAgentCharWorld;` |

---

### 属性 `StaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UStaticMeshComponent> StaticMesh;` |

---

### 属性 `MapDataMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_MapDataMgr](../Components/ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**源码注释:**

> 地图信息管理组件

---

### 属性 `HISMManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_HISMManager](../Components/ERW_HISMManager__UERW_HISMManager.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**源码注释:**

> HISMManager

---

### 属性 `OnMonsterCountChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMonsterCountChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMonsterCountChange OnMonsterCountChange;` |

**源码注释:**

> 怪物数量变化

---

### 属性 `OnUpdateTeamUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTeamUI` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamUI OnUpdateTeamUI;` |

**源码注释:**

> 招募入队后通知

---

### 属性 `OnOutputResourceStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOutputResourceStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOutputResourceStateChanged OnOutputResourceStateChanged;` |

**源码注释:**

> 产出状态变化通知

---

### 属性 `GOAP_ManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UGOAP_ManagerComponent* GOAP_ManagerComponent { nullptr };` |

**源码注释:**

> GOAP管理组件

---

### 属性 `TimerManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_TimerManager](../Components/ERW_TimerManager__UERW_TimerManager.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TimerManager* TimerManager { nullptr };` |

**源码注释:**

> 计时器管理组件

---

### 属性 `WorkScheduleComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_WorkScheduleComponent](../Components/ERW_WorkScheduleComponent__UERW_WorkScheduleComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_WorkScheduleComponent* WorkScheduleComponent { nullptr };` |

**源码注释:**

> 工作日程管理组件

---

### 属性 `GenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**源码注释:**

> 事件生成角色组件

---

### 属性 `LogComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UCommonLogComponent> LogComponent {nullptr};` |

---

### 属性 `BeginnerGuideComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UBeginnerGuideComponent](../System/Task/BeginnerGuideComponent__UBeginnerGuideComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UBeginnerGuideComponent* BeginnerGuideComponent { nullptr };` |

**源码注释:**

> 新手引导组件

---

### 属性 `InitWorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, VisibleAnywhere) EWorldPlaceType InitWorldPlaceType = EWorldPlaceType::CenterCity;` |

**源码注释:**

> 初始地点类型

---

### 属性 `WorldForceGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid WorldForceGUID;` |

**源码注释:**

> 拥有此地点的势力GUID

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,VisibleAnywhere,BlueprintReadOnly) FGuid BattlePlaceGuid;` |

**源码注释:**

> 战场Guid

---

### 属性 `bPlayerPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bPlayerPlace = false;` |

**源码注释:**

> 是否是玩家拥有的地点

---

### 属性 `OnWorldAreaGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) FGuid OnWorldAreaGuid;` |

**源码注释:**

> 所在的区域

---

### 属性 `bUnlockPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bUnlockPlace = false;` |

**源码注释:**

> 是否解锁此地点

---

### 属性 `PlaceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 PlaceLevel = 1;` |

**源码注释:**

> 地点等级

---

### 属性 `WorldPlaceDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FGuid,float> WorldPlaceDistance;` |

**源码注释:**

> 世界地点之间的距离

---

### 属性 `AttackEarlyWarning`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FAttackEarlyWarning](WorldStruct__FAttackEarlyWarning.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FAttackEarlyWarning AttackEarlyWarning;` |

**源码注释:**

> 已有的攻击预警

---

### 属性 `Population`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 Population = 0.f;` |

**源码注释:**

> 当前人口

---

### 属性 `PopulationIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PopulationIncrease = 0.f;` |

**源码注释:**

> 人口增长

---

### 属性 `PopulationGrowthEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float PopulationGrowthEfficiency = 1.0f;` |

**源码注释:**

> 人口增长效率

---

### 属性 `TaxationCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float TaxationCoefficient = 0.f;` |

**源码注释:**

> 当前税收比例(被占领后才有)

---

### 属性 `ProsperityGrowthEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float ProsperityGrowthEfficiency = 1.0f;` |

**源码注释:**

> 繁荣度增长效率

---

### 属性 `PlaceLevelInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FPlaceLevelInfo](WorldStruct__FPlaceLevelInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FPlaceLevelInfo PlaceLevelInfo;` |

**源码注释:**

> 当前地点的等级信息

---

### 属性 `bFirstTimeEnter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bFirstTimeEnter = true;` |

**源码注释:**

> 是否是第一次进入此地点

---

### 属性 `WorldPlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FName WorldPlaceID;` |

**源码注释:**

> 地点ID

---

### 属性 `Prosperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float Prosperity;` |

**源码注释:**

> 地点繁荣度

---

### 属性 `ProsperityIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float ProsperityIncrease;` |

**源码注释:**

> 每日繁荣度增长

---

### 属性 `LootRecoverCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LootRecoverCD = 0.f;` |

**源码注释:**

> 被劫掠后恢复的CD

---

### 属性 `WorldPlaceBuilds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldPlaceBuildInfo](WorldStruct__FWorldPlaceBuildInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FWorldPlaceBuildInfo> WorldPlaceBuilds;` |

**源码注释:**

> 建筑设施

---

### 属性 `TotalCanBuildNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 TotalCanBuildNum;` |

**源码注释:**

> 建筑设施总计可建造数量

---

### 属性 `BuildConsumeEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float BuildConsumeEfficiency = 1.0f;` |

**源码注释:**

> 建造建筑设施消耗比例

---

### 属性 `Coin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int Coin;` |

**源码注释:**

> 钱币

---

### 属性 `CoinIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int CoinIncrease;` |

**源码注释:**

> 钱币增长

---

### 属性 `LordAppointTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LordAppointTime;` |

**源码注释:**

> 城主就任的游戏时间点

---

### 属性 `LordGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid LordGuid;` |

**源码注释:**

> 城主的guid

---

### 属性 `WorldPlaceEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FWorldPlaceEffectInfo](WorldStruct__FWorldPlaceEffectInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,FWorldPlaceEffectInfo> WorldPlaceEffects;` |

**源码注释:**

> 城镇效果id,是否激活

---

### 属性 `OwnedSpecialEffectIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "SpecialEffect") TArray<FName> OwnedSpecialEffectIds;` |

**源码注释:**

> 地点拥有的特殊效果 ID 列表（存档）；进入地点时在 EnterWorldPlace 中重新应用并缓存到 CachedSpecialEffectValues

---

### 属性 `SpecialEffectBuffOriginGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<FName, FGuid> SpecialEffectBuffOriginGuids;` |

**源码注释:**

> 「添加阵营全局 Buff」效果施加时使用的 OriginGuid（效果ID->OriginGuid），用于移除时按来源清除；不存档

---

### 属性 `MaxStationedCharacterNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 MaxStationedCharacterNum;` |

**源码注释:**

> 最多驻扎角色数量

---

### 属性 `OutPutEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float OutPutEfficiency = 1.f;` |

**源码注释:**

> 城镇物品产出比例

---

### 属性 `PlaceOutPut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FItemSimpleData> PlaceOutPut;` |

**源码注释:**

> 城镇周期产出的物品

---

### 属性 `CurrentOutPutInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 CurrentOutPutInterval = 0;` |

**源码注释:**

> 距离下次产出物资的时间(天)

---

### 属性 `OutputResourceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPlaceOutputResourceStateType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) EPlaceOutputResourceStateType OutputResourceState;` |

**源码注释:**

> 产出物资状态

---

### 属性 `TowerMartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> TowerMartialArtsEntries;` |

**源码注释:**

> 防御塔武学词条

---

### 属性 `WorldPlaceInteractionAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWorldMapMoveType,FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EWorldMapMoveType,FGuid> WorldPlaceInteractionAction;` |

**源码注释:**

> 地点正在被交互的操作（类型，Info）

---

### 属性 `bMainConstructionBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) bool bMainConstructionBase = false;` |

**源码注释:**

> 是否是主基地 一个势力只会存在一个

---

### 属性 `WorldPlaceInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere) FWorldPlaceInfo WorldPlaceInfo;` |

**源码注释:**

> ///////////////////////save end
> 地点信息

---

### 属性 `CachedSpecialEffectValues`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWorldPlaceSpecialEffectType, float>` |
| 反射说明符 | BlueprintReadOnly, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SpecialEffect") TMap<EWorldPlaceSpecialEffectType, float> CachedSpecialEffectValues;` |

**源码注释:**

> 按效果类型汇总的当前数值（不存档，读档后由特殊效果系统重算）

---

### 属性 `bOnCurPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bOnCurPlace = false;` |

**源码注释:**

> 是否在当前的地点

---

### 属性 `CurrentTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentTemperature = 0.f;` |

**源码注释:**

> 当前的温度

---

### 属性 `CurrentLight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float CurrentLight = 0.f;` |

**源码注释:**

> //当前光照

---

### 属性 `CurLightInfluenceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurLightInfluenceID;` |

**源码注释:**

> 当前光照影响ID

---

### 属性 `bWorldPlaceInit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bWorldPlaceInit = false;` |

**源码注释:**

> 是否初始化完成

---

### 属性 `PostStationActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEasternEraPostStationActor](../PostStation/EasternEraPostStationActor__AEasternEraPostStationActor.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AEasternEraPostStationActor* PostStationActor;` |

---

### 属性 `bWidgetIsHoverd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bWidgetIsHoverd;` |

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释:**

> 按钮相关的功能

---

### 属性 `SaveWarningTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ETipsType,[FCommonTipsArr](WorldStruct__FCommonTipsArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadOnly) TMap<ETipsType,FCommonTipsArr> SaveWarningTips;` |

---

### 属性 `TreasureHouse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ABuildingActorBase * TreasureHouse;` |

---

### 属性 `TaskPlaceMainTaskGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") FGuid TaskPlaceMainTaskGuid;` |

**源码注释:**

> 任务地点主要任务GUID

---

### 属性 `bTaskPlaceStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") bool bTaskPlaceStart = false;` |

---

### 属性 `TaskPlaceTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="TaskPlace" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,Category="TaskPlace") float TaskPlaceTimeLimit = -1.f;` |

**源码注释:**

> 任务地点时间限制

---

### 属性 `OnTaskSuccessEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTaskSuccessEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTaskSuccessEnd OnTaskSuccessEnd;` |

**源码注释:**

> 副本战斗胜利

---

### 属性 `OnTaskFaileEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTaskFaileEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTaskFaileEnd OnTaskFaileEnd;` |

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 占领地点(调用前要调用占领势力能否占领AWorldForce::CheckCanOccupyPlace)

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 升级地点等级

---

### 函数 `CheckUpgradePlaceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `EUpgradeErrorType` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) EUpgradeErrorType CheckUpgradePlaceLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 获取城镇周期产出

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

---

### 函数 `GetStationedCharacterNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetStationedCharacterNumber() const{ return StationedCharacter.Num();}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CheckCanAddStationedCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanAddStationedCharacter() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 移除所有的驻守弟子

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

---

### 函数 `GetWorldPlaceCombatScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetWorldPlaceCombatScore() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

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

**源码注释:**

> 重置进入地图后存储的数据

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

---

### 函数 `GetPlayerSurvivalPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetPlayerSurvivalPoints();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

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

**源码注释:**

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
| `TestType` | `EThreatType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TestAtcion(TArray<FName> TestIDs,EThreatType TestType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

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

---

### 函数 `ExitTaskPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExitTaskPlace();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 主动退出

---
