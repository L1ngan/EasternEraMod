# `class` `AEastRimWorldCharacter`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnDrugUseChanged`

| Field | Details |
|------|------|
| C++ type | `FOnDrugUseChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnDrugUseChanged OnDrugUseChanged;` |

---

### Property `OnCharacterTemaChanged`

| Field | Details |
|------|------|
| C++ type | `FCharacterTemaChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FCharacterTemaChanged OnCharacterTemaChanged;` |

---

### Property `OnCharacterNameChange`

| Field | Details |
|------|------|
| C++ type | `FCharacterNameChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FCharacterNameChange OnCharacterNameChange;` |

---

### Property `PickInventoryItem`

| Field | Details |
|------|------|
| C++ type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UInventoryItemInstance * PickInventoryItem = nullptr;` |

---

### Property `bSelectState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bSelectState = false;` |

**Source comments:**

> 是否是选中状态

---

### Property `bHoveringState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bHoveringState = false;` |

**Source comments:**

> 是否是悬浮状态

---

### Property `bRegisterWorld`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bRegisterWorld = false;` |

**Source comments:**

> *********************************SaveGame Start*******************************
> 是否注册到世界中

---

### Property `CharacterSaveData`

| Field | Details |
|------|------|
| C++ type | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FCharacterSaveData CharacterSaveData;` |

**Source comments:**

> 角色存储的信息 不是最新 如需取值使用其他方式

---

### Property `CharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FName CharacterID;` |

**Source comments:**

> 角色的信息ID

---

### Property `FirstName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FText FirstName;` |

**Source comments:**

> 姓

---

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FText Name;` |

**Source comments:**

> 名字

---

### Property `MonsterNestGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid MonsterNestGuid;` |

**Source comments:**

> 当为怪物时属于哪个怪物巢穴

---

### Property `MovingRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float MovingRange = 0.f;` |

**Source comments:**

> 移动范围

---

### Property `WorldSpaceType`

| Field | Details |
|------|------|
| C++ type | `EStorageSpace` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) EStorageSpace WorldSpaceType;` |

**Source comments:**

> *********************************SaveGame End*******************************
> 室内室外屋檐下

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 按钮相关的功能

---

### Property `bOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOpenDanTian = false;` |

**Source comments:**

> 是否开启丹田

---

### Property `bCanOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bCanOpenDanTian = false;` |

**Source comments:**

> 是否可以开启

---

### Property `CarryWeapons`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FCarryWeaponsInfo](../Struct/CharacterStruct__FCarryWeaponsInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FCarryWeaponsInfo> CarryWeapons;` |

**Source comments:**

> 拿在手上的武器

---

### Property `EastRimWorldCharacterData`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly, Category="CharacterData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "CharacterData") FInstancedStruct EastRimWorldCharacterData;` |

**Source comments:**

> 角色信息

---

### Property `OnCurrentMoodChanged`

| Field | Details |
|------|------|
| C++ type | `FOnCurrentMoodValueChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCurrentMoodValueChanged OnCurrentMoodChanged;` |

**Source comments:**

> 当前心情值变化时

---

### Property `OnMoodTargetValueChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMoodTargetValueChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMoodTargetValueChanged OnMoodTargetValueChanged;` |

**Source comments:**

> 目标心情值变化时

---

### Property `OnCharacterGrowUp`

| Field | Details |
|------|------|
| C++ type | `FOnCharacterGrowUp` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCharacterGrowUp OnCharacterGrowUp;` |

---

### Property `OnSuffixChanged`

| Field | Details |
|------|------|
| C++ type | `FOnSuffixChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnSuffixChanged OnSuffixChanged;` |

---

### Property `CharacteristicInfos`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FName> CharacteristicInfos;` |

**Source comments:**

> 拥有的特性

---

### Property `ItemDrugUsed`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FName,int32> ItemDrugUsed;` |

**Source comments:**

> 角色使用过的药品记录（用于计算耐药性）

---

### Property `ReadingBookGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid ReadingBookGuid;` |

**Source comments:**

> 正在阅读的书籍ID

---

### Property `EatFoodGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid EatFoodGuid;` |

**Source comments:**

