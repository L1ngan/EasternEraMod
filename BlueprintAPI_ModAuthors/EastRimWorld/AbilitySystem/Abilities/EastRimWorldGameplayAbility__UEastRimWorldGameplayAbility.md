# `class` `UEastRimWorldGameplayAbility`

**源码头文件：** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnActivateAbilityStateDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnActivateAbilityStateDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnActivateAbilityStateDelegate OnActivateAbilityStateDelegate;` |

---

### 属性 `ActivationGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEastRimWorldAbilityActivationGroup` |
| 反射说明符 | BlueprintReadOnly, Category="EastRimWorld|Ability Activation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation") EEastRimWorldAbilityActivationGroup ActivationGroup;` |

**源码注释：**

> Defines the relationship between this ability activating and other abilities activating.

---

### 属性 `AbilityType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEastRimWorldAbilityType` |
| 反射说明符 | BlueprintReadOnly, Category="EastRimWorld|Ability Activation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation") EEastRimWorldAbilityType AbilityType;` |

**源码注释：**

> Defines the relationship between this ability activating and other abilities activating.

---

### 属性 `AbilityUseState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAbilityUseState` |
| 反射说明符 | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") EAbilityUseState AbilityUseState = EAbilityUseState::Inactive;` |

---

### 属性 `AbilityUseStateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") float AbilityUseStateTime = 0.0f;` |

---

### 属性 `bCancelAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") bool bCancelAbility = false;` |

---

### 属性 `EffectContainerMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = GameplayEffects) TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**源码注释：**

> Map of gameplay tags to gameplay effect containers

---

### 属性 `GameAbilityStruct`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameAbilityStruct` |
| 反射说明符 | BlueprintReadOnly, Category="AbilityStruct" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="AbilityStruct") FGameAbilityStruct GameAbilityStruct;` |

---

### 属性 `IsAbort`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool IsAbort { false };` |

**源码注释：**

> 是否被打断

---

### 属性 `Activator`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AActor> Activator;` |

**源码注释：**

> 激活者

---

### 属性 `ProjectileHitEventData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FProjectileHitEventData` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FProjectileHitEventData ProjectileHitEventData;` |

**源码注释：**

> 投射物命中信息

---

### 属性 `BaseValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="ContrlEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float BaseValue = 0.1f;` |

**源码注释：**

> 基础值

---

### 属性 `Coefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="ContrlEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float Coefficient = 1.f;` |

**源码注释：**

> 系数

---

### 属性 `FixedValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="ContrlEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float FixedValue = 25.f;` |

**源码注释：**

> 固定值

---

### 属性 `FlyKnockAwayCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="ContrlEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float FlyKnockAwayCoefficient = 5.f;` |

**源码注释：**

> 固定值

---

## 蓝图暴露函数

### 函数 `GetEastRimWorldAbilitySystemComponentFromActorInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Ability" |
| 返回类型 | [UEastRimWorldAbilitySystemComponent](../EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Ability") UEastRimWorldAbilitySystemComponent* GetEastRimWorldAbilitySystemComponentFromActorInfo() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetEastRimWorldCharacterFromActorInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Ability" |
| 返回类型 | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Ability") AEastRimWorldCharacter * GetEastRimWorldCharacterFromActorInfo() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CanChangeActivationGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="EastRimWorld|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewGroup` | `EEastRimWorldAbilityActivationGroup` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue")) bool CanChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> Returns true if the requested activation group is a valid transition.

---

### 函数 `ChangeActivationGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="EastRimWorld|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewGroup` | `EEastRimWorldAbilityActivationGroup` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue")) bool ChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> Tries to change the activation group.  Returns true if it successfully changed.

---

### 函数 `ScriptOnAbilityFailedToActivate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FailedReason` | `const FGameplayTagContainer&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void ScriptOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> Called when the ability fails to activate

---

### 函数 `K2_OnAbilityAdded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityAdded") void K2_OnAbilityAdded();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> Called when this ability is granted to the ability system component.

---

### 函数 `K2_OnAbilityRemoved`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityRemoved") void K2_OnAbilityRemoved();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> Called when this ability is removed from the ability system component.

---

### 函数 `K2_OnPawnAvatarSet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnPawnAvatarSet") void K2_OnPawnAvatarSet();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> Called when the ability system is initialized with a pawn avatar.

---

### 函数 `K2_OnCancelAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnCancelAbility") void K2_OnCancelAbility();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnActionBegin`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionBegin") void K2_OnActionBegin();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnActionLoop`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionLoop") void K2_OnActionLoop();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_OnActionEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionEnd") void K2_OnActionEnd();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `MakeEffectContainerSpecFromContainer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FEastRimWorldGameplayEffectContainerSpec` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Container` | `const FEastRimWorldGameplayEffectContainer&` |
| `EventData` | `const FGameplayEventData&` |
| `（匿名/仅类型）` | `int32 OverrideGameplayLevel = -1` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability, meta=(AutoCreateRefTerm = "EventData")) virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FEastRimWorldGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Make gameplay effect container spec to be applied later, using the passed in container

---

### 函数 `MakeEffectContainerSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FEastRimWorldGameplayEffectContainerSpec` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `（匿名/仅类型）` | `int32 OverrideGameplayLevel = -1` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap

