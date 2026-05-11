# `class` `AWorldDirector`

**源码头文件：** `EastRimWorld/WorldSystem/WorldDirector.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `CommonTaskComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonTaskComponent](../System/Task/CommonTaskComponent__UCommonTaskComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<UCommonTaskComponent> CommonTaskComponent;` |

**源码注释：**

> 通用任务组件

---

### 属性 `GameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) float GameTime = 0.f;` |

**源码注释：**

> 游戏时长

---

### 属性 `GameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) int32 GameDay = 1;` |

**源码注释：**

> 游戏天数

---

### 属性 `GameYear`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 GameYear = 1;` |

**源码注释：**

> 游戏年份

---

### 属性 `GameMonth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 GameMonth = 1;` |

**源码注释：**

> 游戏月份

---

### 属性 `GameDate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 GameDate = 1;` |

**源码注释：**

> 日期

---

### 属性 `GameHour`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 GameHour = 0.f;` |

**源码注释：**

> 小时

---

### 属性 `AllForceFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FForceFavorabilityInfo](WorldStruct__FForceFavorabilityInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FForceFavorabilityInfo> AllForceFavorability;` |

**源码注释：**

> 所有势力的好感度

---

### 属性 `PlayerForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid PlayerForceGuid;` |

**源码注释：**

> 玩家势力Guid

---

### 属性 `bPlayerForceCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bPlayerForceCreated = false;` |

**源码注释：**

> 玩家是否创建门派

---

### 属性 `PlayerForceCreatedTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerForceCreatedTime = 0.f;` |

**源码注释：**

> 玩家创建门派的时间（创建时的游戏时长）

---

### 属性 `TeamBuffData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FApplyTeamBuffData](WorldDirector__FApplyTeamBuffData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<int32,FApplyTeamBuffData> TeamBuffData;` |

**源码注释：**

> 团队buff

---

### 属性 `WorldAgreements`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FWorldAgreement](WorldStruct__FWorldAgreement.md),bool> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FWorldAgreement,bool> WorldAgreements;` |

**源码注释：**

> 势力间签署的协议<协议数据,是否签署成功>

---

### 属性 `GameDaySeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 GameDaySeconds = 24*40;` |

**源码注释：**

> 游戏一天的秒数

---

### 属性 `WeatheringTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatheringTime = 0.f;` |

**源码注释：**

> 天气已经持续的时间

---

### 属性 `WeatherMaxTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatherMaxTime = 10.f;` |

**源码注释：**

> 天气最大时间

---

### 属性 `bIsWeatherLock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bIsWeatherLock = false;` |

**源码注释：**

> 天气锁定

---

### 属性 `PlayerWealthPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerWealthPoints = 0.f;` |

**源码注释：**

> 玩家财富点(临时缓存)

---

### 属性 `LastCalculateTime_PlayerWealthPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastCalculateTime_PlayerWealthPoints = 0.f;` |

**源码注释：**

> 最近一次计算玩家财富点数的时间

---

### 属性 `CalculateInterval_PlayerWealthPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float CalculateInterval_PlayerWealthPoints = 2.f;` |

**源码注释：**

> 玩家财富点数计算间隔

---

### 属性 `PlayerUnitsPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float PlayerUnitsPoints = 0.f;` |

**源码注释：**

> 玩家单位点数(临时缓存)

---

### 属性 `LastCalculateTime_PlayerUnitsPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastCalculateTime_PlayerUnitsPoints = 0.f;` |

**源码注释：**

> 最近一次计算玩家单位点数的时间

---

### 属性 `CalculateInterval_PlayerUnitsPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float CalculateInterval_PlayerUnitsPoints = 2.f;` |

**源码注释：**

> 玩家单位点数计算间隔

---

### 属性 `CurWorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<AWorldPlace> CurWorldPlace;` |

**源码注释：**

> 当前所在的位置

---

### 属性 `CurrentSeason`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EERWSeason` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) EERWSeason CurrentSeason = EERWSeason::Spring;` |

**源码注释：**

> 当前季节

---

### 属性 `CurrentHour`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) int CurrentHour = 0;` |

**源码注释：**

> 当前小时

---

### 属性 `CurrentWeather`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EERWWeather` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) EERWWeather CurrentWeather = EERWWeather::None;` |

**源码注释：**

> 当前天气类型

---

### 属性 `CurrentWorldPlaceWeatherInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FWorldPlaceWeatherInfo CurrentWorldPlaceWeatherInfo;` |

