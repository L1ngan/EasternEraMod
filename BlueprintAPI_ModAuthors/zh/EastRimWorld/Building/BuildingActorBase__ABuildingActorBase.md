# `class` `ABuildingActorBase`

**源码头文件:** `EastRimWorld/Building/BuildingActorBase.h`

---

## 功能说明（来自头文件注释）

> 建筑Actor基类：继承AGOAP_ActorBase，涵盖建造/耐久/能源网络/管道/仪式/傀儡改造/交通工具/监狱/交易区等建筑功能。

## 蓝图暴露变量

### 属性 `BuildingRunState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBuildingRunState](../ERW_Enumerations__EBuildingRunState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) EBuildingRunState BuildingRunState = EBuildingRunState::Stop;` |

**说明:**

> 建筑物状态

---

### 属性 `BuildingEnableState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBuildingEnableState](../ERW_Enumerations__EBuildingEnableState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,EditAnywhere,BlueprintReadOnly) EBuildingEnableState BuildingEnableState = EBuildingEnableState::Enable;` |

**说明:**

> 建筑物的启用状态

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurDurability = 0.0f;` |

**说明:**

> 当前耐久度

---

### 属性 `BuildData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FBuildConfigData BuildData;` |

**说明:**

> 建筑物信息

---

### 属性 `BuildingNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 BuildingNum;` |

**说明:**

> 建筑的编号

---

### 属性 `CurTemporaryConnectionBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<AActor*> CurTemporaryConnectionBuildings;` |

**说明:**

> 当前临时连接的建筑物

---

### 属性 `ConnectBuildingActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ABuildingActorBase](BuildingActorBase__ABuildingActorBase.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<ABuildingActorBase*> ConnectBuildingActors;` |

**说明:**

> 连接的建筑物

---

### 属性 `EnergyRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 EnergyRange = 1000;` |

**说明:**

> 连接范围

---

### 属性 `OnChangeEnergyGrid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangeEnergyGridDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangeEnergyGridDelegate OnChangeEnergyGrid;` |

**说明:**

> 更改能源网络

---

### 属性 `OnBuildDataChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildDataChangedDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildDataChangedDelegate OnBuildDataChanged;` |

**说明:**

> 建筑物数据发生变化

---

### 属性 `OnBuildStorgeEnergyChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildStorgeEnergyChangedDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildStorgeEnergyChangedDelegate OnBuildStorgeEnergyChanged;` |

**说明:**

> 储能建筑存储能量发生变化

---

### 属性 `OnUpdateTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTips` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTips OnUpdateTips;` |

**说明:**

> 更新建筑物提示

---

### 属性 `OnChangeEnable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangeEnable` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangeEnable OnChangeEnable;` |

**说明:**

> 建筑物开启或关闭状态变化

---

### 属性 `OnChangePipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangePipelineGroup` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangePipelineGroup OnChangePipelineGroup;` |

**说明:**

> 当前设备管道分配发生变化

---

### 属性 `OnChangeWhenClosedOrOnPipelineGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnChangeWhenClosedOrOnPipelineGroup` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnChangeWhenClosedOrOnPipelineGroup OnChangeWhenClosedOrOnPipelineGroup;` |

**说明:**

> 当前控制设备关闭或关闭时控制的管道发生变化

---

### 属性 `OnBuildDurabilityChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildDurabilityChangedDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildDurabilityChangedDelegate OnBuildDurabilityChanged;` |

**说明:**

> 耐久度变化

---

### 属性 `OnBuildingFuelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildingFuelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildingFuelChanged OnBuildingFuelChanged;` |

**说明:**

> 建筑燃料变化事件，参数为当前燃料量。

---

### 属性 `FromBuildingGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FGuid FromBuildingGuid;` |

**说明:**

> 移动建筑源建筑的Guid

---

### 属性 `BuildingEffectRangeComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UBoxComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UBoxComponent> BuildingEffectRangeComponent;` |

**说明:**

> 用于产生对角色的重叠事件

---

### 属性 `BuildHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float BuildHeight = 0.f;` |

**说明:**

> 建筑物的高度

---

### 属性 `SummonCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AEastRimWorldCharacter_Summons> SummonCharacter;` |

**说明:**

> 当建筑物为哨塔时生成的角色Actor

---

### 属性 `OnCeremonyStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCeremonyStart` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCeremonyStart OnCeremonyStart;` |

**说明:**

> 仪式开始事件

---

### 属性 `OnCeremonyEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCeremonyEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCeremonyEnd OnCeremonyEnd;` |

**说明:**

> 仪式结束事件

---

### 属性 `OnPracticeOverlockingStateChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPracticeOverlockingStateChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPracticeOverlockingStateChange OnPracticeOverlockingStateChange;` |

**说明:**

> 修炼建筑超频状态改变

---

### 属性 `OnRefitPuppetComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRefitPuppetComplete` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRefitPuppetComplete OnRefitPuppetComplete;` |

**说明:**

> 傀儡改装完成事件。

---

### 属性 `TransportationInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| 反射说明符 | BlueprintReadOnly, Category="Transportation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Transportation") FTransportationInfo TransportationInfo;` |

**说明:**

> 交通工具信息

---

### 属性 `TransportationActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,ATransportationActor*>` |
| 反射说明符 | BlueprintReadOnly, Category="Transportation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Transportation") TMap<int32,ATransportationActor*> TransportationActors;` |

**说明:**

> 交通工具显示actor

---

### 属性 `OnTransportationStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTransportationStateChanged` |
| 反射说明符 | BlueprintAssignable, Category="Transportation" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Transportation") FOnTransportationStateChanged OnTransportationStateChanged;` |

