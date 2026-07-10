# `class` `UFightPawnGrowUpComponent`

**Source header:** `EastRimWorld/Framework/FightPawnComponents/FightPawnGrowUpComponent.h`

---

## Functional description (from header comments)

> Player-pawn martial arts / realm component: loads all martial arts data (moves, passives, internal strength, realm, books, breakthrough harvest) from save data and applies martial-arts level GEs, entry GEs, realm attributes and slot calculation; runtime leveling/breakthrough/cultivation not included.

## Blueprint-exposed variables

### Property `MartialArtsLearnData`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, FMartialArtsLearnData> MartialArtsLearnData;` |

**Notes:**

> Learned martial arts data map (martial art ID to learn data: experience, level, entries, etc.).

---

### Property `CarryingMoves`

| Field | Details |
|------|------|
| C++ type | `TMap<int, FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<int, FName> CarryingMoves;` |

**Notes:**

> Currently equipped moves (slot index to move ID).

---

### Property `CarryingPassive`

| Field | Details |
|------|------|
| C++ type | `TMap<int, FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<int, FName> CarryingPassive;` |

**Notes:**

> Currently equipped passive martial arts (slot index to passive ID).

---

### Property `CarryingInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") FName CarryingInternalStrength;` |

**Notes:**

> ID of the currently equipped (active) internal strength.

---

### Property `MovesSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int MovesSlotCount = 0;` |

**Notes:**

> Number of move slots.

---

### Property `PassiveSlotCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int PassiveSlotCount = 0;` |

**Notes:**

> Number of passive martial art slots.

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int RealmLevel = 0;` |

**Notes:**

> Current realm level.

---

### Property `CurMartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int CurMartialArtsScore = 0;` |

**Notes:**

> Current martial arts score (used in internal strength / realm level calculation).

---

### Property `TotalScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int TotalScore = 0;` |

**Notes:**

> Accumulated total martial arts score.

---

### Property `BooksReadTime`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, float>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, float> BooksReadTime;` |

**Notes:**

> Accumulated reading time per martial arts book (book ID to time).

---

### Property `BooksReadCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, int32> BooksReadCount;` |

**Notes:**

> Read count per martial arts book (book ID to count).

---

### Property `CurReadMartialArts`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") FName CurReadMartialArts;` |

**Notes:**

> ID of the martial arts book currently being read.

---

### Property `BreakThroughHarvest`

| Field | Details |
|------|------|
| C++ type | TArray<[FBreakThroughHarvest](../../WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**Notes:**

> List of breakthrough harvests; activated abilities in it are applied on load.

---

### Property `MartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | TArray<[FMartialArtsEntries](../../Struct/MartialArts__FMartialArtsEntries.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FMartialArtsEntries> MartialArtsEntries;` |

**Notes:**

> List of applied martial arts entry records.

---

### Property `MartialArtsLevelHandle`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FActiveGameplayEffectHandle>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, FActiveGameplayEffectHandle> MartialArtsLevelHandle;` |

**Notes:**

> Active handles of martial-arts level gameplay effects (book ID to ActiveGameplayEffectHandle).

---

### Property `CachedReduceCooldownEntriesID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FName> CachedReduceCooldownEntriesID;` |

**Notes:**

> Cached list of cooldown-reduction entry IDs.

---

### Property `curMartialArtsMajorCategory`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") EMartialArtsMajorCategories curMartialArtsMajorCategory = EMartialArtsMajorCategories::Passive;` |

**Notes:**

> Current major category of martial arts (EMartialArtsMajorCategories, defaults to Passive).

---

### Property `RealmLevelHistoricHigh`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 RealmLevelHistoricHigh = 1;` |

**Notes:**

> Historic highest realm level reached.

---

### Property `ReachableRealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 ReachableRealmLevel = 1;` |

**Notes:**

> Current upper limit of the reachable realm level.

---

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 BreakthroughNumber = 0;` |

**Notes:**

> Number of breakthroughs performed.

---

### Property `OnRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FFP_OnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_OnRealmLevelChanged OnRealmLevelChanged;` |

**Notes:**

> Event fired when the realm level changes.

---

### Property `OnReachableRealmLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FFP_OnRealmLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_OnRealmLevelChanged OnReachableRealmLevelChanged;` |

**Notes:**

> Event fired when the reachable realm level changes.

---

### Property `OnMartialSlotsChanged`

| Field | Details |
|------|------|
| C++ type | `FFP_OnMartialSlotsChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_OnMartialSlotsChanged OnMartialSlotsChanged;` |

**Notes:**

> Event fired when the move/passive slot counts change.

---

### Property `OnMartialArtsSkillEntryWashed`

| Field | Details |
|------|------|
| C++ type | `FFP_OnMartialArtsSkillEntryWashed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_OnMartialArtsSkillEntryWashed OnMartialArtsSkillEntryWashed;` |

**Notes:**

> Event fired when a martial arts skill entry wash (reroll) finishes (carries the martial art key, level, success flag, and new/old entry IDs).

---

## Blueprint-exposed functions

### Function `LoadCharacterSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void LoadCharacterSaveData(const FCharacterSaveData& InSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从 SaveData 加载所有武学数据并应用到 ASC + Owner Pawn。
> 顺序：
>   1) 字段拷贝
>   2) 计算 LearnData 等级、内功境界总分
>   3) 应用武学等级 GE + 词条 GE（招式/被动 + 内功）
>   4) 应用境界属性 + 境界特性
>   5) 应用 BreakThroughHarvest 中已激活的能力
>   6) 重新计算槽位

