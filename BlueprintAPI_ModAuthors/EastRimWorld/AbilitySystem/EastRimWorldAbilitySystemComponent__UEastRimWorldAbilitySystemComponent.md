# `class` `UEastRimWorldAbilitySystemComponent`

**源码头文件：** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySystemComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `GetAbilitySystemComponentFromActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UEastRimWorldAbilitySystemComponent *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |
| `false` | `bool LookForComponent =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UEastRimWorldAbilitySystemComponent * GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FActiveGameplayEffectHandle MakeGrowUpEffectSpecApplyByAttributes(const TMap<FGameplayAttribute, float> & Attributes,TSoftClassPtr<UGameplayEffect> GrowUpEffectClass);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 构建生成升级ge 并施加给自身

---

### 函数 `GenerateSpecHandles`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Projectile" |
| 返回类型 | `TMap<ETargetClassType,FAllGameplayEffectSpecHandles>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InputMap` | `const TMap<ETargetClassType,FProjectileGEConfig> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="Projectile") TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGameplayEffectSpecHandle MakeCounterattackDamageGameplayEffectSpec(const TSubclassOf<UGameplayEffect>& GameplayEffect,EDamageType InDamageType,float DamageValue) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 构建反伤GE

---

### 函数 `SetDamageExecutionMultiplierOnSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GameplayEffect|Damage" |
| 返回类型 | `FGameplayEffectSpecHandle` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SpecHandle` | `FGameplayEffectSpecHandle` |
| `Multiplier` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GameplayEffect|Damage") static FGameplayEffectSpecHandle SetDamageExecutionMultiplierOnSpec(FGameplayEffectSpecHandle SpecHandle, float Multiplier);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 为即将施加的伤害 GE Spec 设置单次 Execution 乘数（不影响属性捕获；仅 UEastRimWorldDamageExecution 读取）。小于 0 按 0 处理。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void K2_ExecuteGameplayEffect(const FGameplayEffectSpecHandle & SpecHandle);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FGameplayAbilitySpec> GetCanActivateAbilityByUsageScenario(EAbilityUsageScenario AbilityUsageScenario);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TryActivateAbilityWithInstigator(AActor * InActivator,const FGameplayTagContainer & AbilityTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 煽动者尝试通过标签激活技能

---

### 函数 `GetGameplayAbilityByHandle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UEastRimWorldGameplayAbility*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `HandleString` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UEastRimWorldGameplayAbility* GetGameplayAbilityByHandle(const FString& HandleString);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS") static void SendGameplayEventToTarget(AActor* InstigatorActor,AActor* TargetActor,FGameplayTag EventTag,const FProjectileHitEventData & ProjectileHitEventData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTag(FGameplayTag CooldownTag, float TimeToReduce);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") void ReduceCooldownByTags(const FGameplayTagContainer& CooldownTags, float TimeToReduce);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByTag(FGameplayTagContainer CooldownTag) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS|Cooldown") float GetCooldownTimeRemainingByAbilityTag(FGameplayTag AbilityTag) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取指定技能标签的剩余冷却时间

---

### 函数 `UpdateElixirAddAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateElixirAddAttribute();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新丹药增加的属性值

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "GAS") bool CancelAbilityBySpec(const FGameplayAbilitySpec& AbilitySpec, bool bReplicateCancelAbility = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消指定技能

---
