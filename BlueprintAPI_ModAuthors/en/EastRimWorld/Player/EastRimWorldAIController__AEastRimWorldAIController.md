# `class` `AEastRimWorldAIController`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## Functional description (from header comments)

> AEastRimWorldPlayerBotController
> The controller class used by player bots in this project.

## Blueprint-exposed variables

### Property `OnActionChangeEvent`

| Field | Details |
|------|------|
| C++ type | `FOnActionChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnActionChange OnActionChangeEvent;` |

**Source comments:**

> [自定义事件]当AI的行为发生改变

---

### Property `OnWeaponChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWeaponChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWeaponChanged OnWeaponChanged;` |

---

### Property `OnEquipmentChanged`

| Field | Details |
|------|------|
| C++ type | `FOnEquipmentChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnEquipmentChanged OnEquipmentChanged;` |

---

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

---

### Property `AIPerceptionComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UAIPerceptionComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="AIPerception" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AIPerception", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;` |

---

### Property `PlanComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_PlanComponent](../GOAP/GOAP_PlanComponent__UGOAP_PlanComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) UGOAP_PlanComponent* PlanComponent { nullptr };` |

**Source comments:**

> GOAP寻找计划组件

---

### Property `GOAP_MemoryComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_MemoryComponent](../GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) UGOAP_MemoryComponent* GOAP_MemoryComponent { nullptr };` |

**Source comments:**

> GOAP记忆组件

---

### Property `GoapActionComponent`

| Field | Details |
|------|------|
| C++ type | [UGOAP_ActionComponent](../GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) UGOAP_ActionComponent* GoapActionComponent{ nullptr };` |

---

### Property `GameplayAbilities`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName , UEastRimWorldGameplayAbility*> GameplayAbilities;` |

**Source comments:**

> GOAP目标对应的能力
> TMap<GOAP目标 , 能力>

---

### Property `AttributeGEs`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , FActiveGameplayEffectHandle>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName , FActiveGameplayEffectHandle> AttributeGEs;` |

**Source comments:**

> GOAP属性值对应的GE
> TMap<GOAP属性 , 对应的GE>

---

### Property `AttributeTimers`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FName , int32> AttributeTimers;` |

**Source comments:**

> GOAP属性值对应的Timer
> TMap<GOAP属性 , TimerID>

---

### Property `OwnFacilities`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FUObjectData](../ERW_CommonTypes__FUObjectData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , FUObjectData> OwnFacilities;` |

**Source comments:**

> GOAP目标ID对应的专属设备数据
> TMap<GOAP目标ID , 设备数据>

---

### Property `FilterClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UNavigationQueryFilter>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**Source comments:**

> 角色使用的寻路类

---

### Property `GameInstance`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UERW_GameInstanceBase> GameInstance;` |

---

### Property `GameModeBase`

| Field | Details |
|------|------|
| C++ type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md) * |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase * GameModeBase = nullptr;` |

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### Property `ControlledCharacter`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AEastRimWorldCharacter> ControlledCharacter;` |

**Source comments:**

> 控制的角色

---

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FGuid SGUID;` |

**Source comments:**

> ~ Save

---

### Property `OutputWorkloadTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 OutputWorkloadTimerID { -1 };` |

**Source comments:**

> 输出工作量计时器ID

---

### Property `RecoverGA`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool RecoverGA { false };` |

**Source comments:**

> 是否是读档回来需要恢复GA

---

### Property `CacheAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FGOAP_Action CacheAction;` |

**Source comments:**

> 缓存Action

---

### Property `InControlledGoalId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName InControlledGoalId = TEXT("InControlled");` |

**Source comments:**

> 被控制的Goal的ID

---

### Property `AbilityReleaseTarget`

| Field | Details |
|------|------|
| C++ type | `AActor *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) AActor * AbilityReleaseTarget = nullptr;` |

**Source comments:**

> 当前技能的释放目标

---

### Property `CurSelectAbilitySpec`

| Field | Details |
|------|------|
| C++ type | `FGameplayAbilitySpec` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGameplayAbilitySpec CurSelectAbilitySpec;` |

**Source comments:**

> 当前选择释放的技能

---

### Property `PreRequisiteAbilitySpec`

| Field | Details |
|------|------|
| C++ type | `FGameplayAbilitySpec` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGameplayAbilitySpec PreRequisiteAbilitySpec;` |

