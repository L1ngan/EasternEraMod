# `class` `AERW_PlayerPawn`

**源码头文件:** `EastRimWorld/Framework/ERW_PlayerPawn.h`

---

## 功能说明（来自头文件注释）

> PlayerPawn基类 不可在此类中存储数据

## 蓝图暴露变量

### 属性 `GWOPlayerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UGWOPlayerComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UGWOPlayerComponent> GWOPlayerComponent;` |

**说明:**

> 生成Actor系统(GWO)的玩家端组件，负责把玩家注册到GWO扇区导演以驱动世界对象生成。

---

### 属性 `PlayerPawnType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EPlayerPawnType PlayerPawnType = EPlayerPawnType::BasePawn;` |

**说明:**

> 控制的Pawn类型

---

### 属性 `CameraConfigAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UCameraConfigAsset](../Components/ERW_GameConfigComponent__UCameraConfigAsset.md) * |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) UCameraConfigAsset * CameraConfigAsset;` |

**说明:**

> 相机配置

---

### 属性 `CurWorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<class AWorldPlace> CurWorldPlace;` |

**说明:**

> 所在的地点

---

### 属性 `HitLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FVector HitLocation { FVector::ZeroVector };` |

**说明:**

> 鼠标击中的位置

---

### 属性 `CurSummon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) AEastRimWorldCharacter* CurSummon;` |

**说明:**

> 当前编辑巡逻点的机关角色

---

### 属性 `OnCameraPositionChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCameraPositionChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCameraPositionChange OnCameraPositionChange;` |

**说明:**

> 相机位置变化事件，参数为新的相机位置。

---

## 蓝图暴露函数

### 函数 `SetPawnData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPawnData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置玩家Pawn的信息

---

### 函数 `BroadcastOnCameraPositionChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewPosition` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadcastOnCameraPositionChange(const FVector& NewPosition);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播相机位置变化事件（OnCameraPositionChange），通知监听者新的相机位置。

---

### 函数 `SetMouseMode`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMouseMode` | [EMouseMode](ERW_PlayerPawn__EMouseMode.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetMouseMode(EMouseMode InMouseMode);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置鼠标操作模式（EMouseMode：普通/相机旋转/移动建筑/划区/设计农田/巡逻选点/突破选点等）。

---

### 函数 `SetPreviewFarmlandActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FarmlandActor` | [AEastRimWorldFarmlandActor](../Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPreviewFarmlandActor(AEastRimWorldFarmlandActor* FarmlandActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置当前预览中的农田Actor（设计农田时使用，蓝图实现事件）。

---

### 函数 `SetCameraPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPosition` | `FVector` |
| `InRotation` | `FRotator` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetCameraPosition(FVector InPosition,FRotator InRotation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置相机的位置

---

### 函数 `SpawnBuildingByPresetInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PresetBuilding` | const [FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md) & |
| `NewTeamID` | `const FGenericTeamId&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) ABuildingActorBase * SpawnBuildingByPresetInfo(const FPresetBuilding & PresetBuilding,const FGenericTeamId& NewTeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成建筑物在预设位置

---

### 函数 `K2_SpawnBuildingByPresetInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PresetBuilding` | const [FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md) & |
| `NewTeamID` | `const FGenericTeamId&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SpawnBuildingByPresetInfo") ABuildingActorBase * K2_SpawnBuildingByPresetInfo(const FPresetBuilding & PresetBuilding,const FGenericTeamId& NewTeamID);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 按预设建筑信息与队伍ID生成建筑（SpawnBuildingByPresetInfo的蓝图实现版本），返回生成的建筑Actor。

---

### 函数 `GetPlayerPawnCamera`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `UCameraComponent*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) UCameraComponent* GetPlayerPawnCamera();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 获取玩家Pawn当前使用的相机组件。

---

### 函数 `ClearDataBeforeSave`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void ClearDataBeforeSave();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 存档前清理数据

---

### 函数 `ResetInitPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ResetInitPosition();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 重置玩家Pawn到初始位置（蓝图实现事件）。

---

### 函数 `TrackingCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TrackingCharacter` | const [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void TrackingCharacter(const AEastRimWorldCharacter* TrackingCharacter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 开始追踪

---

### 函数 `StopTrackingCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StopTrackingCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 停止追踪

---

### 函数 `GetPawnSaveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | [FPawnSaveInfo](../WorldSystem/WorldStruct__FPawnSaveInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) FPawnSaveInfo GetPawnSaveInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获取存档信息

---

### 函数 `SetPawnSaveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PawnSaveInfo` | const [FPawnSaveInfo](../WorldSystem/WorldStruct__FPawnSaveInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetPawnSaveInfo(const FPawnSaveInfo & PawnSaveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置存档信息

---
