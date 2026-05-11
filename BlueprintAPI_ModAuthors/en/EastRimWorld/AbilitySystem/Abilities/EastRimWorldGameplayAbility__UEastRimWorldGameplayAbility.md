# `class` `UEastRimWorldGameplayAbility`

**Source header:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnActivateAbilityStateDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnActivateAbilityStateDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnActivateAbilityStateDelegate OnActivateAbilityStateDelegate;` |

---

### Property `ActivationGroup`

| Field | Details |
|------|------|
| C++ type | `EEastRimWorldAbilityActivationGroup` |
| Reflection specifiers | BlueprintReadOnly, Category="EastRimWorld|Ability Activation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation") EEastRimWorldAbilityActivationGroup ActivationGroup;` |

**Source comments:**

> Defines the relationship between this ability activating and other abilities activating.

---

### Property `AbilityType`

| Field | Details |
|------|------|
| C++ type | `EEastRimWorldAbilityType` |
| Reflection specifiers | BlueprintReadOnly, Category="EastRimWorld|Ability Activation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "EastRimWorld|Ability Activation") EEastRimWorldAbilityType AbilityType;` |

**Source comments:**

> Defines the relationship between this ability activating and other abilities activating.

---

### Property `AbilityUseState`

| Field | Details |
|------|------|
| C++ type | `EAbilityUseState` |
| Reflection specifiers | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") EAbilityUseState AbilityUseState = EAbilityUseState::Inactive;` |

---

### Property `AbilityUseStateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") float AbilityUseStateTime = 0.0f;` |

---

### Property `bCancelAbility`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EastRimWorld|Ability Activation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EastRimWorld|Ability Activation") bool bCancelAbility = false;` |

---

### Property `EffectContainerMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = GameplayEffects) TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**Source comments:**

> Map of gameplay tags to gameplay effect containers

---

### Property `GameAbilityStruct`

| Field | Details |
|------|------|
| C++ type | `FGameAbilityStruct` |
| Reflection specifiers | BlueprintReadOnly, Category="AbilityStruct" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="AbilityStruct") FGameAbilityStruct GameAbilityStruct;` |

---

### Property `IsAbort`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool IsAbort { false };` |

**Source comments:**

> 是否被打断

---

### Property `Activator`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AActor> Activator;` |

**Source comments:**

> 激活者

---

### Property `ProjectileHitEventData`

| Field | Details |
|------|------|
| C++ type | `FProjectileHitEventData` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FProjectileHitEventData ProjectileHitEventData;` |

**Source comments:**

> 投射物命中信息

---

### Property `BaseValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="ContrlEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float BaseValue = 0.1f;` |

**Source comments:**

> 基础值

---

### Property `Coefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="ContrlEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float Coefficient = 1.f;` |

**Source comments:**

> 系数

---

### Property `FixedValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="ContrlEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float FixedValue = 25.f;` |

**Source comments:**

> 固定值

---

### Property `FlyKnockAwayCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="ContrlEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "ContrlEffect") float FlyKnockAwayCoefficient = 5.f;` |

**Source comments:**

> 固定值

---

## Blueprint-exposed functions