**Source comments:**

> 当前选择的前置技能 额外移动等

---

### Property `Scoffer`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> Scoffer;` |

**Source comments:**

> 嘲讽者

---

### Property `SelfPerceiveHostileActors`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<AActor>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<TObjectPtr<AActor>> SelfPerceiveHostileActors;` |

**Source comments:**

> Update Team Attitude for the AI
> 自身感知到的敌对actor

---

### Property `Attackers`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<AActor*> Attackers;` |

**Source comments:**

> 攻击者 在脱离战斗后清理

---

### Property `HuntingTargetActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor> HuntingTargetActor;` |

**Source comments:**

> 狩猎的目标

---

### Property `BuildingActors`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<AActor>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<TObjectPtr<AActor>> BuildingActors;` |

**Source comments:**

> 感知到的建筑物

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,Category = "Equipment"); TMap<EArmorType,FCharacterApparel> Equipments;` |

**Source comments:**

> 携带的装备（实际是装备在身上的部位对应的装备信息）

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); TArray<FCharacterWeapon> Weapons;` |

**Source comments:**

> 携带的武器

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); FCharacterTool OwnTool;` |

**Source comments:**

> 携带的工具

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); FCharacterWeapon UseCharacterWeapon;` |

**Source comments:**

> 当前使用的武器

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); UInventoryItemInstance* UseCharacterWeaponInstance;` |

**Source comments:**

> 当前使用的武器实例

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); FCharacterWeapon NextChangeCharacterWeapon;` |

**Source comments:**

> 将要切换的武器

---

### Property `OnUpdateCharacterBehaviorState`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateCharacterBehaviorState` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateCharacterBehaviorState OnUpdateCharacterBehaviorState;` |

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); TMap<FActiveGameplayEffectHandle,FCharacterEquipment> EquipmentEffectHandles;` |

**Source comments:**

> 装备的effect handle

---

### Property `bClothingDisplay`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bClothingDisplay = true;` |

**Source comments:**

> 衣服是否显示

---

### Property `SummonsAI`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AEastRimWorldAIController> SummonsAI;` |

**Source comments:**

> 控制的召唤物

---

## Blueprint-exposed functions

### Function `GetAttributeRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetAttributeRate(const FName& AttributeName , float Percent) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得属性消耗比率

---

### Function `ShouldRemoveAttributeGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool ShouldRemoveAttributeGoal(const FName& AttributeName , float Percent) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否需要移除属性GOAP目标

---

### Function `GetWorkScheduleScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) float GetWorkScheduleScore(const FName& ScheduleID) const;`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得工作日程分值

---

### Function `CalcGoalScores`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Asset` | [UGamePlayConfigurationAsset](../Components/ERW_GameConfigComponent__UGamePlayConfigurationAsset.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void CalcGoalScores(UGamePlayConfigurationAsset* Asset);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算所有GOAP目标的分值

---

### Function `GetCapsuleRadius`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) float GetCapsuleRadius() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得胶囊体半径

---

### Function `GetControlledCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter * GetControlledCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取控制的角色actor

---

