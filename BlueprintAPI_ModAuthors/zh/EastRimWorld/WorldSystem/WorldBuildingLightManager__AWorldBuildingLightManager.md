# `class` `AWorldBuildingLightManager`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBuildingLightManager.h`

---

## 功能说明（来自头文件注释）

> 建筑夜景灯光管理：黑夜时在摄像机一定范围内，用池化灯光组件（最多 20 个）显示已注册建筑的灯具配置。
> 灯光组件挂在本 Actor 上，不使用时隐藏。

## 蓝图暴露变量

### 属性 `CameraActivateRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "100.0")) float CameraActivateRadius = 8000.f;` |

**说明:**

> 相对玩家 Pawn 位置启用灯光候选的最大距离（由 GameInstance 的半径设置项驱动）

---

### 属性 `PawnLocationChangeTolerance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0.0")) float PawnLocationChangeTolerance = 10.f;` |

**说明:**

> 与上次记录的 Pawn 位置距离小于等于此值（UU）则视为未移动，跳过本帧灯光更新

---

### 属性 `MaxPooledLights`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight") int32 MaxPooledLights = 20;` |

**说明:**

> 同时「正在使用」的灯光数量上限（新建时仅与此比较；空闲池数量不参与；由 GameInstance 的数量设置项驱动）

---

### 属性 `UpdateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0.1")) float UpdateInterval = 0.5f;` |

**说明:**

> 开启更新后，按「未受时间膨胀影响」的秒数计时的刷新间隔

---

### 属性 `BuildingLightMaterialCustomDataIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0")) int32 BuildingLightMaterialCustomDataIndex = 3;` |

**说明:**

> 传给 UERW_HISMManager::SetBuildISMMaterialParameters 的 CustomData

---

### 属性 `SceneRoot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="World|BuildingLight" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "World|BuildingLight") TObjectPtr<USceneComponent> SceneRoot;` |

**说明:**

> Scene Root 字段。

---

## 蓝图暴露函数

### 函数 `GetWorldBuildingLightManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="World|BuildingLight" |
| 返回类型 | [AWorldBuildingLightManager](WorldBuildingLightManager__AWorldBuildingLightManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "World|BuildingLight") static AWorldBuildingLightManager* GetWorldBuildingLightManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get World Building Light Manager。

---

### 函数 `Get`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | [AWorldBuildingLightManager](WorldBuildingLightManager__AWorldBuildingLightManager.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight", meta = (WorldContext = "WorldContextObject")) static AWorldBuildingLightManager* Get(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Instance 或 UWorldManagerSystem 弱引用（需已通过 FindOrCreateWorldManageActors 生成）

---

### 函数 `RegisterBuildingWithLights`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void RegisterBuildingWithLights(ABuildingActorBase* BuildingActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注册灯具建筑：需 BuildData.BuildingType == Light，灯具数据使用 BuildData.LightParams

---

### 函数 `UnregisterBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void UnregisterBuilding(ABuildingActorBase* BuildingActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Unregister Building 操作。

---

### 函数 `NotifyBuildingRuntimeStateChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void NotifyBuildingRuntimeStateChanged(ABuildingActorBase* BuildingActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 建筑运行/启用状态等变化后调用：强制重算灯光与粒子（需 Normal 且 Enable 才可开灯/开粒子）

---

### 函数 `StartBuildingLightUpdates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void StartBuildingLightUpdates();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启定时更新（按 UpdateInterval）并绑定世界时间变化；需主动调用后才会刷新灯光

---

### 函数 `StopBuildingLightUpdates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void StopBuildingLightUpdates();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 停止更新：清除定时器、解绑时间委托、隐藏池内全部灯光

---

### 函数 `ClearBuildingLightRegistrationsForLevelChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void ClearBuildingLightRegistrationsForLevelChange();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 切换/关闭子关卡前调用：停止更新、复位材质、清空注册列表；灯光池保留复用（应在 CurWorldPlace 仍有效时调用）

---

### 函数 `IsBuildingLightUpdatesEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="World|BuildingLight" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "World|BuildingLight") bool IsBuildingLightUpdatesEnabled() const { return bBuildingLightUpdatesEnabled; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Is Building Light Updates Enabled。

---

### 函数 `ApplyBuildingLightSettingsFromGameInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World|BuildingLight" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void ApplyBuildingLightSettingsFromGameInstance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从 GameInstance 读取半径/数量两个设置项的当前值写入 CameraActivateRadius 与 MaxPooledLights，并强制下次刷新重算；BeginPlay 自动调用，设置变更时由 UERW_GameInstanceBase::SetBuildingLightRadiusLevel / SetBuildingLightCountLevel 触发

---
