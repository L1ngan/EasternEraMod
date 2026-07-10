# `class` `AEastRimWorldAIController`

**源码头文件:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## 功能说明（来自头文件注释）

> AEastRimWorldPlayerBotController
> The controller class used by player bots in this project.

## 蓝图暴露变量

### 属性 `OnActionChangeEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnActionChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnActionChange OnActionChangeEvent;` |

**说明:**

> [自定义事件]当AI的行为发生改变

---

### 属性 `OnEquipmentChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEquipmentChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnEquipmentChanged OnEquipmentChanged;` |

**说明:**

> OnWeaponChanged 已下沉到 AERW_BaseAIController

---

### 属性 `PlanComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_PlanComponent](../GOAP/GOAP_PlanComponent__UGOAP_PlanComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) UGOAP_PlanComponent* PlanComponent { nullptr };` |

**说明:**

> GOAP寻找计划组件

---

### 属性 `GOAP_MemoryComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_MemoryComponent](../GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) UGOAP_MemoryComponent* GOAP_MemoryComponent { nullptr };` |

**说明:**

> GOAP记忆组件

---

### 属性 `GoapActionComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UGOAP_ActionComponent](../GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) UGOAP_ActionComponent* GoapActionComponent{ nullptr };` |

**说明:**

> GOAP 行为（Action）组件

---

### 属性 `GameplayAbilities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName , UEastRimWorldGameplayAbility*> GameplayAbilities;` |

**说明:**

> GOAP目标对应的能力
> TMap<GOAP目标 , 能力>

---

### 属性 `AttributeGEs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FActiveGameplayEffectHandle>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName , FActiveGameplayEffectHandle> AttributeGEs;` |

**说明:**

> GOAP属性值对应的GE
> TMap<GOAP属性 , 对应的GE>

---

### 属性 `AttributeTimers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FName , int32> AttributeTimers;` |

**说明:**

> GOAP属性值对应的Timer
> TMap<GOAP属性 , TimerID>

---

### 属性 `OwnFacilities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FUObjectData](../ERW_CommonTypes__FUObjectData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , FUObjectData> OwnFacilities;` |

**说明:**

> GOAP目标ID对应的专属设备数据
> TMap<GOAP目标ID , 设备数据>

---

### 属性 `FilterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UNavigationQueryFilter>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**说明:**

> 角色使用的寻路类

---

### 属性 `GameInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UERW_GameInstanceBase> GameInstance;` |

**说明:**

> 缓存的游戏实例（UERW_GameInstanceBase）引用

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

**说明:**

> 当前所属的世界地点（AWorldPlace）引用

---

### 属性 `ControlledCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AEastRimWorldCharacter> ControlledCharacter;` |

**说明:**

> 控制的角色

---

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FGuid SGUID;` |

**说明:**

> ~ Save

---

### 属性 `OutputWorkloadTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 OutputWorkloadTimerID { -1 };` |

**说明:**

> 输出工作量计时器ID

---

### 属性 `RecoverGA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool RecoverGA { false };` |

**说明:**

> 是否是读档回来需要恢复GA

---

### 属性 `CacheAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FGOAP_Action CacheAction;` |

**说明:**

> 缓存Action

---

### 属性 `InControlledGoalId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName InControlledGoalId = TEXT("InControlled");` |

**说明:**

> 被控制的Goal的ID

---

### 属性 `HuntingTargetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor> HuntingTargetActor;` |

**说明:**

> Update Team Attitude for the AI
> SelfPerceiveHostileActors / Attackers 已下沉到 AERW_BaseAIController
> 狩猎的目标

---

### 属性 `BuildingActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<AActor>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TArray<TObjectPtr<AActor>> BuildingActors;` |

**说明:**

> 感知到的建筑物

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,Category = "Equipment"); TMap<EArmorType,FCharacterApparel> Equipments;` |

**说明:**

> 携带的装备（实际是装备在身上的部位对应的装备信息）

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); FCharacterTool OwnTool;` |

**说明:**

> Weapons / UseCharacterWeapon / UseCharacterWeaponInstance / NextChangeCharacterWeapon 已下沉到 AERW_BaseAIController
> 携带的工具

---

### 属性 `OnUpdateCharacterBehaviorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateCharacterBehaviorState` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateCharacterBehaviorState OnUpdateCharacterBehaviorState;` |

**说明:**