> 正在吃的食物ID

---

### Property `GameModeBase`

| Field | Details |
|------|------|
| C++ type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase { nullptr };` |

---

### Property `WorldPlace`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### Property `GameInstance`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UERW_GameInstanceBase> GameInstance;` |

---

### Property `CurrentTemperatureIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CurrentTemperatureIntervalTime = 0.f;` |

**Source comments:**

> 当前处于温度区间时间

---

### Property `CharacterTemperatureStateType`

| Field | Details |
|------|------|
| C++ type | `ECharacterTemperatureStateType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ECharacterTemperatureStateType CharacterTemperatureStateType = ECharacterTemperatureStateType::Normal;` |

**Source comments:**

> 当前的角色温度状态

---

### Property `TemperatureStateUpdateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float TemperatureStateUpdateInterval = 40.f;` |

**Source comments:**

> 温度更新间隔

---

### Property `CharacterHungryStateUpdateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CharacterHungryStateUpdateInterval = 5.f;` |

**Source comments:**

> 饥饿状态更新间隔

---

### Property `CharacterHungry0TimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FTimerHandle CharacterHungry0TimerHandle;` |

**Source comments:**

> 饥饿度为0的计时器

---

### Property `CurrentHungryIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CurrentHungryIntervalTime = 0.f;` |

**Source comments:**

> 当前处于饥饿状态的时间

---

### Property `CurHungryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurHungryId;` |

**Source comments:**

> 当前饥饿状态

---

### Property `ProhibitTreatSelf`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool ProhibitTreatSelf = true;` |

**Source comments:**

> 是否禁止治疗自己

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bCanSelect = true;` |

**Source comments:**

> 是否可以被选中

---

### Property `SpawnPoint`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FVector SpawnPoint;` |

**Source comments:**

> 出生点位置

---

### Property `NutritionTriggerFlag`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool NutritionTriggerFlag;` |

---

### Property `BattlefieldRolesType`

| Field | Details |
|------|------|
| C++ type | `EBattlefieldRolesType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::None;` |

**Source comments:**

> 战场英雄类型

---

### Property `bHideStateBarName`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="ERW|UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ERW|UI") bool bHideStateBarName = false;` |

**Source comments:**

> 状态条UI是否隐藏名字（仅隐藏名字，不影响血条）

---

### Property `bIsDeath`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bIsDeath = false;` |

---

### Property `HealthComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldHealthComponent](Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldHealthComponent> HealthComponent;` |

---

### Property `CombatComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldCombatComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldCombatComponent> CombatComponent;` |

---

### Property `GrowUpComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldGrowUpComponent](Components/EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldGrowUpComponent> GrowUpComponent;` |

---

### Property `CommonBuffComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonBuffComponent](Components/CommonBuffComponent__UCommonBuffComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCommonBuffComponent> CommonBuffComponent;` |

---

### Property `InjuryBuffComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInjuryBuffComponent](Components/InjuryBuffComponent__UInjuryBuffComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInjuryBuffComponent> InjuryBuffComponent;` |

---

### Property `SmartObjectComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USmartObjectComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character") TObjectPtr<USmartObjectComponent> SmartObjectComponent;` |

---

### Property `CharacterSpringArm`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USpringArmComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<USpringArmComponent> CharacterSpringArm;` |

---

### Property `CharacterCamera`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCameraComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCameraComponent> CharacterCamera;` |

---

### Property `AIPerceptionStimuliSource`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UAIPerceptionStimuliSourceComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|AI" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|AI", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAIPerceptionStimuliSourceComponent> AIPerceptionStimuliSource;` |

---

### Property `ButcherWorkLoad`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float ButcherWorkLoad = 0.f;` |

**Source comments:**

> 当前屠宰工作量

---

### Property `CharacterDamageInformation`