---

### 函数 `ApplyEffectContainerSpecFormDynamicProperties`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FActiveGameplayEffectHandle>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `Attributes` | `const TMap<FGameplayAttribute, float> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpecFormDynamicProperties(FGameplayTag ContainerTag,const TMap<FGameplayAttribute, float> & Attributes);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ApplyEffectContainerSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FActiveGameplayEffectHandle>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContainerSpec` | `const FEastRimWorldGameplayEffectContainerSpec&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FEastRimWorldGameplayEffectContainerSpec& ContainerSpec);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Applies a gameplay effect container spec that was previously created

---

### 函数 `ApplyEffectContainer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FActiveGameplayEffectHandle>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `（匿名/仅类型）` | `int32 OverrideGameplayLevel = -1` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Applies a gameplay effect container, by creating and then applying the spec

---

### 函数 `ApplyMartialArtsEffectContainer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FActiveGameplayEffectHandle>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `（匿名/仅类型）` | `int32 OverrideGameplayLevel = -1` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyMartialArtsEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 应用额外的效果

---

### 函数 `GetOnActivateAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UGameplayAbility *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilitySpec` | `const FGameplayAbilitySpec &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UGameplayAbility * GetOnActivateAbility(const FGameplayAbilitySpec & GameplayAbilitySpec);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取此技能的实例

---

### 函数 `GenerateSpecHandles`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Projectile" |
| 返回类型 | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](../Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InputMap` | `const TMap<ETargetClassType,FProjectileGEConfig> &` |
| `TargetActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="Projectile") TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap,AActor * TargetActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成递给投射物的实例  Class->Spec

---

### 函数 `AddEffectContainerMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InEffectContainerMap` | `const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddEffectContainerMap(const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> & InEffectContainerMap);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 动态的增加此能力的效果

---

### 函数 `GetGameAbilityStruct`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameAbilityStruct &` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGameAbilityStruct & GetGameAbilityStruct() { return GameAbilityStruct; }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取技能结构

---

### 函数 `ConstructionSummon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Summon" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SummonMap` | `const TMap<FName,int32>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "Summon") void ConstructionSummon(const TMap<FName,int32>& SummonMap);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建召唤物

---

### 函数 `ConstructionProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Porjectile" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="Porjectile") void ConstructionProjectile(AActor * TargetActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建投射物

---

### 函数 `SpawnProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Porjectile" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityProjectile` | `const FAbilityProjectileStruct &` |
| `TargetActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="Porjectile") void SpawnProjectile(const FAbilityProjectileStruct & AbilityProjectile,AActor * TargetActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成投射物

---

### 函数 `AbilitySpawnSummon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void AbilitySpawnSummon();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 生成召唤物

---

### 函数 `AbilitySpawnProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ProjectileOwner` | `const AActor*` |
| `ProjectileConfig` | `UPARAM(ref) const FProjectileStruct&` |
| `InputMap` | UPARAM(ref) const TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](../Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void AbilitySpawnProjectile(const AActor* ProjectileOwner,UPARAM(ref) const FProjectileStruct& ProjectileConfig,UPARAM(ref) const TMap<ETargetClassType,FAllGameplayEffectSpecHandles>& InputMap);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 生成召唤物

---

### 函数 `TriggerSpawnProjectileByEventTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventTag` | `FGameplayTag` |
| `TargetActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TriggerSpawnProjectileByEventTag(FGameplayTag EventTag,AActor * TargetActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过事件标签触发生成投射物

---

### 函数 `SetActionAbilityFinish`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Action" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "Action") void SetActionAbilityFinish();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置动作能力完成

---

### 函数 `K2_SetActionAbilityFinish`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Action" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,Category= "Action",DisplayName = "SetActionAbilityFinish") void K2_SetActionAbilityFinish();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `AbortAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Action" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "Action") void AbortAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 中断能力

---

### 函数 `CheckCanAbortAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) bool CheckCanAbortAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 检查能否打断此能力

---

### 函数 `RemoveWorkWarpTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Action" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "Action") void RemoveWorkWarpTarget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_RemoveWorkWarpTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Action" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,Category = "Action",DisplayName= "RemoveWorkWarpTarget") void K2_RemoveWorkWarpTarget();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `GetBeatBackTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetBeatBackTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击退时间

---

### 函数 `GetKnockAwayTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetKnockAwayTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击倒时间

---

### 函数 `GetStrikeToFlyTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击飞的时间

---

### 函数 `GetStrikeToFlyKnockAwayTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyKnockAwayTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击飞后倒地时间

---

### 函数 `GetStrikeToFlyDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyDistance();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击飞的距离

---

### 函数 `GetStrikeToFlyHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ContrlEffect" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyHeight();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取击飞的高度

---

### 函数 `K2_ContinuePlayAbilityAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ContinuePlayAbilityAnimation") void K2_ContinuePlayAbilityAnimation();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `SaveGameplayAbilityData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SaveData` | [FGameplayAbilitySaveData](../../ERW_CommonTypes__FGameplayAbilitySaveData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void SaveGameplayAbilityData(FGameplayAbilitySaveData& SaveData);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 存储GA数据

---
