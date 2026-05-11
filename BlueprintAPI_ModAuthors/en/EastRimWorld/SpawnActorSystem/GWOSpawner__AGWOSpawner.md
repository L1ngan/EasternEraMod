# `class` `AGWOSpawner`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BoxComponent`

| Field | Details |
|------|------|
| C++ type | `class UBoxComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component") class UBoxComponent* BoxComponent;` |

**Source comments:**

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

---

### Property `SpawnPointInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* SpawnPointInstanceComponent;` |

---

### Property `ActivePointInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActivePointInstanceComponent;` |

---

### Property `ActorSpawnLocInstanceComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActorSpawnLocInstanceComponent;` |

---

### Property `bActivateSpawnerRuntime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "激活生成器。")) bool bActivateSpawnerRuntime = true;` |

**Source comments:**

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

---

### Property `buildMatrixRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.0000001f),meta=(Tooltip = "从箱体构建矩阵的速率。对于非常大的生成器，我建议增加此值以避免卡顿。这只影响编辑器中的矩阵构建。")) float buildMatrixRate = 0.00005f;` |

---

### Property `checkFilter`

| Field | Details |
|------|------|
| C++ type | `EGWOCheckFilter` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择一个过滤器来构建矩阵")) EGWOCheckFilter checkFilter = EGWOCheckFilter::CHECK_FLOOR;` |

---

### Property `bCheckLandscape`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果启用，点将只位于地形上。")) bool bCheckLandscape = true;` |

---

### Property `objectsCollision`

| Field | Details |
|------|------|
| C++ type | `TArray<TEnumAsByte<EObjectTypeQuery>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "指定选定“检查地面”时要检查的碰撞类型。")) TArray<TEnumAsByte<EObjectTypeQuery>> objectsCollision;` |

---

### Property `actorsToIgnoreArr`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "构建矩阵时要忽略的演员列表。例如，如果您想忽略一些建筑物")) TArray<AActor*> actorsToIgnoreArr;` |

---

### Property `ignoreActorsByTagArr`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "通过标签忽略演员。")) TArray<FName> ignoreActorsByTagArr;` |

---

### Property `workerType`

| Field | Details |
|------|------|
| C++ type | `EGWOWorkerRunType` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择生成器的操作类型")) EGWOWorkerRunType workerType = EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS;` |

---

### Property `shufflePointsDelay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "如果选择了生成点的动态混合，则此值决定点应该混合的时间")) float shufflePointsDelay = 1800.f;` |

---

### Property `shufflePointsDelayOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "混合时间的偏移量，有助于为您的世界增加更多动态性")) float shufflePointsDelayOffset = 500.f;` |

---

### Property `spawnerWorkerRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "生成器对角色的响应速度。当您的角色移动时，GWO 导演会将其位置告知生成器，然后生成器根据角色的距离决定哪些演员需要生成")) float spawnerWorkerRate = 0.25f;` |

---

### Property `shuffleType`

| Field | Details |
|------|------|
| C++ type | `EGWOShuffleType` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果选择了生成点的混合，则此参数决定混合的逻辑。")) EGWOShuffleType shuffleType = EGWOShuffleType::SAVE;` |

**Source comments:**

> This will re-create all points, but spawned actors will no longer be controlled by the spawner. And so they will remain in the world.

---

### Property `bNewGameRestPoint`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "新游戏是否重新生成点。")) bool bNewGameRestPoint = true;` |

---

### Property `spawnLimitOverwrite`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成限制。如果大于 0，它将覆盖您加载的表中的值。 ")) int spawnLimitOverwrite = 0;` |

---

### Property `spawnActorPerBox`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="1"),meta=(Tooltip = "矩阵中每个箱体中的生成点数量。 ")) int spawnActorPerBox = 1;` |

---

### Property `spawnActorPerBoxOffset`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成点的偏移量。用于创造动态性。例如，可能有 5 个或 9 个点。 ")) int spawnActorPerBoxOffset = 0;` |

---

### Property `spawnerType`

| Field | Details |
|------|------|
| C++ type | `EGWOSpawnerType` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn",meta=(Tooltip = "设置您的生成器类型")) EGWOSpawnerType spawnerType = EGWOSpawnerType::REGULAR;` |

---

### Property `startPriority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"), meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "作为波生成器工作的生成器具有优先级参数。此值指定生成器的初始优先级。优先级决定当前哪些波处于活动状态")) int startPriority = 0;` |

---

### Property `actorListDataTableArr`

| Field | Details |
|------|------|
| C++ type | `TArray<class UDataTable*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::REGULAR"),meta=(Tooltip = "生成参数表格的数组。您可以添加任意数量的表格，表格中包含演员的生成参数")) TArray<class UDataTable*> actorListDataTableArr;` |

**Source comments:**

> Loot list.

---

### Property `wavesArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOWave](GWOTypes__FGWOWave.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "用于创建波的生成列表。您可以为它们指定任意数量的列表和优先级。如果您为多个位置设置了相同的优先级，生成器会将它们合并。这为生成器的设置提供了更多灵活性。 ")) TArray<FGWOWave> wavesArr;` |

---

### Property `debugVisual`

| Field | Details |
|------|------|
| C++ type | `EGWODebugVisual` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisual debugVisual = EGWODebugVisual::ALL;` |

**Source comments:**

> Debug.

---

### Property `debugVisualType`

| Field | Details |
|------|------|
| C++ type | `EGWODebugVisualType` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisualType debugVisualType = EGWODebugVisualType::EDITOR_AND_RUN;` |

---

### Property `bDebugActiveSpawnPointsTelemetry`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugActiveSpawnPointsTelemetry = false;` |

**Source comments:**

> It reduces fps. Use for development only.

---

### Property `bDebugSpawnNotify`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawnNotify = false;` |

---

### Property `bDebugSpawner`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawner = true;` |

---

### Property `spawnerStatusTelemetry`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString spawnerStatusTelemetry = "NOT BUILD";` |

**Source comments:**

> Telemetry

---

### Property `pointStatusTelemetry`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString pointStatusTelemetry = "NOT BUILD";` |

---

### Property `pointsCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int pointsCountTelemetry = 0;` |

---

### Property `spawnSetCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnSetCountTelemetry = 0;` |

---

### Property `spawnActorCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnActorCountTelemetry = 0;` |

---

### Property `spawnBoxCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnBoxCountTelemetry = 0;` |

---

### Property `spawnPointsCountTelemetry`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnPointsCountTelemetry = 0;` |

---

### Property `generalAccess`

| Field | Details |
|------|------|
| C++ type | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md)* |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess* generalAccess = nullptr;` |

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

---

### Function `RestartSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void RestartSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PauseWorkSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void PauseWorkSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StartWorkSpawner`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void StartWorkSpawner();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetNumberActorsPreparedForSpawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberActorsPreparedForSpawn();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetNumberControlledActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberControlledActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCurrentWavePriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetCurrentWavePriority();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetTimeToNextShuffle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Global World Optimization | Control" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") float GetTimeToNextShuffle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
