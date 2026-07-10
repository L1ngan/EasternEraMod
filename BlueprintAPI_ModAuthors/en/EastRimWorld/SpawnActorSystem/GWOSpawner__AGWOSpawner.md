# `class` `AGWOSpawner`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

---

## Functional description (from header comments)

> GWO spawner actor that builds a matrix of spawn points within its box volume and spawns/manages actors in regular or wave mode, participating in save games via the Savior interfaces

## Blueprint-exposed variables

### Property `BoxComponent`

| Field | Details |
|------|------|
| C++ type | `class UBoxComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component") class UBoxComponent* BoxComponent;` |

**Notes:**

> ************************************************************************
> Component
> ************************************************************************

---

### Property `IdlePointInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* IdlePointInstanceComponent;` |

**Notes:**

> Instanced static mesh component used to visualize idle points

---

### Property `SpawnPointInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* SpawnPointInstanceComponent;` |

**Notes:**

> Instanced static mesh component used to visualize spawn points

---

### Property `ActivePointInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActivePointInstanceComponent;` |

**Notes:**

> Instanced static mesh component used to visualize active points

---

### Property `ActorSpawnLocInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActorSpawnLocInstanceComponent;` |

**Notes:**

> Instanced static mesh component used to visualize actor spawn locations

---

### Property `bActivateSpawnerRuntime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "激活生成器。")) bool bActivateSpawnerRuntime = true;` |

**Notes:**

> UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters")
> EGWOSpawnerRunMode spawnerRunMode = EGWOSpawnerRunMode::EDITOR_CONSTRUCT;

---

### Property `spawnBoxScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "在箱体矩阵中，箱体的大小。在每个箱体中分别搜索生成点。 ")) FVector spawnBoxScale = FVector(3.f,3.f,3.f);` |

**Notes:**

> Size of each box in the box matrix; spawn points are searched separately within each box

---

### Property `buildMatrixRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.0000001f),meta=(Tooltip = "从箱体构建矩阵的速率。对于非常大的生成器，我建议增加此值以避免卡顿。这只影响编辑器中的矩阵构建。")) float buildMatrixRate = 0.00005f;` |

**Notes:**

> Rate of building the matrix from boxes; for very large spawners increase this value to avoid hitches; only affects matrix building in the editor

---

### Property `checkFilter`

