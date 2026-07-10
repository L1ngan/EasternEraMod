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

**Notes:**

> 武学经验变化

---

### Property `OnMartialArtsSkillEntryWashed`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsSkillEntryWashed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsSkillEntryWashed OnMartialArtsSkillEntryWashed;` |

**Notes:**

> 技能词条洗炼结束（成功或失败；失败时未改数据，NewSkillEntryId 为 None）

---

### Property `OnComprehendBegan`

| Field | Details |
|------|------|
| C++ type | `FOnComprehendBegan` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnComprehendBegan OnComprehendBegan;` |

**Notes:**

> 参悟开始（UI 读取 ComprehendSession 展示前后对比）

---

### Property `OnComprehendSlotRetraceChanged`

| Field | Details |
|------|------|
| C++ type | `FOnComprehendSlotRetraceChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnComprehendSlotRetraceChanged OnComprehendSlotRetraceChanged;` |

**Notes:**

> 某词条槽位回溯标记切换（bRetraced=true 标记回溯/false 取消标记）

---

### Property `OnComprehendFinished`

| Field | Details |
|------|------|
| C++ type | `FOnComprehendFinished` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnComprehendFinished OnComprehendFinished;` |

**Notes:**

> 参悟结束（bConfirmed 区分确认/取消）

---

### Property `OnDanTianExperienceValueChanged`

| Field | Details |
|------|------|
| C++ type | `FOnDanTianExperienceValueChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnDanTianExperienceValueChanged OnDanTianExperienceValueChanged;` |

**Notes:**

> 丹田经验变动

---

### Property `OnInternalStrengthChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnInternalStrengthChanged;` |

**Notes:**

> 内功变动

---

### Property `OnMartialSlotsChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialSlotsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialSlotsChanged OnMartialSlotsChanged;` |

**Notes:**

> 武学插槽变动

---

### Property `OnMovesChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnMovesChanged;` |

**Notes:**

> 招式变动

---

### Property `OnPassiveChanged`

| Field | Details |
|------|------|
| C++ type | `FOnMartialArtsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnPassiveChanged;` |

**Notes:**

> 被动变动

---

### Property `OnRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnRealmLevelChanged;` |

**Notes:**

> 境界等级变化

---

### Property `OnReachableRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnReachableRealmLevelChanged;` |

**Notes:**

> 可突破的境界发生变化

---

### Property `MartialArtsLearnData`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**Notes:**

> 已经学习的武学

---

### Property `ComprehendSession`

| Field | Details |
|------|------|
| C++ type | [FMartialArtsComprehendSession](../../Struct/MartialArts__FMartialArtsComprehendSession.md) |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Transient, Category="MartialArts|参悟") FMartialArtsComprehendSession ComprehendSession;` |

**Notes:**

> 当前参悟会话（瞬态，不存档；确认/取消后清空）

---

### Property `CarryingMoves`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingMoves;` |

**Notes:**

> 携带的招式 从0 开始

---

### Property `CarryingPassive`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingPassive;` |

**Notes:**

> 携带的被动 从0 开始

---

### Property `CarryingInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CarryingInternalStrength;` |

**Notes:**

> 携带的内功

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int MovesSlotCount = 0;` |

**Notes:**

> 招式槽位数量

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int PassiveSlotCount = 0;` |

**Notes:**

> 被动槽位数量

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int RealmLevel = 0;` |

**Notes:**

> 当前的境界等级

---

### Property `CurMartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int CurMartialArtsScore = 0;` |

**Notes:**

> 当前的武学积分

---

### Property `TotalScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int TotalScore = 0;` |

**Notes:**

> 当前计算过后的总分值

---

### Property `MartialArtsBookDataInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsBookData> MartialArtsBookDataInfos;` |

**Notes:**

> 当前正在阅读的所有武学详细信息

---

### Property `BooksReadTime`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,float> BooksReadTime;` |

**Notes:**

> 当前阅读的书籍时间

---

### Property `BooksReadCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,int32> BooksReadCount;` |

**Notes:**

> 书籍阅读完次数

---

### Property `CurReadMartialArts`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurReadMartialArts;` |

**Notes:**

> 当前阅读的武学书籍

---

### Property `BreakThroughHarvest`

