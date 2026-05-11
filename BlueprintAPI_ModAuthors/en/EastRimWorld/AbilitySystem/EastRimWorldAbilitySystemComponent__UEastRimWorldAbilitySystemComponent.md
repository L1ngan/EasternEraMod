# `class` `UEastRimWorldAbilitySystemComponent`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `GetAbilitySystemComponentFromActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UEastRimWorldAbilitySystemComponent](EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `const AActor*` |
| `false` | `bool LookForComponent =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UEastRimWorldAbilitySystemComponent * GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 返回所属

---

### Function `MakeGrowUpEffectSpecApplyByAttributes`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FActiveGameplayEffectHandle` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Attributes` | `const TMap<FGameplayAttribute, float> &` |
| `GrowUpEffectClass` | `TSoftClassPtr<UGameplayEffect>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FActiveGameplayEffectHandle MakeGrowUpEffectSpecApplyByAttributes(const TMap<FGameplayAttribute, float> & Attributes,TSoftClassPtr<UGameplayEffect> GrowUpEffectClass);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 构建生成升级ge 并施加给自身

---

### Function `GenerateSpecHandles`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Projectile" |
| Return type | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InputMap` | `const TMap<ETargetClassType,FProjectileGEConfig> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Projectile") TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `MakeCounterattackDamageGameplayEffectSpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayEffectSpecHandle` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayEffect` | `const TSubclassOf<UGameplayEffect>&` |
| `InDamageType` | `EDamageType` |
| `DamageValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGameplayEffectSpecHandle MakeCounterattackDamageGameplayEffectSpec(const TSubclassOf<UGameplayEffect>& GameplayEffect,EDamageType InDamageType,float DamageValue) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 构建反伤GE

---

### Function `SetDamageExecutionMultiplierOnSpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GameplayEffect|Damage" |
| Return type | `FGameplayEffectSpecHandle` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SpecHandle` | `FGameplayEffectSpecHandle` |
| `Multiplier` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GameplayEffect|Damage") static FGameplayEffectSpecHandle SetDamageExecutionMultiplierOnSpec(FGameplayEffectSpecHandle SpecHandle, float Multiplier);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 为即将施加的伤害 GE Spec 设置单次 Execution 乘数（不影响属性捕获；仅 UEastRimWorldDamageExecution 读取）。小于 0 按 0 处理。

---

### Function `K2_ExecuteGameplayEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SpecHandle` | `const FGameplayEffectSpecHandle &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void K2_ExecuteGameplayEffect(const FGameplayEffectSpecHandle & SpecHandle);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCanActivateAbilityByUsageScenario`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FGameplayAbilitySpec>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityUsageScenario` | `EAbilityUsageScenario` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FGameplayAbilitySpec> GetCanActivateAbilityByUsageScenario(EAbilityUsageScenario AbilityUsageScenario);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `TryActivateAbilityWithInstigator`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActivator` | `AActor *` |
| `AbilityTag` | `const FGameplayTagContainer &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TryActivateAbilityWithInstigator(AActor * InActivator,const FGameplayTagContainer & AbilityTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 煽动者尝试通过标签激活技能

---

### Function `GetGameplayAbilityByHandle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UEastRimWorldGameplayAbility](Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `HandleString` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UEastRimWorldGameplayAbility* GetGameplayAbilityByHandle(const FString& HandleString);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过Handle获得能力

---

### Function `SendGameplayEventToTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InstigatorActor` | `AActor*` |
| `TargetActor` | `AActor*` |
| `EventTag` | `FGameplayTag` |
| `ProjectileHitEventData` | `const FProjectileHitEventData &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS") static void SendGameplayEventToTarget(AActor* InstigatorActor,AActor* TargetActor,FGameplayTag EventTag,const FProjectileHitEventData & ProjectileHitEventData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过tag调用目标能力

---

### Function `ReduceCooldownByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS|Cooldown" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CooldownTag` | `FGameplayTag` |
| `TimeToReduce` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTag(FGameplayTag CooldownTag, float TimeToReduce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 减少指定冷却标签的剩余时间

---

### Function `ReduceCooldownByTags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS|Cooldown" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CooldownTags` | `const FGameplayTagContainer&` |
| `TimeToReduce` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTags(const FGameplayTagContainer& CooldownTags, float TimeToReduce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 减少多个标签的冷却

---

### Function `GetCooldownTimeRemainingByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS|Cooldown" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CooldownTag` | `FGameplayTagContainer` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByTag(FGameplayTagContainer CooldownTag) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定冷却标签的剩余冷却时间

---

### Function `GetCooldownTimeRemainingByAbilityTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS|Cooldown" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityTag` | `FGameplayTag` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByAbilityTag(FGameplayTag AbilityTag) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定技能标签的剩余冷却时间

---

### Function `UpdateElixirAddAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateElixirAddAttribute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新丹药增加的属性值

---

### Function `CancelAbilityBySpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GAS" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilitySpec` | `const FGameplayAbilitySpec&` |
| `false` | `bool bReplicateCancelAbility =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "GAS") bool CancelAbilityBySpec(const FGameplayAbilitySpec& AbilitySpec, bool bReplicateCancelAbility = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 取消指定技能

---
