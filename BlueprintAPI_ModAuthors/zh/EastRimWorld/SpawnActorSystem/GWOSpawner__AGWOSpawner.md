# `class` `AGWOSpawner`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSpawner.h`

---

## 功能说明（来自头文件注释）

> GWO生成器Actor，在盒体范围内按矩阵构建生成点，并以常规或波次方式生成与管理Actor，通过Savior接口参与存档

## 蓝图暴露变量

### 属性 `BoxComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UBoxComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component") class UBoxComponent* BoxComponent;` |

**说明:**

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

**说明:**

> 用于显示待机点的实例化静态网格组件

---

### 属性 `SpawnPointInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* SpawnPointInstanceComponent;` |

**说明:**

> 用于显示生成点的实例化静态网格组件

---

### 属性 `ActivePointInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActivePointInstanceComponent;` |

**说明:**

> 用于显示激活点的实例化静态网格组件

---

### 属性 `ActorSpawnLocInstanceComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* ActorSpawnLocInstanceComponent;` |

**说明:**

> 用于显示Actor生成位置的实例化静态网格组件

---

### 属性 `bActivateSpawnerRuntime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "激活生成器。")) bool bActivateSpawnerRuntime = true;` |

**说明:**

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

**说明:**

> 箱体矩阵中单个箱体的大小，每个箱体内分别搜索生成点

---

### 属性 `buildMatrixRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.0000001f),meta=(Tooltip = "从箱体构建矩阵的速率。对于非常大的生成器，我建议增加此值以避免卡顿。这只影响编辑器中的矩阵构建。")) float buildMatrixRate = 0.00005f;` |

**说明:**

> 从箱体构建矩阵的速率；对于非常大的生成器建议增大此值以避免卡顿，仅影响编辑器中的矩阵构建

---

### 属性 `checkFilter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOCheckFilter](GWOTypes__EGWOCheckFilter.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择一个过滤器来构建矩阵")) EGWOCheckFilter checkFilter = EGWOCheckFilter::CHECK_FLOOR;` |

**说明:**

> 构建矩阵时使用的检测过滤器（EGWOCheckFilter，默认检查地面）

---

### 属性 `bCheckLandscape`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果启用，点将只位于地形上。")) bool bCheckLandscape = true;` |

**说明:**

> 如果启用，生成点将只位于地形（Landscape）上

---

### 属性 `objectsCollision`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TEnumAsByte<EObjectTypeQuery>>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "指定选定“检查地面”时要检查的碰撞类型。")) TArray<TEnumAsByte<EObjectTypeQuery>> objectsCollision;` |

**说明:**

> 选择"检查地面"过滤器时要检测的碰撞对象类型列表

---

### 属性 `actorsToIgnoreArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "构建矩阵时要忽略的演员列表。例如，如果您想忽略一些建筑物")) TArray<AActor*> actorsToIgnoreArr;` |

**说明:**

> 构建矩阵时要忽略的Actor列表，例如想忽略的一些建筑物

---

### 属性 `ignoreActorsByTagArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "通过标签忽略演员。")) TArray<FName> ignoreActorsByTagArr;` |

**说明:**

> 构建矩阵时按标签忽略的Actor标签列表

---

### 属性 `workerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOWorkerRunType](GWOTypes__EGWOWorkerRunType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "选择生成器的操作类型")) EGWOWorkerRunType workerType = EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS;` |

**说明:**

> 生成器的操作类型（EGWOWorkerRunType，默认混洗使用空闲点）

---

### 属性 `shufflePointsDelay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "如果选择了生成点的动态混合，则此值决定点应该混合的时间")) float shufflePointsDelay = 1800.f;` |

**说明:**

> 选择动态混洗生成点时，两次混洗之间的时间间隔（秒）

---

### 属性 `shufflePointsDelayOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta = (EditCondition="workerType == EGWOWorkerRunType::SHUFFLE_USE_FREE_POINTS", EditConditionHides),meta=(Tooltip = "混合时间的偏移量，有助于为您的世界增加更多动态性")) float shufflePointsDelayOffset = 500.f;` |

**说明:**

> 混洗时间的随机偏移量（秒），有助于为世界增加更多动态性

---

### 属性 `spawnerWorkerRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "生成器对角色的响应速度。当您的角色移动时，GWO 导演会将其位置告知生成器，然后生成器根据角色的距离决定哪些演员需要生成")) float spawnerWorkerRate = 0.25f;` |

**说明:**

> 生成器对角色的响应频率（秒）；角色移动时GWO导演将其位置告知生成器，生成器再根据距离决定需要生成哪些Actor

---

### 属性 `shuffleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOShuffleType](GWOTypes__EGWOShuffleType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "如果选择了生成点的混合，则此参数决定混合的逻辑。")) EGWOShuffleType shuffleType = EGWOShuffleType::SAVE;` |

**说明:**

> This will re-create all points, but spawned actors will no longer be controlled by the spawner. And so they will remain in the world.

---

### 属性 `bNewGameRestPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta=(Tooltip = "新游戏是否重新生成点。")) bool bNewGameRestPoint = true;` |

**说明:**

> 新游戏时是否重置并重新生成生成点

---

### 属性 `spawnLimitOverwrite`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成限制。如果大于 0，它将覆盖您加载的表中的值。 ")) int spawnLimitOverwrite = 0;` |

