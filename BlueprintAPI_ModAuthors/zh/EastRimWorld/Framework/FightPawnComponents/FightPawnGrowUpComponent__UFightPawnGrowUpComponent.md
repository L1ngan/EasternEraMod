# `class` `UFightPawnGrowUpComponent`

**源码头文件:** `EastRimWorld/Framework/FightPawnComponents/FightPawnGrowUpComponent.h`

---

## 功能说明（来自头文件注释）

> 玩家Pawn专用武学/境界组件：从存档加载全部武学数据（招式/被动/内功/境界/书籍/突破收获）并应用武学等级GE、词条GE、境界属性与槽位计算，不含运行时升级/突破/修炼。

## 蓝图暴露变量

### 属性 `MartialArtsLearnData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, FMartialArtsLearnData> MartialArtsLearnData;` |

**说明:**

> 已学武学数据表（武学ID→学习数据：经验/等级/词条等）。

---

### 属性 `CarryingMoves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int, FName>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<int, FName> CarryingMoves;` |

**说明:**

> 当前装备的招式（槽位索引→招式ID）。

---

### 属性 `CarryingPassive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int, FName>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<int, FName> CarryingPassive;` |

**说明:**

> 当前装备的被动武学（槽位索引→被动ID）。

---

### 属性 `CarryingInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") FName CarryingInternalStrength;` |

**说明:**

> 当前装备（运转）的内功ID。

---

### 属性 `MovesSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int MovesSlotCount = 0;` |

**说明:**

> 招式槽位数量。

---

### 属性 `PassiveSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int PassiveSlotCount = 0;` |

**说明:**

> 被动武学槽位数量。

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int RealmLevel = 0;` |

**说明:**

> 当前境界等级。

---

### 属性 `CurMartialArtsScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int CurMartialArtsScore = 0;` |

**说明:**

> 当前武学分数（用于内功/境界等级计算）。

---

### 属性 `TotalScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int TotalScore = 0;` |

**说明:**

> 武学累计总分。

---

### 属性 `BooksReadTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, float>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, float> BooksReadTime;` |

**说明:**

> 各武学书籍的累计阅读时长（书籍ID→时间）。

---

### 属性 `BooksReadCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, int32>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, int32> BooksReadCount;` |

**说明:**

> 各武学书籍的已阅读次数（书籍ID→次数）。

---

### 属性 `CurReadMartialArts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") FName CurReadMartialArts;` |

**说明:**

> 当前正在阅读的武学书籍ID。

---

### 属性 `BreakThroughHarvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FBreakThroughHarvest](../../WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**说明:**

> 突破收获列表，其中已激活的能力会在加载时应用。

---

### 属性 `MartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMartialArtsEntries](../../Struct/MartialArts__FMartialArtsEntries.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FMartialArtsEntries> MartialArtsEntries;` |

**说明:**

> 已应用的武学词条记录列表。

---

### 属性 `MartialArtsLevelHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FActiveGameplayEffectHandle>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TMap<FName, FActiveGameplayEffectHandle> MartialArtsLevelHandle;` |

**说明:**

> 武学等级GE的激活句柄（书籍ID→ActiveGameplayEffectHandle）。

---

### 属性 `CachedReduceCooldownEntriesID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") TArray<FName> CachedReduceCooldownEntriesID;` |

**说明:**

> 已缓存的减冷却类词条ID列表。

---

### 属性 `curMartialArtsMajorCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") EMartialArtsMajorCategories curMartialArtsMajorCategory = EMartialArtsMajorCategories::Passive;` |

**说明:**

> 当前武学主修大类（EMartialArtsMajorCategories，默认Passive）。

---

### 属性 `RealmLevelHistoricHigh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 RealmLevelHistoricHigh = 1;` |

**说明:**

> 境界等级的历史最高值。

---

### 属性 `ReachableRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 ReachableRealmLevel = 1;` |

**说明:**

> 当前可达到的境界等级上限。

---

### 属性 `BreakthroughNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|GrowUp" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|GrowUp") int32 BreakthroughNumber = 0;` |

**说明:**

> 已进行的突破次数。

---

### 属性 `OnRealmLevelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_OnRealmLevelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_OnRealmLevelChanged OnRealmLevelChanged;` |

**说明:**

> 境界等级变化事件。

---

### 属性 `OnReachableRealmLevelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_OnRealmLevelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_OnRealmLevelChanged OnReachableRealmLevelChanged;` |

**说明:**

> 可达境界等级变化事件。

---

### 属性 `OnMartialSlotsChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_OnMartialSlotsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_OnMartialSlotsChanged OnMartialSlotsChanged;` |

