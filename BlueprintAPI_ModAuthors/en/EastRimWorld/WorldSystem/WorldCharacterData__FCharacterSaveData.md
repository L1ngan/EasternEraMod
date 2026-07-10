# `struct` `FCharacterSaveData`

**Source header:** `EastRimWorld/WorldSystem/WorldCharacterData.h`

---

## Functional description (from header comments)

> Character Save Data data structure.

## Blueprint-exposed variables

### Property `CharacterSGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterSGuid;` |

**Notes:**

> 角色的存档GUID 可能为空

---

### Property `CharacterAISGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterAISGuid;` |

**Notes:**

> 角色的AI 存档GUID 可能为空

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterGuid;` |

**Notes:**

> 角色的唯一GUID

---

### Property `AreaCurrentAreaId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid AreaCurrentAreaId;` |

**Notes:**

> —— 区域控制：弟子区域归属（随存档持久化；HungerState 读档可重新派生，不存）——

---

### Property `AreaHungerZeroAccumSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float AreaHungerZeroAccumSeconds = 0.f;` |

**Notes:**

> Area Hunger Zero Accum Seconds field.

---

### Property `AreaFrozenByCaptured`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool AreaFrozenByCaptured = false;` |

**Notes:**

> Area Frozen By Captured field.

---

### Property `CharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CharacterID;` |

**Notes:**

> 角色ID

---

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterName;` |

**Notes:**

> 角色名字

---

### Property `CharacterFirstName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterFirstName;` |

**Notes:**

> 角色姓氏

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) ECharacterType CharacterType;` |

**Notes:**

> 角色类型

---

### Property `Sex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex = false;` |

**Notes:**

> Sex field.

---

### Property `bSexOverride`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bSexOverride = false;` |

**Notes:**

> Sex 是否为权威值（仅随机生成的弟子置 true；其余角色性别仍由模板决定，避免读档时错误覆盖）

---

### Property `CustomizationId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Base") FString CustomizationId;` |

**Notes:**

> 个体捏脸ID（指向 DT_PresetCustomizationProfiles_V10；空=用模板默认捏脸，随机弟子按性别抽取后填入）

---

### Property `MyTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGenericTeamId MyTeamID;` |

**Notes:**

> 阵营ID

---

### Property `bOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bOpenDanTian = false;` |

**Notes:**

> 是否开启丹田

---

### Property `bCanOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanOpenDanTian = false;` |

**Notes:**

> 是否可以开启

---

### Property `CharacteristicInfos`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FName> CharacteristicInfos;` |

**Notes:**

> 拥有的特性

---

### Property `BeInPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BeInPlaceGuid;` |

**Notes:**

> 当前所在的地点GUID

---

### Property `BelongToPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BelongToPlaceGuid;` |

**Notes:**

> 所属的城镇

---

### Property `BeInLevelName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName BeInLevelName;` |

**Notes:**

> 当前所在的关卡名字

---

### Property `CurrentWorkScheduleName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FString CurrentWorkScheduleName;` |

**Notes:**

> 当前工作日程名称（Agents 改 Transient 后，角色读档/重建时据此回注到工作日程）

---

### Property `bActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool bActive = false;` |

**Notes:**

> 当前激活状态

---

### Property `OnWorldState`

