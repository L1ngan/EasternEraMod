# `class` `UGWOActorComponent`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOActorComponent.h`

---

## Functional description (from header comments)

> Global World Optimization (GWO) component: freezes actors, replaces static meshes and throttles tick intervals based on camera/player distance (savable).

## Blueprint-exposed variables

### Property `OnBeforeFreezingEvent`

| Field | Details |
|------|------|
| C++ type | `FBeforeFreezingEvent` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FBeforeFreezingEvent OnBeforeFreezingEvent;` |

**Notes:**

> Delegates

---

### Property `OnAfterDefrosting`

| Field | Details |
|------|------|
| C++ type | `FAfterDefrosting` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAfterDefrosting OnAfterDefrosting;` |

**Notes:**

> Delegate broadcast after the actor is defrosted.

---

### Property `OnOutCameraFOV`

| Field | Details |
|------|------|
| C++ type | `FOutCameraFOV` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOutCameraFOV OnOutCameraFOV;` |

**Notes:**

> Delegate broadcast when the actor leaves the camera FOV.

---

### Property `OnInCameraFOV`

| Field | Details |
|------|------|
| C++ type | `FInCameraFOV` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FInCameraFOV OnInCameraFOV;` |

**Notes:**

> Delegate broadcast when the actor enters the camera FOV.

---

### Property `bShowErrorMessages`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bShowErrorMessages = false;` |

**Notes:**

> Whether to show debug error messages.

---

### Property `distanceCamera`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 100.f),SaveGame) float distanceCamera = 1000.f;` |

**Notes:**

> Camera distance threshold for optimization (in cm, minimum 100).

---

### Property `bIsActivate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsActivate = true;` |

**Notes:**

> Set Enable Global World Optimization Component.

---

### Property `bIsOptimizeAllActorComponentsTickInterval`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsOptimizeAllActorComponentsTickInterval = true;` |

**Notes:**

> Whether to optimize the tick interval of all the actor's components.

---

### Property `bIsDisableTickIfBehindCameraFOV`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsDisableTickIfBehindCameraFOV = false;` |

**Notes:**

> Whether to disable ticking when outside the camera FOV.

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float spawnDistance = 2000.f;` |

**Notes:**

> Will be overwritten if spawned from a spawner.

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float distanceDestroyOffset = 500.f;` |

**Notes:**

> Will be overwritten if spawned from a spawner.

---

### Property `noSpawnDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(ClampMin="0"),SaveGame) float noSpawnDistance = 500.f;` |

**Notes:**

> Will be overwritten if spawned from a spawner.

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="0"),SaveGame); float lifeTimeInBackground = 0.f;` |

---

### Property `uniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Parameters" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Global World Optimization | Parameters",SaveGame) int uniqID = -1;` |

**Notes:**

> Unique ID assigned by GWO (-1 means unassigned).

---

### Property `distanceCheckType`

| Field | Details |
|------|------|
| C++ type | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**Notes:**

> Will be overwritten if spawned from a spawner.

---

### Property `bReplaceStaticMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bReplaceStaticMesh = false;` |

**Notes:**

> Whether to enable static mesh replacement optimization (works with replaceParameters).

---

### Property `replaceParameters`

| Field | Details |
|------|------|
| C++ type | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides),SaveGame) FGWOActorReplaceParameters replaceParameters;` |

**Notes:**

> Static mesh replacement parameters (effective when bReplaceStaticMesh is true).

---

### Property `ActorInfoID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) FName ActorInfoID;` |

**Notes:**

> 生成的actor信息

---

### Property `ActorType`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 ActorType;` |

**Notes:**

> 生成的actorType

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 TeamID;` |

**Notes:**

> 团队id

---

### Property `bGWOSpawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bGWOSpawn = false;` |

**Notes:**

> Whether this actor was spawned by a GWO spawner.

---

### Property `ConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName ConfigID;` |

**Notes:**

> configID 用于标识是哪个配置生成

---

## Blueprint-exposed functions

### Function `GetLastFrostTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Global World Optimization" |
| Return type | `double` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Global World Optimization") double GetLastFrostTime() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the time of the last freeze.

---

### Function `RegisterActorInGWO`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void RegisterActorInGWO();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Registers this actor with the GWO general access manager.

---

### Function `UnregisterActorInGWO`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void UnregisterActorInGWO();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unregisters this actor from the GWO general access manager.

---

### Function `InitializeActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Director PRO Parameters" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Director PRO Parameters") void InitializeActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Initializes the actor's GWO optimization parameters.

---

### Function `OnOwnerDeathStart`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnOwnerDeathStart();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Handles GWO logic when the owning actor starts dying.

---