**说明:**

> 招式/被动槽位数量变化事件。

---

### 属性 `OnMartialArtsSkillEntryWashed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_OnMartialArtsSkillEntryWashed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_OnMartialArtsSkillEntryWashed OnMartialArtsSkillEntryWashed;` |

**说明:**

> 武学技能词条洗炼完成事件（携带武学Key、等级、是否成功、新/旧词条ID）。

---

## 蓝图暴露函数

### 函数 `LoadCharacterSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void LoadCharacterSaveData(const FCharacterSaveData& InSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从 SaveData 加载所有武学数据并应用到 ASC + Owner Pawn。
> 顺序：
>   1) 字段拷贝
>   2) 计算 LearnData 等级、内功境界总分
>   3) 应用武学等级 GE + 词条 GE（招式/被动 + 内功）
>   4) 应用境界属性 + 境界特性
>   5) 应用 BreakThroughHarvest 中已激活的能力
>   6) 重新计算槽位

---

### 函数 `WriteToSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutSaveData` | [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void WriteToSaveData(FCharacterSaveData& OutSaveData) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把武学/境界字段写回 SaveData

---

### 函数 `OpenDanTianCalculateRealmLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void OpenDanTianCalculateRealmLevelAttribute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启丹田（玩家初始化时用）

---

### 函数 `GetMoveMainAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") FName GetMoveMainAbilityID(FName BookID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取招式书的"主释放 GA ID"（与 GrantMovesBookAbilities 内部 ResolveForMovesBook 算出的 BaseAbilityID 等价）。
> 与灌入时实际授予到 ASC 的主 GA 一致，按键释放靠这个找到正确的 GA。
> @return 解析出的主 GA ID；为空（NAME_None）表示解析失败。

---

### 函数 `RecalculateTheSlots`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void RecalculateTheSlots();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重新计算招式/被动槽位

---

### 函数 `CheckSlotRestrictions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CheckSlotRestrictions();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查招式/被动是否超出槽位限制

---

### 函数 `CalculateMartialArtsLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutMartialArtsLearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CalculateMartialArtsLevel(FMartialArtsLearnData& OutMartialArtsLearnData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算武学等级（实例方法，调静态版）

---

### 函数 `CalculateInternalStrengthAndRealmLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") void CalculateInternalStrengthAndRealmLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算内功 + 境界等级

---

### 函数 `IsMartialArtInSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtsID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") bool IsMartialArtInSlot(FName MartialArtsID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 判断某武学是否已装备

---

### 函数 `GetCarryingMovesAbilityCoolDownTagList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `TArray<FGameplayTag>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FGameplayTag> GetCarryingMovesAbilityCoolDownTagList();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取所有装备招式的冷却 Tag

---

### 函数 `GetAllMartialArtsAbilityProjectileByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `TArray<FAbilityProjectileStruct>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer&` |
| `AnimationGameplayTag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FAbilityProjectileStruct> GetAllMartialArtsAbilityProjectileByTag(const FGameplayTagContainer& AbilityGameplayTag, const FGameplayTag& AnimationGameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有武学相关投射物

---

### 函数 `GetAllMartialArtsGameplayEffectContainerByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `TArray<FEastRimWorldGameplayEffectContainer>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer&` |
| `AnimationGameplayTag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") TArray<FEastRimWorldGameplayEffectContainer> GetAllMartialArtsGameplayEffectContainerByTag(const FGameplayTagContainer& AbilityGameplayTag, const FGameplayTag& AnimationGameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有武学效果容器

---

### 函数 `CheckLearnMartialArtMaxLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") bool CheckLearnMartialArtMaxLevel(FName MartialArtId) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查某武学是否到最高级

---

### 函数 `GetAptitudeValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|GrowUp" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|GrowUp") float GetAptitudeValue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前资质

---

### 函数 `GetMartialArtsExperienceByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayAttribute` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeClassification` | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceByType(EMartialArtsAttributeClassification AttributeClassification);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按属性类型获取经验属性

---

### 函数 `GetMartialArtsExperienceBonusByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayAttribute` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeClassification` | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGameplayAttribute GetMartialArtsExperienceBonusByType(EMartialArtsAttributeClassification AttributeClassification);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按属性类型获取经验加成属性

---

### 函数 `GetSocreMartialArtsLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsBookData` | const [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md)& |
| `TargetScore` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetSocreMartialArtsLevel(const FMartialArtsBookData& InMartialArtsBookData, int32 TargetScore);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按分数获取应达到的武学等级

---
