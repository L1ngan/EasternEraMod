# `class` `AEastRimWorldCharacter`

**源码头文件:** `EastRimWorld/Character/EastRimWorldCharacter.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnDrugUseChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnDrugUseChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnDrugUseChanged OnDrugUseChanged;` |

---

### 属性 `OnCharacterTemaChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FCharacterTemaChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FCharacterTemaChanged OnCharacterTemaChanged;` |

---

### 属性 `OnCharacterNameChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FCharacterNameChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FCharacterNameChange OnCharacterNameChange;` |

---

### 属性 `PickInventoryItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md) * |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UInventoryItemInstance * PickInventoryItem = nullptr;` |

---

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bSelectState = false;` |

**源码注释:**

> 是否是选中状态

---

### 属性 `bHoveringState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bHoveringState = false;` |

**源码注释:**

> 是否是悬浮状态

---

### 属性 `bRegisterWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bRegisterWorld = false;` |

**源码注释:**

> *********************************SaveGame Start*******************************
> 是否注册到世界中

---

### 属性 `CharacterSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FCharacterSaveData CharacterSaveData;` |

**源码注释:**

> 角色存储的信息 不是最新 如需取值使用其他方式

---

### 属性 `CharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FName CharacterID;` |

**源码注释:**

> 角色的信息ID

---

### 属性 `FirstName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FText FirstName;` |

**源码注释:**

> 姓

---

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FText Name;` |

**源码注释:**

> 名字

---

### 属性 `MonsterNestGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid MonsterNestGuid;` |

**源码注释:**

> 当为怪物时属于哪个怪物巢穴

---

### 属性 `MovingRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float MovingRange = 0.f;` |

**源码注释:**

> 移动范围

---

### 属性 `WorldSpaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EStorageSpace` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) EStorageSpace WorldSpaceType;` |

**源码注释:**

> *********************************SaveGame End*******************************
> 室内室外屋檐下

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释:**

> 按钮相关的功能

---

### 属性 `bOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOpenDanTian = false;` |

**源码注释:**

> 是否开启丹田

---

### 属性 `bCanOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bCanOpenDanTian = false;` |

**源码注释:**

> 是否可以开启

---

### 属性 `CarryWeapons`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FCarryWeaponsInfo](../Struct/CharacterStruct__FCarryWeaponsInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FCarryWeaponsInfo> CarryWeapons;` |

**源码注释:**

> 拿在手上的武器

---

### 属性 `EastRimWorldCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly, Category="CharacterData" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "CharacterData") FInstancedStruct EastRimWorldCharacterData;` |

**源码注释:**

> 角色信息

---

### 属性 `OnCurrentMoodChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCurrentMoodValueChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCurrentMoodValueChanged OnCurrentMoodChanged;` |

**源码注释:**

> 当前心情值变化时

---

### 属性 `OnMoodTargetValueChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMoodTargetValueChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMoodTargetValueChanged OnMoodTargetValueChanged;` |

**源码注释:**

> 目标心情值变化时

---

### 属性 `OnCharacterGrowUp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCharacterGrowUp` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCharacterGrowUp OnCharacterGrowUp;` |

---

### 属性 `OnSuffixChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSuffixChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnSuffixChanged OnSuffixChanged;` |

---

### 属性 `CharacteristicInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FName> CharacteristicInfos;` |

**源码注释:**

> 拥有的特性

---

### 属性 `ItemDrugUsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FName,int32> ItemDrugUsed;` |

**源码注释:**

> 角色使用过的药品记录（用于计算耐药性）

---

### 属性 `ReadingBookGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid ReadingBookGuid;` |

**源码注释:**

> 正在阅读的书籍ID

---

### 属性 `EatFoodGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid EatFoodGuid;` |

**源码注释:**

> 正在吃的食物ID

---

### 属性 `GameModeBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase { nullptr };` |

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### 属性 `GameInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UERW_GameInstanceBase](../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UERW_GameInstanceBase> GameInstance;` |

---

### 属性 `CurrentTemperatureIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CurrentTemperatureIntervalTime = 0.f;` |

**源码注释:**

> 当前处于温度区间时间

---

