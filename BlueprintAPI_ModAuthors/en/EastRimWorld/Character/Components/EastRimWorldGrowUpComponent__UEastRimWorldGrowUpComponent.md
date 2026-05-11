# `class` `UEastRimWorldGrowUpComponent`

**Source header:** `EastRimWorld/Character/Components/EastRimWorldGrowUpComponent.h`

---

## Functional description (from header comments)

> UEastRimWorldGrowUpComponent
> An actor component used to handle anything related to GrowUp.

## Blueprint-exposed variables

### Property `OnMartialArtExpChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtExpChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtExpChanged OnMartialArtExpChanged;` |

**Source comments:**

> 武学经验变化

---

### Property `OnDanTianExperienceValueChanged`

| Field | Details |
|------|------|
| C++ type | `FOnDanTianExperienceValueChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnDanTianExperienceValueChanged OnDanTianExperienceValueChanged;` |

**Source comments:**

> 丹田经验变动

---

### Property `OnInternalStrengthChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnInternalStrengthChanged;` |

**Source comments:**

> 内功变动

---

### Property `OnMartialSlotsChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialSlotsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialSlotsChanged OnMartialSlotsChanged;` |

**Source comments:**

> 武学插槽变动

---

### Property `OnMovesChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnMovesChanged;` |

**Source comments:**

> 招式变动

---

### Property `OnPassiveChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnPassiveChanged;` |

**Source comments:**

> 被动变动

---

### Property `OnRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnRealmLevelChanged;` |

**Source comments:**

> 境界等级变化

---

### Property `OnReachableRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnReachableRealmLevelChanged;` |

**Source comments:**

> 可突破的境界发生变化

---

### Property `MartialArtsLearnData`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**Source comments:**

> 已经学习的武学

---

### Property `CarryingMoves`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingMoves;` |

**Source comments:**

> 携带的招式 从0 开始

---

### Property `CarryingPassive`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingPassive;` |

**Source comments:**

> 携带的被动 从0 开始

---

### Property `CarryingInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CarryingInternalStrength;` |

**Source comments:**

> 携带的内功

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int MovesSlotCount = 0;` |

**Source comments:**

> 招式槽位数量

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int PassiveSlotCount = 0;` |

**Source comments:**

> 被动槽位数量

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int RealmLevel = 0;` |

**Source comments:**

> 当前的境界等级

---

### Property `CurMartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int CurMartialArtsScore = 0;` |

**Source comments:**

> 当前的武学积分

---

### Property `TotalScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int TotalScore = 0;` |

**Source comments:**

> 当前计算过后的总分值

---

### Property `MartialArtsBookDataInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsBookData> MartialArtsBookDataInfos;` |

**Source comments:**

> 当前正在阅读的所有武学详细信息

---

### Property `BooksReadTime`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,float> BooksReadTime;` |

**Source comments:**

> 当前阅读的书籍时间

---

### Property `BooksReadCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,int32> BooksReadCount;` |

**Source comments:**

> 书籍阅读完次数

---

### Property `CurReadMartialArts`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurReadMartialArts;` |

**Source comments:**

> 当前阅读的武学书籍

---

### Property `BreakThroughHarvest`

