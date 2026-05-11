# `class` `UEastRimWorldGrowUpComponent`

**源码头文件：** `EastRimWorld/Character/Components/EastRimWorldGrowUpComponent.h`

---

## 功能说明（来自头文件注释）

> UEastRimWorldGrowUpComponent
> An actor component used to handle anything related to GrowUp.

## 蓝图暴露变量

### 属性 `OnMartialArtExpChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialArtExpChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialArtExpChanged OnMartialArtExpChanged;` |

**源码注释：**

> 武学经验变化

---

### 属性 `OnDanTianExperienceValueChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnDanTianExperienceValueChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnDanTianExperienceValueChanged OnDanTianExperienceValueChanged;` |

**源码注释：**

> 丹田经验变动

---

### 属性 `OnInternalStrengthChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialArtsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnInternalStrengthChanged;` |

**源码注释：**

> 内功变动

---

### 属性 `OnMartialSlotsChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialSlotsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialSlotsChanged OnMartialSlotsChanged;` |

**源码注释：**

> 武学插槽变动

---

### 属性 `OnMovesChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialArtsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnMovesChanged;` |

**源码注释：**

> 招式变动

---

### 属性 `OnPassiveChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialArtsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialArtsChanged OnPassiveChanged;` |

**源码注释：**

> 被动变动

---

### 属性 `OnRealmLevelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRealmLevelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnRealmLevelChanged;` |

**源码注释：**

> 境界等级变化

---

### 属性 `OnReachableRealmLevelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRealmLevelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRealmLevelChanged OnReachableRealmLevelChanged;` |

**源码注释：**

> 可突破的境界发生变化

---

### 属性 `MartialArtsLearnData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**源码注释：**

> 已经学习的武学

---

### 属性 `CarryingMoves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingMoves;` |

**源码注释：**

> 携带的招式 从0 开始

---

### 属性 `CarryingPassive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<int,FName> CarryingPassive;` |

**源码注释：**

> 携带的被动 从0 开始

---

### 属性 `CarryingInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CarryingInternalStrength;` |

**源码注释：**

> 携带的内功

---

### 属性 `MovesSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int MovesSlotCount = 0;` |

**源码注释：**

> 招式槽位数量

---

### 属性 `PassiveSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int PassiveSlotCount = 0;` |

**源码注释：**

