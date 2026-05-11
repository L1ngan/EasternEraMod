# `struct` `FCharacterSaveData`

**Source header:** `EastRimWorld/WorldSystem/WorldCharacterData.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CharacterSGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterSGuid;` |

**Source comments:**

> 角色的存档GUID 可能为空

---

### Property `CharacterAISGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterAISGuid;` |

**Source comments:**

> 角色的AI 存档GUID 可能为空

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterGuid;` |

**Source comments:**

> 角色的唯一GUID

---

### Property `CharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CharacterID;` |

**Source comments:**

> 角色ID

---

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterName;` |

**Source comments:**

> 角色名字

---

### Property `CharacterFirstName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterFirstName;` |

**Source comments:**

> 角色姓氏

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | `ECharacterType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) ECharacterType CharacterType;` |

**Source comments:**

> 角色类型

---

### Property `MyTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGenericTeamId MyTeamID;` |

**Source comments:**

> 阵营ID

---

### Property `bOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bOpenDanTian = false;` |

**Source comments:**

> 是否开启丹田

---

### Property `bCanOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanOpenDanTian = false;` |

**Source comments:**

> 是否可以开启

---

### Property `CharacteristicInfos`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FName> CharacteristicInfos;` |

**Source comments:**

> 拥有的特性

---

### Property `BeInPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BeInPlaceGuid;` |

**Source comments:**

> 当前所在的地点GUID

---

### Property `BelongToPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BelongToPlaceGuid;` |

**Source comments:**

> 所属的城镇

---

### Property `BeInLevelName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName BeInLevelName;` |

**Source comments:**

> 当前所在的关卡名字

---

### Property `bActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool bActive = false;` |

**Source comments:**

> 当前激活状态

---

### Property `OnWorldState`

| Field | Details |
|------|------|
| C++ type | `EOnWorldState` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") EOnWorldState OnWorldState = EOnWorldState::None;` |

**Source comments:**

> 角色在世界中的状态

---

### Property `CharacterWorldMapLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector CharacterWorldMapLocation = FVector::ZeroVector;` |

**Source comments:**

> 角色在世界中的位置信息

---

### Property `CharacterWorldPlaceTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FTransform CharacterWorldPlaceTransform = FTransform::Identity;` |

**Source comments:**

> 角色在地点中的位置

---

### Property `NutritionTriggerFlag`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool NutritionTriggerFlag;` |

**Source comments:**

> 饥饿触发标记

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 按钮相关的功能

---

### Property `CharacterRelationshipData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FSocialRelationshipData](../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FGuid,FSocialRelationshipData> CharacterRelationshipData;` |

**Source comments:**

> 角色的社交关系

---

### Property `ItemDrugUsed`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ItemDrugUsed;` |

**Source comments:**

> 角色使用过的药品记录（用于计算耐药性）

---

### Property `CurrentHungryIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") float CurrentHungryIntervalTime = 0.f;` |

**Source comments:**

> 当前处于饥饿状态的时间

---

### Property `CurHungryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurHungryId;` |

**Source comments:**

> 当前饥饿状态

---

### Property `ProhibitTreatSelf`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool ProhibitTreatSelf = true;` |

**Source comments:**

> 是否禁止治疗自己

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanSelect = true;` |

**Source comments:**

> 是否可以被选中

---

### Property `SpawnPoint`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector SpawnPoint;` |

**Source comments:**

> 出生点位置

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> Attributes;` |

**Source comments:**

> 存储的属性

---

### Property `CalcuOnyAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> CalcuOnyAttributes;` |

**Source comments:**

> 存储用于在大世界中计算数据的属性,不用来复原角色数据

---

### Property `CultivateAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FString,float> CultivateAttributes;` |

**Source comments:**

> 存储的培养属性(势力自动培养给的)

---

### Property `BuffArray`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FCommonBuff> BuffArray;` |

**Source comments:**

> 角色身上的buff

---

### Property `CurInjuryEffectArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryEffectInstance](../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**Source comments:**

> 伤势

---

### Property `CurrentTreatInjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame,Category= "Runtime") FName CurrentTreatInjuryId;` |

**Source comments:**

> 当前在治疗的伤势

---

### Property `MartialArtsLearnData`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsLearnData](../Struct/MartialArts__FMartialArtsLearnData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**Source comments:**

> 已经学习的武学

---

### Property `CarryingMoves`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingMoves;` |

**Source comments:**

> 携带的招式

---

### Property `CarryingPassive`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingPassive;` |

**Source comments:**

> 携带的被动

---

### Property `CarryingInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CarryingInternalStrength;` |

**Source comments:**

> 携带的内功

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int MovesSlotCount = 0;` |

**Source comments:**

> 招式槽位数量

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int PassiveSlotCount = 0;` |

**Source comments:**

> 被动槽位数量

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int RealmLevel = 0;` |

**Source comments:**

> 当前的境界等级

---

### Property `CurMartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int CurMartialArtsScore = 0;` |

**Source comments:**

> 当前的武学积分

---

### Property `BooksReadTime`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,float> BooksReadTime;` |

**Source comments:**

> 当前阅读的书籍时间

---

### Property `BooksReadCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,int32> BooksReadCount;` |

**Source comments:**

> 书籍阅读完次数

---

### Property `CurReadMartialArts`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurReadMartialArts;` |

**Source comments:**

> 当前阅读的武学书籍

---

### Property `BreakThroughHarvest`

| Field | Details |
|------|------|
| C++ type | TArray<[FBreakThroughHarvest](WorldCharacterData__FBreakThroughHarvest.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**Source comments:**

> 当前角色已经突破后选择的技能等

---

### Property `UseItemSaveData`

| Field | Details |
|------|------|
| C++ type | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**Source comments:**

> 角色身上的物品 只会在跨世界时读取

---

### Property `CombatScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) float CombatScore =0.f;` |

**Source comments:**

> 战力

---

### Property `bRegisterWorld`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bRegisterWorld = true;` |

**Source comments:**

> 是否需要注册到世界势力中

---

### Property `CustomApparels`

| Field | Details |
|------|------|
| C++ type | `TMap<EArmorType,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TMap<EArmorType,FName>CustomApparels;` |

**Source comments:**

> 定制服饰外观

---

### Property `bUseCustomApparels`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bUseCustomApparels = false;` |

**Source comments:**

> 是否应用服饰外观

---

### Property `CurMartialArtsMajorCategory`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsMajorCategories` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) EMartialArtsMajorCategories CurMartialArtsMajorCategory;` |

**Source comments:**

> 当前的修炼倾向

---

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**Source comments:**

> 突破次数

---

### Property `RealmLevelHistoricHigh`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 RealmLevelHistoricHigh = 1;` |

**Source comments:**

> 历史最高境界

---

### Property `ReachableRealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 ReachableRealmLevel = 1;` |

**Source comments:**

> 当前可以突破到的境界

---

### Property `CultivationLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,Category= "Animal") int32 CultivationLevel = 0;` |

**Source comments:**

> 动物修炼等级

---

### Property `CurrentExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,Category= "Animal") float CurrentExperience = 0.0f;` |

**Source comments:**

> 动物修炼经验

---

### Property `bUseProtagonistAppearance`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bUseProtagonistAppearance = false;` |

---
