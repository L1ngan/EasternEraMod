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

---

### 属性 `PlayerPawnType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPlayerPawnType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EPlayerPawnType PlayerPawnType = EPlayerPawnType::BasePawn;` |

**源码注释:**

> 控制的Pawn类型

---

### 属性 `CameraConfigAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UCameraConfigAsset](../Components/ERW_GameConfigComponent__UCameraConfigAsset.md) * |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) UCameraConfigAsset * CameraConfigAsset;` |

**源码注释:**

> 相机配置

---

### 属性 `CurWorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<class [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<class AWorldPlace> CurWorldPlace;` |

**源码注释:**

> 所在的地点

---

### 属性 `HitLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FVector HitLocation { FVector::ZeroVector };` |

**源码注释:**

> 鼠标击中的位置

---

### 属性 `CurSummon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) AEastRimWorldCharacter* CurSummon;` |

**源码注释:**

> 当前编辑巡逻点的机关角色

---

### 属性 `OnCameraPositionChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCameraPositionChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCameraPositionChange OnCameraPositionChange;` |

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

**源码注释:**

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

---

### 函数 `SetMouseMode`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMouseMode` | `EMouseMode` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetMouseMode(EMouseMode InMouseMode);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

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

**源码注释:**

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

**源码注释:**

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

---

### 函数 `GetPlayerPawnCamera`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `UCameraComponent*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) UCameraComponent* GetPlayerPawnCamera();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

---

### 函数 `ClearDataBeforeSave`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void ClearDataBeforeSave();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 设置存档信息

---