**源码注释：**

> 当前天气信息

---

### 属性 `CurrentActualWeatherInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FWorldPlaceWeatherInfo CurrentActualWeatherInfo;` |

**源码注释：**

> 当前实际天气变化包含过渡天气

---

### 属性 `OnUpdateWorldPlaceTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateWorldPlaceTemperature` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateWorldPlaceTemperature OnUpdateWorldPlaceTemperature;` |

**源码注释：**

> 更新当前地点的实际温度

---

### 属性 `OnUpdateTemperatureChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTemperatureChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTemperatureChange OnUpdateTemperatureChange;` |

**源码注释：**

> 更新当前气象相关的变化温度

---

### 属性 `OnUpdateTimeChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTimeChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTimeChange OnUpdateTimeChange;` |

**源码注释：**

> 更新时间广播

---

### 属性 `OnWeatherChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWeatherChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWeatherChange OnWeatherChange;` |

**源码注释：**

> 配置生成最终的天气变化

---

### 属性 `OnUDWWeatherChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUDWWeatherChange` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnUDWWeatherChange OnUDWWeatherChange;` |

**源码注释：**

> 配置生成最终的天气变化

---

### 属性 `WeatherPlantEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EERWWeather,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EERWWeather,float> WeatherPlantEfficiency;` |

**源码注释：**

> 天气对植物的影响效率

---

### 属性 `WeatherPregnantEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float WeatherPregnantEfficiency = 1.f;` |

**源码注释：**

> 天气对孕育效率的影响

---

### 属性 `WorldLightActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<TObjectPtr<[AWorldLightActor](WorldLightActor__AWorldLightActor.md)>> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<TObjectPtr<AWorldLightActor>> WorldLightActors;` |

**源码注释：**

> 世界中的光照Actor

---

### 属性 `OnGameDayChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameDayChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameDayChanged OnGameDayChanged;` |

**源码注释：**

> 游戏天数改变

---

### 属性 `OnGameSeasonChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameSeasonChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameSeasonChanged OnGameSeasonChanged;` |

**源码注释：**

> 游戏季节改变

---

### 属性 `OnGameYearChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameYearChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameYearChanged OnGameYearChanged;` |

**源码注释：**

> 游戏年份改变

---

### 属性 `OnInitCurWorldPlaced`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnInitCurWorldPlaced` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnInitCurWorldPlaced OnInitCurWorldPlaced;` |

**源码注释：**

> 初始化

---

### 属性 `OnUnlockWorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUnlockWorldPlace` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUnlockWorldPlace OnUnlockWorldPlace;` |

**源码注释：**

> 解锁新的地点

---

### 属性 `bWorldSuspend`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bWorldSuspend = false;` |

**源码注释：**

> 世界是否暂停

---

### 属性 `OnUpdateTipsDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTipsDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTipsDelegate OnUpdateTipsDelegate;` |

---

### 属性 `PlayerWorldForce`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [AWorldForce](WorldForce__AWorldForce.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<class AWorldForce> PlayerWorldForce;` |

**源码注释：**

> 玩家势力

---

### 属性 `PlayerTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGenericTeamId PlayerTeam;` |

**源码注释：**

> 玩家队id

---

### 属性 `OnCreatePopWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCreatePopWidget` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnCreatePopWidget;` |

---

### 属性 `OnFinishCreateForce`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCreatePopWidget` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnFinishCreateForce;` |

**源码注释：**

> 创建势力完成事件

---

### 属性 `OnForceMasterDeath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCreatePopWidget` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCreatePopWidget OnForceMasterDeath;` |

---

### 属性 `OnCreateWindowWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCreateWindowWidget` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCreateWindowWidget OnCreateWindowWidget;` |

---

### 属性 `OnChangeSceneWidgetVisibility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangeSceneWidgetVisibility` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangeSceneWidgetVisibility OnChangeSceneWidgetVisibility;` |

---

### 属性 `OnChangePlayerTotalReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangePlayerTotalReputation` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangePlayerTotalReputation OnChangePlayerTotalReputation;` |

**源码注释：**

> 玩家总声望值改变

---

### 属性 `bAllInitializationComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bAllInitializationComplete = false;` |

**源码注释：**

> 所有的初始化完成

---

### 属性 `OnAllInitializationCompleteDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAllInitializationCompleteDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnAllInitializationCompleteDelegate OnAllInitializationCompleteDelegate;` |