### 属性 `CharacterTemperatureStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ECharacterTemperatureStateType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ECharacterTemperatureStateType CharacterTemperatureStateType = ECharacterTemperatureStateType::Normal;` |

**源码注释:**

> 当前的角色温度状态

---

### 属性 `TemperatureStateUpdateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float TemperatureStateUpdateInterval = 40.f;` |

**源码注释:**

> 温度更新间隔

---

### 属性 `CharacterHungryStateUpdateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CharacterHungryStateUpdateInterval = 5.f;` |

**源码注释:**

> 饥饿状态更新间隔

---

### 属性 `CharacterHungry0TimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FTimerHandle CharacterHungry0TimerHandle;` |

**源码注释:**

> 饥饿度为0的计时器

---

### 属性 `CurrentHungryIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CurrentHungryIntervalTime = 0.f;` |

**源码注释:**

> 当前处于饥饿状态的时间

---

### 属性 `CurHungryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurHungryId;` |

**源码注释:**

> 当前饥饿状态

---

### 属性 `ProhibitTreatSelf`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool ProhibitTreatSelf = true;` |

**源码注释:**

> 是否禁止治疗自己

---

### 属性 `bCanSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bCanSelect = true;` |

**源码注释:**

> 是否可以被选中

---

### 属性 `SpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FVector SpawnPoint;` |

**源码注释:**

> 出生点位置

---

### 属性 `NutritionTriggerFlag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool NutritionTriggerFlag;` |

---

### 属性 `BattlefieldRolesType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBattlefieldRolesType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::None;` |

**源码注释:**

> 战场英雄类型

---

### 属性 `bHideStateBarName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="ERW|UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ERW|UI") bool bHideStateBarName = false;` |

**源码注释:**

> 状态条UI是否隐藏名字（仅隐藏名字，不影响血条）

---

### 属性 `bIsDeath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bIsDeath = false;` |

---

### 属性 `HealthComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEastRimWorldHealthComponent](Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldHealthComponent> HealthComponent;` |

---

### 属性 `CombatComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldCombatComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldCombatComponent> CombatComponent;` |

---

### 属性 `GrowUpComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEastRimWorldGrowUpComponent](Components/EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldGrowUpComponent> GrowUpComponent;` |

---

### 属性 `CommonBuffComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonBuffComponent](Components/CommonBuffComponent__UCommonBuffComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCommonBuffComponent> CommonBuffComponent;` |

---

### 属性 `InjuryBuffComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInjuryBuffComponent](Components/InjuryBuffComponent__UInjuryBuffComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInjuryBuffComponent> InjuryBuffComponent;` |

---

### 属性 `SmartObjectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USmartObjectComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character") TObjectPtr<USmartObjectComponent> SmartObjectComponent;` |

---

### 属性 `CharacterSpringArm`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USpringArmComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<USpringArmComponent> CharacterSpringArm;` |

---

### 属性 `CharacterCamera`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UCameraComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Character" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Character", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCameraComponent> CharacterCamera;` |

---

### 属性 `AIPerceptionStimuliSource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UAIPerceptionStimuliSourceComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|AI" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|AI", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAIPerceptionStimuliSourceComponent> AIPerceptionStimuliSource;` |

---

### 属性 `ButcherWorkLoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float ButcherWorkLoad = 0.f;` |

**源码注释:**

> 当前屠宰工作量

---

### 属性 `CharacterDamageInformation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FCharacterDeathInformation CharacterDamageInformation;` |

**源码注释:**

> 角色最后受到英雄伤害信息

---

### 属性 `AnyDamageInformation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FCharacterDeathInformation AnyDamageInformation;` |

**源码注释:**

> 角色最后受到伤害的信息

---

### 属性 `CarryActorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGuid CarryActorGuid;` |

**源码注释:**

> 正在搬运的对象

---

### 属性 `CarryActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor *` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AActor * CarryActor = nullptr;` |

**源码注释:**

> 正在搬运的actor

---

### 属性 `PatrolLocations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite) TArray<FVector> PatrolLocations;` |

**源码注释:**

> 巡逻动物的巡逻点集合

---

### 属性 `CurPatrolLocations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FVector> CurPatrolLocations;` |

**源码注释:**