> 被动槽位数量

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int RealmLevel = 0;` |

**源码注释：**

> 当前的境界等级

---

### 属性 `CurMartialArtsScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int CurMartialArtsScore = 0;` |

**源码注释：**

> 当前的武学积分

---

### 属性 `TotalScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int TotalScore = 0;` |

**源码注释：**

> 当前计算过后的总分值

---

### 属性 `MartialArtsBookDataInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FMartialArtsBookData> MartialArtsBookDataInfos;` |

**源码注释：**

> 当前正在阅读的所有武学详细信息

---

### 属性 `BooksReadTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,float> BooksReadTime;` |

**源码注释：**

> 当前阅读的书籍时间

---

### 属性 `BooksReadCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,int32> BooksReadCount;` |

**源码注释：**

> 书籍阅读完次数

---

### 属性 `CurReadMartialArts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurReadMartialArts;` |

**源码注释：**

> 当前阅读的武学书籍

---

### 属性 `BreakThroughHarvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FBreakThroughHarvest](../../WorldSystem/WorldCharacterData__FBreakThroughHarvest.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**源码注释：**

> 当前角色突破获得的被动技能

---

### 属性 `MartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMartialArtsEntries](../../Struct/MartialArts__FMartialArtsEntries.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FMartialArtsEntries> MartialArtsEntries;` |

**源码注释：**

> 激活的武学词条信息

---

### 属性 `MartialArtsLevelHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FActiveGameplayEffectHandle>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,FActiveGameplayEffectHandle> MartialArtsLevelHandle;` |

**源码注释：**

> 武学等级的升级GE

---

### 属性 `CachedReduceCooldownEntriesID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FName> CachedReduceCooldownEntriesID;` |

**源码注释：**

> 缓存有减少冷却配置的武学词条（性能优化）

---

### 属性 `curMartialArtsMajorCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsMajorCategories` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EMartialArtsMajorCategories curMartialArtsMajorCategory = EMartialArtsMajorCategories::Passive;` |

**源码注释：**

> 当前修炼倾向

---

### 属性 `RealmLevelHistoricHigh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 RealmLevelHistoricHigh = 1;` |

**源码注释：**

> 历史最高境界

---

### 属性 `ReachableRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 ReachableRealmLevel = 1;` |

**源码注释：**

> 当前可以突破到的境界

---

### 属性 `BreakthroughNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**源码注释：**

> 当前境界突破次数

---

## 蓝图暴露函数

### 函数 `FindGrowUpComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EastRimWorld|GrowUp" |
| 返回类型 | [UEastRimWorldGrowUpComponent](EastRimWorldGrowUpComponent__UEastRimWorldGrowUpComponent.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|GrowUp") static UEastRimWorldGrowUpComponent* FindGrowUpComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UEastRimWorldGrowUpComponent>() : nullptr); }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> Returns the GrowUp component if one exists on the specified actor.

---

### 函数 `AddMartialArtsExperience`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAttribute` | `const FGameplayAttribute&` |
| `AddExperience` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void AddMartialArtsExperience(const FGameplayAttribute& GameplayAttribute,float AddExperience);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ChangeInternalStrength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `EMartialArtsErrorType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewInternalStrength` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeInternalStrength(FName NewInternalStrength);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换内功

---

### 函数 `CalculateInternalStrengthAndRealmLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void CalculateInternalStrengthAndRealmLevel();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算内功等级和境界等级

---

### 函数 `UpdateOrAddMartialArtsLevelEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookData` | const [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md) & |
| `Level` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void UpdateOrAddMartialArtsLevelEffect(const FMartialArtsBookData & BookData,int32 Level);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新等级GE

---

### 函数 `RemoveMartialArtsLevelEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void RemoveMartialArtsLevelEffect(const FName & BookID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除等级GE

---

### 函数 `ApplyInternalStrengthAndRealmLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |
| `MinLevel` | `int32` |
| `MaxLevel` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void ApplyInternalStrengthAndRealmLevel(FMartialArtsLearnData & LearnData, int32 MinLevel,int32 MaxLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 应用内功等级和境界等级属性

---

### 函数 `SetMartialArtsMajorCategories`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MAMCate` | `EMartialArtsMajorCategories` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") void SetMartialArtsMajorCategories(EMartialArtsMajorCategories MAMCate) {curMartialArtsMajorCategory = MAMCate; }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置修炼倾向

---

### 函数 `GetMartialArtsMajorCategories`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `EMartialArtsMajorCategories` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="MartialArts") EMartialArtsMajorCategories GetMartialArtsMajorCategories() const { return curMartialArtsMajorCategory; }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取修炼倾向

---

### 函数 `ChangeMoves`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `EMartialArtsErrorType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSlotIndex` | `int` |
| `NewMoves` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangeMoves(int InSlotIndex,FName NewMoves);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换招式

---

### 函数 `ChangePassive`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `EMartialArtsErrorType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSlotIndex` | `int` |
| `NewPassive` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") EMartialArtsErrorType ChangePassive(int InSlotIndex,FName NewPassive);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换被动

---

### 函数 `UpdateRealmLevelData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewLevel` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void UpdateRealmLevelData(int NewLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新境界相关数据

---

### 函数 `SetNewRealmLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewLevel` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void SetNewRealmLevel(int NewLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置新的境界

---

### 函数 `CheckSlotRestrictions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") void CheckSlotRestrictions();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查招式 被动 槽位是否符合限制

---

### 函数 `CheckLearnMartialArtMaxLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="MartialArts" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category= "MartialArts") bool CheckLearnMartialArtMaxLevel(FName MartialArtId) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查已学武学是否到达最大等级

---

### 函数 `GetMartialArtsExperienceByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayAttribute` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeClassification` | `EMartialArtsAttributeClassification` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceByType(EMartialArtsAttributeClassification AttributeClassification);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetMartialArtsExperienceBonusByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayAttribute` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeClassification` | `EMartialArtsAttributeClassification` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGameplayAttribute GetMartialArtsExperienceBonusByType(EMartialArtsAttributeClassification AttributeClassification);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据类型获取经验加成

---

### 函数 `CalculateMartialArtsLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutMartialArtsLearnData` | [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CalculateMartialArtsLevel(FMartialArtsLearnData & OutMartialArtsLearnData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算武学等级

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int32 GetSocreMartialArtsLevel(const FMartialArtsBookData& InMartialArtsBookData, int32 TargetScore);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据分数获取需要达到的武学等级

---

### 函数 `AddMartialArtsEntries`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsLearnData` | const [FMartialArtsLearnData](../../Struct/MartialArts__FMartialArtsLearnData.md) & |
| `MinLevel` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddMartialArtsEntries(const FMartialArtsLearnData & InMartialArtsLearnData,int MinLevel);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加武学属性

---

### 函数 `GetAllMartialArtsAbilityProjectileByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FAbilityProjectileStruct>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer &` |
| `AnimationGameplayTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FAbilityProjectileStruct> GetAllMartialArtsAbilityProjectileByTag(const FGameplayTagContainer & AbilityGameplayTag,const FGameplayTag & AnimationGameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取武学中所有相关联的投射物

---

### 函数 `GetAllMartialArtsGameplayEffectContainerByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FEastRimWorldGameplayEffectContainer>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilityGameplayTag` | `const FGameplayTagContainer &` |
| `AnimationGameplayTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FEastRimWorldGameplayEffectContainer> GetAllMartialArtsGameplayEffectContainerByTag(const FGameplayTagContainer & AbilityGameplayTag,const FGameplayTag & AnimationGameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取武学中所有相关联的效果

---

### 函数 `SetCurReadMartialArts`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsBookData` | [FMartialArtsBookData](../../Struct/MartialArts__FMartialArtsBookData.md) |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCurReadMartialArts(FMartialArtsBookData InMartialArtsBookData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置当前阅读的武学

---

### 函数 `GetCurBookReadPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetCurBookReadPercent(FName InBookID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询书籍阅读的百分比

---

### 函数 `AddCurReadMartialArtsTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InReadMartialArtsID` | `FName` |
| `AddTime` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddCurReadMartialArtsTime(FName InReadMartialArtsID,float AddTime);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加当前阅读的武学时间

---

### 函数 `AddCurReadBookTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookID` | `FName` |
| `AddTime` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddCurReadBookTime(FName InBookID, float AddTime);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加当前阅读的书籍时间

---

### 函数 `GetReadBookCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int32 GetReadBookCount(FName InBookID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取阅读数量

---

### 函数 `ApplyMartialArtsLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsLevel` | const [FMartialArtsLevel](../../Struct/MartialArts__FMartialArtsLevel.md) & |
| `InMartialArtsName` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ApplyMartialArtsLevelAttribute(const FMartialArtsLevel & InMartialArtsLevel , FName InMartialArtsName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 应用武学的等级属性

---

### 函数 `RemoveMartialArtsLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMartialArtsLevel` | const [FMartialArtsLevel](../../Struct/MartialArts__FMartialArtsLevel.md) & |
| `InMartialArtsName` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveMartialArtsLevelAttribute(const FMartialArtsLevel & InMartialArtsLevel , FName InMartialArtsName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除武学的等级属性

---

### 函数 `ApplyRealmLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRealmData` | const [FRealmData](../../Struct/MartialArts__FRealmData.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ApplyRealmLevelAttribute(const FRealmData & InRealmData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 应用境界的等级属性

---

### 函数 `RemoveRealmLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRealmData` | const [FRealmData](../../Struct/MartialArts__FRealmData.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveRealmLevelAttribute(const FRealmData & InRealmData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除境界的等级属性

---

### 函数 `IsMartialArtInSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtsID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsMartialArtInSlot(FName MartialArtsID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 判断武学是否已经装备了

---

### 函数 `AddDanTianExperience`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddExperience` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddDanTianExperience(float AddExperience);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加丹田经验值(用于UI测试增加丹田经验)

---

### 函数 `OpenDanTianCalculateRealmLevelAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OpenDanTianCalculateRealmLevelAttribute();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开启丹田后计算属性 只会调用一次

---

### 函数 `GetAptitudeValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetAptitudeValue();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前资质

---

### 函数 `ContinuouslyIncreaseInternalStrengthExperience`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ContinuouslyIncreaseInternalStrengthExperience();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 持续增加内功经验

---

### 函数 `StartContinuouslyIncreaseTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartContinuouslyIncreaseTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始持续增加定时器

---

### 函数 `StopContinuouslyIncreaseTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopContinuouslyIncreaseTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始持续增加定时器

---