| Field | Details |
|------|------|
| C++ type | [EGWOCheckFilter](GWOTypes__EGWOCheckFilter.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择一个过滤器来构建矩阵")) EGWOCheckFilter checkFilter = EGWOCheckFilter::CHECK_FLOOR;` |

**Notes:**

> Filter used for building the matrix (EGWOCheckFilter, default checks the floor)

---

### Property `bCheckLandscape`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果启用，点将只位于地形上。")) bool bCheckLandscape = true;` |

**Notes:**

> If enabled, spawn points are placed only on the landscape

---

### Property `objectsCollision`

| Field | Details |
|------|------|
| C++ type | `TArray<TEnumAsByte<EObjectTypeQuery>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "指定选定“检查地面”时要检查的碰撞类型。")) TArray<TEnumAsByte<EObjectTypeQuery>> objectsCollision;` |

**Notes:**

> List of collision object types to check when the floor-check filter is selected

---

### Property `actorsToIgnoreArr`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "构建矩阵时要忽略的演员列表。例如，如果您想忽略一些建筑物")) TArray<AActor*> actorsToIgnoreArr;` |

**Notes:**

> List of actors to ignore when building the matrix, e.g. buildings you want to skip

---

### Property `ignoreActorsByTagArr`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "通过标签忽略演员。")) TArray<FName> ignoreActorsByTagArr;` |

**Notes:**

> List of actor tags used to ignore actors when building the matrix

---

### Property `workerType`

| Field | Details |
|------|------|
| C++ type | [EGWOWorkerRunType](GWOTypes__EGWOWorkerRunType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择生成器的操作类型")) EGWOWorkerRunType workerType = EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS;` |

**Notes:**

> Operation type of the spawner (EGWOWorkerRunType, default shuffle using free points)

---

### Property `shufflePointsDelay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "如果选择了生成点的动态混合，则此值决定点应该混合的时间")) float shufflePointsDelay = 1800.f;` |

**Notes:**

> When dynamic spawn point shuffling is selected, the interval in seconds between shuffles

---

### Property `shufflePointsDelayOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "混合时间的偏移量，有助于为您的世界增加更多动态性")) float shufflePointsDelayOffset = 500.f;` |

**Notes:**

> Random offset in seconds applied to the shuffle time, adding more dynamism to the world

---

### Property `spawnerWorkerRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "生成器对角色的响应速度。当您的角色移动时，GWO 导演会将其位置告知生成器，然后生成器根据角色的距离决定哪些演员需要生成")) float spawnerWorkerRate = 0.25f;` |

**Notes:**

> Rate in seconds at which the spawner reacts to characters; as characters move, the GWO director reports their position and the spawner decides which actors to spawn based on distance

---

### Property `shuffleType`

| Field | Details |
|------|------|
| C++ type | [EGWOShuffleType](GWOTypes__EGWOShuffleType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果选择了生成点的混合，则此参数决定混合的逻辑。")) EGWOShuffleType shuffleType = EGWOShuffleType::SAVE;` |

**Notes:**

> This will re-create all points, but spawned actors will no longer be controlled by the spawner. And so they will remain in the world.

---

### Property `bNewGameRestPoint`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "新游戏是否重新生成点。")) bool bNewGameRestPoint = true;` |

**Notes:**

> Whether spawn points are reset and regenerated on a new game

---

### Property `spawnLimitOverwrite`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成限制。如果大于 0，它将覆盖您加载的表中的值。 ")) int spawnLimitOverwrite = 0;` |

**Notes:**

> Spawn limit override; if greater than 0 it overrides the limit from the loaded tables

---

### Property `spawnActorPerBox`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="1"),meta=(Tooltip = "矩阵中每个箱体中的生成点数量。 ")) int spawnActorPerBox = 1;` |

**Notes:**

> Number of spawn points per box in the matrix

---

### Property `spawnActorPerBoxOffset`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成点的偏移量。用于创造动态性。例如，可能有 5 个或 9 个点。 ")) int spawnActorPerBoxOffset = 0;` |

**Notes:**

> Random offset of spawn points per box, used to create dynamism (e.g. there may be 5 or 9 points)

---

### Property `spawnerType`

| Field | Details |
|------|------|
| C++ type | [EGWOSpawnerType](GWOTypes__EGWOSpawnerType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn",meta=(Tooltip = "设置您的生成器类型")) EGWOSpawnerType spawnerType = EGWOSpawnerType::REGULAR;` |

**Notes:**

> Spawner type (EGWOSpawnerType, REGULAR or WAVE)

---

### Property `startPriority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"), meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "作为波生成器工作的生成器具有优先级参数。此值指定生成器的初始优先级。优先级决定当前哪些波处于活动状态")) int startPriority = 0;` |

**Notes:**

> Initial priority of a wave spawner; the priority determines which waves are currently active

---

### Property `actorListDataTableArr`

| Field | Details |
|------|------|
| C++ type | `TArray<class UDataTable*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::REGULAR"),meta=(Tooltip = "生成参数表格的数组。您可以添加任意数量的表格，表格中包含演员的生成参数")) TArray<class UDataTable*> actorListDataTableArr;` |

**Notes:**

> Loot list.

---

### Property `wavesArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOWave](GWOTypes__FGWOWave.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "用于创建波的生成列表。您可以为它们指定任意数量的列表和优先级。如果您为多个位置设置了相同的优先级，生成器会将它们合并。这为生成器的设置提供了更多灵活性。 ")) TArray<FGWOWave> wavesArr;` |

**Notes:**

> Array of spawn lists used to create waves; any number of lists and priorities can be specified, and lists with the same priority are merged by the spawner

---

### Property `debugVisual`

| Field | Details |
|------|------|
| C++ type | [EGWODebugVisual](GWOTypes__EGWODebugVisual.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisual debugVisual = EGWODebugVisual::ALL;` |

**Notes:**

> Debug.

---

### Property `debugVisualType`

| Field | Details |
|------|------|
| C++ type | [EGWODebugVisualType](GWOTypes__EGWODebugVisualType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisualType debugVisualType = EGWODebugVisualType::EDITOR_AND_RUN;` |

**Notes:**

> Scope where debug visualization applies (EGWODebugVisualType, default editor and runtime)

---

### Property `bDebugActiveSpawnPointsTelemetry`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugActiveSpawnPointsTelemetry = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugSpawnNotify`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawnNotify = false;` |

**Notes:**

> Debug flag: outputs a notification when actors are spawned

---

### Property `bDebugSpawner`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawner = true;` |

**Notes:**

> Debug flag: outputs debug info for the spawner

---

### Property `spawnerStatusTelemetry`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString spawnerStatusTelemetry = "NOT BUILD";` |

**Notes:**

> Telemetry

---

### Property `pointStatusTelemetry`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString pointStatusTelemetry = "NOT BUILD";` |

**Notes:**

> Telemetry: spawn point build status string (default "NOT BUILD")

---

### Property `pointsCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int pointsCountTelemetry = 0;` |

**Notes:**

> Telemetry: total number of points

---

### Property `spawnSetCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnSetCountTelemetry = 0;` |

**Notes:**

> Telemetry: number of spawn sets

---

### Property `spawnActorCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnActorCountTelemetry = 0;` |

**Notes:**

> Telemetry: number of spawned actors

---

### Property `spawnBoxCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnBoxCountTelemetry = 0;` |

**Notes:**

> Telemetry: number of spawn boxes

---

### Property `spawnPointsCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnPointsCountTelemetry = 0;` |

**Notes:**

> Telemetry: current number of spawn points

---

### Property `generalAccess`

| Field | Details |
|------|------|
| C++ type | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md)* |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess* generalAccess = nullptr;` |

**Notes:**

> Reference to the GWO general access actor (AGWOGeneralAccess)

---

## Blueprint-exposed functions

### Function `SetWaves`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `newWaves` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") bool SetWaves(int newWaves);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the spawner's current wave; returns whether it succeeded

---

### Function `RestartSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void RestartSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Restarts the spawner

---

### Function `PauseWorkSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void PauseWorkSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Pauses the spawner's work

---

### Function `StartWorkSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void StartWorkSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Starts the spawner's work

---

### Function `GetNumberActorsPreparedForSpawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberActorsPreparedForSpawn();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the number of actors currently prepared for spawning

---

### Function `GetNumberControlledActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberControlledActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the number of actors currently controlled by this spawner

---

### Function `GetCurrentWavePriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetCurrentWavePriority();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the current wave priority

---

### Function `GetTimeToNextShuffle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") float GetTimeToNextShuffle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the remaining time in seconds until the next spawn point shuffle

---
