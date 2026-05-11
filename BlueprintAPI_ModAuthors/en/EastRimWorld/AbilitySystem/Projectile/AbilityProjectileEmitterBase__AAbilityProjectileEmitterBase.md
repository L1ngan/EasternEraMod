# `class` `AAbilityProjectileEmitterBase`

**Source header:** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

## Functional description (from header comments)

> 发射器

## Blueprint-exposed variables

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

### Property `MainAttackTarget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor> MainAttackTarget;` |

**Source comments:**

> 主要的攻击目标

---

## Blueprint-exposed functions

### Function `GetMultipleTargets`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<AActor*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetNumber` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AActor*> GetMultipleTargets(int TargetNumber);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取多个目标

---

### Function `AbilityProjectileEmitterEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AbilityProjectileEmitterEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_AbilityProjectileEmitterEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="AbilityProjectileEmitterEnd")) void K2_AbilityProjectileEmitterEnd();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "AbilityProjectileEmitterEnd".

---

### Function `InitProjectileEmitter`

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
| `nullptr` | `AActor * InMainAttackTarget =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitProjectileEmitter(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct,const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles,AActor * InMainAttackTarget = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化发射器

---

### Function `EmitterStartLaunch`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EmitterStartLaunch();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_EmitterStartLaunch`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="EmitterStartLaunch")) void K2_EmitterStartLaunch();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "EmitterStartLaunch".

---