**说明:**

> 交通工具状态改变事件

---

### 属性 `BoxCollision`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UBoxComponent*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) UBoxComponent* BoxCollision;` |

**说明:**

> 球形碰撞组件（不一定在构造函数创建）

---

### 属性 `CurBuildingScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CurBuildingScore = 0;` |

**说明:**

> 当前建筑评分（随存档保存）。

---

### 属性 `BuildingWidgetBar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<UWidgetComponent> BuildingWidgetBar;` |

**说明:**

> 建筑UI控件条组件（WidgetComponent），用于显示建筑相关的界面。

---

## 蓝图暴露函数

### 函数 `CancelBuild`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void CancelBuild() override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消当前建筑的建造。

---

### 函数 `GetRoomName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FText GetRoomName();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取建筑所在房间的名称。

---

### 函数 `GetCombinatioBuildName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FText GetCombinatioBuildName();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取建筑所属组合建筑的名称。

---

### 函数 `SelectStateChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Select` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SelectStateChange(bool Select);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 选中状态发生变化

---

### 函数 `OnBuildingBreakdown`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void OnBuildingBreakdown();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 当建筑损坏时

---

### 函数 `GetBuildResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ExtraResourceRate` | `float` |
| `Resources` | `TMap<FName , int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetBuildResources(float ExtraResourceRate , TMap<FName , int32>& Resources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获得建造资源

---

### 函数 `Rebuilt`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void Rebuilt(const FName& NewID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 重建建筑

---

### 函数 `TransBuildingAbortUsers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void TransBuildingAbortUsers();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 移动建筑打断建筑的用户

---

### 函数 `OnTransBuildingFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnTransBuildingFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 移动建筑完成

---

### 函数 `UpdateConfigData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildConfigData` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateConfigData(const FBuildConfigData& BuildConfigData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新配置相关数据

---

### 函数 `OnRebuildComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildConfigData` | const [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void OnRebuildComplete(const FBuildConfigData& BuildConfigData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 重建完成

---

### 函数 `RefreshBuildingUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RefreshBuildingUI();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 刷新建筑UI显示

---

### 函数 `ReturnCurrentConstructResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReturnCurrentConstructResources(const TMap<FName , int32>& Resources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返还当前建造材料

---

### 函数 `BindResearchEventOnLoading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void BindResearchEventOnLoading();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 读档时绑定研究相关事件

---

### 函数 `TryResumeAutoFabricate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void TryResumeAutoFabricate();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 添加燃料后尝试恢复自动制造

---

### 函数 `AddFuelToBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FuelID` | `FName` |
| `FuelNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddFuelToBuilding(FName FuelID , int32 FuelNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 向建筑添加指定ID与数量的燃料。

---

### 函数 `ChangePipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewPipeline` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") void ChangePipelineGroup(int32 NewPipeline);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 变更管道

---

### 函数 `GetEnergyConsume`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") float GetEnergyConsume();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取能量消耗

---

### 函数 `GetEnergyGenerate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") float GetEnergyGenerate();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取能产出

