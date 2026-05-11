# `class` `AEastRimWorldProjectileBase`

**Source header:** `EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OverlappedActors`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<AActor>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<TObjectPtr<AActor>> OverlappedActors;` |

**Source comments:**

> 重叠到的actor

---

### Property `TargetActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AActor> TargetActor;` |

**Source comments:**

> 攻击目标

---

### Property `ProjectileStruct`

| Field | Details |
|------|------|
| C++ type | `FProjectileStruct` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) FProjectileStruct ProjectileStruct;` |

**Source comments:**

> 发射器的配置

---

### Property `ActivationVFXScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FVector ActivationVFXScale = FVector::One();` |

**Source comments:**

> 粒子的缩放

---

### Property `TrailVFXScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FVector TrailVFXScale = FVector::One();` |

**Source comments:**

> 粒子的缩放

---

### Property `ImpactVFXScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FVector ImpactVFXScale = FVector::One();` |

**Source comments:**

> 粒子的缩放

---

### Property `MyTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId MyTeamID;` |

---

### Property `CalculateCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int CalculateCount;` |

**Source comments:**

> 投射物的伤害次数 -1为无限次数

---

### Property `ProjectileSpecHandles`

| Field | Details |
|------|------|
| C++ type | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) TMap<ETargetClassType,FAllGameplayEffectSpecHandles> ProjectileSpecHandles;` |

**Source comments:**

> 投射物的效果

---

### Property `Direction`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) FVector Direction = FVector::Zero();` |

**Source comments:**

> 方向

---

### Property `InitializationComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool InitializationComplete = false;` |

**Source comments:**

> 是否初始化完成

---

## Blueprint-exposed functions

### Function `InitProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTransform` | `const FTransform &` |
| `InProjectileStruct` | `const FProjectileStruct &` |
| `InProjectileSpecHandles` | const TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> & |
| `InDirection` | `const FVector &` |
| `InTargetActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitProjectile(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct, const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles, const FVector & InDirection, AActor * InTargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化投射物

---

### Function `LoadProjectileData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadProjectileData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加载投射物需要的信息

---

### Function `SetProjectileSpeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInitialSpeed` | `float` |
| `InVelocity` | `FVector` |
| `true` | `bool bActivate =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetProjectileSpeed(float InInitialSpeed,FVector InVelocity,bool bActivate = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置投射物的速度

---

### Function `SetHomingTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHomingTargetComponent` | `USceneComponent *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetHomingTarget(USceneComponent * InHomingTargetComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置追踪目标

---

### Function `SearchTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void SearchTarget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 搜寻目标

---

### Function `ApplyEffectToTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTargetActor` | `AActor *` |
| `HitPoint` | `const FVector &` |
| `HitResult` | `const FHitResult&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ApplyEffectToTarget(AActor * InTargetActor,const FVector & HitPoint,const FHitResult& HitResult);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 施加效果给目标

---

### Function `SetCollisionAndVisibility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCollisionAndVisibility();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置碰撞显示

---

### Function `SetCloseCollision`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCloseCollision();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置碰撞关闭

---

### Function `PlaySound`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void PlaySound();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 播放音效

---

### Function `StartSpawnVFXAndSFX`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void StartSpawnVFXAndSFX();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 生成粒子特效和音效

---

### Function `OnHitSpawnVFXAndSFX`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTargetActor` | `AActor*` |
| `HitPoint` | `const FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void OnHitSpawnVFXAndSFX(AActor* InTargetActor,const FVector & HitPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 碰撞时生成特效和音效

---

### Function `OnHitSpawnOtherProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `HitPoint` | `const FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent, BlueprintCallable) void OnHitSpawnOtherProjectile(const FVector & HitPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 碰撞时生成其他投射物

---

### Function `ProjectileLaunch`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void ProjectileLaunch();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 投射物发射

---

### Function `CalculateLaunchVelocity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartLocation` | `FVector` |
| `EndLocation` | `FVector` |
| `InitialSpeed` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector CalculateLaunchVelocity(FVector StartLocation, FVector EndLocation, float InitialSpeed);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算发射的方向

---

### Function `AbilityProjectileEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AbilityProjectileEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 投射物结束

---

### Function `BeforeRecycleProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BeforeRecycleProjectile();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearProjectile();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清理

---

### Function `DotApplyEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DotApplyEffect();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> dot伤害应用效果

---

### Function `ClearProjectileFx`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ClearProjectileFx();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 清理特效

---
