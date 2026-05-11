# `class` `ABuildingActorBase`

**Source header:** `EastRimWorld/Building/BuildingActorBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BuildingRunState`

| Field | Details |
|------|------|
| C++ type | `EBuildingRunState` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) EBuildingRunState BuildingRunState = EBuildingRunState::Stop;` |

**Source comments:**

> 建筑物状态

---

### Property `BuildingEnableState`

| Field | Details |
|------|------|
| C++ type | `EBuildingEnableState` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,EditAnywhere,BlueprintReadOnly) EBuildingEnableState BuildingEnableState = EBuildingEnableState::Enable;` |

**Source comments:**

> 建筑物的启用状态

---

### Property `CurDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurDurability = 0.0f;` |

**Source comments:**

> 当前耐久度

---

### Property `BuildData`

| Field | Details |
|------|------|
| C++ type | [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FBuildConfigData BuildData;` |

**Source comments:**

> 建筑物信息

---

### Property `BuildingNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 BuildingNum;` |

**Source comments:**

> 建筑的编号

---

### Property `CurTemporaryConnectionBuildings`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<AActor*> CurTemporaryConnectionBuildings;` |

**Source comments:**

> 当前临时连接的建筑物

---

### Property `ConnectBuildingActors`

| Field | Details |
|------|------|
| C++ type | TArray<[ABuildingActorBase](BuildingActorBase__ABuildingActorBase.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<ABuildingActorBase*> ConnectBuildingActors;` |

**Source comments:**

> 连接的建筑物

---

### Property `EnergyRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 EnergyRange = 1000;` |

**Source comments:**

> 连接范围

---

### Property `OnChangeEnergyGrid`

| Field | Details |
|------|------|
| C++ type | `FOnChangeEnergyGridDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangeEnergyGridDelegate OnChangeEnergyGrid;` |

**Source comments:**

> 更改能源网络

---

### Property `OnBuildDataChanged`

| Field | Details |
|------|------|
| C++ type | `FOnBuildDataChangedDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildDataChangedDelegate OnBuildDataChanged;` |

**Source comments:**

> 建筑物数据发生变化

---

### Property `OnBuildStorgeEnergyChanged`

| Field | Details |
|------|------|
| C++ type | `FOnBuildStorgeEnergyChangedDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildStorgeEnergyChangedDelegate OnBuildStorgeEnergyChanged;` |

**Source comments:**

> 储能建筑存储能量发生变化

---

### Property `OnUpdateTips`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTips` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTips OnUpdateTips;` |

**Source comments:**

> 更新建筑物提示

---

### Property `OnChangeEnable`

| Field | Details |
|------|------|
| C++ type | `FOnChangeEnable` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangeEnable OnChangeEnable;` |

**Source comments:**

> 建筑物开启或关闭状态变化

---

### Property `OnChangePipelineGroup`

| Field | Details |
|------|------|
| C++ type | `FOnChangePipelineGroup` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangePipelineGroup OnChangePipelineGroup;` |

**Source comments:**

> 当前设备管道分配发生变化

---

### Property `OnChangeWhenClosedOrOnPipelineGroup`

| Field | Details |
|------|------|
| C++ type | `FOnChangeWhenClosedOrOnPipelineGroup` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnChangeWhenClosedOrOnPipelineGroup OnChangeWhenClosedOrOnPipelineGroup;` |

**Source comments:**

> 当前控制设备关闭或关闭时控制的管道发生变化

---

### Property `OnBuildDurabilityChanged`

| Field | Details |
|------|------|
| C++ type | `FOnBuildDurabilityChangedDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildDurabilityChangedDelegate OnBuildDurabilityChanged;` |

**Source comments:**

> 耐久度变化

---

### Property `OnBuildingFuelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnBuildingFuelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildingFuelChanged OnBuildingFuelChanged;` |

---

### Property `BuildingEffectRangeComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UBoxComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UBoxComponent> BuildingEffectRangeComponent;` |

**Source comments:**

> 用于产生对角色的重叠事件

---

### Property `BuildHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float BuildHeight = 0.f;` |

**Source comments:**

> 建筑物的高度

---

### Property `SummonCharacter`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AEastRimWorldCharacter_Summons> SummonCharacter;` |

**Source comments:**

> 当建筑物为哨塔时生成的角色Actor

---

### Property `OnCeremonyStart`

| Field | Details |
|------|------|
| C++ type | `FOnCeremonyStart` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCeremonyStart OnCeremonyStart;` |

**Source comments:**

> 仪式开始事件

---

### Property `OnCeremonyEnd`

| Field | Details |
|------|------|
| C++ type | `FOnCeremonyEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCeremonyEnd OnCeremonyEnd;` |

**Source comments:**

> 仪式结束事件

---

### Property `OnPracticeOverlockingStateChange`

| Field | Details |
|------|------|
| C++ type | `FOnPracticeOverlockingStateChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPracticeOverlockingStateChange OnPracticeOverlockingStateChange;` |

**Source comments:**

> 修炼建筑超频状态改变

---

### Property `OnRefitPuppetComplete`

| Field | Details |
|------|------|
| C++ type | `FOnRefitPuppetComplete` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRefitPuppetComplete OnRefitPuppetComplete;` |

---

### Property `TransportationInfo`

| Field | Details |
|------|------|
| C++ type | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Transportation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Transportation") FTransportationInfo TransportationInfo;` |

**Source comments:**

> 交通工具信息

---

### Property `TransportationActors`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,ATransportationActor*>` |
| Reflection specifiers | BlueprintReadOnly, Category="Transportation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Transportation") TMap<int32,ATransportationActor*> TransportationActors;` |

**Source comments:**

> 交通工具显示actor

---

### Property `OnTransportationStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnTransportationStateChanged` |
| Reflection specifiers | BlueprintAssignable, Category="Transportation" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Transportation") FOnTransportationStateChanged OnTransportationStateChanged;` |

**Source comments:**

> 交通工具状态改变事件

---

### Property `BoxCollision`

| Field | Details |
|------|------|
| C++ type | `UBoxComponent*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) UBoxComponent* BoxCollision;` |

**Source comments:**

> 球形碰撞组件（不一定在构造函数创建）

---

### Property `CurBuildingScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CurBuildingScore = 0;` |

---

## Blueprint-exposed functions

### Function `CancelBuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void CancelBuild() override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetRoomName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FText GetRoomName();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCombinatioBuildName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FText GetCombinatioBuildName();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SelectStateChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Select` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SelectStateChange(bool Select);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 选中状态发生变化

---

### Function `OnBuildingBreakdown`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void OnBuildingBreakdown();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 当建筑损坏时

---

### Function `ReturnCurrentConstructResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReturnCurrentConstructResources(const TMap<FName , int32>& Resources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 返还当前建造材料

---

### Function `BindResearchEventOnLoading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void BindResearchEventOnLoading();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 读档时绑定研究相关事件

---

### Function `TryResumeAutoFabricate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void TryResumeAutoFabricate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 添加燃料后尝试恢复自动制造

---

### Function `AddFuelToBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FuelID` | `FName` |
| `FuelNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddFuelToBuilding(FName FuelID , int32 FuelNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ChangePipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewPipeline` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") void ChangePipelineGroup(int32 NewPipeline);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 变更管道

---

### Function `GetEnergyConsume`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") float GetEnergyConsume();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取能量消耗

---

### Function `GetEnergyGenerate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") float GetEnergyGenerate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取能产出

---

### Function `GetMaxEnergyStorage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") float GetMaxEnergyStorage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取最大能量储能

---

### Function `GetCurEnergyStorage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") float GetCurEnergyStorage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前能量储能

---

### Function `GetStorableValues`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") float GetStorableValues();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取可储存值

---

### Function `ChangeEnergyStorage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChangeValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") void ChangeEnergyStorage(float ChangeValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 能源储量变化

---

### Function `UpdateEnergyGridState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewEnergyGridState` | `EEnergyGridState` |
| `false` | `bool bIsBuildingRunStateChange =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") void UpdateEnergyGridState(EEnergyGridState NewEnergyGridState , bool bIsBuildingRunStateChange = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新能量网状态

---

### Function `GetConcatenateBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | TArray<[ABuildingActorBase](BuildingActorBase__ABuildingActorBase.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") TArray<ABuildingActorBase*> GetConcatenateBuildings();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取相连的建筑物

---

### Function `GetPipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") int32 GetPipelineGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取管道分组

---

### Function `GetCurEnergyGridData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | [FEnergyGridData](../ERW_ConfigTypes__FEnergyGridData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") FEnergyGridData GetCurEnergyGridData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取能量网信息

---

### Function `GetCurEnergyData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | [FEnergyData](../GOAP/GOAP_ActorBase__FEnergyData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") FEnergyData GetCurEnergyData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前能源建筑物信息

---

### Function `UpdateConstructConnection`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") void UpdateConstructConnection();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新修建中的连接状态

---

### Function `k2_TemporaryConnectionBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "TemporaryConnectionBuilding") void k2_TemporaryConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `k2_CancelTemporaryConnectionBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "CancelTemporaryConnectionBuilding") void k2_CancelTemporaryConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `k2_ConnectionBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActors` | `const TArray<AActor*> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "ConnectionBuilding") void k2_ConnectionBuilding(const TArray<AActor*> & BuildingActors);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `k2_CancelConnectionBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Building" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Building",DisplayName = "CancelConnectionBuilding") void k2_CancelConnectionBuilding(AActor* BuildingActor);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `HideConnectionLine`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HideConnectionLine();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearTemporaryConnection`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Building" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Building") void ClearTemporaryConnection();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetEnergyGridGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Building" |
| Return type | `FGuid` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="Building") FGuid GetEnergyGridGuid();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `SetEnableWhenClosedPipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewEnableWhenClosedPipelineGroup` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetEnableWhenClosedPipelineGroup(int32 NewEnableWhenClosedPipelineGroup);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置关闭状态开启的管道分组

---

### Function `SetEnableWhenOnPipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewEnableWhenOnPipelineGroup` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetEnableWhenOnPipelineGroup(int32 NewEnableWhenOnPipelineGroup);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置开启状态开启的管道分组

---

### Function `SetEnableWhenClosedOrOnPipelineGroupComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetEnableWhenClosedOrOnPipelineGroupComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置开启或关闭状态的管道完成

---

### Function `SetPipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewPipelineGroup` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetPipelineGroup(int32 NewPipelineGroup);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置管道分组

---

### Function `SetPipelineGroupComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetPipelineGroupComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置管道分组完成

---

### Function `GetEnablePipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetEnablePipelineGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取控制开启的管道线路

---

### Function `GetNotEnablePipelineGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetNotEnablePipelineGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取控制关闭的管道线路

---

### Function `CalculationTwentyFourHourEnergyGenerate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculationTwentyFourHourEnergyGenerate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算24小时能源产出

---

### Function `CalculationTwentyFourHourEnergyExpend`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculationTwentyFourHourEnergyExpend();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算24小时能源消耗

---

### Function `BuildingCanRun`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool BuildingCanRun();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 建筑是否可以正常运行（抛开能量网）

---

### Function `PracticeBuildingRandomTriggerOverclocking`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PracticeBuildingRandomTriggerOverclocking(AEastRimWorldCharacter* Agent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 修炼一次随机是否触发超频

---

### Function `CallOnBuildTipChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CallOnBuildTipChanged();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveBuildingActionByGoalID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveBuildingActionByGoalID(FName GoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据goalID移除Action

---

### Function `CreateAddFuelGOAP`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SelectableFuelTag` | `TArray<FGameplayTag>` |
| `FuelNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateAddFuelGOAP(TArray<FGameplayTag> SelectableFuelTag , int32 FuelNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建添加燃料GOAP

---

### Function `SetHeatSourceTemperature`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTemperature` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetHeatSourceTemperature(float NewTemperature);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ApplyCeremony`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuids` | `const TArray<FGuid>&` |
| `InSpectatorGuids` | `const TArray<FGuid>&` |
| `InCeremonyStartTime` | `const float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual bool ApplyCeremony(const TArray<FGuid>& InCharacterGuids,const TArray<FGuid>& InSpectatorGuids,const float& InCeremonyStartTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 申请仪式 InCharacterGuids主要仪式人 InSpectatorGuids观众

---

### Function `RegisterArrivedCeremonyMember`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual bool RegisterArrivedCeremonyMember(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 参与仪式签到

---

### Function `EndCeremony`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool IsAbort =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void EndCeremony(bool IsAbort = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 结束仪式

---

### Function `AbortCeremony`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void AbortCeremony();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 打断仪式

---

### Function `MemberCompleteCeremony`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void MemberCompleteCeremony(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 参与仪式签退

---

### Function `CreatePrisonerExecutedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreatePrisonerExecutedAction(AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建并立即执行囚犯被处决行为

---

### Function `RemovePrisonerExecutedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovePrisonerExecutedAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RegisterArrivedExecutioner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Executioner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RegisterArrivedExecutioner(AEastRimWorldCharacter* Executioner,AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 处刑人签到

---

### Function `RegisterArrivedPrisoner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RegisterArrivedPrisoner(AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 囚犯签到

---

### Function `RegisterArrivedTorturer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Torturer` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RegisterArrivedTorturer(AEastRimWorldCharacter* Torturer,AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 拷打人签到

---

### Function `CreatePrisonerTorturedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreatePrisonerTorturedAction(AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建并立即执行囚犯被拷打行为

---

### Function `RemovePrisonerTorturedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovePrisonerTorturedAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddPuppetToBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool AddPuppetToBuilding(const FName& PuppetID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 傀儡改造相关方法
> 添加傀儡到建筑物中（相同的傀儡只能添加一次）

---

### Function `RemovePuppetFromBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool RemovePuppetFromBuilding(const FName& PuppetID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 从建筑物中移除傀儡

---

### Function `HasPuppetInBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") bool HasPuppetInBuilding(const FName& PuppetID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查傀儡是否已添加到建筑物中

---

### Function `GetAllPuppetIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") TArray<FName> GetAllPuppetIDs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取建筑物中所有傀儡ID

---

### Function `GetPuppetCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") int32 GetPuppetCount() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取建筑物中傀儡数量

---

### Function `ClearAllPuppets`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void ClearAllPuppets();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清空建筑物中的所有傀儡

---

### Function `CreateRefitCarryGOAPAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void CreateRefitCarryGOAPAction(const FName& InItemID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建改装傀儡搬运GOAP

---

### Function `StartRefitPuppet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RefitItem` | [UCanUseInventoryItemInstance](../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void StartRefitPuppet(UCanUseInventoryItemInstance* RefitItem);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `EndRefitPuppet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void EndRefitPuppet();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 完成当前改装

---

### Function `StopRefitPuppetAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void StopRefitPuppetAction(const FGameplayTag& InItemTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 终止对应的改装行为

---

### Function `ClearRefitList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PuppetModification" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PuppetModification") void ClearRefitList();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清空所有待改装打断当前改装行为

---

### Function `AddResourceByItemSimpleData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="RecycledResource" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InResources` | const TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "RecycledResource") void AddResourceByItemSimpleData(const TMap<FName, FItemSimpleData>& InResources);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加资源

---

### Function `IsTransportationBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") bool IsTransportationBuilding() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否为交通工具建筑

---

### Function `GetTransportationType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | `ETransportationType` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") ETransportationType GetTransportationType() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取交通工具类型

---

### Function `IsTransportationFree`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") bool IsTransportationFree() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查交通工具是否有空余

---

### Function `GetTransportationOccupier`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | `TArray<FGuid>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") TArray<FGuid> GetTransportationOccupier() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取交通工具占有的队伍

---

### Function `OccupyTransportation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OccupierGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 OccupyTransportation(const FGuid& OccupierGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 占用交通工具

---

### Function `ReleaseTransportation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OccupierGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool ReleaseTransportation(const FGuid& OccupierGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放交通工具

---

### Function `CreateTransportationActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `ATransportationActor *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") ATransportationActor * CreateTransportationActor(int32 SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetTransportationActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `ATransportationActor *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") ATransportationActor * GetTransportationActor(int32 SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取插槽上的actor

---

### Function `RemoveTransportationActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") void RemoveTransportationActor(int32 SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除掉交通工具的显示

---

### Function `GetTransportationSpeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") float GetTransportationSpeed() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取交通工具移动速度倍数

---

### Function `InitializeTransportation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") void InitializeTransportation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化交通工具组件

---

### Function `LoadTransportation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") void LoadTransportation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载交通工具

---

### Function `SetTransportationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") void SetTransportationInfo(FName TransportationID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置交通工具信息

---

### Function `GetTransportationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Transportation" |
| Return type | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Transportation") FTransportationInfo GetTransportationInfo() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取交通工具信息

---

### Function `CheckEmptyPrisonBelong`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Prison" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="Prison") bool CheckEmptyPrisonBelong() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查空位

---

### Function `CreateImprisonBackAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Prison" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPrisoner` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Prison") void CreateImprisonBackAction(AEastRimWorldCharacter* InPrisoner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建将囚犯关押回监狱行为

---

### Function `RemoveImprisonBackAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Prison" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Prison") void RemoveImprisonBackAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除将囚犯关押回监狱行为

---

### Function `CalcBuildingScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingIndex` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcBuildingScore(const int32& BuildingIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetBuildingStaticMesh`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent, Category="Building" |
| Return type | `UStaticMesh*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Building") UStaticMesh* GetBuildingStaticMesh();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `AllSelectStorageTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AllSelectStorageTag();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 全选储存tag

---

### Function `CancelAllSelectStorageTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemClassify` | const TArray<[FItemClassify](../Struct/ItemStruct__FItemClassify.md)> |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelAllSelectStorageTag(const TArray<FItemClassify> ItemClassify);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 全取消储存tag

---
