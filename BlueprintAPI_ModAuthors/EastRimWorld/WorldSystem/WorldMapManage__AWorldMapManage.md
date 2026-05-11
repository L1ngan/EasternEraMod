# `class` `AWorldMapManage`

**源码头文件：** `EastRimWorld/WorldSystem/WorldMapManage.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `CharacterWorldMoveInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,FCharacterWorldMoveInfo> CharacterWorldMoveInfos;` |

**源码注释：**

> 角色在世界中移动的信息

---

### 属性 `CharacterWorldMoveActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,TObjectPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)>> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,TObjectPtr<AWorldMapMoveActor>> CharacterWorldMoveActors;` |

**源码注释：**

> 世界中移动对应的Actor

---

### 属性 `bOnWorldMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bOnWorldMap = false;` |

**源码注释：**

> 是否在世界地图中

---

### 属性 `MapWanderRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MapWanderRadius = 1000;` |

**源码注释：**

> 游荡的范围

---

### 属性 `FilterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UNavigationQueryFilter>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**源码注释：**

> 导航筛选

---

### 属性 `OnArrivedEndPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnArrivedEndPlace` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnArrivedEndPlace OnArrivedEndPlace;` |

---

### 属性 `WorldMapPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> WorldMapPawn;` |

---

### 属性 `OtherWorldPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> OtherWorldPawn;` |

---

## 蓝图暴露函数

### 函数 `GetWorldMapManage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldMapManage](WorldMapManage__AWorldMapManage.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static AWorldMapManage * GetWorldMapManage();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CancelWorldMove`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CancelWorldMove(const FGuid & MoveInfoGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消世界移动

---

### 函数 `ChangePlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bWorldMapPawn` | `bool` |
| `true` | `bool bCreateUI =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ChangePlayerPawn(bool bWorldMapPawn,bool bCreateUI = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换pawn

---

### 函数 `RegisterPlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlayerPawnType` | `EPlayerPawnType` |
| `PlayerPawn` | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md) * |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RegisterPlayerPawn(EPlayerPawnType PlayerPawnType,AERW_PlayerPawn * PlayerPawn);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注册玩家Pawn

---

### 函数 `UnregisterPlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlayerPawnType` | `EPlayerPawnType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterPlayerPawn(EPlayerPawnType PlayerPawnType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 反注册玩家Pawn

---

### 函数 `CharacterLeaveWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharacterLeaveWorldMap(const FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 角色离开世界地图进入地点中

---

### 函数 `CalculateWorldActorPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CalculateWorldActorPosition(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算当前的位置
> / @param CharacterWorldMoveInfo
> / @return 是否移动完成

---

### 函数 `UpdateWorldActorMoveState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeltaTime` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateWorldActorMoveState(float DeltaTime);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新世界actor的移动状态

---

### 函数 `CalculateNavigationPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CalculateNavigationPath(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算导航路径

---

### 函数 `GetNavigationalDistanceBetweenTwoPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `const FVector &` |
| `EndPosition` | `const FVector &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetNavigationalDistanceBetweenTwoPoints(const FVector & StartPosition,const FVector & EndPosition);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取两个点之间的导航距离

---

### 函数 `OpenWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OpenWorldMap();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 打开世界地图

---

### 函数 `CloseWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CloseWorldMap();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 关闭世界地图

---

### 函数 `GetRandomLocationOnTheMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OriginPosition` | `const FVector &` |
| `Radius` | `float` |
| `OutRandomLocation` | `FVector &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetRandomLocationOnTheMap(const FVector & OriginPosition,float Radius,FVector & OutRandomLocation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取地图上以坐标为中心，半径范围内的随机位置

---

### 函数 `GetWorldMapMoveActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGuid GetWorldMapMoveActor(FGuid CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过角色Guid获取对应的MoveActor的Guid

---

### 函数 `GetMoveActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldMapMoveActor* GetMoveActor(const FGuid MoveInfoGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过MoveInfoGuid获取对应的MoveActor

---

### 函数 `GetLeftMoveTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetLeftMoveTime(const FGuid MoveInfoGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询剩余移动时间（秒）

---

### 函数 `GetAvailableTransportationBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | TArray<[ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `ETransportationType TransportationType = ETransportationType::Walking` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Transportation") TArray<ABuildingActorBase*> GetAvailableTransportationBuildings(ETransportationType TransportationType = ETransportationType::Walking);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取可用的交通工具建筑

---

### 函数 `AssignTransportationToMoveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)& |
| `TransportationType` | `ETransportationType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool AssignTransportationToMoveInfo(FCharacterWorldMoveInfo& MoveInfo , ETransportationType TransportationType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 为移动信息分配交通工具

---

### 函数 `ReleaseTransportationFromMoveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool ReleaseTransportationFromMoveInfo(const FGuid& MoveInfoGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 释放交通工具

---

### 函数 `IsTransportationAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | `ETransportationType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationAvailable(ETransportationType TransportationType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查交通工具是否可用

---

### 函数 `WorldMoveCalculateDistanceAndTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FPlaceDistanceTimeAndSpeed](WorldStruct__FPlaceDistanceTimeAndSpeed.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPlaceLocation` | `const FVector &` |
| `EndPlaceLocation` | `const FVector &` |
| `TransportationType` | `ETransportationType` |
| `WorldMapMoveType` | `EWorldMapMoveType` |
| `CharacterSaveData` | const TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FPlaceDistanceTimeAndSpeed WorldMoveCalculateDistanceAndTime(const FVector & StartPlaceLocation , const FVector & EndPlaceLocation , ETransportationType TransportationType , EWorldMapMoveType WorldMapMoveType , const TArray<FCharacterSaveData> & CharacterSaveData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OpenCharacterEditorMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OpenCharacterEditorMap();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加载换装地图

---

### 函数 `CloseCharacterEditorMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CloseCharacterEditorMap();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 关闭换装地图

---