| Field | Details |
|------|------|
| C++ type | TArray<[FBreakThroughHarvest](../../WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**Source comments:**

> 当前角色突破获得的被动技能

---

### Property `MartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | TArray<[FMartialArtsEntries](../../Struct/MartialArts__FMartialArtsEntries.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FMartialArtsEntries> MartialArtsEntries;` |

**Source comments:**

> 激活的武学词条信息

---

### Property `MartialArtsLevelHandle`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FActiveGameplayEffectHandle>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FActiveGameplayEffectHandle> MartialArtsLevelHandle;` |

**Source comments:**

> 武学等级的升级GE

---

### Property `CachedReduceCooldownEntriesID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FName> CachedReduceCooldownEntriesID;` |

**Source comments:**

> 缓存有减少冷却配置的武学词条（性能优化）

---

### Property `curMartialArtsMajorCategory`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsMajorCategories` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EMartialArtsMajorCategories curMartialArtsMajorCategory = EMartialArtsMajorCategories::Passive;` |

**Source comments:**

> 当前修炼倾向

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

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**Source comments:**

> 当前境界突破次数

---

## Blueprint-exposed functions

### Function `FindGrowUpComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EastRimWorld|GrowUp" |
| Return type | [UEastRimWorldGrowUpComponent](EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `const AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|GrowUp") static UEastRimWorldGrowUpComponent* FindGrowUpComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UEastRimWorldGrowUpComponent>() : nullptr); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> Returns the GrowUp component if one exists on the specified actor.

---

### Function `AddMartialArtsExperience`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAttribute` | `const FGameplayAttribute&` |
| `AddExperience` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void AddMartialArtsExperience(const FGameplayAttribute& GameplayAttribute,float AddExperience);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ChangeInternalStrength`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `EMartialArtsErrorType` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewInternalStrength` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeInternalStrength(FName NewInternalStrength);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 切换内功

---

### Function `CalculateInternalStrengthAndRealmLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void CalculateInternalStrengthAndRealmLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算内功等级和境界等级

---

### Function `UpdateOrAddMartialArtsLevelEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookData` | const [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md) & |
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void UpdateOrAddMartialArtsLevelEffect(const FMartialArtsBookData & BookData,int32 Level);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新等级GE

---

### Function `RemoveMartialArtsLevelEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void RemoveMartialArtsLevelEffect(const FName & BookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除等级GE

---

### Function `ApplyInternalStrengthAndRealmLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |
| `MinLevel` | `int32` |
| `MaxLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void ApplyInternalStrengthAndRealmLevel(FMartialArtsLearnData & LearnData, int32 MinLevel,int32 MaxLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 应用内功等级和境界等级属性

---

### Function `SetMartialArtsMajorCategories`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MAMCate` | `EMartialArtsMajorCategories` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void SetMartialArtsMajorCategories(EMartialArtsMajorCategories MAMCate) {curMartialArtsMajorCategory = MAMCate; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置修炼倾向

---

### Function `GetMartialArtsMajorCategories`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `EMartialArtsMajorCategories` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") EMartialArtsMajorCategories GetMartialArtsMajorCategories() const { return curMartialArtsMajorCategory; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取修炼倾向

---

### Function `ChangeMoves`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `EMartialArtsErrorType` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSlotIndex` | `int` |
| `NewMoves` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeMoves(int InSlotIndex,FName NewMoves);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 切换招式

---

### Function `ChangePassive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `EMartialArtsErrorType` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSlotIndex` | `int` |
| `NewPassive` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangePassive(int InSlotIndex,FName NewPassive);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 切换被动

---

### Function `UpdateRealmLevelData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewLevel` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void UpdateRealmLevelData(int NewLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新境界相关数据

---

### Function `SetNewRealmLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewLevel` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void SetNewRealmLevel(int NewLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置新的境界

---

### Function `CheckSlotRestrictions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void CheckSlotRestrictions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查招式 被动 槽位是否符合限制

---

### Function `CheckLearnMartialArtMaxLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") bool CheckLearnMartialArtMaxLevel(FName MartialArtId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查已学武学是否到达最大等级

---

### Function `GetMartialArtsExperienceByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayAttribute` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeClassification` | `EMartialArtsAttributeClassification` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceByType(EMartialArtsAttributeClassification AttributeClassification);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetMartialArtsExperienceBonusByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayAttribute` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeClassification` | `EMartialArtsAttributeClassification` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGameplayAttribute GetMartialArtsExperienceBonusByType(EMartialArtsAttributeClassification AttributeClassification);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据类型获取经验加成

---

### Function `CalculateMartialArtsLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutMartialArtsLearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateMartialArtsLevel(FMartialArtsLearnData & OutMartialArtsLearnData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算武学等级

---

### Function `GetSocreMartialArtsLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsBookData` | const [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md)& |
| `TargetScore` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetSocreMartialArtsLevel(const FMartialArtsBookData& InMartialArtsBookData, int32 TargetScore);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据分数获取需要达到的武学等级

---

### Function `AddMartialArtsEntries`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsLearnData` | const [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |
| `MinLevel` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddMartialArtsEntries(const FMartialArtsLearnData & InMartialArtsLearnData,int MinLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加武学属性

---

### Function `GetAllMartialArtsAbilityProjectileByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FAbilityProjectileStruct>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer &` |
| `AnimationGameplayTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FAbilityProjectileStruct> GetAllMartialArtsAbilityProjectileByTag(const FGameplayTagContainer & AbilityGameplayTag,const FGameplayTag & AnimationGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取武学中所有相关联的投射物

---

### Function `GetAllMartialArtsGameplayEffectContainerByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FEastRimWorldGameplayEffectContainer>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer &` |
| `AnimationGameplayTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FEastRimWorldGameplayEffectContainer> GetAllMartialArtsGameplayEffectContainerByTag(const FGameplayTagContainer & AbilityGameplayTag,const FGameplayTag & AnimationGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取武学中所有相关联的效果

---

### Function `SetCurReadMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsBookData` | [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCurReadMartialArts(FMartialArtsBookData InMartialArtsBookData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置当前阅读的武学

---

### Function `GetCurBookReadPercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurBookReadPercent(FName InBookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询书籍阅读的百分比

---

### Function `AddCurReadMartialArtsTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InReadMartialArtsID` | `FName` |
| `AddTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddCurReadMartialArtsTime(FName InReadMartialArtsID,float AddTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 增加当前阅读的武学时间

---

### Function `AddCurReadBookTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookID` | `FName` |
| `AddTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddCurReadBookTime(FName InBookID, float AddTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 增加当前阅读的书籍时间

---

### Function `GetReadBookCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetReadBookCount(FName InBookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取阅读数量

---

### Function `ApplyMartialArtsLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsLevel` | const [FMartialArtsLevel](../../Struct/MartialArts__FMartialArtsLevel.md) & |
| `InMartialArtsName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ApplyMartialArtsLevelAttribute(const FMartialArtsLevel & InMartialArtsLevel , FName InMartialArtsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 应用武学的等级属性

---

### Function `RemoveMartialArtsLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsLevel` | const [FMartialArtsLevel](../../Struct/MartialArts__FMartialArtsLevel.md) & |
| `InMartialArtsName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveMartialArtsLevelAttribute(const FMartialArtsLevel & InMartialArtsLevel , FName InMartialArtsName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除武学的等级属性

---

### Function `ApplyRealmLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRealmData` | const [FRealmData](../../Struct/MartialArts__FRealmData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ApplyRealmLevelAttribute(const FRealmData & InRealmData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 应用境界的等级属性

---

### Function `RemoveRealmLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRealmData` | const [FRealmData](../../Struct/MartialArts__FRealmData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRealmLevelAttribute(const FRealmData & InRealmData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除境界的等级属性

---

### Function `IsMartialArtInSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsMartialArtInSlot(FName MartialArtsID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 判断武学是否已经装备了

---

### Function `AddDanTianExperience`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddExperience` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddDanTianExperience(float AddExperience);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加丹田经验值(用于UI测试增加丹田经验)

---

### Function `OpenDanTianCalculateRealmLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenDanTianCalculateRealmLevelAttribute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开启丹田后计算属性 只会调用一次

---

### Function `GetAptitudeValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetAptitudeValue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前资质

---

### Function `ContinuouslyIncreaseInternalStrengthExperience`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ContinuouslyIncreaseInternalStrengthExperience();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 持续增加内功经验

---

### Function `StartContinuouslyIncreaseTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartContinuouslyIncreaseTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始持续增加定时器

---

### Function `StopContinuouslyIncreaseTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopContinuouslyIncreaseTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始持续增加定时器

---