---

### Function `WriteToSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutSaveData` | [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void WriteToSaveData(FCharacterSaveData& OutSaveData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把武学/境界字段写回 SaveData

---

### Function `OpenDanTianCalculateRealmLevelAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void OpenDanTianCalculateRealmLevelAttribute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开启丹田（玩家初始化时用）

---

### Function `GetMoveMainAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") FName GetMoveMainAbilityID(FName BookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取招式书的"主释放 GA ID"（与 GrantMovesBookAbilities 内部 ResolveForMovesBook 算出的 BaseAbilityID 等价）。
> 与灌入时实际授予到 ASC 的主 GA 一致，按键释放靠这个找到正确的 GA。
> @return 解析出的主 GA ID；为空（NAME_None）表示解析失败。

---

### Function `RecalculateTheSlots`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void RecalculateTheSlots();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重新计算招式/被动槽位

---

### Function `CheckSlotRestrictions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CheckSlotRestrictions();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查招式/被动是否超出槽位限制

---

### Function `CalculateMartialArtsLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutMartialArtsLearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CalculateMartialArtsLevel(FMartialArtsLearnData& OutMartialArtsLearnData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算武学等级（实例方法，调静态版）

---

### Function `CalculateInternalStrengthAndRealmLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CalculateInternalStrengthAndRealmLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算内功 + 境界等级

---

### Function `IsMartialArtInSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") bool IsMartialArtInSlot(FName MartialArtsID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断某武学是否已装备

---

### Function `GetCarryingMovesAbilityCoolDownTagList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `TArray<FGameplayTag>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FGameplayTag> GetCarryingMovesAbilityCoolDownTagList();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取所有装备招式的冷却 Tag

---

### Function `GetAllMartialArtsAbilityProjectileByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `TArray<FAbilityProjectileStruct>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer&` |
| `AnimationGameplayTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FAbilityProjectileStruct> GetAllMartialArtsAbilityProjectileByTag(const FGameplayTagContainer& AbilityGameplayTag, const FGameplayTag& AnimationGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有武学相关投射物

---

### Function `GetAllMartialArtsGameplayEffectContainerByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `TArray<FEastRimWorldGameplayEffectContainer>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer&` |
| `AnimationGameplayTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FEastRimWorldGameplayEffectContainer> GetAllMartialArtsGameplayEffectContainerByTag(const FGameplayTagContainer& AbilityGameplayTag, const FGameplayTag& AnimationGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有武学效果容器

---

### Function `CheckLearnMartialArtMaxLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") bool CheckLearnMartialArtMaxLevel(FName MartialArtId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查某武学是否到最高级

---

### Function `GetAptitudeValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|GrowUp" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") float GetAptitudeValue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前资质

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

> 按属性类型获取经验属性

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

> 按属性类型获取经验加成属性

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

> 按分数获取应达到的武学等级

---
