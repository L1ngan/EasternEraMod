# `struct` `FEastRimWorldAnimalData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Animal config data (extends character data): body type, diet, growth stages, taming, output, mating and cultivation settings

## Blueprint-exposed variables

### Property `AnimalBodyType`

| Field | Details |
|------|------|
| C++ type | [EAnimalBodyType](../ERW_Enumerations__EAnimalBodyType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EAnimalBodyType AnimalBodyType = EAnimalBodyType::Normal;` |

**Notes:**

> 动物体型（体型大小）

---

### Property `AnimalFoodType`

| Field | Details |
|------|------|
| C++ type | [EAnimalFoodType](CharacterStruct__EAnimalFoodType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EAnimalFoodType AnimalFoodType = EAnimalFoodType::Unknown;` |

**Notes:**

> 饮食习惯（吃肉吃草）

---

### Property `AnimalAgeStage`

| Field | Details |
|------|------|
| C++ type | [EAnimalAgeStage](CharacterStruct__EAnimalAgeStage.md) |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EAnimalAgeStage AnimalAgeStage = EAnimalAgeStage::None;` |

**Notes:**

> 当前阶段

---

### Property `InitGrowth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float InitGrowth = 0.f;` |

**Notes:**

> 初始成长值

---

### Property `MaxGrowth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float MaxGrowth = 0.f;` |

**Notes:**

> 最大成长值

---

### Property `MustDieGrowth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float MustDieGrowth = 0.f;` |

**Notes:**

> 必须死亡的成长值

---

### Property `AddGrowthValueEveryHour`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float AddGrowthValueEveryHour = 0.f;` |

**Notes:**

> 每小时增加的成长值

---

### Property `AnimalVarietyID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") FName AnimalVarietyID;` |

**Notes:**

> 动物的种类ID

---

### Property `AnimalGrowthInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[EAnimalAgeStage](CharacterStruct__EAnimalAgeStage.md) , [FGrowthInfo](CharacterStruct__FGrowthInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") TMap<EAnimalAgeStage , FGrowthInfo> AnimalGrowthInfo;` |

**Notes:**

> 成长到各个阶段所需的成长值及其会变化的目标ID

---

### Property `ActionType`

| Field | Details |
|------|------|
| C++ type | [EAnimalActionType](CharacterStruct__EAnimalActionType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EAnimalActionType ActionType = EAnimalActionType::ActiveAttack;` |

**Notes:**

> 习性(是否主动攻击人类，被攻击后是否反击，是否逃跑)

---

### Property `AfterTamingUI`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") FName AfterTamingUI;` |

**Notes:**

> 驯服后的UI

---

### Property `AnimalMesh`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh",meta = (AllowedClasses = "SkeletalMesh")) FSoftObjectPath AnimalMesh;` |

**Notes:**

> 动物模型

---

### Property `CapsuleSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Capsule" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capsule") FVector2D CapsuleSize = FVector2D(40,90);` |

**Notes:**

> 胶囊体 x 为半径 y 为 高度

---

### Property `MeshScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh") FVector MeshScale = FVector::One();` |

**Notes:**

> 模型大小

---

### Property `MeshLocationOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh") FVector MeshLocationOffset = FVector::Zero();` |

**Notes:**

> 模型偏移

---

### Property `AnimalBlendSpace`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta = (AllowedClasses = "BlendSpace1D")) FSoftObjectPath AnimalBlendSpace;` |

**Notes:**

> 动物行走混合空间1d

---

### Property `SleepFloorGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities",meta = (AllowedClasses = "GameplayEffect")) FSoftClassPath SleepFloorGameplayEffect;` |

**Notes:**

> 在地上睡觉GE

---

### Property `EatItems`

| Field | Details |
|------|------|
| C++ type | TMap<[EGameConfigType](../Components/ERW_GameConfigComponent__EGameConfigType.md) , [FIDs](../ERW_CommonTypes__FIDs.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TMap<EGameConfigType , FIDs> EatItems;` |

**Notes:**

> 能吃的对象ID
> TMap<配置表类型 , 对应的ID>

---

### Property `NutritionTimer`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") float NutritionTimer { 0.f };` |

**Notes:**

> 进食时间(秒)

---

### Property `BeforeObserveInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FName BeforeObserveInformationWidget;` |

**Notes:**

> 观察前点击物品实例后显示的界面ID 关联DT_CommonUIConfig表

---

### Property `BeforeObserveDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveDescription;` |

**Notes:**

> 观察前详情描述

---

### Property `BeforeObserveName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveName;` |

**Notes:**

> 观察前名称

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observe") FText Desc;` |

**Notes:**

> 描述(观察完成后tip显示)

---

### Property `ObserveDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") int ObserveDurability{-1};` |

**Notes:**

> 观察耐久度

---

### Property `ObserveUnlock`

| Field | Details |
|------|------|
| C++ type | TMap<[ETechUnlockItemType](TechnologyStruct__ETechUnlockItemType.md),[FIDs](../ERW_CommonTypes__FIDs.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TMap<ETechUnlockItemType,FIDs> ObserveUnlock;` |

**Notes:**

> 观察解锁

---

### Property `ObserveUnlockInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FObserveUnlockInfo](ObserveStruct__FObserveUnlockInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TArray<FObserveUnlockInfo> ObserveUnlockInfo;` |

**Notes:**

> 观察解锁文本(界面信息显示)

---

### Property `ObserveRecordDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText ObserveRecordDescription;` |

**Notes:**

> 观察记录描述(富文本)

---

### Property `NewDiscoverTexture2D`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe",meta = (AllowedClasses = "Texture2D")) FSoftObjectPath NewDiscoverTexture2D;` |

**Notes:**

> 新发现图片

---

### Property `bCanTame`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming") bool bCanTame = false;` |

**Notes:**

> 是否可以驯服

---

### Property `TameRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameRate = 0.f;` |

**Notes:**

> 基础驯服机率

---

### Property `TameCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameCD = 0.f;` |

**Notes:**

> 驯服动物失败后多久不能再次驯服：单位秒

---

### Property `TameSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameSchedule = 0.f;` |

**Notes:**

> 驯服的工作量

---

### Property `TameLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) int32 TameLevel = 0;` |

**Notes:**

> 驯服需要的等级d

---

### Property `bCanTraining`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) bool bCanTraining = false;` |

**Notes:**

> 是否可以训练

---

### Property `TrainingCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTraining")) float TrainingCD = 0.f;` |

**Notes:**

> 训练的CD

---

### Property `bHaveOutput`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming") bool bHaveOutput = false;` |

**Notes:**

> 是否有产出

---

### Property `OutPutPeriod`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) float OutPutPeriod = 0.f;` |

**Notes:**

> 产出副产品周期

---

### Property `NutritionInfluenceOutPeriod`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) TMap<FName , float> NutritionInfluenceOutPeriod;` |

**Notes:**

> 饥饿度影响产出副产品周期

---

### Property `OutputProducts`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FAllTypeItemDrop](ItemStruct__FAllTypeItemDrop.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) TMap<FName , FAllTypeItemDrop>OutputProducts;` |

**Notes:**

> 产出的副产品

---

### Property `MoodInfluenceOutPut`

| Field | Details |
|------|------|
| C++ type | `TMap<float , float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<float , float> MoodInfluenceOutPut;` |

**Notes:**

> 心情影响产出

---

### Property `GetFuncWhenReachLevel`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [EAnimalFunc](CharacterStruct__EAnimalFunc.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<int32 , EAnimalFunc> GetFuncWhenReachLevel;` |

**Notes:**

> 达到多少级可以获得的功能

---

### Property `GetAbilityWhenReachLevel`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<int32 , FName> GetAbilityWhenReachLevel;` |

**Notes:**

> 达到多少级可以获得的技能(关联技能表)

---

### Property `CanMateAnimalID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mating" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mating") TArray<FName> CanMateAnimalID;` |

**Notes:**

> 可以交配的动物ID

---

### Property `CanMateSeason`

| Field | Details |
|------|------|
| C++ type | TArray<[EERWSeason](../WorldSystem/WorldStruct__EERWSeason.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Mating" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mating") TArray<EERWSeason> CanMateSeason;` |

**Notes:**

> 可以交配的季节

---

### Property `CanBornAnimal`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mating" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mating") TArray<FName> CanBornAnimal;` |

**Notes:**

> 可以生出的动物ID

---

### Property `PregnantTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Mating" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mating") float PregnantTime = 0.f;` |

**Notes:**

> 怀孕时间（秒）

---

### Property `CultivationConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") FName CultivationConfigID = NAME_None;` |

**Notes:**

> 修炼配置ID（关联FAnimalCultivationConfig配置表）

---

### Property `EveryTimeCultivationExp`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") float EveryTimeCultivationExp = 0.f;` |

**Notes:**

> 每次修炼增加的经验

---

### Property `CultivationProb`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") float CultivationProb = 0.f;` |

**Notes:**

> 修炼概率

---

### Property `CultivationDurationTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") float CultivationDurationTime = 0.f;` |

**Notes:**

> 修炼持续时长

---