| Field | Details |
|------|------|
| C++ type | [EOnWorldState](../Struct/CommonEnum__EOnWorldState.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") EOnWorldState OnWorldState = EOnWorldState::None;` |

**Notes:**

> 角色在世界中的状态

---

### Property `CharacterWorldMapLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector CharacterWorldMapLocation = FVector::ZeroVector;` |

**Notes:**

> 角色在世界中的位置信息

---

### Property `CharacterWorldPlaceTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FTransform CharacterWorldPlaceTransform = FTransform::Identity;` |

**Notes:**

> 角色在地点中的位置

---

### Property `NutritionTriggerFlag`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool NutritionTriggerFlag;` |

**Notes:**

> 饥饿触发标记

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Notes:**

> 按钮相关的功能

---

### Property `CharacterRelationshipData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FSocialRelationshipData](../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FGuid,FSocialRelationshipData> CharacterRelationshipData;` |

**Notes:**

> 角色的社交关系

---

### Property `ItemDrugUsed`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ItemDrugUsed;` |

**Notes:**

> 角色使用过的药品记录（用于计算耐药性）

---

### Property `ConsumablePermanentEffects`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ConsumablePermanentEffects;` |

**Notes:**

> 耗材永久属性效果获得记录（key=耗材效果ID value=已获得次数）

---

### Property `LastConsumableUseTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) float LastConsumableUseTime = -1.f;` |

**Notes:**

> 上次使用耗材的时间（AWorldDirector::GameTime 秒 小于0=从未使用 用于耗材公共CD）

---

### Property `CurrentHungryIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") float CurrentHungryIntervalTime = 0.f;` |

**Notes:**

> 当前处于饥饿状态的时间

---

### Property `CurHungryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurHungryId;` |

**Notes:**

> 当前饥饿状态

---

### Property `ProhibitTreatSelf`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool ProhibitTreatSelf = true;` |

**Notes:**

> 是否禁止治疗自己

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanSelect = true;` |

**Notes:**

> 是否可以被选中

---

### Property `SpawnPoint`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector SpawnPoint;` |

**Notes:**

> 出生点位置

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> Attributes;` |

**Notes:**

> 存储的属性

---

### Property `CalcuOnyAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> CalcuOnyAttributes;` |

**Notes:**

> 存储用于在大世界中计算数据的属性,不用来复原角色数据

---

### Property `UIDisplayAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> UIDisplayAttributes;` |

**Notes:**

> 存储UI需要显示的临时属性(配置见UGamePlayConfigurationAsset::UIDisplayTempAttributes),不用来复原角色数据

---

### Property `CultivateAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FString,float> CultivateAttributes;` |

**Notes:**

> 存储的培养属性(势力自动培养给的)

---

### Property `BuffArray`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FCommonBuff> BuffArray;` |

**Notes:**

> 角色身上的buff

---

### Property `CurInjuryEffectArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryEffectInstance](../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**Notes:**

> 伤势

---

### Property `CurrentTreatInjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame,Category= "Runtime") FName CurrentTreatInjuryId;` |

**Notes:**

> 当前在治疗的伤势

---

### Property `MartialArtsLearnData`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsLearnData](../Struct/MartialArts__FMartialArtsLearnData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**Notes:**

> 已经学习的武学

---

### Property `CarryingMoves`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingMoves;` |

**Notes:**

> 携带的招式

---

### Property `CarryingPassive`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingPassive;` |

**Notes:**

> 携带的被动

---

### Property `CarryingInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CarryingInternalStrength;` |

**Notes:**

> 携带的内功

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int MovesSlotCount = 0;` |

**Notes:**

> 招式槽位数量

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int PassiveSlotCount = 0;` |

**Notes:**

> 被动槽位数量

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int RealmLevel = 0;` |

**Notes:**

> 当前的境界等级

---

### Property `CurMartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int CurMartialArtsScore = 0;` |

**Notes:**

> 当前的武学积分

---

### Property `BooksReadTime`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,float> BooksReadTime;` |

**Notes:**

> 当前阅读的书籍时间

---

### Property `BooksReadCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,int32> BooksReadCount;` |

**Notes:**

> 书籍阅读完次数

---

### Property `CurReadMartialArts`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurReadMartialArts;` |

**Notes:**

> 当前阅读的武学书籍

---

### Property `BreakThroughHarvest`

| Field | Details |
|------|------|
| C++ type | TArray<[FBreakThroughHarvest](WorldCharacterData__FBreakThroughHarvest.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**Notes:**

> 当前角色已经突破后选择的技能等

---

### Property `UseItemSaveData`

| Field | Details |
|------|------|
| C++ type | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**Notes:**

> 角色身上的物品 只会在跨世界时读取

---

### Property `CombatScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) float CombatScore =0.f;` |

**Notes:**

> 战力

---

### Property `bRegisterWorld`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bRegisterWorld = true;` |

**Notes:**

> 是否需要注册到世界势力中

---

### Property `CustomApparels`

| Field | Details |
|------|------|
| C++ type | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TMap<EArmorType,FName>CustomApparels;` |

**Notes:**

> 定制服饰外观

---

### Property `AvatarConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName AvatarConfigID;` |

**Notes:**

> 立绘配置ID（关联 DT_CharacterAvatarConfig）；None = 用模板默认立绘

---

### Property `bUseCustomApparels`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bUseCustomApparels = false;` |

**Notes:**

> 是否应用服饰外观

---

### Property `CurMartialArtsMajorCategory`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) EMartialArtsMajorCategories CurMartialArtsMajorCategory;` |

**Notes:**

> 当前的修炼倾向

---

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**Notes:**

> 突破次数

---

### Property `RealmLevelHistoricHigh`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 RealmLevelHistoricHigh = 1;` |

**Notes:**

> 历史最高境界

---

### Property `ReachableRealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 ReachableRealmLevel = 1;` |

**Notes:**

> 当前可以突破到的境界

---

### Property `CultivationLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,Category= "Animal") int32 CultivationLevel = 0;` |

**Notes:**

> 动物修炼等级

---

### Property `CurrentExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,Category= "Animal") float CurrentExperience = 0.0f;` |

**Notes:**

> 动物修炼经验

---

### Property `bUseProtagonistAppearance`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bUseProtagonistAppearance = false;` |

**Notes:**

> Boolean flag indicating whether Use Protagonist Appearance is enabled or true.

---