### Function `GetEastRimWorldAbilitySystemComponentFromActorInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Ability" |
| Return type | [UEastRimWorldAbilitySystemComponent](../EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Ability") UEastRimWorldAbilitySystemComponent* GetEastRimWorldAbilitySystemComponentFromActorInfo() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetEastRimWorldCharacterFromActorInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Ability" |
| Return type | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Ability") AEastRimWorldCharacter * GetEastRimWorldCharacterFromActorInfo() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CanChangeActivationGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="EastRimWorld|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewGroup` | `EEastRimWorldAbilityActivationGroup` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue")) bool CanChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> Returns true if the requested activation group is a valid transition.

---

### Function `ChangeActivationGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="EastRimWorld|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewGroup` | `EEastRimWorldAbilityActivationGroup` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "EastRimWorld|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue")) bool ChangeActivationGroup(EEastRimWorldAbilityActivationGroup NewGroup);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> Tries to change the activation group.  Returns true if it successfully changed.

---

### Function `ScriptOnAbilityFailedToActivate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FailedReason` | `const FGameplayTagContainer&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void ScriptOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const;`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> Called when the ability fails to activate

---

### Function `K2_OnAbilityAdded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityAdded") void K2_OnAbilityAdded();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> Called when this ability is granted to the ability system component.

---

### Function `K2_OnAbilityRemoved`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityRemoved") void K2_OnAbilityRemoved();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> Called when this ability is removed from the ability system component.

---

### Function `K2_OnPawnAvatarSet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnPawnAvatarSet") void K2_OnPawnAvatarSet();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> Called when the ability system is initialized with a pawn avatar.

---

### Function `K2_OnCancelAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnCancelAbility") void K2_OnCancelAbility();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnActionBegin`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionBegin") void K2_OnActionBegin();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnActionLoop`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionLoop") void K2_OnActionLoop();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_OnActionEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, Category = Ability, DisplayName = "OnActionEnd") void K2_OnActionEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `MakeEffectContainerSpecFromContainer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FEastRimWorldGameplayEffectContainerSpec` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Container` | `const FEastRimWorldGameplayEffectContainer&` |
| `EventData` | `const FGameplayEventData&` |
| `(unnamed / type only)` | `int32 OverrideGameplayLevel = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability, meta=(AutoCreateRefTerm = "EventData")) virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const FEastRimWorldGameplayEffectContainer& Container, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Make gameplay effect container spec to be applied later, using the passed in container

---

### Function `MakeEffectContainerSpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FEastRimWorldGameplayEffectContainerSpec` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `(unnamed / type only)` | `int32 OverrideGameplayLevel = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual FEastRimWorldGameplayEffectContainerSpec MakeEffectContainerSpec(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Search for and make a gameplay effect container spec to be applied later, from the EffectContainerMap

---

### Function `ApplyEffectContainerSpecFormDynamicProperties`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FActiveGameplayEffectHandle>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `Attributes` | `const TMap<FGameplayAttribute, float> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpecFormDynamicProperties(FGameplayTag ContainerTag,const TMap<FGameplayAttribute, float> & Attributes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ApplyEffectContainerSpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FActiveGameplayEffectHandle>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContainerSpec` | `const FEastRimWorldGameplayEffectContainerSpec&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const FEastRimWorldGameplayEffectContainerSpec& ContainerSpec);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Applies a gameplay effect container spec that was previously created

---

### Function `ApplyEffectContainer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FActiveGameplayEffectHandle>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `(unnamed / type only)` | `int32 OverrideGameplayLevel = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Applies a gameplay effect container, by creating and then applying the spec

---

### Function `ApplyMartialArtsEffectContainer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FActiveGameplayEffectHandle>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContainerTag` | `FGameplayTag` |
| `EventData` | `const FGameplayEventData&` |
| `(unnamed / type only)` | `int32 OverrideGameplayLevel = -1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = Ability, meta = (AutoCreateRefTerm = "EventData")) virtual TArray<FActiveGameplayEffectHandle> ApplyMartialArtsEffectContainer(FGameplayTag ContainerTag, const FGameplayEventData& EventData, int32 OverrideGameplayLevel = -1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 应用额外的效果

---

### Function `GetOnActivateAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UGameplayAbility *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilitySpec` | `const FGameplayAbilitySpec &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UGameplayAbility * GetOnActivateAbility(const FGameplayAbilitySpec & GameplayAbilitySpec);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取此技能的实例

---

### Function `GenerateSpecHandles`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Projectile" |
| Return type | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](../Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InputMap` | `const TMap<ETargetClassType,FProjectileGEConfig> &` |
| `TargetActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Projectile") TMap<ETargetClassType,FAllGameplayEffectSpecHandles> GenerateSpecHandles(const TMap<ETargetClassType,FProjectileGEConfig> & InputMap,AActor * TargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 生成递给投射物的实例  Class->Spec

---

### Function `AddEffectContainerMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InEffectContainerMap` | `const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddEffectContainerMap(const TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> & InEffectContainerMap);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动态的增加此能力的效果

---

### Function `GetGameAbilityStruct`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameAbilityStruct &` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGameAbilityStruct & GetGameAbilityStruct() { return GameAbilityStruct; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取技能结构

---

### Function `ConstructionSummon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Summon" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SummonMap` | `const TMap<FName,int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Summon") void ConstructionSummon(const TMap<FName,int32>& SummonMap);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建召唤物

---

### Function `ConstructionProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Porjectile" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Porjectile") void ConstructionProjectile(AActor * TargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建投射物

---

### Function `SpawnProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Porjectile" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityProjectile` | `const FAbilityProjectileStruct &` |
| `TargetActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="Porjectile") void SpawnProjectile(const FAbilityProjectileStruct & AbilityProjectile,AActor * TargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 生成投射物

---

### Function `AbilitySpawnSummon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void AbilitySpawnSummon();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 生成召唤物

---

### Function `AbilitySpawnProjectile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ProjectileOwner` | `const AActor*` |
| `ProjectileConfig` | `UPARAM(ref) const FProjectileStruct&` |
| `InputMap` | UPARAM(ref) const TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](../Projectile/AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void AbilitySpawnProjectile(const AActor* ProjectileOwner,UPARAM(ref) const FProjectileStruct& ProjectileConfig,UPARAM(ref) const TMap<ETargetClassType,FAllGameplayEffectSpecHandles>& InputMap);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 生成召唤物

---

### Function `TriggerSpawnProjectileByEventTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventTag` | `FGameplayTag` |
| `TargetActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerSpawnProjectileByEventTag(FGameplayTag EventTag,AActor * TargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过事件标签触发生成投射物

---

### Function `SetActionAbilityFinish`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Action" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "Action") void SetActionAbilityFinish();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置动作能力完成

---

### Function `K2_SetActionAbilityFinish`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Action" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,Category= "Action",DisplayName = "SetActionAbilityFinish") void K2_SetActionAbilityFinish();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `AbortAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Action" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Action") void AbortAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 中断能力

---

### Function `CheckCanAbortAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) bool CheckCanAbortAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 检查能否打断此能力

---

### Function `RemoveWorkWarpTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Action" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Action") void RemoveWorkWarpTarget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_RemoveWorkWarpTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Action" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,Category = "Action",DisplayName= "RemoveWorkWarpTarget") void K2_RemoveWorkWarpTarget();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `GetBeatBackTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetBeatBackTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击退时间

---

### Function `GetKnockAwayTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetKnockAwayTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击倒时间

---

### Function `GetStrikeToFlyTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击飞的时间

---

### Function `GetStrikeToFlyKnockAwayTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyKnockAwayTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击飞后倒地时间

---

### Function `GetStrikeToFlyDistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyDistance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击飞的距离

---

### Function `GetStrikeToFlyHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ContrlEffect" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "ContrlEffect") float GetStrikeToFlyHeight();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取击飞的高度

---

### Function `K2_ContinuePlayAbilityAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ContinuePlayAbilityAnimation") void K2_ContinuePlayAbilityAnimation();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `SaveGameplayAbilityData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaveData` | [FGameplayAbilitySaveData](../../ERW_CommonTypes__FGameplayAbilitySaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void SaveGameplayAbilityData(FGameplayAbilitySaveData& SaveData);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 存储GA数据

---