**说明:**

> 生成上限覆盖值；大于0时将覆盖所加载表格中的上限值

---

### 属性 `spawnActorPerBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="1"),meta=(Tooltip = "矩阵中每个箱体中的生成点数量。 ")) int spawnActorPerBox = 1;` |

**说明:**

> 矩阵中每个箱体内的生成点数量

---

### 属性 `spawnActorPerBoxOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"),meta=(Tooltip = "生成点的偏移量。用于创造动态性。例如，可能有 5 个或 9 个点。 ")) int spawnActorPerBoxOffset = 0;` |

**说明:**

> 每箱体生成点数量的随机偏移量，用于创造动态性（例如可能是5个或9个点）

---

### 属性 `spawnerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOSpawnerType](GWOTypes__EGWOSpawnerType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn",meta=(Tooltip = "设置您的生成器类型")) EGWOSpawnerType spawnerType = EGWOSpawnerType::REGULAR;` |

**说明:**

> 生成器类型（EGWOSpawnerType，常规REGULAR或波次WAVE）

---

### 属性 `startPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(ClampMin="0"), meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "作为波生成器工作的生成器具有优先级参数。此值指定生成器的初始优先级。优先级决定当前哪些波处于活动状态")) int startPriority = 0;` |

**说明:**

> 波次生成器的初始优先级；优先级决定当前哪些波次处于活跃状态

---

### 属性 `actorListDataTableArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<class UDataTable*>` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::REGULAR"),meta=(Tooltip = "生成参数表格的数组。您可以添加任意数量的表格，表格中包含演员的生成参数")) TArray<class UDataTable*> actorListDataTableArr;` |

**说明:**

> Loot list.

---

### 属性 `wavesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOWave](GWOTypes__FGWOWave.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Spawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Spawn", meta=(EditCondition="spawnerType == EGWOSpawnerType::WAVE"),meta=(Tooltip = "用于创建波的生成列表。您可以为它们指定任意数量的列表和优先级。如果您为多个位置设置了相同的优先级，生成器会将它们合并。这为生成器的设置提供了更多灵活性。 ")) TArray<FGWOWave> wavesArr;` |

**说明:**

> 用于创建波次的生成列表数组，可指定任意数量的列表与优先级；多个列表设置相同优先级时生成器会将它们合并

---

### 属性 `debugVisual`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWODebugVisual](GWOTypes__EGWODebugVisual.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisual debugVisual = EGWODebugVisual::ALL;` |

**说明:**

> Debug.

---

### 属性 `debugVisualType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWODebugVisualType](GWOTypes__EGWODebugVisualType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") EGWODebugVisualType debugVisualType = EGWODebugVisualType::EDITOR_AND_RUN;` |

**说明:**

> 调试可视化的生效范围（EGWODebugVisualType，默认编辑器与运行时均显示）

---

### 属性 `bDebugActiveSpawnPointsTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugActiveSpawnPointsTelemetry = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugSpawnNotify`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawnNotify = false;` |

**说明:**

> 调试开关：生成Actor时输出通知信息

---

### 属性 `bDebugSpawner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSpawner = true;` |

**说明:**

> 调试开关：输出生成器的调试信息

---

### 属性 `spawnerStatusTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString spawnerStatusTelemetry = "NOT BUILD";` |

**说明:**

> Telemetry

---

### 属性 `pointStatusTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") FString pointStatusTelemetry = "NOT BUILD";` |

**说明:**

> 遥测：生成点构建状态字符串（默认"NOT BUILD"）

---

### 属性 `pointsCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int pointsCountTelemetry = 0;` |

**说明:**

> 遥测：生成点总数

---

### 属性 `spawnSetCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnSetCountTelemetry = 0;` |

**说明:**

> 遥测：生成集数量

---

### 属性 `spawnActorCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnActorCountTelemetry = 0;` |

**说明:**

> 遥测：已生成的Actor数量

---

### 属性 `spawnBoxCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnBoxCountTelemetry = 0;` |

**说明:**

> 遥测：生成箱体数量

---

### 属性 `spawnPointsCountTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Telemetry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Global World Optimization | Telemetry") int spawnPointsCountTelemetry = 0;` |

**说明:**

> 遥测：当前生成点数量

---

### 属性 `generalAccess`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md)* |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess* generalAccess = nullptr;` |

**说明:**

> GWO全局访问器Actor的引用（AGWOGeneralAccess）

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") bool SetWaves(int newWaves);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置生成器的当前波次，返回是否设置成功

---

### 函数 `RestartSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void RestartSpawner();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重启生成器

---

### 函数 `PauseWorkSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void PauseWorkSpawner();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暂停生成器的工作

---

### 函数 `StartWorkSpawner`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") void StartWorkSpawner();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 启动生成器的工作

---

### 函数 `GetNumberActorsPreparedForSpawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberActorsPreparedForSpawn();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前已准备好等待生成的Actor数量

---

### 函数 `GetNumberControlledActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetNumberControlledActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前由该生成器管理的Actor数量

---

### 函数 `GetCurrentWavePriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") int GetCurrentWavePriority();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前波次的优先级

---

### 函数 `GetTimeToNextShuffle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization | Control" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization | Control") float GetTimeToNextShuffle();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取距下一次生成点混洗的剩余时间（秒）

---
