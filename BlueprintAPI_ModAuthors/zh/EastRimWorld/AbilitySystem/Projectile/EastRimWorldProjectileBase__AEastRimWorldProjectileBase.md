# `class` `AEastRimWorldProjectileBase`

**源码头文件:** `EastRimWorld/AbilitySystem/Projectile/EastRimWorldProjectileBase.h`

---

## 功能说明（来自头文件注释）

> 游戏投射物基类，支持队伍归属、搜索/追踪目标、命中施加GameplayEffect、DOT周期伤害与缓存池回收

## 蓝图暴露变量

### 属性 `OverlappedActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<AActor>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<TObjectPtr<AActor>> OverlappedActors;` |

**说明:**

> 重叠到的actor

---

### 属性 `TargetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AActor> TargetActor;` |

**说明:**

> 攻击目标

---

### 属性 `ProjectileStruct`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FProjectileStruct` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) FProjectileStruct ProjectileStruct;` |

**说明:**

> 发射器的配置

---

### 属性 `ActivationVFXScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FVector ActivationVFXScale = FVector::One();` |

**说明:**

> 粒子的缩放

---

### 属性 `TrailVFXScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FVector TrailVFXScale = FVector::One();` |

**说明:**

> 粒子的缩放

---

### 属性 `ImpactVFXScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FVector ImpactVFXScale = FVector::One();` |

**说明:**

> 粒子的缩放

---

### 属性 `MyTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId MyTeamID;` |

**说明:**

> 投射物所属的队伍ID

---

### 属性 `CalculateCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int CalculateCount;` |

**说明:**

> 投射物的伤害次数 -1为无限次数

---

### 属性 `ProjectileSpecHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) TMap<ETargetClassType,FAllGameplayEffectSpecHandles> ProjectileSpecHandles;` |

**说明:**

> 投射物的效果

---

### 属性 `Direction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) FVector Direction = FVector::Zero();` |

**说明:**

> 方向

---

### 属性 `InitializationComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool InitializationComplete = false;` |

**说明:**

> 是否初始化完成

---

### 属性 `SkillEntrySpawnContext`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEastRimWorldProjectileSkillEntrySpawnContext](../../MartialArts/EastRimWorldProjectileSkillEntryContext__FEastRimWorldProjectileSkillEntrySpawnContext.md) |
| 反射说明符 | BlueprintReadOnly, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "SkillEntry") FEastRimWorldProjectileSkillEntrySpawnContext SkillEntrySpawnContext;` |

**说明:**

> 技能词条：投射物生成上下文（InitProjectile 时从 Pending 队列写入）

---

## 蓝图暴露函数

### 函数 `InitProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTransform` | `const FTransform &` |
| `InProjectileStruct` | `const FProjectileStruct &` |
| `InProjectileSpecHandles` | const TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> & |
| `InDirection` | `const FVector &` |
| `InTargetActor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitProjectile(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct, const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles, const FVector & InDirection, AActor * InTargetActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化投射物

---

### 函数 `LoadProjectileData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadProjectileData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载投射物需要的信息

---

### 函数 `SetProjectileSpeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInitialSpeed` | `float` |
| `InVelocity` | `FVector` |
| `true` | `bool bActivate =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetProjectileSpeed(float InInitialSpeed,FVector InVelocity,bool bActivate = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置投射物的速度

---

### 函数 `SetHomingTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHomingTargetComponent` | `USceneComponent *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetHomingTarget(USceneComponent * InHomingTargetComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置追踪目标

---

### 函数 `SearchTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void SearchTarget();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 搜寻目标

---

### 函数 `ApplyEffectToTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTargetActor` | `AActor *` |
| `HitPoint` | `const FVector &` |
| `HitResult` | `const FHitResult&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ApplyEffectToTarget(AActor * InTargetActor,const FVector & HitPoint,const FHitResult& HitResult);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 施加效果给目标

---

### 函数 `SetCollisionAndVisibility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCollisionAndVisibility();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置碰撞显示

---

### 函数 `SetCloseCollision`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCloseCollision();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置碰撞关闭

---

### 函数 `PlaySound`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void PlaySound();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 播放音效

---

### 函数 `StartSpawnVFXAndSFX`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void StartSpawnVFXAndSFX();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 生成粒子特效和音效

---

### 函数 `OnHitSpawnVFXAndSFX`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTargetActor` | `AActor*` |
| `HitPoint` | `const FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void OnHitSpawnVFXAndSFX(AActor* InTargetActor,const FVector & HitPoint);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 碰撞时生成特效和音效

---

### 函数 `OnHitSpawnOtherProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `HitPoint` | `const FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent, BlueprintCallable) void OnHitSpawnOtherProjectile(const FVector & HitPoint);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 碰撞时生成其他投射物

---

### 函数 `ProjectileLaunch`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void ProjectileLaunch();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 投射物发射

---

### 函数 `CalculateLaunchVelocity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartLocation` | `FVector` |
| `EndLocation` | `FVector` |
| `InitialSpeed` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector CalculateLaunchVelocity(FVector StartLocation, FVector EndLocation, float InitialSpeed);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算发射的方向

---

### 函数 `AbilityProjectileEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AbilityProjectileEnd();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 投射物结束

---

### 函数 `BeforeRecycleProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BeforeRecycleProjectile();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 回收投射物之前执行的处理

---

### 函数 `ClearProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearProjectile();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清理

---

### 函数 `DotApplyEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DotApplyEffect();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> dot伤害应用效果

---

### 函数 `ClearProjectileFx`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ClearProjectileFx();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 清理特效

---
