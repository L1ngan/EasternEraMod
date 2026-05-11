# `class` `UAbilityCachePoolSystem`

**源码头文件:** `EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `GetVacancyAbilityProjectileEmitter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AbilityCachePoolSystem" |
| 返回类型 | [AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InOwner` | `AActor *` |
| `nullptr` | TSubclassOf<[AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)> ProjectileEmitterClass = |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") AAbilityProjectileEmitterBase * GetVacancyAbilityProjectileEmitter(AActor * InOwner,TSubclassOf<AAbilityProjectileEmitterBase> ProjectileEmitterClass = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RecycleAbilityProjectileEmitter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityProjectileEmitter` | [AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RecycleAbilityProjectileEmitter(AAbilityProjectileEmitterBase * AbilityProjectileEmitter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetVacancyAbilityProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AbilityCachePoolSystem" |
| 返回类型 | [AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InOwner` | `AActor*` |
| `nullptr` | TSubclassOf<[AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)> ProjectileClass = |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") AEastRimWorldProjectileBase * GetVacancyAbilityProjectile(AActor* InOwner,TSubclassOf<AEastRimWorldProjectileBase> ProjectileClass = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RecycleAbilityProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AbilityCachePoolSystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityProjectile` | [AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") bool RecycleAbilityProjectile(AEastRimWorldProjectileBase* AbilityProjectile);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetVacancySceneTextActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AbilityCachePoolSystem" |
| 返回类型 | [ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `nullptr` | TSubclassOf<[ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md)> SceneTextActorClass = |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") ASceneTextActor * GetVacancySceneTextActor(TSubclassOf<ASceneTextActor> SceneTextActorClass = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RecycleSceneTextActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AbilityCachePoolSystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SceneTextActor` | [ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") bool RecycleSceneTextActor(ASceneTextActor* SceneTextActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RecycleAllUseActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | Category="AbilityCachePoolSystem" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(Blueprintable,Category="AbilityCachePoolSystem") void RecycleAllUseActor();`

**用法说明:** 详见蓝图编辑器中该节点的引脚与分类。

**源码注释:**

> 回收所有使用中的Actor

---
