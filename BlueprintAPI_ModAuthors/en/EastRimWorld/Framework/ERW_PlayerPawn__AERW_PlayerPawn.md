# `class` `AERW_PlayerPawn`

**Source header:** `EastRimWorld/Framework/ERW_PlayerPawn.h`

---

## Functional description (from header comments)

> PlayerPawn基类 不可在此类中存储数据

## Blueprint-exposed variables

### Property `GWOPlayerComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UGWOPlayerComponent>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<UGWOPlayerComponent> GWOPlayerComponent;` |

**Notes:**

> Player-side component of the GWO spawn actor system; registers the player with the GWO sectors director to drive world object spawning.

---

### Property `PlayerPawnType`

| Field | Details |
|------|------|
| C++ type | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EPlayerPawnType PlayerPawnType = EPlayerPawnType::BasePawn;` |

**Notes:**

> 控制的Pawn类型

---

### Property `CameraConfigAsset`

| Field | Details |
|------|------|
| C++ type | [UCameraConfigAsset](../Components/ERW_GameConfigComponent__UCameraConfigAsset.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) UCameraConfigAsset * CameraConfigAsset;` |

**Notes:**

> 相机配置

---

### Property `CurWorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<class [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<class AWorldPlace> CurWorldPlace;` |

**Notes:**

> 所在的地点

---

### Property `HitLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FVector HitLocation { FVector::ZeroVector };` |

**Notes:**

> 鼠标击中的位置

---

### Property `CurSummon`

| Field | Details |
|------|------|
| C++ type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) AEastRimWorldCharacter* CurSummon;` |

**Notes:**

> 当前编辑巡逻点的机关角色

---

### Property `OnCameraPositionChange`

| Field | Details |
|------|------|
| C++ type | `FOnCameraPositionChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCameraPositionChange OnCameraPositionChange;` |

**Notes:**

> Event fired when the camera position changes; parameter is the new camera position.

---

## Blueprint-exposed functions

### Function `SetPawnData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPawnData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置玩家Pawn的信息

---

### Function `BroadcastOnCameraPositionChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewPosition` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastOnCameraPositionChange(const FVector& NewPosition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Broadcasts the camera position change event (OnCameraPositionChange), notifying listeners of the new camera position.

---

### Function `SetMouseMode`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMouseMode` | [EMouseMode](ERW_PlayerPawn__EMouseMode.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetMouseMode(EMouseMode InMouseMode);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Sets the mouse operation mode (EMouseMode: normal, camera rotation, move building, area selection, farmland design, patrol point picking, breakthrough point picking, etc.).

---

### Function `SetPreviewFarmlandActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FarmlandActor` | [AEastRimWorldFarmlandActor](../Farmland/EastRimWorldFarmlandActor__AEastRimWorldFarmlandActor.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPreviewFarmlandActor(AEastRimWorldFarmlandActor* FarmlandActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Sets the farmland actor currently being previewed (used during farmland design; Blueprint-implemented event).

---

### Function `SetCameraPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPosition` | `FVector` |
| `InRotation` | `FRotator` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetCameraPosition(FVector InPosition,FRotator InRotation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置相机的位置

---

### Function `SpawnBuildingByPresetInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PresetBuilding` | const [FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md) & |
| `NewTeamID` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) ABuildingActorBase * SpawnBuildingByPresetInfo(const FPresetBuilding & PresetBuilding,const FGenericTeamId& NewTeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成建筑物在预设位置

---

### Function `K2_SpawnBuildingByPresetInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PresetBuilding` | const [FPresetBuilding](../ERW_ConfigTypes__FPresetBuilding.md) & |
| `NewTeamID` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SpawnBuildingByPresetInfo") ABuildingActorBase * K2_SpawnBuildingByPresetInfo(const FPresetBuilding & PresetBuilding,const FGenericTeamId& NewTeamID);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Spawns a building from preset building info and team ID (Blueprint-implemented version of SpawnBuildingByPresetInfo); returns the spawned building actor.

---

### Function `GetPlayerPawnCamera`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `UCameraComponent*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) UCameraComponent* GetPlayerPawnCamera();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> Gets the camera component currently used by the player pawn.

---

### Function `ClearDataBeforeSave`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void ClearDataBeforeSave();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 存档前清理数据

---

### Function `ResetInitPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ResetInitPosition();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Resets the player pawn to its initial position (Blueprint-implemented event).

---

### Function `TrackingCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TrackingCharacter` | const [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void TrackingCharacter(const AEastRimWorldCharacter* TrackingCharacter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 开始追踪

---

### Function `StopTrackingCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StopTrackingCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 停止追踪

---

### Function `GetPawnSaveInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | [FPawnSaveInfo](../WorldSystem/WorldStruct__FPawnSaveInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) FPawnSaveInfo GetPawnSaveInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获取存档信息

---

### Function `SetPawnSaveInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PawnSaveInfo` | const [FPawnSaveInfo](../WorldSystem/WorldStruct__FPawnSaveInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetPawnSaveInfo(const FPawnSaveInfo & PawnSaveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置存档信息

---