| Field | Details |
|------|------|
| C++ type | [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FCharacterDeathInformation CharacterDamageInformation;` |

**Source comments:**

> 角色最后受到英雄伤害信息

---

### Property `AnyDamageInformation`

| Field | Details |
|------|------|
| C++ type | [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FCharacterDeathInformation AnyDamageInformation;` |

**Source comments:**

> 角色最后受到伤害的信息

---

### Property `CarryActorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid CarryActorGuid;` |

**Source comments:**

> 正在搬运的对象

---

### Property `CarryActor`

| Field | Details |
|------|------|
| C++ type | `AActor *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AActor * CarryActor = nullptr;` |

**Source comments:**

> 正在搬运的actor

---

### Property `PatrolLocations`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite) TArray<FVector> PatrolLocations;` |

**Source comments:**

> 巡逻动物的巡逻点集合

---

### Property `CurPatrolLocations`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FVector> CurPatrolLocations;` |

**Source comments:**

> 巡逻动物当前正在添加的巡逻点集合

---

### Property `PatrolPointActors`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<AActor*> PatrolPointActors;` |

**Source comments:**

> 临时创建的用于显示巡逻点的Actor（在巡逻点选取结束后删除）

---

### Property `ProtectTargetGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FGuid ProtectTargetGuid = FGuid();` |

**Source comments:**

> 守护机关人的守护目标de GUID

---

### Property `ProtectTarget`

| Field | Details |
|------|------|
| C++ type | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AEastRimWorldCharacter* ProtectTarget;` |

**Source comments:**

> 守护机关人的守护目标

---

### Property `CantKnockDownOrgan`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> CantKnockDownOrgan;` |

**Source comments:**

> 战斗中不会导致晕倒的部位

---

### Property `PrisonerBeforeTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGenericTeamId PrisonerBeforeTeamID;` |

**Source comments:**

> 囚犯之前的TeamID

---

### Property `PrisonBuildingGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGuid PrisonBuildingGuid = FGuid();` |

**Source comments:**

> 囚犯所属监狱设施Guid

---

### Property `PrisonerArrestedByGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGuid PrisonerArrestedByGuid;` |

**Source comments:**

> 当前被谁押送

---

### Property `PrisonerArrestedBy`

| Field | Details |
|------|------|
| C++ type | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) AEastRimWorldCharacter* PrisonerArrestedBy;` |

**Source comments:**

> 押解此囚犯的角色

---

### Property `TortureColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float TortureColdDown = 0.f;` |

**Source comments:**

> 拷打CD

---

### Property `TortureTimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle TortureTimerHandle;` |

---

### Property `RecruitColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float RecruitColdDown = 0.f;` |

**Source comments:**

> 招募CD

---

### Property `RecruitTimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle RecruitTimerHandle;` |

---

### Property `LoyaltyValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float LoyaltyValue = 100.f;` |

**Source comments:**

> 忠诚度

---

### Property `OnLoyaltyChanged`

| Field | Details |
|------|------|
| C++ type | `FOnLoyaltyChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnLoyaltyChanged OnLoyaltyChanged;` |

**Source comments:**

> 忠诚度变化委托

---

### Property `IsRedemption`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) bool IsRedemption = false;` |

**Source comments:**

> 是否被赎回

---

### Property `RedeemValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float RedeemValue = 0.f;` |

**Source comments:**

> 赎回价值

---

### Property `bSendFoodAction`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bSendFoodAction = false;` |

**Source comments:**

> 是否已经创建送饭行为

---

### Property `SendPrisonerFoodColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float SendPrisonerFoodColdDown = 0.f;` |

**Source comments:**

> 送饭CD

---

### Property `SendPrisonerFoodTimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle SendPrisonerFoodTimerHandle;` |

---

### Property `DialogueRandOptionRecords`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,VisibleAnywhere) TMap<FName,FNameIDArray> DialogueRandOptionRecords;` |

**Source comments:**

> 对话随机选项记录<InDialogueInfoID,OptionIDs>

---

## Blueprint-exposed functions

### Function `GetEastRimWorldAbilitySystemComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Character" |
| Return type | [UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Character") UEastRimWorldAbilitySystemComponent* GetEastRimWorldAbilitySystemComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `K2_CancelAbilities`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void K2_CancelAbilities(const FGameplayTag & Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过标签取消能力

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

> 获取阵营

---

### Function `GetTeamInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGameplayTeamInfo GetTeamInfo() override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `MulticastNameChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFirstName` | `FText` |
| `InName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void MulticastNameChange(FText InFirstName, FText InName);`

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

### Function `SetCharacterCollisionProfileName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CollisionProfileName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent) void SetCharacterCollisionProfileName(FName CollisionProfileName);`

**Usage:** **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 设置角色碰撞通道

---

### Function `OnDeathStarted`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwningActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void OnDeathStarted(AActor* OwningActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Begins the death sequence for the character (disables collision, disables movement, etc...)

---

### Function `ApplyCustomApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bUseApparel` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ApplyCustomApparels(bool bUseApparel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 应用服饰外观（仅改变外观，不改变服饰装备和效果）

---

### Function `OnKnockDown`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwningActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnKnockDown(AActor* OwningActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 被击倒

---

### Function `OnKnockDownFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwningActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnKnockDownFinished(AActor* OwningActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StationDeathFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void StationDeathFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 驻地死亡完成

---

### Function `K2_OnDeathFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnDeathFinished")) void K2_OnDeathFinished();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnDeathFinished".

**Source comments:**

> Called when the death sequence for the character has completed

---

### Function `GetSelectState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="ERW|Character" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "ERW|Character") bool GetSelectState() const { return bSelectState; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `CharacterSlaughtered`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<FName , [FAllTypeItemDrop](../Struct/ItemStruct__FAllTypeItemDrop.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `slaughterValue` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName , FAllTypeItemDrop> CharacterSlaughtered(int32 slaughterValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCharacterData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FEastRimWorldCharacterData GetCharacterData() override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ~ ICharacterInterface
> 获取角色信息

---

### Function `SetCharacterData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetCharacterData(const FInstancedStruct & CharacterData) override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SetCanSelect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsCanSelect` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCanSelect(bool IsCanSelect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置能否选中

---

### Function `PopupInfoUIChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 弹出UI信息改变

---

### Function `GetCurrentWorkSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleName` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCurrentWorkSchedule(FString& ScheduleName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得当前工作日程名称

---

### Function `GetButcherWorkLoad`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlaughterSpeed` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetButcherWorkLoad(float SlaughterSpeed);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算屠宰工作量

---

### Function `SearchBodyFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SearchBodyFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 搜索尸体完成

---

### Function `HuntFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HuntFinished();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PickItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInfo` | `FInstancedStruct` |
| `CharacterBehaviorState` | `ECharacterBehaviorState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PickItem(FInstancedStruct InventoryItemInfo,ECharacterBehaviorState CharacterBehaviorState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 抱或拿起一个道具

---

### Function `PlayAnimItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInfo` | `FInstancedStruct` |
| `CharacterBehaviorState` | `ECharacterBehaviorState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PlayAnimItem(FInstancedStruct InventoryItemInfo,ECharacterBehaviorState CharacterBehaviorState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 播放物品对应的动画

---

### Function `RemovePickItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void RemovePickItem();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 移除抱或拿起的道具

---

### Function `StopCurAnimMontage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopCurAnimMontage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 停止当前的蒙太奇

---

### Function `FreezeAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Character|Animation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Character|Animation") void FreezeAnimation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 冻结当前动画

---

### Function `UnfreezeAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|Character|Animation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|Character|Animation") void UnfreezeAnimation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解除动画冻结

---

### Function `GiveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GiveAbilityByAbilityID(FName GameplayAbilityID,int Level = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过技能id获得能力

---

### Function `RemoveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除对应技能id的能力

---

### Function `GiveWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GiveWeapon(const FCharacterWeapon & InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得新的武器

---

### Function `RemoveWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveWeapon(const FCharacterWeapon & InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除武器

---

### Function `HandWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HandWeapon(const FCharacterWeapon & InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 手持武器

---

### Function `PackUpWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PackUpWeapon(const FCharacterWeapon & InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 收起武器

---

### Function `InitCharacterBehaviorStateBar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void InitCharacterBehaviorStateBar();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 初始化角色行为状态栏

---

### Function `RefreshStateBarNameVisibility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bHideName` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void RefreshStateBarNameVisibility(bool bHideName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 刷新状态条名字显示（蓝图里只处理名字控件可见性，不影响血条）

---

### Function `ResetCharacterHealthBarColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlayerProssesColor` | `FLinearColor` |
| `NutralityProssesColor` | `FLinearColor` |
| `EnemyProssesColor` | `FLinearColor` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void ResetCharacterHealthBarColor(FLinearColor PlayerProssesColor , FLinearColor NutralityProssesColor , FLinearColor EnemyProssesColor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 重置角色血条颜色

---

### Function `AddGWOPlayerComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddGWOPlayerComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化友方GWO组件

---

### Function `RemoveGWOPlayerComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGWOPlayerComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除友方GWO组件

---

### Function `InitializeCharacterByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterID` | `const FName &` |
| `InCharacterType` | `ECharacterType` |
| `TeamID` | `uint8` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitializeCharacterByID(const FName & InCharacterID,ECharacterType InCharacterType,uint8 TeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动态生成时通过id初始化角色

---

### Function `NewSpawnWorldCharacterByInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |
| `TeamID` | `uint8` |
| `bInRegisterWorld` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void NewSpawnWorldCharacterByInfo(const FInstancedStruct & CharacterData,uint8 TeamID,bool bInRegisterWorld);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 生成角色
> 
> / @param CharacterData 角色信息
> / @param InCharacterType 角色的类型
> / @param TeamID 角色的阵营
> / @param bRegisterWorld 是否需要注册到世界中 用于跨关卡

---

### Function `InitializeCharacterByInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |
| `TeamID` | `uint8` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void InitializeCharacterByInfo(const FInstancedStruct & CharacterData,uint8 TeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动态生成时通过角色信息初始化

---

### Function `ReInitializeCharacterByInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void ReInitializeCharacterByInfo(const FInstancedStruct & CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重新生成角色时初始化（目前用于进化）

---

### Function `GetSpawnBoxLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetSpawnBoxLocation(FVector& Location) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得出生所在的盒子位置

---

### Function `GetIdleRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetIdleRange() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得闲逛范围

---

### Function `OnBodyIsRotten`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnBodyIsRotten();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 身体已经腐烂

---

### Function `AddNewCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacteristicID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddNewCharacteristic(const FName & NewCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加新的特性

---

### Function `RemoveCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RemoveCharacteristicID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveCharacteristic(const FName & RemoveCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除特性

---

### Function `OpenDanTian`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenDanTian();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开启丹田

---

### Function `RegisterWorldCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterWorldCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注册actor

---

### Function `UnregisterWorldCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterWorldCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注销actor

---

### Function `CalculateCharacterTemperatureState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `float AddTime = 0.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateCharacterTemperatureState(float AddTime = 0.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算角色的温度状态

---

### Function `CalculateHungryIntervalTimeState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `float AddTime = 0.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateHungryIntervalTimeState(float AddTime = 0.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算角色的饥饿状态

---

### Function `ShowTipsInCharacterHead`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TipsText` | `const FText &` |
| `(unnamed / type only)` | `ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ShowTipsInCharacterHead(const FText & TipsText,ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 显示提示在角色头上

---

### Function `k2_ShowTipsInCharacterHead`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TipsText` | `const FText &` |
| `(unnamed / type only)` | `ECharacterHeadTipType TipType= ECharacterHeadTipType::Type1` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ShowTipsInCharacterHead") void k2_ShowTipsInCharacterHead(const FText & TipsText,ECharacterHeadTipType TipType= ECharacterHeadTipType::Type1);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 显示提示在角色头上

---

### Function `DestroyDueToDeath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void DestroyDueToDeath();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 角色死亡删除 如果注册到世界中 则世界数据也删除

---

### Function `ConvertToPlayerTeam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsRegisterWorld` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void ConvertToPlayerTeam(bool IsRegisterWorld);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 转化为玩家阵营

---

### Function `AddShoutComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTexts` | `const TArray<FText>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void AddShoutComponent(const TArray<FText>& InTexts);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 添加喊话组件

---

### Function `RemoveShoutComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void RemoveShoutComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 移除喊话组件

---

### Function `IsPlayerTeam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsPlayerTeam() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否是玩家阵营

---

### Function `IsDeath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsDeath() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否死亡

---

### Function `GetCharacterType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `ECharacterType` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) ECharacterType GetCharacterType();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SetInControlledTargetObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetActor` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetInControlledTargetObject(UObject* TargetActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置控制的角色和物品进行交互

---

### Function `GetSpawnPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) FVector GetSpawnPoint();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 敌人获取出生点

---

### Function `GetControlEffectAnimMontageByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UAnimMontage *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AnimTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UAnimMontage * GetControlEffectAnimMontageByTag(const FGameplayTag & AnimTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过标签获取蒙太奇

---

### Function `GetAllDrugResistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FName,float>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName,float> GetAllDrugResistance() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有的药物抗性

---

### Function `GetDrugResistanceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DrugID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetDrugResistanceByID(const FName& DrugID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询某种药物的耐药性

---

### Function `OnEatItemEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName &` |
| `ItemNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnEatItemEnd(const FName & ItemID, int32 ItemNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 吃东西后，扣除物品数量，并出发药品的属性增加效果

---

### Function `GetCharacterChatComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [UEastRimWorldCharacterChatComponent](Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) virtual UEastRimWorldCharacterChatComponent* GetCharacterChatComponent(){return nullptr;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `IsCharacterChatting`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) virtual bool IsCharacterChatting(){return false;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 角色是否正在闲聊

---

### Function `SetWorldSpaceType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldSpaceType` | `const EStorageSpace&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWorldSpaceType(const EStorageSpace& InWorldSpaceType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置角色所处的空间类型

---

### Function `IsPowerfulCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) virtual bool IsPowerfulCharacter(){return false;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 是否是强力角色

---

### Function `CharacterGrowUp`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacterID` | `FName` |
| `CharacterType` | `ECharacterType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharacterGrowUp(FName NewCharacterID , ECharacterType CharacterType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 角色进化后重新初始化

---

### Function `SetDeathInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DeathInformation` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetDeathInformation(const FCharacterDeathInformation & DeathInformation) { CharacterDamageInformation = DeathInformation; };`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置上一次伤害的人

---

### Function `SetLastDamageInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Information` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetLastDamageInformation(const FCharacterDeathInformation & Information) { AnyDamageInformation = Information; };`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置上一次伤害的来源

---

### Function `PlayOpenDoorAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OpenDoorAnimation` | `UAnimMontage *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PlayOpenDoorAnimation(UAnimMontage * OpenDoorAnimation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 播放开门动画

---

### Function `K2_PlayPutdownAnimation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="PlayPutdownAnimation")) void K2_PlayPutdownAnimation();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "PlayPutdownAnimation".

---

### Function `SuspendCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSuspend` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SuspendCharacter(bool bSuspend);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置角色停止所有动作

---

### Function `SetCarryActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCarryActor` | `AActor *` |
| `NAME_None` | `FName SocketName =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCarryActor(AActor * InCarryActor,FName SocketName = NAME_None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置正在搬运的对象

---

### Function `StartPatrolPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartPatrolPoint();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动物巡逻点选点结束

---

### Function `AddPatrolPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PatrolPoint` | `FVector` |
| `PatrolPointActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPatrolPoint(FVector PatrolPoint , AActor* PatrolPointActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动物添加巡逻点

---

### Function `ClearPatrolPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearPatrolPoints();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动物清空巡逻点

---

### Function `FinishPatrolPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FinishPatrolPoint();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 动物巡逻点选点结束

---

### Function `SetNewProtectTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewProtectTarget` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNewProtectTarget(AEastRimWorldCharacter* NewProtectTarget);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置守卫对象

---

### Function `GetAttributePercentage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeName` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetAttributePercentage(const FName& AttributeName) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得属性值的百分比

---

### Function `GetCurrentPracticeRoomExtraValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurrentPracticeRoomExtraValue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色当前环境修炼的额外值

---

### Function `GetCurrentPracticeMoodExtraValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutMiniValue` | `float&` |
| `OutMaxValue` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurrentPracticeMoodExtraValue(float& OutMiniValue, float& OutMaxValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色当前心情修炼的额外值

---

### Function `GetAptitudePracticeEfficiency`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetAptitudePracticeEfficiency();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色资质修炼转换效率

---

### Function `GetCurrentFiveElementsExtraValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutMiniValue` | `float&` |
| `OutMaxValue` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurrentFiveElementsExtraValue(float& OutMiniValue, float& OutMaxValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色当前五行修炼的额外值

---

### Function `GetTotalPracticeExtraValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetTotalPracticeExtraValue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取总共的修炼额外数值

---

### Function `GetAbilityCooldown`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `const FGameAbilityStruct &AbilityStruct` |
| `AbilityLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetAbilityCooldown(const FGameAbilityStruct &AbilityStruct,int32 AbilityLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定技能的冷却时间

---

### Function `GetAbilityCooldownByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CooldownTag` | `const FGameplayTagContainer &` |
| `InCooldownValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetAbilityCooldownByTag(const FGameplayTagContainer & CooldownTag,float InCooldownValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定技能的冷却时间

---

### Function `CreateSubstitute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamID` | `const FGenericTeamId&` |
| `InTransform` | `const FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual AEastRimWorldCharacter* CreateSubstitute(const FGenericTeamId& TeamID,const FTransform& InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建替身

---

### Function `DestorySubstitute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void DestorySubstitute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 销毁

---

### Function `GetSubstituteCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) virtual AEastRimWorldCharacter* GetSubstituteCharacter() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取替身

---

### Function `SetNameSuffix`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Text` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNameSuffix(const FText& Text);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置名字后缀

---

### Function `CreateImprisonArrestAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateImprisonArrestAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> ------------------囚犯------------------------------------------

---

### Function `CreateSpecifiedArrestAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateSpecifiedArrestAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveArrestAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveArrestAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除押解行为

---

### Function `SetArrestedPrison`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Prison` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetArrestedPrison(AEastRimWorldCharacter* Prison);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置拘捕到的囚犯

---

### Function `CreatePrisonerArrestedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreatePrisonerArrestedAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建被押解行为

---

### Function `RemoveArrestedAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveArrestedAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除被押解行为

---

### Function `SetPrisonerArrestedBy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetPrisonerArrestedBy(AEastRimWorldCharacter* InCharacter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置囚犯被谁押送

---

### Function `OnPrisonerImprisoned`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnPrisonerImprisoned();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 囚犯被关押

---

### Function `OnPrisonerExecuted`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnPrisonerExecuted();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 囚犯被处决

---

### Function `OnPrisonerTortured`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Torturer` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnPrisonerTortured(AEastRimWorldCharacter* Torturer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 囚犯被拷打

---

### Function `OnPrisonerRecruited`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Recruiter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnPrisonerRecruited(AEastRimWorldCharacter* Recruiter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 囚犯被招募

---

### Function `CreateRecruitPrisonerAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Recruiter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateRecruitPrisonerAction(AEastRimWorldCharacter* Recruiter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建招募囚犯的行为

---

### Function `RemoveRecruitPrisonerAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRecruitPrisonerAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除招募囚犯的行为

---

### Function `OnPrisonerDeath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnPrisonerDeath();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ClearPrisonerBuildingBelong`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearPrisonerBuildingBelong();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RegisterTortureColdDownTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterTortureColdDownTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 拷打CD

---

### Function `RegisterSendPrisonerFoodColdDownTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterSendPrisonerFoodColdDownTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveSendPrisonerFoodAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveSendPrisonerFoodAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CheckCanUseItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `FGameplayTag` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanUseItem(FGameplayTag Tag) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `AcceptNPCTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTaskInfo` | const [FCommonTaskInfo](../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AcceptNPCTask(const FCommonTaskInfo& InTaskInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddDialogueRandOptionRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDialogueInfoID` | `const FName&` |
| `InOptionID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddDialogueRandOptionRecord(const FName& InDialogueInfoID,const FName& InOptionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RestCharacterRandomLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void RestCharacterRandomLocation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 重置角色到随机位置

---

### Function `SetIdleAroundBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Building` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetIdleAroundBuilding(ABuildingActorBase* Building);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetIdleAroundBuildingLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLocation` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetIdleAroundBuildingLocation(FVector& OutLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 食槽或充能桩等

---
