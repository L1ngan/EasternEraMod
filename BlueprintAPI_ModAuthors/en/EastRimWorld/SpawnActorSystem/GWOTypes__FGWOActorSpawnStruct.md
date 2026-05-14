# `struct` `FGWOActorSpawnStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `actorClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") TSoftClassPtr<AActor> actorClass;` |

**Source comments:**

> 添加生成演员类。

---

### Property `spawnOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector spawnOffset = FVector::ZeroVector;` |

**Source comments:**

> **spawnOffset** - 从生成点的偏移量。

---

### Property `spawnScaleMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMin = 1.f;` |

**Source comments:**

> - 演员的随机比例范围最小值

---

### Property `spawnScaleMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMax = 1.f;` |

**Source comments:**

> - 演员的随机比例范围最大值。

---

### Property `bRandRotateYaw`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateYaw = true;` |

**Source comments:**

> - 沿轴的随机旋转。

---

### Property `bRandRotatePitch`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotatePitch = false;` |

**Source comments:**

> 沿轴的随机旋转。

---

### Property `bRandRotateRoll`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateRoll = false;` |

**Source comments:**

> 沿轴的随机旋转。

---

### Property `actorsCountForSpawn`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountForSpawn = 10;` |

**Source comments:**

> 生成的演员数量。

---

### Property `actorsCountSpawnOffset`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountSpawnOffset = 0;` |

**Source comments:**

> 生成数量的偏移量。

---

### Property `bUseSpawnTime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bUseSpawnTime = false;` |

**Source comments:**

> 使用曲线根据时间决定生成几率。

---

### Property `spawnChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float spawnChance = 100.f;` |

**Source comments:**

> 生成几率。每次加载生成列表或重新启动生成器时计算。

---

### Property `spawnCurve`

| Field | Details |
|------|------|
| C++ type | `UCurveFloat*` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bUseSpawnTime", EditConditionHides)) UCurveFloat* spawnCurve = nullptr;` |

**Source comments:**

> 生成几率曲线。如果选择了根据时间决定生成几率，则使用此曲线。

---

### Property `increaseChanceSpawnAfterFailure`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float increaseChanceSpawnAfterFailure = 0.f;` |

**Source comments:**

> Increases the chance of spawn every time the NPC was not spawned due to a small chance of spawn. After spawn, the real value of the chance of spawn is reset to the original ones. Not work with bUseSpawnTime.
> 在下一次尝试中应增加的生成几率值。这样生成几率会不断增加，直到演员生成为止。

---

### Property `dontSpawnIfSpawnedInWorld`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int dontSpawnIfSpawnedInWorld = 0;` |

**Source comments:**

> 如果值大于 0，则如果此类演员已经在世界中生成，它们将不会再生成，即使它们被冻结。

---

### Property `dontSpawnIfActiveInWorld`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int dontSpawnIfActiveInWorld = 0;` |

**Source comments:**

> 如果值大于 0，则如果此类演员已经在世界中处于活动状态，它们将不会再生成。

---

### Property `bIsCanBeRespawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bIsCanBeRespawn = true;` |

**Source comments:**

> 如果希望演员在被销毁后重新生成，请设置此选项。

---

### Property `timeToRespawn`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawn = 1800.f;` |

**Source comments:**

> 重新生成时间。

---

### Property `timeToRespawnOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawnOffset = 5.f;` |

**Source comments:**

> 重新生成时间的偏移量。

---

### Property `actorCollisionHandlingMethod`

| Field | Details |
|------|------|
| C++ type | `ESpawnActorCollisionHandlingMethod` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") ESpawnActorCollisionHandlingMethod actorCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;` |

**Source comments:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bCheckFloorForSpawn = true;
> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bCheckNavMeshForSpawn = false;

---

### Property `bOverwriteSpawnAndDestroyDistances`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bOverwriteSpawnAndDestroyDistances = true;` |

**Source comments:**

> 根据列表，重写演员组件中的生成和冻结距离。

---

### Property `distanceToSpawn`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceToSpawn = 6000.f;` |

**Source comments:**

> 生成发生的距离。

---

### Property `distanceDestroyOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceDestroyOffset = 500.f;` |

**Source comments:**

> 冻结演员的距离偏移量。

---

### Property `distanceCheckType`

| Field | Details |
|------|------|
| C++ type | `EGWOAxes` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**Source comments:**

> 用于距离测量的轴数。

---

### Property `noSpawnDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float noSpawnDistance = 1000.f;` |

**Source comments:**

> 生成不会发生的距离。例如，您的角色在非常接近某类演员的地方生成，为避免演员在如此近的地方生成，可以调整此距离。

---

### Property `lifeTimeInBackground`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float lifeTimeInBackground = 0.f;` |

**Source comments:**

> 演员的冻结生命时间；在此时间后，关于演员的信息将被销毁。

---

### Property `bReplaceStaticMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bReplaceStaticMesh = false;` |

**Source comments:**

> 如果您希望将演员替换为静态网格实例，请启用此选项。

---

### Property `replaceParameters`

| Field | Details |
|------|------|
| C++ type | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides)) FGWOActorReplaceParameters replaceParameters;` |

**Source comments:**

> 选择用于替换演员的静态网格。

---

### Property `bSpawnOnRun`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bSpawnOnRun = false;` |

**Source comments:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides))
> class UStaticMesh* replaceableStaticMesh = nullptr;
> 游戏开始时立即生成。

---

### Property `ActorInfoIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") TArray<FName> ActorInfoIDs;` |

**Source comments:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bDontSpawnActorAddInstance = false;
> 生成的actor信息

---

### Property `ActorType`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") uint8 ActorType = 0;` |

**Source comments:**

> 生成的actorType 1 人类 2 召唤物 3 动物

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") uint8 TeamID = 0;` |

**Source comments:**

> 队伍id

---

### Property `BoxLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") FVector BoxLocation = FVector::ZeroVector;` |

**Source comments:**

> 所在盒子位置

---

### Property `IdleRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") int32 IdleRange { 6000 };` |

**Source comments:**

> 闲逛范围

---

### Property `distanceToSpawnSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float distanceToSpawnSquare = 0.f;` |

---

### Property `distanceToDestroySquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float distanceToDestroySquare = 0.f;` |

---

### Property `noSpawnDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

---

### Property `insertBackgroundTime`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() double insertBackgroundTime = 0.f;` |

---

### Property `uniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int uniqID = -1;` |

---

### Property `npcValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int npcValue = 0;` |

---

### Property `npcWithPoint`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int npcWithPoint = 0;` |

---

### Property `spawnLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector spawnLocation = FVector::ZeroVector;` |

---

### Property `spawnScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector spawnScale = FVector::ZeroVector;` |

---

### Property `lastPositionBeforeDestroyedIfFar`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector lastPositionBeforeDestroyedIfFar = FVector::ZeroVector;` |

---

### Property `timeKilled`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() double timeKilled = 0.f;` |

---

### Property `bIsSpawned`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bIsSpawned = false;` |

---

### Property `bIsKilled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bIsKilled = false;` |

---

### Property `killedTime`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() double killedTime = 0.f;` |

---

### Property `bReadyToSpawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bReadyToSpawn = false;` |

---

### Property `spawnedNpcRef`

| Field | Details |
|------|------|
| C++ type | `AActor*` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() AActor* spawnedNpcRef = nullptr;` |

---

### Property `realTimeRespawn`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float realTimeRespawn = 0.f;` |

---

### Property `bGotChanceToSpawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bGotChanceToSpawn = false;` |

---

### Property `realSpawnChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float realSpawnChance = 0.f;` |

---