---

### 函数 `GetMaxEnergyStorage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") float GetMaxEnergyStorage();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取最大能量储能

---

### 函数 `GetCurEnergyStorage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") float GetCurEnergyStorage();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前能量储能

---

### 函数 `GetStorableValues`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") float GetStorableValues();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取可储存值

---

### 函数 `ChangeEnergyStorage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChangeValue` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") void ChangeEnergyStorage(float ChangeValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 能源储量变化

---

### 函数 `UpdateEnergyGridState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewEnergyGridState` | [EEnergyGridState](../ERW_Enumerations__EEnergyGridState.md) |
| `false` | `bool bIsBuildingRunStateChange =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") void UpdateEnergyGridState(EEnergyGridState NewEnergyGridState , bool bIsBuildingRunStateChange = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新能量网状态

---

### 函数 `GetConcatenateBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | TArray<[ABuildingActorBase](BuildingActorBase__ABuildingActorBase.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") TArray<ABuildingActorBase*> GetConcatenateBuildings();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取相连的建筑物

---

### 函数 `GetPipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") int32 GetPipelineGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取管道分组

---

### 函数 `GetCurEnergyGridData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | [FEnergyGridData](../ERW_ConfigTypes__FEnergyGridData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") FEnergyGridData GetCurEnergyGridData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取能量网信息

---

### 函数 `GetCurEnergyData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | [FEnergyData](../GOAP/GOAP_ActorBase__FEnergyData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") FEnergyData GetCurEnergyData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前能源建筑物信息

---

### 函数 `UpdateConstructConnection`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") void UpdateConstructConnection();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新修建中的连接状态

---

### 函数 `k2_TemporaryConnectionBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "TemporaryConnectionBuilding") void k2_TemporaryConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 临时连接建筑物时的蓝图实现事件（DisplayName: TemporaryConnectionBuilding）。

---

### 函数 `k2_CancelTemporaryConnectionBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "CancelTemporaryConnectionBuilding") void k2_CancelTemporaryConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 取消临时连接建筑物时的蓝图实现事件（DisplayName: CancelTemporaryConnectionBuilding）。

---

### 函数 `k2_ConnectionBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "ConnectionBuilding") void k2_ConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 连接建筑物时的蓝图实现事件（DisplayName: ConnectionBuilding）。

---

### 函数 `k2_CancelConnectionBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Building" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "CancelConnectionBuilding") void k2_CancelConnectionBuilding(AActor* BuildingActor);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 取消与指定建筑连接时的蓝图实现事件（DisplayName: CancelConnectionBuilding）。

---

### 函数 `HideConnectionLine`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HideConnectionLine();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 隐藏建筑之间的连接线。

---

### 函数 `ReconnectAfterTransfer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ToBuilding` | [ABuildingActorBase](BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReconnectAfterTransfer(ABuildingActorBase* ToBuilding);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移动建筑后重新连接

---

### 函数 `ClearTemporaryConnection`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Building" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Building") void ClearTemporaryConnection();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清除该建筑当前的全部临时连接。

---

### 函数 `GetEnergyGridGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Building" |
| 返回类型 | `FGuid` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="Building") FGuid GetEnergyGridGuid();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取建筑所属能源网的Guid。

---

### 函数 `SetEnableWhenClosedPipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewEnableWhenClosedPipelineGroup` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetEnableWhenClosedPipelineGroup(int32 NewEnableWhenClosedPipelineGroup);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置关闭状态开启的管道分组

---

### 函数 `SetEnableWhenOnPipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewEnableWhenOnPipelineGroup` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetEnableWhenOnPipelineGroup(int32 NewEnableWhenOnPipelineGroup);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置开启状态开启的管道分组

---

### 函数 `SetEnableWhenClosedOrOnPipelineGroupComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetEnableWhenClosedOrOnPipelineGroupComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置开启或关闭状态的管道完成

---

### 函数 `SetPipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewPipelineGroup` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetPipelineGroup(int32 NewPipelineGroup);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置管道分组

---

