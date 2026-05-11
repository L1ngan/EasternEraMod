# `class` `AWorldBuildingLightManager`

**Source header:** `EastRimWorld/WorldSystem/WorldBuildingLightManager.h`

---

## Functional description (from header comments)

> 建筑夜景灯光管理：黑夜时在摄像机一定范围内，用池化灯光组件（最多 20 个）显示已注册建筑的灯具配置。
> 灯光组件挂在本 Actor 上，不使用时隐藏。

## Blueprint-exposed variables

### Property `CameraActivateRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="World|BuildingLight" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "100.0")) float CameraActivateRadius = 8000.f;` |

**Source comments:**

> 相对玩家 Pawn 位置启用灯光候选的最大距离

---

### Property `PawnLocationChangeTolerance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="World|BuildingLight" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0.0")) float PawnLocationChangeTolerance = 10.f;` |

**Source comments:**

> 与上次记录的 Pawn 位置距离小于等于此值（UU）则视为未移动，跳过本帧灯光更新

---

### Property `MaxPooledLights`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="World|BuildingLight" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight") int32 MaxPooledLights = 20;` |

**Source comments:**

> 同时「正在使用」的灯光数量上限（新建时仅与此比较；空闲池数量不参与）

---

### Property `UpdateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="World|BuildingLight" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0.1")) float UpdateInterval = 0.5f;` |

**Source comments:**

> 开启更新后，按「未受时间膨胀影响」的秒数计时的刷新间隔

---

### Property `BuildingLightMaterialCustomDataIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="World|BuildingLight" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World|BuildingLight", meta = (ClampMin = "0")) int32 BuildingLightMaterialCustomDataIndex = 3;` |

**Source comments:**

> 传给 UERW_HISMManager::SetBuildISMMaterialParameters 的 CustomData

---

### Property `SceneRoot`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="World|BuildingLight" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "World|BuildingLight") TObjectPtr<USceneComponent> SceneRoot;` |

---

## Blueprint-exposed functions

### Function `GetWorldBuildingLightManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="World|BuildingLight" |
| Return type | [AWorldBuildingLightManager](WorldBuildingLightManager__AWorldBuildingLightManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "World|BuildingLight") static AWorldBuildingLightManager* GetWorldBuildingLightManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `Get`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | [AWorldBuildingLightManager](WorldBuildingLightManager__AWorldBuildingLightManager.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight", meta = (WorldContext = "WorldContextObject")) static AWorldBuildingLightManager* Get(UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Instance 或 UWorldManagerSystem 弱引用（需已通过 FindOrCreateWorldManageActors 生成）

---

### Function `RegisterBuildingWithLights`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void RegisterBuildingWithLights(ABuildingActorBase* BuildingActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注册灯具建筑：需 BuildData.BuildingType == Light，灯具数据使用 BuildData.LightParams

---

### Function `UnregisterBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void UnregisterBuilding(ABuildingActorBase* BuildingActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `NotifyBuildingRuntimeStateChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void NotifyBuildingRuntimeStateChanged(ABuildingActorBase* BuildingActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 建筑运行/启用状态等变化后调用：强制重算灯光与粒子（需 Normal 且 Enable 才可开灯/开粒子）

---

### Function `StartBuildingLightUpdates`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void StartBuildingLightUpdates();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开启定时更新（按 UpdateInterval）并绑定世界时间变化；需主动调用后才会刷新灯光

---

### Function `StopBuildingLightUpdates`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void StopBuildingLightUpdates();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 停止更新：清除定时器、解绑时间委托、隐藏池内全部灯光

---

### Function `ClearBuildingLightRegistrationsForLevelChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World|BuildingLight" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "World|BuildingLight") void ClearBuildingLightRegistrationsForLevelChange();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 切换/关闭子关卡前调用：停止更新、复位材质、清空注册列表；灯光池保留复用（应在 CurWorldPlace 仍有效时调用）

---

### Function `IsBuildingLightUpdatesEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="World|BuildingLight" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "World|BuildingLight") bool IsBuildingLightUpdatesEnabled() const { return bBuildingLightUpdatesEnabled; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---