> 巡逻动物当前正在添加的巡逻点集合

---

### 属性 `PatrolPointActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<AActor*> PatrolPointActors;` |

**源码注释:**

> 临时创建的用于显示巡逻点的Actor（在巡逻点选取结束后删除）

---

### 属性 `ProtectTargetGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FGuid ProtectTargetGuid = FGuid();` |

**源码注释:**

> 守护机关人的守护目标de GUID

---

### 属性 `ProtectTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AEastRimWorldCharacter* ProtectTarget;` |

**源码注释:**

> 守护机关人的守护目标

---

### 属性 `CantKnockDownOrgan`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> CantKnockDownOrgan;` |

**源码注释:**

> 战斗中不会导致晕倒的部位

---

### 属性 `PrisonerBeforeTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGenericTeamId PrisonerBeforeTeamID;` |

**源码注释:**

> 囚犯之前的TeamID

---

### 属性 `PrisonBuildingGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGuid PrisonBuildingGuid = FGuid();` |

**源码注释:**

> 囚犯所属监狱设施Guid

---

### 属性 `PrisonerArrestedByGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGuid PrisonerArrestedByGuid;` |

**源码注释:**

> 当前被谁押送

---

### 属性 `PrisonerArrestedBy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) AEastRimWorldCharacter* PrisonerArrestedBy;` |

**源码注释:**

> 押解此囚犯的角色

---

### 属性 `TortureColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float TortureColdDown = 0.f;` |

**源码注释:**

> 拷打CD

---

### 属性 `TortureTimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle TortureTimerHandle;` |

---

### 属性 `RecruitColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float RecruitColdDown = 0.f;` |

**源码注释:**

> 招募CD

---

### 属性 `RecruitTimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle RecruitTimerHandle;` |

---

### 属性 `LoyaltyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float LoyaltyValue = 100.f;` |

**源码注释:**

> 忠诚度

---

### 属性 `OnLoyaltyChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnLoyaltyChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnLoyaltyChanged OnLoyaltyChanged;` |

**源码注释:**

> 忠诚度变化委托

---

### 属性 `IsRedemption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) bool IsRedemption = false;` |

**源码注释:**

> 是否被赎回

---

### 属性 `RedeemValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) float RedeemValue = 0.f;` |

**源码注释:**

> 赎回价值

---

### 属性 `bSendFoodAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) bool bSendFoodAction = false;` |

**源码注释:**

> 是否已经创建送饭行为

---

### 属性 `SendPrisonerFoodColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) float SendPrisonerFoodColdDown = 0.f;` |

**源码注释:**

> 送饭CD

---

### 属性 `SendPrisonerFoodTimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FTimerHandle SendPrisonerFoodTimerHandle;` |

---

### 属性 `DialogueRandOptionRecords`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,VisibleAnywhere) TMap<FName,FNameIDArray> DialogueRandOptionRecords;` |

**源码注释:**

> 对话随机选项记录<InDialogueInfoID,OptionIDs>

---

## 蓝图暴露函数