### 函数 `SetPipelineGroupComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetPipelineGroupComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置管道分组完成

---

### 函数 `GetEnablePipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetEnablePipelineGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取控制开启的管道线路

---

### 函数 `GetNotEnablePipelineGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetNotEnablePipelineGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取控制关闭的管道线路

---

### 函数 `CalculationTwentyFourHourEnergyGenerate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalculationTwentyFourHourEnergyGenerate();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算24小时能源产出

---

### 函数 `CalculationTwentyFourHourEnergyExpend`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalculationTwentyFourHourEnergyExpend();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算24小时能源消耗

---

### 函数 `BuildingCanRun`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool BuildingCanRun();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 建筑是否可以正常运行（抛开能量网）

---

### 函数 `PracticeBuildingRandomTriggerOverclocking`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PracticeBuildingRandomTriggerOverclocking(AEastRimWorldCharacter* Agent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 修炼一次随机是否触发超频

---

### 函数 `CallOnBuildTipChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CallOnBuildTipChanged();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 触发建筑提示变化的更新广播。

---

### 函数 `RemoveBuildingActionByGoalID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveBuildingActionByGoalID(FName GoalID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据goalID移除Action

---

### 函数 `CreateAddFuelGOAP`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SelectableFuelTag` | `TArray<FGameplayTag>` |
| `FuelNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateAddFuelGOAP(TArray<FGameplayTag> SelectableFuelTag , int32 FuelNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建添加燃料GOAP

---

### 函数 `SetHeatSourceTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTemperature` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetHeatSourceTemperature(float NewTemperature);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置热源建筑的温度。

---

### 函数 `ApplyCeremony`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuids` | `const TArray<FGuid>&` |
| `InSpectatorGuids` | `const TArray<FGuid>&` |
| `InCeremonyStartTime` | `const float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual bool ApplyCeremony(const TArray<FGuid>& InCharacterGuids,const TArray<FGuid>& InSpectatorGuids,const float& InCeremonyStartTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 申请仪式 InCharacterGuids主要仪式人 InSpectatorGuids观众

---

### 函数 `RegisterArrivedCeremonyMember`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual bool RegisterArrivedCeremonyMember(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 参与仪式签到

---

### 函数 `EndCeremony`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool IsAbort =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void EndCeremony(bool IsAbort = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束仪式

---

### 函数 `AbortCeremony`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void AbortCeremony();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 打断仪式

---

### 函数 `MemberCompleteCeremony`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void MemberCompleteCeremony(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 参与仪式签退

---

### 函数 `CreatePrisonerExecutedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreatePrisonerExecutedAction(AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建并立即执行囚犯被处决行为

---

### 函数 `RemovePrisonerExecutedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemovePrisonerExecutedAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除囚犯被处决的行为（GOAP Action）。

---

### 函数 `RegisterArrivedExecutioner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Executioner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RegisterArrivedExecutioner(AEastRimWorldCharacter* Executioner,AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 处刑人签到

---

### 函数 `RegisterArrivedPrisoner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RegisterArrivedPrisoner(AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 囚犯签到

---

### 函数 `RegisterArrivedTorturer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Torturer` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RegisterArrivedTorturer(AEastRimWorldCharacter* Torturer,AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 拷打人签到

---

### 函数 `CreatePrisonerTorturedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreatePrisonerTorturedAction(AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建并立即执行囚犯被拷打行为

---

### 函数 `RemovePrisonerTorturedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemovePrisonerTorturedAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除囚犯被拷打的行为（GOAP Action）。

---

### 函数 `AddPuppetToBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool AddPuppetToBuilding(const FName& PuppetID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 傀儡改造相关方法
> 添加傀儡到建筑物中（相同的傀儡只能添加一次）

---

### 函数 `RemovePuppetFromBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool RemovePuppetFromBuilding(const FName& PuppetID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从建筑物中移除傀儡

---

### 函数 `HasPuppetInBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool HasPuppetInBuilding(const FName& PuppetID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查傀儡是否已添加到建筑物中

---

### 函数 `GetAllPuppetIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") TArray<FName> GetAllPuppetIDs() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取建筑物中所有傀儡ID

---

### 函数 `GetPuppetCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") int32 GetPuppetCount() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取建筑物中傀儡数量

---

### 函数 `ClearAllPuppets`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void ClearAllPuppets();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清空建筑物中的所有傀儡

---

### 函数 `CreateRefitCarryGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void CreateRefitCarryGOAPAction(const FName& InItemID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建改装傀儡搬运GOAP

---

### 函数 `StartRefitPuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RefitItem` | [UCanUseInventoryItemInstance](../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void StartRefitPuppet(UCanUseInventoryItemInstance* RefitItem);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始使用指定物品实例进行傀儡改装。

---

### 函数 `EndRefitPuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void EndRefitPuppet();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 完成当前改装

---

### 函数 `StopRefitPuppetAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemTag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void StopRefitPuppetAction(const FGameplayTag& InItemTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 终止对应的改装行为

---

### 函数 `ClearRefitList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PuppetModification" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void ClearRefitList();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清空所有待改装打断当前改装行为

---

### 函数 `AddResourceByItemSimpleData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="RecycledResource" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResources` | const TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "RecycledResource") void AddResourceByItemSimpleData(const TMap<FName, FItemSimpleData>& InResources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加资源

---

### 函数 `IsTransportationBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") bool IsTransportationBuilding() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查是否为交通工具建筑

---

### 函数 `GetTransportationType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") ETransportationType GetTransportationType() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取交通工具类型

---

### 函数 `IsTransportationFree`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") bool IsTransportationFree() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查交通工具是否有空余

---

### 函数 `GetTransportationOccupier`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") TArray<FGuid> GetTransportationOccupier() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取交通工具占有的队伍

---

### 函数 `OccupyTransportation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OccupierGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 OccupyTransportation(const FGuid& OccupierGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 占用交通工具

---

### 函数 `ReleaseTransportation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OccupierGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool ReleaseTransportation(const FGuid& OccupierGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放交通工具

---

### 函数 `CreateTransportationActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `ATransportationActor *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") ATransportationActor * CreateTransportationActor(int32 SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 在指定插槽创建交通工具显示Actor并返回。

---

### 函数 `GetTransportationActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `ATransportationActor *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") ATransportationActor * GetTransportationActor(int32 SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取插槽上的actor

---

### 函数 `RemoveTransportationActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") void RemoveTransportationActor(int32 SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除掉交通工具的显示

---

### 函数 `GetTransportationSpeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") float GetTransportationSpeed() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取交通工具移动速度倍数

---

### 函数 `InitializeTransportation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") void InitializeTransportation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化交通工具组件

---

### 函数 `LoadTransportation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") void LoadTransportation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载交通工具

---

### 函数 `SetTransportationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") void SetTransportationInfo(FName TransportationID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置交通工具信息

---

### 函数 `GetTransportationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Transportation" |
| 返回类型 | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") FTransportationInfo GetTransportationInfo() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取交通工具信息

---

### 函数 `CheckEmptyPrisonBelong`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Prison" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="Prison") bool CheckEmptyPrisonBelong() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查空位

---

### 函数 `CreateImprisonBackAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Prison" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category="Prison") void CreateImprisonBackAction(AEastRimWorldCharacter* InPrisoner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建将囚犯关押回监狱行为

---

### 函数 `RemoveImprisonBackAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Prison" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category="Prison") void RemoveImprisonBackAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除将囚犯关押回监狱行为

---

### 函数 `CalcBuildingScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingIndex` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcBuildingScore(const int32& BuildingIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据建筑索引计算建筑评分并更新CurBuildingScore。

---

### 函数 `GetBuildingStaticMesh`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent, Category="Building" |
| 返回类型 | `UStaticMesh*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Building") UStaticMesh* GetBuildingStaticMesh();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获取建筑的静态网格体（蓝图实现事件）。

---

### 函数 `AllSelectStorageTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AllSelectStorageTag();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 全选储存tag

---

### 函数 `CancelAllSelectStorageTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemClassify` | const TArray<[FItemClassify](../Struct/ItemStruct__FItemClassify.md)> |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelAllSelectStorageTag(const TArray<FItemClassify> ItemClassify);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 全取消储存tag

---

### 函数 `InitBuildingWidgetBar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void InitBuildingWidgetBar();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 初始化建筑UI控件条（蓝图实现事件）。

---

### 函数 `GetAreaName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) FText GetAreaName();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取建筑所在区域的名称。

---