> 更新角色行为状态时广播的委托

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere, Category = "Equipment"); TMap<FActiveGameplayEffectHandle,FCharacterEquipment> EquipmentEffectHandles;` |

**说明:**

> 装备的effect handle

---

### 属性 `bClothingDisplay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bClothingDisplay = true;` |

**说明:**

> 衣服是否显示

---

### 属性 `CharacterSectCombatCommandState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterSectCombatCommandState](../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ECharacterSectCombatCommandState CharacterSectCombatCommandState = ECharacterSectCombatCommandState::FollowPlayer;` |

**说明:**

> 门派战模式

---

### 属性 `OnCharacterSectCombatCommandStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCharacterSectCombatCommandStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCharacterSectCombatCommandStateChanged OnCharacterSectCombatCommandStateChanged;` |

**说明:**

> 门派战模式变化广播

---

### 属性 `bInSquad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Squad" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Squad") bool bInSquad = false;` |

**说明:**

> 是否已加入编组（由编组系统维护）

---

### 属性 `SummonsAI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AEastRimWorldAIController> SummonsAI;` |

**说明:**

> 控制的召唤物

---

## 蓝图暴露函数

### 函数 `GetAttributeRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetAttributeRate(const FName& AttributeName , float Percent) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得属性消耗比率

---

### 函数 `ShouldRemoveAttributeGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool ShouldRemoveAttributeGoal(const FName& AttributeName , float Percent) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查是否需要移除属性GOAP目标

---

### 函数 `GetWorkScheduleScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) float GetWorkScheduleScore(const FName& ScheduleID) const;`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获得工作日程分值

---

### 函数 `CalcGoalScores`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Asset` | [UGamePlayConfigurationAsset](../Components/ERW_GameConfigComponent__UGamePlayConfigurationAsset.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void CalcGoalScores(UGamePlayConfigurationAsset* Asset);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算所有GOAP目标的分值

---

### 函数 `GetCapsuleRadius`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) float GetCapsuleRadius() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获得胶囊体半径

---

### 函数 `GetControlledCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter * GetControlledCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取控制的角色actor

---

### 函数 `GetPlayerControllerBase`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AERW_PlayerControllerBase](../Framework/ERW_PlayerControllerBase__AERW_PlayerControllerBase.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AERW_PlayerControllerBase * GetPlayerControllerBase();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取玩家控制器基类（AERW_PlayerControllerBase）实例

---

