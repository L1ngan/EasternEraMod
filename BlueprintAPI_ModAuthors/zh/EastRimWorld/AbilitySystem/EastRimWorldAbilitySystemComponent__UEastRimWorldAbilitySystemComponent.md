# `class` `UEastRimWorldAbilitySystemComponent`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent.h`

---

## 功能说明（来自头文件注释）

> 项目自定义技能系统组件：技能激活分组、GE/Buff构建与施加、冷却操作、运行时技能配置注入等

## 蓝图暴露函数

### 函数 `GetAbilitySystemComponentFromActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UEastRimWorldAbilitySystemComponent](EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |
| `false` | `bool LookForComponent =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static UEastRimWorldAbilitySystemComponent * GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返回所属

---

### 函数 `MakeGrowUpEffectSpecApplyByAttributes`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FActiveGameplayEffectHandle` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Attributes` | `const TMap<FGameplayAttribute, float> &` |
| `GrowUpEffectClass` | `TSoftClassPtr<UGameplayEffect>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FActiveGameplayEffectHandle MakeGrowUpEffectSpecApplyByAttributes(const TMap<FGameplayAttribute, float> & Attributes,TSoftClassPtr<UGameplayEffect> GrowUpEffectClass);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 构建生成升级ge 并施加给自身

---

### 函数 `GenerateSpecHandles`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Projectile" |
| 返回类型 | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InputMap` | `const TMap<ETargetClassType,FProjectileGEConfig> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category="Projectile") TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成递给投射物的GE Spec实例，按目标类型将配置的GE类构建为Spec句柄映射

---

### 函数 `MakeCounterattackDamageGameplayEffectSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayEffectSpecHandle` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayEffect` | `const TSubclassOf<UGameplayEffect>&` |
| `InDamageType` | `EDamageType` |
| `DamageValue` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGameplayEffectSpecHandle MakeCounterattackDamageGameplayEffectSpec(const TSubclassOf<UGameplayEffect>& GameplayEffect,EDamageType InDamageType,float DamageValue) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 构建反伤GE

---

### 函数 `MergeMartialArtsSkillEntryDamageExecutionToSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SkillEntry|MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameMode` | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `LearnData` | const [FMartialArtsLearnData](../Struct/MartialArts__FMartialArtsLearnData.md)& |
| `SpecHandle` | `UPARAM(ref) FGameplayEffectSpecHandle&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SkillEntry|MartialArts") static void MergeMartialArtsSkillEntryDamageExecutionToSpec( AERW_GameModeBase* GameMode, const FMartialArtsLearnData& LearnData, UPARAM(ref) FGameplayEffectSpecHandle& SpecHandle);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将武学已解锁等级上的技能词条 ChangeDamageExecutionParam 合并进即将施加的伤害/治疗 GE Spec（需在 Apply 前调用）。

---

### 函数 `K2_ExecuteGameplayEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SpecHandle` | `const FGameplayEffectSpecHandle &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void K2_ExecuteGameplayEffect(const FGameplayEffectSpecHandle & SpecHandle);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 蓝图调用：执行（施加）给定的GameplayEffect Spec

---

### 函数 `GetCanActivateAbilityByUsageScenario`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGameplayAbilitySpec>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityUsageScenario` | `EAbilityUsageScenario` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FGameplayAbilitySpec> GetCanActivateAbilityByUsageScenario(EAbilityUsageScenario AbilityUsageScenario);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定使用场景下当前可激活的技能Spec列表

---

### 函数 `TryActivateAbilityWithInstigator`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActivator` | `AActor *` |
| `AbilityTag` | `const FGameplayTagContainer &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TryActivateAbilityWithInstigator(AActor * InActivator,const FGameplayTagContainer & AbilityTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 煽动者尝试通过标签激活技能

---

### 函数 `GetGameplayAbilityByHandle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UEastRimWorldGameplayAbility](Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `HandleString` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UEastRimWorldGameplayAbility* GetGameplayAbilityByHandle(const FString& HandleString);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过Handle获得能力

---

### 函数 `SendGameplayEventToTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InstigatorActor` | `AActor*` |
| `TargetActor` | `AActor*` |
| `EventTag` | `FGameplayTag` |
| `ProjectileHitEventData` | `const FProjectileHitEventData &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS") static void SendGameplayEventToTarget(AActor* InstigatorActor,AActor* TargetActor,FGameplayTag EventTag,const FProjectileHitEventData & ProjectileHitEventData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过tag调用目标能力

---

### 函数 `ReduceCooldownByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS|Cooldown" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CooldownTag` | `FGameplayTag` |
| `TimeToReduce` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTag(FGameplayTag CooldownTag, float TimeToReduce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 减少指定冷却标签的剩余时间

---

### 函数 `ReduceCooldownByTags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS|Cooldown" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CooldownTags` | `const FGameplayTagContainer&` |
| `TimeToReduce` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTags(const FGameplayTagContainer& CooldownTags, float TimeToReduce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 减少多个标签的冷却

---

### 函数 `GetCooldownTimeRemainingByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS|Cooldown" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CooldownTag` | `FGameplayTagContainer` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByTag(FGameplayTagContainer CooldownTag) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定冷却标签的剩余冷却时间

---

### 函数 `GetCooldownTimeRemainingByAbilityTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS|Cooldown" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityTag` | `FGameplayTag` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByAbilityTag(FGameplayTag AbilityTag) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定技能标签的剩余冷却时间

---

### 函数 `UpdateElixirAddAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateElixirAddAttribute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新丹药增加的属性值

---

### 函数 `UpdateConsumablePermanentAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateConsumablePermanentAttribute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新耗材永久属性效果增加的属性值（按角色已获得的耗材永久效果记录重新构建GE施加给自身 仿丹药做法）

---

### 函数 `CancelAbilityBySpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GAS" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySpec` | `const FGameplayAbilitySpec&` |
| `false` | `bool bReplicateCancelAbility =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "GAS") bool CancelAbilityBySpec(const FGameplayAbilitySpec& AbilitySpec, bool bReplicateCancelAbility = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消指定技能

---