### Function `GetPlayerControllerBase`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AERW_PlayerControllerBase](../Framework/ERW_PlayerControllerBase__AERW_PlayerControllerBase.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AERW_PlayerControllerBase * GetPlayerControllerBase();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetGameModeBase`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AERW_GameModeBase * GetGameModeBase();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StartOutputWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetActor` | `UObject*` |
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartOutputWorkload(UObject* TargetActor , UEastRimWorldGameplayAbility* Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 开始输出工作量

---

### Function `FindPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable , Category = "GOAP") void FindPlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 寻找计划

---

### Function `ExecutePlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "GOAP") virtual void ExecutePlans();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 执行计划

---

### Function `K2_ExecutePlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , Category = "GOAP",DisplayName= "ExecutePlans") void K2_ExecutePlans();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `AbortPlans`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GOAP" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `false` | `bool SkipInterrupt =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "GOAP") bool AbortPlans(bool SkipInterrupt = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 中断计划

---

### Function `ExecutePlansComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "GOAP") void ExecutePlansComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 外部调用执行计划完成 例如输出工作量完成后调用

---

### Function `K2_ExecutePlansComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "GOAP",DisplayName= "ExecutePlansComplete") void K2_ExecutePlansComplete();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `K2_AbortPlansComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , Category = "GOAP",DisplayName="AbortPlanComplete") void K2_AbortPlansComplete();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `CompleteAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GOAP" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bAbortPlan` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "GOAP") void CompleteAction(bool bAbortPlan);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> GA内部调用完成

---

### Function `K2_CompleteAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bAbortPlan` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "GOAP",DisplayName= "CompleteAction") void K2_CompleteAction(bool bAbortPlan);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `ImmediateExecutionGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalsName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ImmediateExecutionGoals(FName GoalsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 立即添加目标，并中断当前行为

---

### Function `InterruptAndRemoveGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalsName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InterruptAndRemoveGoals(FName GoalsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除并中断当前行为

---

### Function `AddGoalsByArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalsName` | `const TArray<FName> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddGoalsByArray(const TArray<FName> & GoalsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加目标组

---

### Function `RemoveGoalsByArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalsName` | `const TArray<FName> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGoalsByArray(const TArray<FName> & GoalsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除目标组

---

### Function `CheckHasLaunchActionGA`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckHasLaunchActionGA();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查角色是否发动了行为GA(用来看角色是否在执行行为的路上)

---

### Function `GetCurrentPlanItemUseTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetCurrentPlanItemUseTime() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得当前计划的物品使用时间

---

### Function `BeforeActionExecute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void BeforeActionExecute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> Action开始执行前

---

### Function `AddGameplayAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void AddGameplayAbility(UEastRimWorldGameplayAbility* Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 记录当前正在执行的GA

---

### Function `RemoveGameplayAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGameplayAbility(UEastRimWorldGameplayAbility* Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除当前正在执行的GA

---

### Function `GetGameplayAbilitySaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SaveData` | [FGameplayAbilitySaveData](../ERW_CommonTypes__FGameplayAbilitySaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetGameplayAbilitySaveData(FGameplayAbilitySaveData& SaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得能力存档数据

---

### Function `NotificationFabricateCompleted`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bAbortPlan` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void NotificationFabricateCompleted(bool bAbortPlan);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得能力存档数据

---

### Function `GenerateCarryItemsToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateCarryItemsToWorld();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将拿着的物品生成到世界中

---

### Function `GenerateAllItemsToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateAllItemsToWorld();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将所有物品（身上，背包）生成在世界中

---

### Function `GetCarryItemNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) int32 GetCarryItemNum(const FName& ItemID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得搬运物品数量

---

### Function `GetEatItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EatItems` | TMap<EGameConfigType , [FIDs](../ERW_CommonTypes__FIDs.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetEatItems(TMap<EGameConfigType , FIDs>& EatItems) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得能吃的对象ID

---

### Function `StartReading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartReading(UEastRimWorldGameplayAbility* Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 开始读书

---

### Function `ReadManualEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | const [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `IsInterrupted` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool ReadManualEnd(const UInventoryItemInstance* ItemInstance , bool IsInterrupted);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 手动结束读书

---

### Function `EatManualEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | const [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `IsInterrupted` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool EatManualEnd(const UInventoryItemInstance* ItemInstance , bool IsInterrupted);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 手动结束吃东西

---

### Function `StartWriteCopy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartWriteCopy(UEastRimWorldGameplayAbility* Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 开始抄录

---

### Function `CheckCurrentScheduleGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CheckCurrentScheduleGoal();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 检查当前工作日程对应的GOAP目标

---

### Function `GetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGenericTeamId` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ~IEastRimWorldTeamAgentInterface interface

---

### Function `SetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `IsInAttackTargetList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsInAttackTargetList(AActor* InActor);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否在攻击列表

---

### Function `CheckCanBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual bool CheckCanBattle() override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否自身可以战斗

---

### Function `GetSightParams`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Perception" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutSightRadius` | `float&` |
| `OutLoseSightRadius` | `float&` |
| `OutPeripheralVisionAngle` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Perception") bool GetSightParams(float& OutSightRadius, float& OutLoseSightRadius, float& OutPeripheralVisionAngle) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取AI感知配置

---

### Function `GetCurCharacterActionAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterActionAbility](EastRimWorldAIController__FCharacterActionAbility.md) & |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterActionAbility & GetCurCharacterActionAbility();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色当前执行的动作能力

---

### Function `GetCurAnimalActionAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FAnimalActionAbility](EastRimWorldAIController__FAnimalActionAbility.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FAnimalActionAbility& GetCurAnimalActionAbility();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取动物当前执行的动作能力

---

### Function `UpdatePerceiveActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor *` |
| `Stimulus` | `FAIStimulus` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePerceiveActor( AActor * Actor, FAIStimulus Stimulus);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新感知到的actor

---

### Function `GetHuntingTargetActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `AActor *` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AActor * GetHuntingTargetActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取狩猎目标

---

### Function `ForgottenAllPerceiveActorAndAttacker`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ForgottenAllPerceiveActorAndAttacker();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 遗忘所有的actor

---

### Function `RemovePerceiveDeathActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovePerceiveDeathActor(AActor * Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除死亡的感知对象

---

### Function `RemovePerceiveKnockDownActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovePerceiveKnockDownActor(AActor * Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `BeAttackedLossDurability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ArmorGuid` | `FGuid` |
| `ArmorType` | `EArmorType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BeAttackedLossDurability(FGuid ArmorGuid , EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 被攻击掉防具耐久

---

### Function `ThrowItemToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `true` | `bool NeedEquipDefault =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ThrowItemToWorld(UInventoryItemInstance* InventoryItemInstance,bool NeedEquipDefault = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将身上的物品丢弃到世界上(包括脱下装备)

---

### Function `ThrowEquipmentToWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InTransform` | `FTransform` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ThrowEquipmentToWorld(UInventoryItemInstance* InventoryItemInstance , FTransform InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 具有位置信息的丢弃装备

---

### Function `EquipEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool EquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据一个物品实例装备一个装备

---

### Function `LoadEquipEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool LoadEquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读档穿戴装备

---

### Function `GoToGetEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GoToGetEquipment(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通知GOAP去拿起装备，并穿上装备

---

### Function `CancelGetEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelGetEquipment(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除获取装备行为

---

### Function `GoToGetBookToRead`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GoToGetBookToRead(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通知GOAP去拿起书去读

---

### Function `GoToGetItemToEat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GoToGetItemToEat(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通知GOAP去拿起东西吃

---

### Function `RemoveSpecifiedItemReservedNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemReservedNum(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除指定物品的预留数量

---

### Function `ReadBookUseDurability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `bHaveDurability` | `bool &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ReadBookUseDurability(UInventoryItemInstance* InventoryItemInstance,bool & bHaveDurability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读书消耗耐久度

---

### Function `GoToGetBookToWriteCopy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GoToGetBookToWriteCopy(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通知GOAP去拿起书去抄录

---

### Function `WriteCopyUseDurability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `bHaveDurability` | `bool &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool WriteCopyUseDurability(UInventoryItemInstance* InventoryItemInstance,bool & bHaveDurability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 抄录消耗耐久度

---

### Function `IsHaveEquipedItemtByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentType` | `EEquipmentType` |
| `ArmorType` | `EArmorType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsHaveEquipedItemtByType(EEquipmentType EquipmentType, EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否有装备

---

### Function `FindEquipmentByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UCanUseInventoryItemInstance](../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentType` | `EEquipmentType` |
| `ArmorType` | `EArmorType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCanUseInventoryItemInstance* FindEquipmentByType(EEquipmentType EquipmentType, EArmorType ArmorType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据装备类型查找身上装备中的装备

---

### Function `GiveEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterEquipment` | `const FInstancedStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GiveEquipment(const FInstancedStruct & CharacterEquipment);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得一个装备（实际是根据配置装备一个物品）

---

### Function `GiveEquipmentByWeaponID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeaponID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GiveEquipmentByWeaponID(FName WeaponID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过武器ID获得一个装备

---

### Function `GiveEquipmentByArmorID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ArmorID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GiveEquipmentByArmorID(FName ArmorID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过防具ID获得一个装备

---

### Function `GiveAndEquipByEquipmentData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentData` | const [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GiveAndEquipByEquipmentData(const FUseItemSaveData & EquipmentData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过装备存档数据生成实例并装备

---

### Function `RemoveEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterEquipment` | `const FInstancedStruct &` |
| `bChangeDefault` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveEquipment(const FInstancedStruct & CharacterEquipment,bool bChangeDefault);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除一个装备

---

### Function `ChangeDefaultEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentType` | `EEquipmentType` |
| `(unnamed / type only)` | `EArmorType ArmorType = EArmorType::None` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeDefaultEquipment(EEquipmentType EquipmentType,EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> /切换成默认的装备

---

### Function `ChangeCharacterWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ChangeCharacterWeapon(const FCharacterWeapon & CharacterWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 切换角色武器

---

### Function `ChangeApparelById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `FName` |
| `Type` | `EArmorType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ChangeApparelById(FName Id,EArmorType Type);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 切换外观

---

### Function `SetControlSummons`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Summons" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewSummonsAI` | [AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Summons") bool SetControlSummons(AEastRimWorldAIController * NewSummonsAI);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置控制的召唤物

---

### Function `SetBeControlled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bControlled` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SetBeControlled(bool bControlled);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置当前角色的被控制状态

---

### Function `IsInControlled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsInControlled();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前是否是被控制状态

---

### Function `IsControlledSummons`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsControlledSummons();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否正在控制召唤物

---

### Function `LaunchGameplayAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionAbilityID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UEastRimWorldGameplayAbility * LaunchGameplayAbility(const FName& ActionAbilityID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 发动GA

---

### Function `StopCurrentMontage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StopCurrentMontage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 停止当前蒙太奇动画

---

### Function `ActivateEquipmentAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterEquipment` | const [FCharacterEquipment](../Struct/ItemStruct__FCharacterEquipment.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "Equipment") bool ActivateEquipmentAttribute(const FCharacterEquipment& CharacterEquipment);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 激活装备属性

---

### Function `RemoveEquipmentAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterEquipment` | const [FCharacterEquipment](../Struct/ItemStruct__FCharacterEquipment.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "Equipment") bool RemoveEquipmentAttribute(const FCharacterEquipment& CharacterEquipment);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除装备属性

---

### Function `BroadCastActionChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewAction` | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadCastActionChange(FGOAP_Action NewAction);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 广播AI行为发生改变

---

### Function `InitGoapData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void InitGoapData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 初始化GOAP信息

---

### Function `GetAllDynamicAddGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutGoals` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllDynamicAddGoals(TArray<FName>& OutGoals);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前所有动态添加的goal(不在TeamInfo配置中的goal)

---

### Function `CheckAddSpecifiedItemGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `false` | `bool bIsAdd =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CheckAddSpecifiedItemGoal(const FName& GoalID , bool bIsAdd = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 检查并加入指定物品GOAP目标

---

### Function `AddSpecifiedItemAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `ActionID` | `const FName&` |
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddSpecifiedItemAction(UInventoryItemInstance* ItemInstance , const FName& ActionID , const FName& GoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 加入指定物品GOAP Action

---

### Function `OnGetSpecifiedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool OnGetSpecifiedItem();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 当拿起指定物品时

---

### Function `HoldWeaponAndSwitchCombatStance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HoldWeaponAndSwitchCombatStance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 手持一把武器并切换到战斗姿态

---

### Function `PutDownCarryItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutDownCarryItems();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将携带的物品放下（丢在当前位置）

---

### Function `OnEatFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnEatFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 吃东西结束时

---

### Function `ClearActionData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearActionData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清理行为相关的数据 （拿着的模型 ，行为树 物品ID ，物品数量)

---

### Function `GetOnWorldPlaceGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="GOAP" |
| Return type | [FGameplayTeamGoals](../Struct/CharacterStruct__FGameplayTeamGoals.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="GOAP") FGameplayTeamGoals GetOnWorldPlaceGoals();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前世界的初始化goal

---

### Function `BirthDelay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DelayTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BirthDelay(float DelayTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 出生后延迟行动

---

### Function `PauseAIController`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PauseAIController();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停

---

### Function `RecoverAIController`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverAIController();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停

---

### Function `SetScoffer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InScoffer` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetScoffer(AActor * InScoffer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置嘲讽者

---

### Function `SetClothingDisplay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bDisplay` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetClothingDisplay(bool bDisplay);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置衣服的显示

---

### Function `CheckShouldAbortGoal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="AIController" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoalID` | `const FName&` |
| `true` | `bool bIncludeHappyGoal =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category= "AIController") bool CheckShouldAbortGoal(const FName& InGoalID, bool bIncludeHappyGoal = true);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 进食/休息/娱乐打断, bContainHappy是否包含娱乐

---