### 函数 `StartOutputWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetActor` | `UObject*` |
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartOutputWorkload(UObject* TargetActor , UEastRimWorldGameplayAbility* Ability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> GetGameModeBase 已下沉到 AERW_BaseAIController
> 开始输出工作量

---

### 函数 `FindPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable , Category = "GOAP") void FindPlans();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 寻找计划

---

### 函数 `ExecutePlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , Category = "GOAP") virtual void ExecutePlans();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行计划

---

### 函数 `K2_ExecutePlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , Category = "GOAP",DisplayName= "ExecutePlans") void K2_ExecutePlans();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：执行 GOAP 计划（ExecutePlans 的蓝图实现入口）

---

### 函数 `AbortPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GOAP" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool SkipInterrupt =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , Category = "GOAP") bool AbortPlans(bool SkipInterrupt = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 中断计划

---

### 函数 `ExecutePlansComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , Category = "GOAP") void ExecutePlansComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 外部调用执行计划完成 例如输出工作量完成后调用

---

### 函数 `K2_ExecutePlansComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "GOAP",DisplayName= "ExecutePlansComplete") void K2_ExecutePlansComplete();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：执行 GOAP 计划完成时调用（如输出工作量完成后）

---

### 函数 `K2_AbortPlansComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , Category = "GOAP",DisplayName="AbortPlanComplete") void K2_AbortPlansComplete();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：中断 GOAP 计划完成时调用

---

### 函数 `CompleteAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bAbortPlan` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , Category = "GOAP") void CompleteAction(bool bAbortPlan);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> GA内部调用完成

---

### 函数 `K2_CompleteAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bAbortPlan` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "GOAP", DisplayName = "CompleteAction") void K2_CompleteAction(bool bAbortPlan);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 蓝图事件：完成当前动作时调用（GA 内部调用完成，bAbortPlan 指示是否中断计划）

---

### 函数 `K2_HideControlBehaviorUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="ControlBehavior" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "ControlBehavior", DisplayName = "HideControlBehaviorUI") void K2_HideControlBehaviorUI();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 行为结束时隐藏相关 UI（在 AI 控制器蓝图中实现）

---

### 函数 `ImmediateExecutionGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalsName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ImmediateExecutionGoals(FName GoalsName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 立即添加目标，并中断当前行为

---

### 函数 `InterruptAndRemoveGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalsName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InterruptAndRemoveGoals(FName GoalsName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除并中断当前行为

---

### 函数 `AddGoalsByArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalsName` | `const TArray<FName> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddGoalsByArray(const TArray<FName> & GoalsName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加目标组

---

### 函数 `RemoveGoalsByArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalsName` | `const TArray<FName> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGoalsByArray(const TArray<FName> & GoalsName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除目标组

---

### 函数 `CheckHasLaunchActionGA`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckHasLaunchActionGA();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查角色是否发动了行为GA(用来看角色是否在执行行为的路上)

---

### 函数 `GetCurrentPlanItemUseTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetCurrentPlanItemUseTime() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得当前计划的物品使用时间

---

### 函数 `BeforeActionExecute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void BeforeActionExecute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> Action开始执行前

---

### 函数 `AddGameplayAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void AddGameplayAbility(UEastRimWorldGameplayAbility* Ability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 记录当前正在执行的GA

---

### 函数 `RemoveGameplayAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGameplayAbility(UEastRimWorldGameplayAbility* Ability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除当前正在执行的GA

---

### 函数 `GetGameplayAbilitySaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SaveData` | [FGameplayAbilitySaveData](../ERW_CommonTypes__FGameplayAbilitySaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetGameplayAbilitySaveData(FGameplayAbilitySaveData& SaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获得能力存档数据

---

### 函数 `NotificationFabricateCompleted`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bAbortPlan` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void NotificationFabricateCompleted(bool bAbortPlan);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获得能力存档数据

---

### 函数 `GenerateCarryItemsToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateCarryItemsToWorld();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将拿着的物品生成到世界中

---

### 函数 `GenerateAllItemsToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateAllItemsToWorld();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将所有物品（身上，背包）生成在世界中

---

### 函数 `GetCarryItemNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) int32 GetCarryItemNum(const FName& ItemID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获得搬运物品数量

---

### 函数 `GetEatItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EatItems` | TMap<[EGameConfigType](../Components/ERW_GameConfigComponent__EGameConfigType.md) , [FIDs](../ERW_CommonTypes__FIDs.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetEatItems(TMap<EGameConfigType , FIDs>& EatItems) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获得能吃的对象ID

---

### 函数 `StartReading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartReading(UEastRimWorldGameplayAbility* Ability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 开始读书

---

### 函数 `ReadManualEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | const [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `IsInterrupted` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool ReadManualEnd(const UInventoryItemInstance* ItemInstance , bool IsInterrupted);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 手动结束读书

---

### 函数 `EatManualEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | const [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `IsInterrupted` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool EatManualEnd(const UInventoryItemInstance* ItemInstance , bool IsInterrupted);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 手动结束吃东西

---

### 函数 `StartWriteCopy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StartWriteCopy(UEastRimWorldGameplayAbility* Ability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 开始抄录

---

### 函数 `CheckCurrentScheduleGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CheckCurrentScheduleGoal();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 检查当前工作日程对应的GOAP目标

---

### 函数 `SetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置 AI 的通用团队 ID（IEastRimWorldTeamAgentInterface 接口实现）

---

### 函数 `CheckCanBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual bool CheckCanBattle() override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否自身可以战斗

---

### 函数 `GetSightParams`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Perception" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutSightRadius` | `float&` |
| `OutLoseSightRadius` | `float&` |
| `OutPeripheralVisionAngle` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Perception") bool GetSightParams(float& OutSightRadius, float& OutLoseSightRadius, float& OutPeripheralVisionAngle) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取AI感知配置

---

### 函数 `GetCurCharacterActionAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const [FCharacterActionAbility](EastRimWorldAIController__FCharacterActionAbility.md) & |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const FCharacterActionAbility & GetCurCharacterActionAbility();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取角色当前执行的动作能力

---

### 函数 `GetCurAnimalActionAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const [FAnimalActionAbility](EastRimWorldAIController__FAnimalActionAbility.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const FAnimalActionAbility& GetCurAnimalActionAbility();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取动物当前执行的动作能力

---

### 函数 `UpdatePerceiveActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor *` |
| `Stimulus` | `FAIStimulus` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdatePerceiveActor( AActor * Actor, FAIStimulus Stimulus);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新感知到的actor

---

### 函数 `GetHuntingTargetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor *` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AActor * GetHuntingTargetActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取狩猎目标

---

### 函数 `ForgottenAllPerceiveActorAndAttacker`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ForgottenAllPerceiveActorAndAttacker();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 遗忘所有的actor

---

### 函数 `RemovePerceiveDeathActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemovePerceiveDeathActor(AActor * Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除死亡的感知对象

---

### 函数 `RemovePerceiveKnockDownActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemovePerceiveKnockDownActor(AActor * Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除被击倒的感知对象

---

### 函数 `BeAttackedLossDurability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ArmorGuid` | `FGuid` |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BeAttackedLossDurability(FGuid ArmorGuid , EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 被攻击掉防具耐久

---

### 函数 `ThrowItemToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `true` | `bool NeedEquipDefault =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ThrowItemToWorld(UInventoryItemInstance* InventoryItemInstance,bool NeedEquipDefault = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将身上的物品丢弃到世界上(包括脱下装备)

---

### 函数 `ThrowEquipmentToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InTransform` | `FTransform` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ThrowEquipmentToWorld(UInventoryItemInstance* InventoryItemInstance , FTransform InTransform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 具有位置信息的丢弃装备

---

### 函数 `EquipEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool EquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据一个物品实例装备一个装备

---

### 函数 `LoadEquipEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool LoadEquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读档穿戴装备

---

### 函数 `GoToGetEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GoToGetEquipment(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通知GOAP去拿起装备，并穿上装备

---

### 函数 `CancelGetEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelGetEquipment(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除获取装备行为

---

### 函数 `GoToGetBookToRead`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GoToGetBookToRead(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通知GOAP去拿起书去读

---

### 函数 `GoToGetItemToEat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GoToGetItemToEat(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通知GOAP去拿起东西吃

---

### 函数 `RemoveSpecifiedItemReservedNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemReservedNum(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定物品的预留数量

---

### 函数 `ReadBookUseDurability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `bHaveDurability` | `bool &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ReadBookUseDurability(UInventoryItemInstance* InventoryItemInstance,bool & bHaveDurability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读书消耗耐久度

---

### 函数 `GoToGetBookToWriteCopy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GoToGetBookToWriteCopy(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通知GOAP去拿起书去抄录

---

### 函数 `WriteCopyUseDurability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `bHaveDurability` | `bool &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool WriteCopyUseDurability(UInventoryItemInstance* InventoryItemInstance,bool & bHaveDurability);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 抄录消耗耐久度

---

### 函数 `IsHaveEquipedItemtByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsHaveEquipedItemtByType(EEquipmentType EquipmentType, EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否有装备

---

### 函数 `FindEquipmentByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UCanUseInventoryItemInstance](../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UCanUseInventoryItemInstance* FindEquipmentByType(EEquipmentType EquipmentType, EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据装备类型查找身上装备中的装备

---

### 函数 `GiveEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterEquipment` | `const FInstancedStruct &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GiveEquipment(const FInstancedStruct & CharacterEquipment);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获得一个装备（实际是根据配置装备一个物品）

---

### 函数 `GiveEquipmentByWeaponID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeaponID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GiveEquipmentByWeaponID(FName WeaponID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过武器ID获得一个装备

---

### 函数 `GiveEquipmentByArmorID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ArmorID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GiveEquipmentByArmorID(FName ArmorID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过防具ID获得一个装备

---

### 函数 `GiveAndEquipByEquipmentData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentData` | const [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GiveAndEquipByEquipmentData(const FUseItemSaveData & EquipmentData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过装备存档数据生成实例并装备

---

### 函数 `RemoveEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterEquipment` | `const FInstancedStruct &` |
| `bChangeDefault` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveEquipment(const FInstancedStruct & CharacterEquipment,bool bChangeDefault);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除一个装备

---

### 函数 `ChangeDefaultEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangeDefaultEquipment(EEquipmentType EquipmentType,EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> /切换成默认的装备

---

### 函数 `ChangeApparelById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `FName` |
| `Type` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ChangeApparelById(FName Id,EArmorType Type);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> CheckAbilityCanRelease / ChangeCharacterWeapon / OnChangeNextWeapon / ChangeWeaponComplete / CheckCanChangeWeapon 已下沉到 AERW_BaseAIController
> 切换外观

---

### 函数 `SetControlSummons`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Summons" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewSummonsAI` | [AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category = "Summons") bool SetControlSummons(AEastRimWorldAIController * NewSummonsAI);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置控制的召唤物

---

### 函数 `SetBeControlled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bControlled` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SetBeControlled(bool bControlled);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置当前角色的被控制状态

---

### 函数 `IsInControlled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsInControlled();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 当前是否是被控制状态

---

### 函数 `IsControlledSummons`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsControlledSummons();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否正在控制召唤物

---

### 函数 `LaunchGameplayAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionAbilityID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UEastRimWorldGameplayAbility * LaunchGameplayAbility(const FName& ActionAbilityID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 发动GA

---

### 函数 `StopCurrentMontage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void StopCurrentMontage();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 停止当前蒙太奇动画

---

### 函数 `ActivateEquipmentAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterEquipment` | const [FCharacterEquipment](../Struct/ItemStruct__FCharacterEquipment.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category= "Equipment") bool ActivateEquipmentAttribute(const FCharacterEquipment& CharacterEquipment);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 激活装备属性

---

### 函数 `RemoveEquipmentAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterEquipment` | const [FCharacterEquipment](../Struct/ItemStruct__FCharacterEquipment.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category= "Equipment") bool RemoveEquipmentAttribute(const FCharacterEquipment& CharacterEquipment);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除装备属性

---

### 函数 `BroadCastActionChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewAction` | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadCastActionChange(FGOAP_Action NewAction);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播AI行为发生改变

---

### 函数 `TryTriggerConsumableUse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionID` | `const FName&` |
| `bActionStart` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TryTriggerConsumableUse(const FName& ActionID,bool bActionStart);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试触发耗材使用（仅人类角色 ActionID=GOAP_Action_Data表行名 bActionStart true=行为开始 false=行为结束 需检测的行为ID配置在UConsumableConfigAsset）

---

### 函数 `InitGoapData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable) void InitGoapData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 初始化GOAP信息

---

### 函数 `GetAllDynamicAddGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutGoals` | `TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllDynamicAddGoals(TArray<FName>& OutGoals);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前所有动态添加的goal(不在TeamInfo配置中的goal)

---

### 函数 `CheckAddSpecifiedItemGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `false` | `bool bIsAdd =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void CheckAddSpecifiedItemGoal(const FName& GoalID , bool bIsAdd = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 检查并加入指定物品GOAP目标

---

### 函数 `AddSpecifiedItemAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `ActionID` | `const FName&` |
| `GoalID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddSpecifiedItemAction(UInventoryItemInstance* ItemInstance , const FName& ActionID , const FName& GoalID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 加入指定物品GOAP Action

---

### 函数 `OnGetSpecifiedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) bool OnGetSpecifiedItem();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 当拿起指定物品时