**源码注释：**

> 当前世界所有初始化完成

---

### 属性 `OnRecoverFinished`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRecoverFinished` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRecoverFinished OnRecoverFinished;` |

**源码注释：**

> WorldPlace恢复完成

---

### 属性 `bNeedSeasonChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bNeedSeasonChange = false;` |

**源码注释：**

> 是否需要切换季节函数

---

### 属性 `TotaledSeasonChangeTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float TotaledSeasonChangeTime = 5.f;` |

**源码注释：**

> 过渡总时间

---

### 属性 `SeasonChangeStartValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float SeasonChangeStartValue = 0.f;` |

**源码注释：**

> 初始值

---

### 属性 `SeasonChangeEndValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float SeasonChangeEndValue = 1.f;` |

**源码注释：**

> 结束值

---

### 属性 `SeasonParmName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName SeasonParmName = FName(TEXT("Autumn"));` |

**源码注释：**

> 参数名称

---

### 属性 `CurPlaceDynamicSkyActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TObjectPtr<AActor> CurPlaceDynamicSkyActor;` |

**源码注释：**

> 当前地点天空actor

---

### 属性 `CurPlaceDynamicWeatherActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TObjectPtr<AActor> CurPlaceDynamicWeatherActor;` |

**源码注释：**

> 当前地点天气actor

---

### 属性 `WorldForces`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,TObjectPtr<class [AWorldForce](WorldForce__AWorldForce.md)>> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldForce>> WorldForces;` |

**源码注释：**

> /世界势力 Start****************************/

---

### 属性 `WorldAreas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,TObjectPtr<class [AWorldArea](WorldArea__AWorldArea.md)>> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldArea>> WorldAreas;` |

---

### 属性 `WorldPlaces`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,TObjectPtr<class [AWorldPlace](WorldPlace__AWorldPlace.md)>> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,TObjectPtr<class AWorldPlace>> WorldPlaces;` |

---

## 蓝图暴露函数

### 函数 `GetWorldDirector`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldDirector](WorldDirector__AWorldDirector.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) static AWorldDirector * GetWorldDirector();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CreateAllWorldForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateAllWorldForce();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CreateAllWorldArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateAllWorldArea();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPlayerTeamID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetPlayerTeamID() const {return PlayerTeam;};`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取玩家队伍ID

---

### 函数 `GetAllCharacterBeInPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FCharacterSaveData> GetAllCharacterBeInPlace(const AWorldPlace * WorldPlace);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取地点内所有的角色

---

### 函数 `GetCurWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetCurWorldPlace();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前所在地点

---

### 函数 `GetWorldPlaceByLevelName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetWorldPlaceByLevelName(FName LevelName);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetWorldPlaceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldPlace * GetWorldPlaceByID(FName PlaceID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 通过ID获取世界地点

---