### 函数 `GetEastRimWorldAbilitySystemComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Character" |
| 返回类型 | [UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Character") UEastRimWorldAbilitySystemComponent* GetEastRimWorldAbilitySystemComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_CancelAbilities`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void K2_CancelAbilities(const FGameplayTag & Tag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过标签取消能力

---

### 函数 `GetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGenericTeamId` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取阵营

---

### 函数 `GetTeamInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGameplayTeamInfo GetTeamInfo() override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `MulticastNameChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFirstName` | `FText` |
| `InName` | `FText` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void MulticastNameChange(FText InFirstName, FText InName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGameModeBase`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AERW_GameModeBase * GetGameModeBase();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetCharacterCollisionProfileName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CollisionProfileName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent) void SetCharacterCollisionProfileName(FName CollisionProfileName);`

**用法说明:** **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释:**

> 设置角色碰撞通道

---

### 函数 `OnDeathStarted`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwningActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void OnDeathStarted(AActor* OwningActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> Begins the death sequence for the character (disables collision, disables movement, etc...)

---

### 函数 `ApplyCustomApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bUseApparel` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ApplyCustomApparels(bool bUseApparel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 应用服饰外观（仅改变外观，不改变服饰装备和效果）

---

### 函数 `OnKnockDown`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwningActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnKnockDown(AActor* OwningActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 被击倒

---

### 函数 `OnKnockDownFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwningActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnKnockDownFinished(AActor* OwningActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StationDeathFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void StationDeathFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 驻地死亡完成

---

### 函数 `K2_OnDeathFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnDeathFinished")) void K2_OnDeathFinished();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnDeathFinished」。

**源码注释:**

> Called when the death sequence for the character has completed

---

### 函数 `GetSelectState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Character" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Character") bool GetSelectState() const { return bSelectState; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CharacterSlaughtered`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<FName , [FAllTypeItemDrop](../Struct/ItemStruct__FAllTypeItemDrop.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `slaughterValue` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FName , FAllTypeItemDrop> CharacterSlaughtered(int32 slaughterValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FEastRimWorldCharacterData GetCharacterData() override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> ~ ICharacterInterface
> 获取角色信息

---

### 函数 `SetCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void SetCharacterData(const FInstancedStruct & CharacterData) override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetCanSelect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsCanSelect` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCanSelect(bool IsCanSelect);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置能否选中

---

### 函数 `PopupInfoUIChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PopupInfoUIChanged(const FName& ID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 弹出UI信息改变

---

### 函数 `GetCurrentWorkSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleName` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetCurrentWorkSchedule(FString& ScheduleName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获得当前工作日程名称

---

### 函数 `GetButcherWorkLoad`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlaughterSpeed` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetButcherWorkLoad(float SlaughterSpeed);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 计算屠宰工作量

---

### 函数 `SearchBodyFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SearchBodyFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 搜索尸体完成

---

### 函数 `HuntFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HuntFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PickItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInfo` | `FInstancedStruct` |
| `CharacterBehaviorState` | `ECharacterBehaviorState` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PickItem(FInstancedStruct InventoryItemInfo,ECharacterBehaviorState CharacterBehaviorState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 抱或拿起一个道具

---

### 函数 `PlayAnimItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInfo` | `FInstancedStruct` |
| `CharacterBehaviorState` | `ECharacterBehaviorState` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PlayAnimItem(FInstancedStruct InventoryItemInfo,ECharacterBehaviorState CharacterBehaviorState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 播放物品对应的动画

---

### 函数 `RemovePickItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void RemovePickItem();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 移除抱或拿起的道具

---

### 函数 `StopCurAnimMontage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StopCurAnimMontage();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 停止当前的蒙太奇

---

### 函数 `FreezeAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Character|Animation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Character|Animation") void FreezeAnimation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 冻结当前动画

---

### 函数 `UnfreezeAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Character|Animation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Character|Animation") void UnfreezeAnimation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 解除动画冻结

---

### 函数 `GiveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GiveAbilityByAbilityID(FName GameplayAbilityID,int Level = 1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过技能id获得能力

---

### 函数 `RemoveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除对应技能id的能力

---

### 函数 `GiveWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GiveWeapon(const FCharacterWeapon & InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获得新的武器

---

### 函数 `RemoveWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveWeapon(const FCharacterWeapon & InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除武器

---

### 函数 `HandWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HandWeapon(const FCharacterWeapon & InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 手持武器

---

### 函数 `PackUpWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PackUpWeapon(const FCharacterWeapon & InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 收起武器

---

### 函数 `InitCharacterBehaviorStateBar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void InitCharacterBehaviorStateBar();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 初始化角色行为状态栏

---

### 函数 `RefreshStateBarNameVisibility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bHideName` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void RefreshStateBarNameVisibility(bool bHideName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 刷新状态条名字显示（蓝图里只处理名字控件可见性，不影响血条）

---

### 函数 `ResetCharacterHealthBarColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlayerProssesColor` | `FLinearColor` |
| `NutralityProssesColor` | `FLinearColor` |
| `EnemyProssesColor` | `FLinearColor` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void ResetCharacterHealthBarColor(FLinearColor PlayerProssesColor , FLinearColor NutralityProssesColor , FLinearColor EnemyProssesColor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 重置角色血条颜色

---

### 函数 `AddGWOPlayerComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddGWOPlayerComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 初始化友方GWO组件

---

### 函数 `RemoveGWOPlayerComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGWOPlayerComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除友方GWO组件

---

### 函数 `InitializeCharacterByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterID` | `const FName &` |
| `InCharacterType` | `ECharacterType` |
| `TeamID` | `uint8` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitializeCharacterByID(const FName & InCharacterID,ECharacterType InCharacterType,uint8 TeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动态生成时通过id初始化角色

---

### 函数 `NewSpawnWorldCharacterByInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |
| `TeamID` | `uint8` |
| `bInRegisterWorld` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void NewSpawnWorldCharacterByInfo(const FInstancedStruct & CharacterData,uint8 TeamID,bool bInRegisterWorld);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 生成角色
> 
> / @param CharacterData 角色信息
> / @param InCharacterType 角色的类型
> / @param TeamID 角色的阵营
> / @param bRegisterWorld 是否需要注册到世界中 用于跨关卡

---

### 函数 `InitializeCharacterByInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |
| `TeamID` | `uint8` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void InitializeCharacterByInfo(const FInstancedStruct & CharacterData,uint8 TeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动态生成时通过角色信息初始化

---

### 函数 `ReInitializeCharacterByInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `const FInstancedStruct &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void ReInitializeCharacterByInfo(const FInstancedStruct & CharacterData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 重新生成角色时初始化（目前用于进化）

---

### 函数 `GetSpawnBoxLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetSpawnBoxLocation(FVector& Location) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得出生所在的盒子位置

---

### 函数 `GetIdleRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetIdleRange() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得闲逛范围

---

### 函数 `OnBodyIsRotten`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnBodyIsRotten();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 身体已经腐烂

---

### 函数 `AddNewCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacteristicID` | `const FName &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddNewCharacteristic(const FName & NewCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 添加新的特性

---

### 函数 `RemoveCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RemoveCharacteristicID` | `const FName &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveCharacteristic(const FName & RemoveCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除特性

---

### 函数 `OpenDanTian`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OpenDanTian();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 开启丹田

---

### 函数 `RegisterWorldCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RegisterWorldCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 注册actor

---

### 函数 `UnregisterWorldCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnregisterWorldCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 注销actor

---

### 函数 `CalculateCharacterTemperatureState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `float AddTime = 0.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalculateCharacterTemperatureState(float AddTime = 0.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 计算角色的温度状态

---

### 函数 `CalculateHungryIntervalTimeState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `float AddTime = 0.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalculateHungryIntervalTimeState(float AddTime = 0.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 计算角色的饥饿状态

---

### 函数 `ShowTipsInCharacterHead`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TipsText` | `const FText &` |
| `（匿名/仅类型）` | `ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ShowTipsInCharacterHead(const FText & TipsText,ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 显示提示在角色头上

---

### 函数 `k2_ShowTipsInCharacterHead`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TipsText` | `const FText &` |
| `（匿名/仅类型）` | `ECharacterHeadTipType TipType= ECharacterHeadTipType::Type1` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ShowTipsInCharacterHead") void k2_ShowTipsInCharacterHead(const FText & TipsText,ECharacterHeadTipType TipType= ECharacterHeadTipType::Type1);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 显示提示在角色头上

---

### 函数 `DestroyDueToDeath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void DestroyDueToDeath();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 角色死亡删除 如果注册到世界中 则世界数据也删除

---

### 函数 `ConvertToPlayerTeam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsRegisterWorld` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void ConvertToPlayerTeam(bool IsRegisterWorld);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 转化为玩家阵营

---

### 函数 `AddShoutComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTexts` | `const TArray<FText>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void AddShoutComponent(const TArray<FText>& InTexts);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 添加喊话组件

---

### 函数 `RemoveShoutComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void RemoveShoutComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 移除喊话组件

---

### 函数 `IsPlayerTeam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsPlayerTeam() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 是否是玩家阵营

---

### 函数 `IsDeath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsDeath() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 是否死亡

---

### 函数 `GetCharacterType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `ECharacterType` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) ECharacterType GetCharacterType();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetInControlledTargetObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetActor` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetInControlledTargetObject(UObject* TargetActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置控制的角色和物品进行交互

---

### 函数 `GetSpawnPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) FVector GetSpawnPoint();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 敌人获取出生点

---

### 函数 `GetControlEffectAnimMontageByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UAnimMontage *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AnimTag` | `const FGameplayTag &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UAnimMontage * GetControlEffectAnimMontageByTag(const FGameplayTag & AnimTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过标签获取蒙太奇

---

### 函数 `GetAllDrugResistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FName,float>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FName,float> GetAllDrugResistance() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有的药物抗性

---

### 函数 `GetDrugResistanceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DrugID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetDrugResistanceByID(const FName& DrugID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 查询某种药物的耐药性

---

### 函数 `OnEatItemEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName &` |
| `ItemNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnEatItemEnd(const FName & ItemID, int32 ItemNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 吃东西后，扣除物品数量，并出发药品的属性增加效果

---

### 函数 `GetCharacterChatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [UEastRimWorldCharacterChatComponent](Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) virtual UEastRimWorldCharacterChatComponent* GetCharacterChatComponent(){return nullptr;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `IsCharacterChatting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) virtual bool IsCharacterChatting(){return false;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 角色是否正在闲聊

---

### 函数 `SetWorldSpaceType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldSpaceType` | `const EStorageSpace&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetWorldSpaceType(const EStorageSpace& InWorldSpaceType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置角色所处的空间类型

---

### 函数 `IsPowerfulCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) virtual bool IsPowerfulCharacter(){return false;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否是强力角色

---

### 函数 `CharacterGrowUp`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacterID` | `FName` |
| `CharacterType` | `ECharacterType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CharacterGrowUp(FName NewCharacterID , ECharacterType CharacterType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 角色进化后重新初始化

---

### 函数 `SetDeathInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeathInformation` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetDeathInformation(const FCharacterDeathInformation & DeathInformation) { CharacterDamageInformation = DeathInformation; };`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置上一次伤害的人

---

### 函数 `SetLastDamageInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Information` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetLastDamageInformation(const FCharacterDeathInformation & Information) { AnyDamageInformation = Information; };`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置上一次伤害的来源

---

### 函数 `PlayOpenDoorAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OpenDoorAnimation` | `UAnimMontage *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void PlayOpenDoorAnimation(UAnimMontage * OpenDoorAnimation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 播放开门动画

---

### 函数 `K2_PlayPutdownAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="PlayPutdownAnimation")) void K2_PlayPutdownAnimation();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「PlayPutdownAnimation」。

---

### 函数 `SuspendCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSuspend` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SuspendCharacter(bool bSuspend);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置角色停止所有动作

---

### 函数 `SetCarryActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCarryActor` | `AActor *` |
| `NAME_None` | `FName SocketName =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCarryActor(AActor * InCarryActor,FName SocketName = NAME_None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置正在搬运的对象

---

### 函数 `StartPatrolPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartPatrolPoint();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动物巡逻点选点结束

---

### 函数 `AddPatrolPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PatrolPoint` | `FVector` |
| `PatrolPointActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddPatrolPoint(FVector PatrolPoint , AActor* PatrolPointActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动物添加巡逻点

---

### 函数 `ClearPatrolPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearPatrolPoints();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动物清空巡逻点

---

### 函数 `FinishPatrolPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FinishPatrolPoint();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 动物巡逻点选点结束

---

### 函数 `SetNewProtectTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewProtectTarget` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetNewProtectTarget(AEastRimWorldCharacter* NewProtectTarget);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置守卫对象

---

### 函数 `GetAttributePercentage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeName` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetAttributePercentage(const FName& AttributeName) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得属性值的百分比

---

### 函数 `GetCurrentPracticeRoomExtraValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetCurrentPracticeRoomExtraValue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取角色当前环境修炼的额外值

---

### 函数 `GetCurrentPracticeMoodExtraValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutMiniValue` | `float&` |
| `OutMaxValue` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetCurrentPracticeMoodExtraValue(float& OutMiniValue, float& OutMaxValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取角色当前心情修炼的额外值

---

### 函数 `GetAptitudePracticeEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetAptitudePracticeEfficiency();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取角色资质修炼转换效率

---

### 函数 `GetCurrentFiveElementsExtraValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutMiniValue` | `float&` |
| `OutMaxValue` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetCurrentFiveElementsExtraValue(float& OutMiniValue, float& OutMaxValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取角色当前五行修炼的额外值

---

### 函数 `GetTotalPracticeExtraValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetTotalPracticeExtraValue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取总共的修炼额外数值

---

### 函数 `GetAbilityCooldown`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `const FGameAbilityStruct &AbilityStruct` |
| `AbilityLevel` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetAbilityCooldown(const FGameAbilityStruct &AbilityStruct,int32 AbilityLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取指定技能的冷却时间

---

### 函数 `GetAbilityCooldownByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CooldownTag` | `const FGameplayTagContainer &` |
| `InCooldownValue` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetAbilityCooldownByTag(const FGameplayTagContainer & CooldownTag,float InCooldownValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取指定技能的冷却时间

---

### 函数 `CreateSubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamID` | `const FGenericTeamId&` |
| `InTransform` | `const FTransform&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual AEastRimWorldCharacter* CreateSubstitute(const FGenericTeamId& TeamID,const FTransform& InTransform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 创建替身

---

### 函数 `DestorySubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void DestorySubstitute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 销毁

---

### 函数 `GetSubstituteCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) virtual AEastRimWorldCharacter* GetSubstituteCharacter() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获取替身

---

### 函数 `SetNameSuffix`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Text` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetNameSuffix(const FText& Text);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置名字后缀

---

### 函数 `CreateImprisonArrestAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateImprisonArrestAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> ------------------囚犯------------------------------------------

---

### 函数 `CreateSpecifiedArrestAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateSpecifiedArrestAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveArrestAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveArrestAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除押解行为

---

### 函数 `SetArrestedPrison`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Prison` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetArrestedPrison(AEastRimWorldCharacter* Prison);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置拘捕到的囚犯

---

### 函数 `CreatePrisonerArrestedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreatePrisonerArrestedAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 创建被押解行为

---

### 函数 `RemoveArrestedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveArrestedAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除被押解行为

---

### 函数 `SetPrisonerArrestedBy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetPrisonerArrestedBy(AEastRimWorldCharacter* InCharacter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置囚犯被谁押送

---

### 函数 `OnPrisonerImprisoned`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnPrisonerImprisoned();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 囚犯被关押

---

### 函数 `OnPrisonerExecuted`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnPrisonerExecuted();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 囚犯被处决

---

### 函数 `OnPrisonerTortured`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Torturer` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnPrisonerTortured(AEastRimWorldCharacter* Torturer);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 囚犯被拷打

---

### 函数 `OnPrisonerRecruited`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Recruiter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnPrisonerRecruited(AEastRimWorldCharacter* Recruiter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 囚犯被招募

---

### 函数 `CreateRecruitPrisonerAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Recruiter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGOAP_Action CreateRecruitPrisonerAction(AEastRimWorldCharacter* Recruiter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 创建招募囚犯的行为

---

### 函数 `RemoveRecruitPrisonerAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveRecruitPrisonerAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除招募囚犯的行为

---

### 函数 `OnPrisonerDeath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnPrisonerDeath();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ClearPrisonerBuildingBelong`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearPrisonerBuildingBelong();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RegisterTortureColdDownTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RegisterTortureColdDownTimer();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 拷打CD

---

### 函数 `RegisterSendPrisonerFoodColdDownTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RegisterSendPrisonerFoodColdDownTimer();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveSendPrisonerFoodAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveSendPrisonerFoodAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckCanUseItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `FGameplayTag` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanUseItem(FGameplayTag Tag) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `AcceptNPCTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTaskInfo` | const [FCommonTaskInfo](../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AcceptNPCTask(const FCommonTaskInfo& InTaskInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AddDialogueRandOptionRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueInfoID` | `const FName&` |
| `InOptionID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddDialogueRandOptionRecord(const FName& InDialogueInfoID,const FName& InOptionID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RestCharacterRandomLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void RestCharacterRandomLocation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 重置角色到随机位置

---

### 函数 `SetIdleAroundBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Building` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetIdleAroundBuilding(ABuildingActorBase* Building);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetIdleAroundBuildingLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLocation` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetIdleAroundBuildingLocation(FVector& OutLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 食槽或充能桩等

---
