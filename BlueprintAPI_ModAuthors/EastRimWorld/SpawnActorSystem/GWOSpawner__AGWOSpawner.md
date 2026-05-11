# `class` `AGWOSpawner`

**源码头文件：** `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `BoxComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UBoxComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component") class UBoxComponent* BoxComponent;` |

**源码注释：**

> ************************************************************************
> Component
> ************************************************************************

---

### 属性 `IdlePointInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* IdlePointInstanceComponent;` |

---

### 属性 `SpawnPointInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* SpawnPointInstanceComponent;` |

---

### 属性 `ActivePointInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActivePointInstanceComponent;` |

---

### 属性 `ActorSpawnLocInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActorSpawnLocInstanceComponent;` |

---

### 属性 `bActivateSpawnerRuntime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "激活生成器。")) bool bActivateSpawnerRuntime = true;` |

**源码注释：**

> UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters")
> EGWOSpawnerRunMode spawnerRunMode = EGWOSpawnerRunMode::EDITOR_CONSTRUCT;

---

### 属性 `spawnBoxScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "在箱体矩阵中，箱体的大小。在每个箱体中分别搜索生成点。 ")) FVector spawnBoxScale = FVector(3.f,3.f,3.f);` |

---

### 属性 `buildMatrixRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.0000001f),meta=(Tooltip = "从箱体构建矩阵的速率。对于非常大的生成器，我建议增加此值以避免卡顿。这只影响编辑器中的矩阵构建。")) float buildMatrixRate = 0.00005f;` |

---

### 属性 `checkFilter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOCheckFilter` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择一个过滤器来构建矩阵")) EGWOCheckFilter checkFilter = EGWOCheckFilter::CHECK_FLOOR;` |

---

### 属性 `bCheckLandscape`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果启用，点将只位于地形上。")) bool bCheckLandscape = true;` |

---

### 属性 `objectsCollision`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TEnumAsByte<EObjectTypeQuery>>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "指定选定“检查地面”时要检查的碰撞类型。")) TArray<TEnumAsByte<EObjectTypeQuery>> objectsCollision;` |

---

### 属性 `actorsToIgnoreArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "构建矩阵时要忽略的演员列表。例如，如果您想忽略一些建筑物")) TArray<AActor*> actorsToIgnoreArr;` |

---

### 属性 `ignoreActorsByTagArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "通过标签忽略演员。")) TArray<FName> ignoreActorsByTagArr;` |

---

### 属性 `workerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOWorkerRunType` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择生成器的操作类型")) EGWOWorkerRunType workerType = EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS;` |

---

### 属性 `shufflePointsDelay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "如果选择了生成点的动态混合，则此值决定点应该混合的时间")) float shufflePointsDelay = 1800.f;` |

---

### 属性 `shufflePointsDelayOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "混合时间的偏移量，有助于为您的世界增加更多动态性")) float shufflePointsDelayOffset = 500.f;` |

---

### 属性 `spawnerWorkerRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "生成器对角色的响应速度。当您的角色移动时，GWO 导演会将其位置告知生成器，然后生成器根据角色的距离决定哪些演员需要生成")) float spawnerWorkerRate = 0.25f;` |

---

### 属性 `shuffleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOShuffleType` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果选择了生成点的混合，则此参数决定混合的逻辑。")) EGWOShuffleType shuffleType = EGWOShuffleType::SAVE;` |

**源码注释：**

> This will re-create all points, but spawned actors will no longer be controlled by the spawner. And so they will remain in the world.

---

### 属性 `bNewGameRestPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "新游戏是否重新生成点。")) bool bNewGameRestPoint = true;` |

---

### 属性 `spawnLimitOverwrite`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成限制。如果大于 0，它将覆盖您加载的表中的值。 ")) int spawnLimitOverwrite = 0;` |

---

### 属性 `spawnActorPerBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="1"),meta=(Tooltip = "矩阵中每个箱体中的生成点数量。 ")) int spawnActorPerBox = 1;` |

---

### 属性 `spawnActorPerBoxOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成点的偏移量。用于创造动态性。例如，可能有 5 个或 9 个点。 ")) int spawnActorPerBoxOffset = 0;` |

---

### 属性 `spawnerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOSpawnerType` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn",meta=(Tooltip = "设置您的生成器类型")) EGWOSpawnerType spawnerType = EGWOSpawnerType::REGULAR;` |

---

### 属性 `startPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"), meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "作为波生成器工作的生成器具有优先级参数。此值指定生成器的初始优先级。优先级决定当前哪些波处于活动状态")) int startPriority = 0;` |

---

### 属性 `actorListDataTableArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<class UDataTable*>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::REGULAR"),meta=(Tooltip = "生成参数表格的数组。您可以添加任意数量的表格，表格中包含演员的生成参数")) TArray<class UDataTable*> actorListDataTableArr;` |

**源码注释：**

> Loot list.

---

### 属性 `wavesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOWave](GWOTypes__FGWOWave.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "用于创建波的生成列表。您可以为它们指定任意数量的列表和优先级。如果您为多个位置设置了相同的优先级，生成器会将它们合并。这为生成器的设置提供了更多灵活性。 ")) TArray<FGWOWave> wavesArr;` |

---

### 属性 `debugVisual`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWODebugVisual` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisual debugVisual = EGWODebugVisual::ALL;` |

**源码注释：**

> Debug.

---

### 属性 `debugVisualType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWODebugVisualType` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisualType debugVisualType = EGWODebugVisualType::EDITOR_AND_RUN;` |

---

### 属性 `bDebugActiveSpawnPointsTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugActiveSpawnPointsTelemetry = false;` |

**源码注释：**

> It reduces fps. Use for development only.

---

### 属性 `bDebugSpawnNotify`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawnNotify = false;` |

---

### 属性 `bDebugSpawner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawner = true;` |

---

### 属性 `spawnerStatusTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString spawnerStatusTelemetry = "NOT BUILD";` |

**源码注释：**

> Telemetry

---

### 属性 `pointStatusTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString pointStatusTelemetry = "NOT BUILD";` |

---

### 属性 `pointsCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int pointsCountTelemetry = 0;` |

---

### 属性 `spawnSetCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnSetCountTelemetry = 0;` |

---

### 属性 `spawnActorCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnActorCountTelemetry = 0;` |

---

### 属性 `spawnBoxCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnBoxCountTelemetry = 0;` |

---

### 属性 `spawnPointsCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnPointsCountTelemetry = 0;` |

---

### 属性 `generalAccess`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md)* |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess* generalAccess = nullptr;` |

---

## 蓝图暴露函数

### 函数 `SetWaves`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `newWaves` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") bool SetWaves(int newWaves);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RestartSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void RestartSpawner();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PauseWorkSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void PauseWorkSpawner();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StartWorkSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void StartWorkSpawner();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNumberActorsPreparedForSpawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberActorsPreparedForSpawn();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNumberControlledActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberControlledActors();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCurrentWavePriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetCurrentWavePriority();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetTimeToNextShuffle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") float GetTimeToNextShuffle();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