### 函数 `CreateWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | [AWorldArea](WorldArea__AWorldArea.md) *OuterArea |
| `WorldPlaceInfo` | const [FWorldPlaceInfo](WorldStruct__FWorldPlaceInfo.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldPlace * CreateWorldPlace(AWorldArea *OuterArea,const FWorldPlaceInfo & WorldPlaceInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建世界地点

---

### 函数 `MoveToPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool MoveToPlace(AWorldPlace * WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移动到此区域

---

### 函数 `MoveToPlaceByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void MoveToPlaceByGuid(const FGuid & PlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移动到此区域

---

### 函数 `MoveToPlaceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void MoveToPlaceByID(const FName & PlaceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移动到此区域

---

### 函数 `SpawnCurWorldPlaceCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SpawnCurWorldPlaceCharacter();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成当前地点需要生成的角色

---

### 函数 `GetCharacterInCurWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter* GetCharacterInCurWorldPlace(FGuid CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过GUID获取当前世界地点的角色

---

### 函数 `BirthToCurWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BirthToCurWorldPlace(AEastRimWorldCharacter * Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重生在当前的世界地点中

---

### 函数 `DestroyToCurWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void DestroyToCurWorldPlace(FGuid CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 销毁在当前的世界地点中

---

### 函数 `GetPlaceTemperatureInfoByTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FWorldPlaceTemperatureInfo](WorldStruct__FWorldPlaceTemperatureInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Season` | `EERWSeason` |
| `Time` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldPlaceTemperatureInfo GetPlaceTemperatureInfoByTime(EERWSeason Season,int Time);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询具体季节时间的温度变化

---

### 函数 `GetPlaceLightInfoByTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FWorldPlaceLightInfo](WorldStruct__FWorldPlaceLightInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Season` | `EERWSeason` |
| `Time` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfo GetPlaceLightInfoByTime(EERWSeason Season,int Time);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCurTimeTemperatureVariation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int GetCurTimeTemperatureVariation();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前时间的温度变化值

---

### 函数 `GetCurWeatherTemperatureVariation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutWorldPlaceWeatherInfo` | [FWorldPlaceWeatherInfo](WorldStruct__FWorldPlaceWeatherInfo.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int GetCurWeatherTemperatureVariation(FWorldPlaceWeatherInfo & OutWorldPlaceWeatherInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前的温度变化

---

### 函数 `ChangeWorldLight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bWorldMap` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ChangeWorldLight(bool bWorldMap);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换光照

---

### 函数 `SetGameDayTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SecondOfDay` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetGameDayTime(int32 SecondOfDay);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置日期为当天的时段

---

### 函数 `InitGameDayTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitGameDayTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置初始日期数据

---

### 函数 `K2_OnDayChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,meta = (DisplayName = "OnDayChange")) void K2_OnDayChange();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnDayChange」。

---

### 函数 `GetCharacterWorldMoveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid &` |
| `InTargetPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | `EWorldMapMoveType` |
| `Resource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |
| `（匿名/仅类型）` | `FVector EnterPlacePosition = FVector::ZeroVector` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterWorldMoveInfo GetCharacterWorldMoveInfo(const TArray<FGuid> & CharacterGuid,const FGuid & InStartPlaceGuid,const FGuid & InTargetPlaceGuid,EWorldMapMoveType WorldMapMoveType,const TMap<FName,FItemSimpleData>& Resource,FVector EnterPlacePosition = FVector::ZeroVector);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取移动预设信息

---

### 函数 `CharacterMoveToPlaceByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | UPARAM(ref) [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |
| `（匿名/仅类型）` | `ETransportationType TransportationType = ETransportationType::Walking` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CharacterMoveToPlaceByGuid(UPARAM(ref) FCharacterWorldMoveInfo & CharacterWorldMoveInfo , ETransportationType TransportationType = ETransportationType::Walking);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 角色移动到这个地点

---

### 函数 `CharacterWanderOnWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | `EWorldMapMoveType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharacterWanderOnWorldMap(const TArray<FGuid> & CharacterGuid,const FGuid & InStartPlaceGuid,EWorldMapMoveType WorldMapMoveType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 角色游荡于世界地图

---

### 函数 `CharacterMoveToBattlefield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const TArray<FGuid> &` |
| `InStartPlaceGuid` | `const FGuid&` |
| `StartPosition` | `const FVector &` |
| `InTargetPlaceGuid` | `const FGuid &` |
| `WorldMapMoveType` | `EWorldMapMoveType` |
| `InBattlefieldGuid` | `const FGuid &` |
| `（匿名/仅类型）` | `ETransportationType TransportationType = ETransportationType::Walking` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterWorldMoveInfo CharacterMoveToBattlefield(const TArray<FGuid> & CharacterGuid,const FGuid& InStartPlaceGuid,const FVector & StartPosition,const FGuid & InTargetPlaceGuid,EWorldMapMoveType WorldMapMoveType,const FGuid & InBattlefieldGuid,ETransportationType TransportationType = ETransportationType::Walking);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 角色移动到战场

---

### 函数 `SpawnCurWorldPlacePawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SpawnCurWorldPlacePawn();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成当前地点的Pawn

---

### 函数 `SpawnWorldMapPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SpawnWorldMapPawn();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成世界地图Pawn

---

### 函数 `BroadcastUpdateTips`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tip` | [FCommonTips](WorldStruct__FCommonTips.md) |
| `IsAddTip` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BroadcastUpdateTips(FCommonTips Tip, bool IsAddTip);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitGlobalTeamBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitGlobalTeamBuff();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化全局阵营buff

---

### 函数 `ClearGlobalTeamBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearGlobalTeamBuff();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清除全局阵营buff

---

### 函数 `BroadCastSetSceneWidgetVisibility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bVisivility` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BroadCastSetSceneWidgetVisibility(bool bVisivility);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetWorldPlaceType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `EWorldPlaceType` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) EWorldPlaceType GetWorldPlaceType();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前地点模式

---

### 函数 `GetPlayerMainConstructionBase`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldPlace * GetPlayerMainConstructionBase();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取玩家的主要建造基地

---

### 函数 `RegisterWorldLightActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldLight` | [AWorldLightActor](WorldLightActor__AWorldLightActor.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RegisterWorldLightActor(AWorldLightActor * WorldLight);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注册世界光照actor

---

### 函数 `UnregisterWorldLightActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldLight` | [AWorldLightActor](WorldLightActor__AWorldLightActor.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterWorldLightActor(AWorldLightActor * WorldLight);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注销世界光照actor

---

### 函数 `GetWorldLightActorsByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | TArray<[AWorldLightActor](WorldLightActor__AWorldLightActor.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LightType` | `EWorldLightType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AWorldLightActor*> GetWorldLightActorsByType(EWorldLightType LightType) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 根据类型获取世界灯光Actor

---

### 函数 `SetAllWorldLightsEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bEnable` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetAllWorldLightsEnabled(bool bEnable);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置所有灯光的开关状态

---

### 函数 `SetWorldLightsEnabledByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LightType` | `EWorldLightType` |
| `bEnable` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetWorldLightsEnabledByType(EWorldLightType LightType, bool bEnable);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据类型设置灯光的开关状态

---

### 函数 `GetCurWorldPlaceDynamicSkyAndWeather`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `AActor * &OutDynamicSkyActor` |
| `（匿名/仅类型）` | `AActor * &OutDynamicWeather` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void GetCurWorldPlaceDynamicSkyAndWeather(AActor * &OutDynamicSkyActor,AActor * &OutDynamicWeather);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 获取当前地点的天空组件和天气组件

---

### 函数 `K2_InitCurWorldPlaceDynamicSkyAndWeather`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,meta = (DisplayName = "InitCurWorldPlaceDynamicSkyAndWeather")) void K2_InitCurWorldPlaceDynamicSkyAndWeather();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「InitCurWorldPlaceDynamicSkyAndWeather」。

---

### 函数 `RecycledWorldResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResources` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecycledWorldResource(const TMap<FName,FItemSimpleData> & InResources);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 回收物资

---

### 函数 `FindWorldForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldForce](WorldForce__AWorldForce.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForce(const FGuid & WorldForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找对应的势力

---

### 函数 `FindWorldForceByTeamID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldForce](WorldForce__AWorldForce.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForceByTeamID(int32 TeamID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindWorldForceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldForce](WorldForce__AWorldForce.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldForce * FindWorldForceByID(FName ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetForceFavorabilityType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `EForceFavorabilityType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) EForceFavorabilityType GetForceFavorabilityType(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取两个势力的关系

---

### 函数 `GetForceFavorabilityInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FForceFavorabilityInfo](WorldStruct__FForceFavorabilityInfo.md) & |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FForceFavorabilityInfo & GetForceFavorabilityInfo(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取两个势力的关系

---

### 函数 `ForceFavorabilityChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OneWorldForceGuid` | `const FGuid &` |
| `TwoWorldForceGuid` | `const FGuid &` |
| `ChangeValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ForceFavorabilityChange(const FGuid & OneWorldForceGuid,const FGuid & TwoWorldForceGuid,float ChangeValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 改变势力之间的好感度

---

### 函数 `AttackCityFavorabilityChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `const FGuid` |
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AttackCityFavorabilityChange(const FGuid ForceGuid,const AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 攻打城市好感度变化

---

### 函数 `GetPlayerWorldForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldForce](WorldForce__AWorldForce.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) AWorldForce * GetPlayerWorldForce();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取玩家势力

---

### 函数 `RenamePlayerWorldForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewForceName` | `FText` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RenamePlayerWorldForce(FText NewForceName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 玩家势力改名

---

### 函数 `IsPlayerWorldForceCreated`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsPlayerWorldForceCreated();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查玩家势力是否创建

---

### 函数 `GetPlayerWorldForceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlayerWorldForceLevel();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取玩家势力等级

---

### 函数 `CreatePlayerWorldForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewForceName` | `FText` |
| `NewForceType` | `EForceType` |
| `Leader` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CreatePlayerWorldForce(FText NewForceName, EForceType NewForceType, FGuid Leader);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建玩家势力(势力已经在地图上了，只是没有激活)

---

### 函数 `FindCharacterSaveDatas`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuids` | `const TArray<FGuid>&` |
| `OutCharacterDatas` | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FindCharacterSaveDatas(const TArray<FGuid>& CharacterGuids,TArray<FCharacterSaveData>& OutCharacterDatas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SortCharacterSaveDatasByCombatScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterDatas` | UPARAM(ref) TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SortCharacterSaveDatasByCombatScore(UPARAM(ref) TArray<FCharacterSaveData>& InCharacterDatas);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCharacterEquipmentsBySaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |
| `OutEquipments` | TArray<[FCharacterApparel](../Struct/ItemStruct__FCharacterApparel.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetCharacterEquipmentsBySaveData(const FCharacterSaveData& InCharacterData,TArray<FCharacterApparel>& OutEquipments);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从CharacterSaveData中获取角色穿戴的外观装备

---

### 函数 `AddTeamBuffByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |
| `BuffID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddTeamBuffByID(int32 TeamId,FName BuffID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetTeamBuffInfoByTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetTeamBuffInfoByTeamId(int32 TeamId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过teamId查询团队buff信息

---

### 函数 `GetPlayerTeamBuffInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetPlayerTeamBuffInfo();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取玩家势力的buff信息

---

### 函数 `AddTeamBuffByInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |
| `BuffInfo` | const [FCommonBuff](../Struct/CommonStruct__FCommonBuff.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddTeamBuffByInfo(int32 TeamId,const FCommonBuff & BuffInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveTeamBuffByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |
| `BuffGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveTeamBuffByGuid(int32 TeamId,const FGuid & BuffGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveTeamBuffByOriginGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |
| `OriginGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveTeamBuffByOriginGuid(int32 TeamId,const FGuid & OriginGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckCanSignWorldAgreement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckCanSignWorldAgreement(const FWorldAgreement& WorldAgreement);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查能否签署传入的协议

---

### 函数 `ForceSignWorldAgreement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |
| `IsSuccess` | `const bool&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ForceSignWorldAgreement(const FWorldAgreement& WorldAgreement,const bool& IsSuccess);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 势力签署协议

---

### 函数 `GetWorldForceName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FText GetWorldForceName(int32 TeamId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取势力名字

---

### 函数 `FindWorldArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldArea](WorldArea__AWorldArea.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldAreaGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldArea * FindWorldArea(const FGuid & WorldAreaGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找对应的区域

---

### 函数 `FindWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldPlace * FindWorldPlace(const FGuid & WorldPlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找对应的地点

---

### 函数 `FindWorldPlaceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPlaceID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldPlace* FindWorldPlaceByID(const FName& InPlaceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindWorldPlaceByIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPlaceIDs` | `const TArray<FName>&` |
| `OutPlaces` | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FindWorldPlaceByIDs(const TArray<FName>& InPlaceIDs,TArray<AWorldPlace*>& OutPlaces);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID数组查找地点

---

### 函数 `OnHourChangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Hour` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnHourChangeEvent(int Hour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnSeasonChangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SeasonId` | `EERWSeason` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnSeasonChangeEvent(EERWSeason SeasonId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnSeasonChangeParm`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SeasonId` | `FName` |
| `SeasonChangeValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void OnSeasonChangeParm(FName SeasonId,float SeasonChangeValue);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 季节切换过渡参数设置

---

### 函数 `OnWeatherChangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeatherId` | `EERWWeather` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnWeatherChangeEvent(EERWWeather WeatherId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 天气切换（不包括过渡天气状态，相同天气不会触发）

---

### 函数 `OnAllWeatherChangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeatherId` | `EERWWeather` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnAllWeatherChangeEvent(EERWWeather WeatherId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 天气切换(包含过渡天气)

---

### 函数 `SetGameTimeToUDS`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GTime` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void SetGameTimeToUDS(float GTime);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> C++设置游戏时间来设置UDS的时间

---

### 函数 `SetGameWeatherToUDW`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeatherId` | `EERWWeather` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void SetGameWeatherToUDW(EERWWeather WeatherId);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> C++设置游戏天气来设置UDW的天气

---

### 函数 `TriggerTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGuid TriggerTaskByID(const FName TaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> /任务 Start****************************/

---

### 函数 `TriggerTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGuid TriggerTask(const FCommonTaskInfo& TaskInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `TriggerTaskByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGuid TriggerTaskByInstance(const FCommonTaskInstance& TaskInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CompleteTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CompleteTaskByID(const FName TaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGoapActionBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FBuildPersonConfigData](../ERW_ConfigTypes__FBuildPersonConfigData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoalID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FBuildPersonConfigData> GetGoapActionBuildings(FName InGoalID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询GoapAction对应的建筑物数组

---

### 函数 `CheckBuildGoap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildId` | `FName` |
| `GoalID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckBuildGoap(FName BuildId, FName GoalID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查建筑类型是否有对应的GOAP功能

---

### 函数 `CheckNeedBedForPlayer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckNeedBedForPlayer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否需要床位

---

### 函数 `CheckCharacterNeedCloth`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckCharacterNeedCloth();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查玩家是否缺少衣服

---

### 函数 `ChangeWeatherById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeatherId` | `FName` |
| `（匿名/仅类型）` | `float TransitionTime = 5.f` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ChangeWeatherById(FName WeatherId,float TransitionTime = 5.f);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID改变天气

---

### 函数 `ChangeRandomWeather`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ChangeRandomWeather();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 随机改变天气

---

### 函数 `BindOrUnbindCameraMoveEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsBind` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BindOrUnbindCameraMoveEvent(bool bIsBind);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckAllBuildNeedMaterial`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckAllBuildNeedMaterial();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查所有在建建筑是否有足够的材料

---

### 函数 `CheckHaveResearchBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckHaveResearchBuilding() ;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否有建设完成的研究建筑物

---

### 函数 `CheckHaveBuildingByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildType` | `EBuildingType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckHaveBuildingByType(EBuildingType BuildType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否有传入类型建筑物

---

### 函数 `CalcuCharacterFightingScoreByData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `InCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static float CalcuCharacterFightingScoreByData(AERW_GameModeBase* InGameMode,const FCharacterSaveData& InCharacterData);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 计算角色战力

---

### 函数 `CalcuCharacterFightingScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `InCharacter` | const class [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static float CalcuCharacterFightingScore(AERW_GameModeBase* InGameMode,const class AEastRimWorldCharacter* InCharacter);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetFocreJobName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `JobType` | `const EForceJobType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FText GetFocreJobName(const EForceJobType JobType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取职位名称

---

### 函数 `SortByDiscipleNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByDiscipleNum(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按弟子数量排序

---

### 函数 `SortByPower`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByPower(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按战力排序

---

### 函数 `SortByFavorability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByFavorability(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按好感度排序

---

### 函数 `SortByWorldplaceType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldPlace](WorldPlace__AWorldPlace.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldPlace*> SortByWorldplaceType(const TArray<AWorldPlace*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按worldplacetype度排序

---

### 函数 `SortByReputation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByReputation(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按势力声望度排序

---

### 函数 `SortByForcePower`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByForcePower(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按势力战力排序

---

### 函数 `SortByPlaceNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByPlaceNum(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按领地数量排序

---

### 函数 `SortByForceDiziNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceArray` | const TArray<[AWorldForce](WorldForce__AWorldForce.md)*> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> SortByForceDiziNum(const TArray<AWorldForce*> & WorldPlaceArray , bool bIsAsc);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 按势力弟子数量排序

---

### 函数 `AddItemToPostStation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItems` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddItemToPostStation(const TMap<FName,FItemSimpleData>& InItems);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加物品到驿站物品存放区

---

### 函数 `AddItemInstanceToPostStation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddItemInstanceToPostStation(UInventoryItemInstance * InventoryItemInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加物品到驿站物品存放区

---

### 函数 `GetEnemyForces`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AWorldForce](WorldForce__AWorldForce.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MainWorldForceGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AWorldForce*> GetEnemyForces(const FGuid& MainWorldForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取敌对势力

---

### 函数 `GetOtherForcesMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<[AWorldForce](WorldForce__AWorldForce.md)*,float> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MainWorldForceGuid` | `const FGuid&` |
| `true` | `bool HeightToLow =` |
| `（匿名/仅类型）` | `int32 TopNum = -1` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<AWorldForce*,float> GetOtherForcesMap(const FGuid& MainWorldForceGuid,bool HeightToLow = true,int32 TopNum = -1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 插槽敌对势力和好感度

---

### 函数 `GetPlayerWealthPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetPlayerWealthPoints();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算玩家的财富点数

---

### 函数 `GetPlayerUnitsPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetPlayerUnitsPoints();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取玩家单位点数

---