---

### 函数 `PutDownCarryItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutDownCarryItems();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将携带的物品放下（丢在当前位置）

---

### 函数 `OnEatFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void OnEatFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 吃东西结束时

---

### 函数 `ClearActionData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearActionData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清理行为相关的数据 （拿着的模型 ，行为树 物品ID ，物品数量)

---

### 函数 `GetOnWorldPlaceGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="GOAP" |
| 返回类型 | [FGameplayTeamGoals](../Struct/CharacterStruct__FGameplayTeamGoals.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category="GOAP") FGameplayTeamGoals GetOnWorldPlaceGoals();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前世界的初始化goal

---

### 函数 `BirthDelay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DelayTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BirthDelay(float DelayTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 出生后延迟行动

---

### 函数 `PauseAIController`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PauseAIController();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暂停

---

### 函数 `RecoverAIController`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RecoverAIController();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暂停

---

### 函数 `SetScoffer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InScoffer` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetScoffer(AActor * InScoffer);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置嘲讽者

---

### 函数 `SetClothingDisplay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bDisplay` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetClothingDisplay(bool bDisplay);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置衣服的显示

---

### 函数 `CheckShouldAbortGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="AIController" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGoalID` | `const FName&` |
| `true` | `bool bIncludeHappyGoal =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category= "AIController") bool CheckShouldAbortGoal(const FName& InGoalID, bool bIncludeHappyGoal = true);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 进食/休息/娱乐打断, bContainHappy是否包含娱乐

---

### 函数 `SetCharacterSectCombatCommandState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewState` | [ECharacterSectCombatCommandState](../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCharacterSectCombatCommandState(ECharacterSectCombatCommandState NewState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置角色的门派战指挥模式状态，并广播状态变化

---

### 函数 `SetWorldSectBattleFlagPatrolArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|AI" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PatrolCenter` | `const FVector&` |
| `PatrolRadius` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|AI") void SetWorldSectBattleFlagPatrolArea(const FVector& PatrolCenter, float PatrolRadius);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 门派战旗子刷出的野怪使用：设置它所属旗子的巡逻中心和半径。

---

### 函数 `GetWorldSectBattleFlagPatrolArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutPatrolCenter` | `FVector&` |
| `OutPatrolRadius` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") bool GetWorldSectBattleFlagPatrolArea(FVector& OutPatrolCenter, float& OutPatrolRadius) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 门派战旗子刷出的野怪使用：获取它所属旗子的巡逻中心和半径。

---