| Field | Details |
|------|------|
| C++ type | TArray<[FBreakThroughHarvest](../../WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**Notes:**

> 当前角色突破获得的被动技能

---

### Property `MartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | TArray<[FMartialArtsEntries](../../Struct/MartialArts__FMartialArtsEntries.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FMartialArtsEntries> MartialArtsEntries;` |

**Notes:**

> 激活的武学词条信息

---

### Property `MartialArtsLevelHandle`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FActiveGameplayEffectHandle>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FActiveGameplayEffectHandle> MartialArtsLevelHandle;` |

**Notes:**

> 武学等级的升级GE

---

### Property `CachedReduceCooldownEntriesID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FName> CachedReduceCooldownEntriesID;` |

**Notes:**

> 缓存有减少冷却配置的武学词条（性能优化）

---

### Property `curMartialArtsMajorCategory`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EMartialArtsMajorCategories curMartialArtsMajorCategory = EMartialArtsMajorCategories::Passive;` |

**Notes:**

> 当前修炼倾向

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

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**Notes:**

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

**Notes:**

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

**Notes:**

> Adds martial arts experience to the specified gameplay attribute.

---

### Function `ChangeInternalStrength`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | [EMartialArtsErrorType](../../Struct/MartialArts__EMartialArtsErrorType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewInternalStrength` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeInternalStrength(FName NewInternalStrength);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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
| `MAMCate` | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") void SetMartialArtsMajorCategories(EMartialArtsMajorCategories MAMCate) {curMartialArtsMajorCategory = MAMCate; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置修炼倾向

---

### Function `GetMartialArtsMajorCategories`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="MartialArts") EMartialArtsMajorCategories GetMartialArtsMajorCategories() const { return curMartialArtsMajorCategory; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取修炼倾向

---

### Function `GrantMartialArtsAtLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsID` | `FName` |
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") bool GrantMartialArtsAtLevel(FName MartialArtsID, int32 Level);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [测试沙盒]直接给当前角色装配指定武学并设到指定等级(内功/招式/被动通用)。
> 复用 ChangeInternalStrength/ChangeMoves/ChangePassive 入槽 + 把 TotalExperience 设到目标等级阈值后走
> CalculateInternalStrengthAndRealmLevel / CalculateMartialArtsLevel 生效，行为与正常成长一致。
> 招式/被动会按需临时解锁槽位(MovesSlotCount/PassiveSlotCount)以便测试。

---

### Function `ChangeMoves`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | [EMartialArtsErrorType](../../Struct/MartialArts__EMartialArtsErrorType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSlotIndex` | `int` |
| `NewMoves` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeMoves(int InSlotIndex,FName NewMoves);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换招式

---

### Function `ChangePassive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | [EMartialArtsErrorType](../../Struct/MartialArts__EMartialArtsErrorType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSlotIndex` | `int` |
| `NewPassive` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangePassive(int InSlotIndex,FName NewPassive);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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
| `AttributeClassification` | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceByType(EMartialArtsAttributeClassification AttributeClassification);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the experience gameplay attribute for the given martial arts attribute classification (static).

---

### Function `GetMartialArtsExperienceBonusByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayAttribute` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeClassification` | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGameplayAttribute GetMartialArtsExperienceBonusByType(EMartialArtsAttributeClassification AttributeClassification);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

**Notes:**

> 计算武学等级

---

### Function `WashSkillEntryAtLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsLearnDataMapKey` | `FName` |
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts") bool WashSkillEntryAtLevel(FName MartialArtsLearnDataMapKey, int32 Level);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 洗炼指定等级技能词条：仅随机成功时覆盖；MartialArtsLearnDataMapKey 为 MartialArtsLearnData 的 TMap 键

---

### Function `BeginComprehendMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|参悟" |
| Return type | [EComprehendResult](../../Struct/MartialArts__EComprehendResult.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsLearnDataMapKey` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|参悟") EComprehendResult BeginComprehendMartialArts(FName MartialArtsLearnDataMapKey);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始参悟：扣历练点数，快照并重洗该武学全部已生效词条槽（不落地，进入会话）。MartialArtsLearnDataMapKey 为 MartialArtsLearnData 的 TMap 键

---

### Function `SetComprehendSlotRetrace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|参悟" |
| Return type | [EComprehendResult](../../Struct/MartialArts__EComprehendResult.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Level` | `int32` |
| `bRetrace` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|参悟") EComprehendResult SetComprehendSlotRetrace(int32 Level, bool bRetrace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换指定等级槽位的回溯标记：bRetrace=true 标记该槽确定时用旧词条（不立即扣点，仅校验累计不超当前回溯点）/false 取消标记。回溯点在 Confirm 时统一结算

---

### Function `ConfirmComprehendMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|参悟" |
| Return type | [EComprehendResult](../../Struct/MartialArts__EComprehendResult.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|参悟") EComprehendResult ConfirmComprehendMartialArts();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 确认参悟：逐槽回溯用旧、否则用新，写回 SkillEntryIdsByLevel 并让效果重新生效，清空会话

---

### Function `CancelComprehendMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="MartialArts|参悟" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "MartialArts|参悟") void CancelComprehendMartialArts();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消参悟：丢弃会话（已消耗点数不退）

---

### Function `IsComprehendSessionActive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="MartialArts|参悟" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "MartialArts|参悟") bool IsComprehendSessionActive() const { return ComprehendSession.bActive; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否有进行中的参悟会话

---

### Function `GetComprehendSession`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="MartialArts|参悟" |
| Return type | [FMartialArtsComprehendSession](../../Struct/MartialArts__FMartialArtsComprehendSession.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "MartialArts|参悟") FMartialArtsComprehendSession GetComprehendSession() const { return ComprehendSession; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前参悟会话（供 UI 展示前后词条对比）

---

### Function `GetComprehendCost`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="MartialArts|参悟" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsLearnDataMapKey` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "MartialArts|参悟") int32 GetComprehendCost(FName MartialArtsLearnDataMapKey) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 读取该武学参悟消耗的历练点数（供 UI 显示/按钮置灰）

---

### Function `GetPendingRetraceCost`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="MartialArts|参悟" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "MartialArts|参悟") int32 GetPendingRetraceCost() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前已标记回溯的槽位合计需消耗的回溯点数（供 UI 显示与确定按钮置灰；确定时一次性扣除）

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

> 开始持续增加定时器

---
