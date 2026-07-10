# `class` `UAbilityCachePoolSystem`

**Source header:** `EastRimWorld/AbilitySystem/Pool/AbilityCachePoolSystem.h`

---

## Functional description (from header comments)

> Ability object cache pool world subsystem that caches and reuses projectiles, projectile emitters and scene text actors to avoid frequent spawn/destroy.

## Blueprint-exposed functions

### Function `GetVacancyAbilityProjectileEmitter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AbilityCachePoolSystem" |
| Return type | [AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InOwner` | `AActor *` |
| `nullptr` | TSubclassOf<[AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)> ProjectileEmitterClass = |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") AAbilityProjectileEmitterBase * GetVacancyAbilityProjectileEmitter(AActor * InOwner,TSubclassOf<AAbilityProjectileEmitterBase> ProjectileEmitterClass = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets a vacant ability projectile emitter from the cache pool, optionally by emitter class, and assigns its owner.

---

### Function `RecycleAbilityProjectileEmitter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityProjectileEmitter` | [AAbilityProjectileEmitterBase](../Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RecycleAbilityProjectileEmitter(AAbilityProjectileEmitterBase * AbilityProjectileEmitter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Recycles a finished ability projectile emitter back into the cache pool; returns whether recycling succeeded.

---

### Function `GetVacancyAbilityProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AbilityCachePoolSystem" |
| Return type | [AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InOwner` | `AActor*` |
| `nullptr` | TSubclassOf<[AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)> ProjectileClass = |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") AEastRimWorldProjectileBase * GetVacancyAbilityProjectile(AActor* InOwner,TSubclassOf<AEastRimWorldProjectileBase> ProjectileClass = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets a vacant ability projectile from the cache pool, optionally by projectile class, and assigns its owner.

---

### Function `RecycleAbilityProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AbilityCachePoolSystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityProjectile` | [AEastRimWorldProjectileBase](../Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") bool RecycleAbilityProjectile(AEastRimWorldProjectileBase* AbilityProjectile);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Recycles a finished ability projectile back into the cache pool; returns whether recycling succeeded.

---

### Function `GetVacancySceneTextActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AbilityCachePoolSystem" |
| Return type | [ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `nullptr` | TSubclassOf<[ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md)> SceneTextActorClass = |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") ASceneTextActor * GetVacancySceneTextActor(TSubclassOf<ASceneTextActor> SceneTextActorClass = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets a vacant scene text actor from the cache pool, optionally by actor class.

---

### Function `RecycleSceneTextActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AbilityCachePoolSystem" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SceneTextActor` | [ASceneTextActor](../SceneText/SceneTextActor__ASceneTextActor.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AbilityCachePoolSystem") bool RecycleSceneTextActor(ASceneTextActor* SceneTextActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Recycles a finished scene text actor back into the cache pool; returns whether recycling succeeded.

---

### Function `RecycleAllUseActor`

| Field | Details |
|------|------|
| Reflection specifiers | Category="AbilityCachePoolSystem" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(Blueprintable,Category="AbilityCachePoolSystem") void RecycleAllUseActor();`

**Usage:** See pins and category for this node in the Blueprint editor.

**Notes:**

> 回收所有使用中的Actor

---
