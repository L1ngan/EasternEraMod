# `struct` `FModAnimalData`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## Functional description (from header comments)

> Animal config table row defining an animal's base info, attributes, mesh/animation, taming/training, output and death drop settings.

## Blueprint-exposed variables

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

### Property `Sex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex = false;` |

**Notes:**

> 角色性别 true 男：false 女

---

### Property `Age`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 Age = 0;` |

**Notes:**

> 角色年龄

---

### Property `AnimGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 AnimGroup = 0;` |

**Notes:**

> 角色分组，用于不同骨骼的角色用不同的动画

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadOnly, Category="Attributes" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TMap<FName,float> Attributes;` |

**Notes:**

> 属性 key 为角色属性表 id 不是属性名字

---

### Property `Species`

| Field | Details |
|------|------|
| C++ type | [EModSpeciesType](CharacterDataStruct__EModSpeciesType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") EModSpeciesType Species = EModSpeciesType::Beast;` |

**Notes:**

> 物种，用于获取身体器官

---

### Property `DeathAnimMontage`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath DeathAnimMontage;` |

**Notes:**

> 死亡动画，死亡时释放GA，GA从死亡动画数组里面取动画

---

### Property `DeathMontageSection`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> DeathMontageSection;` |

**Notes:**

> List of section names in the death anim montage.

---

### Property `HitAnimMontage`

| Field | Details |
|------|------|
| C++ type | TMap<[EModHitType](CharacterDataStruct__EModHitType.md),FSoftObjectPath> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<EModHitType,FSoftObjectPath> HitAnimMontage;` |

**Notes:**

> 受击动画

---

### Property `InitWeapon`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitWeapon = NAME_None;` |

**Notes:**

> 初始的武器

---

### Property `InitArmor`

| Field | Details |
|------|------|
| C++ type | TMap<[EModArmorType](CharacterDataStruct__EModArmorType.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EModArmorType,FName>InitArmor;` |

**Notes:**

> 初始的防具

---

### Property `DefaultArmor`

| Field | Details |
|------|------|
| C++ type | TMap<[EModArmorType](CharacterDataStruct__EModArmorType.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EModArmorType,FName> DefaultArmor;` |

**Notes:**

> 默认防具 在没有装备时生效

---

### Property `DefaultWeapon`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName DefaultWeapon = NAME_None;` |

**Notes:**

> 默认武器 在没有装备武器时生效

---

### Property `Output`

| Field | Details |
|------|------|
| C++ type | [FModOutputDatas](CharacterDataStruct__FModOutputDatas.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FModOutputDatas Output;` |

**Notes:**

> 死亡产出

---

### Property `SightRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float SightRadius = 0.f;` |

**Notes:**

> 视线范围

---

### Property `LoseSightRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float LoseSightRadius = 0.f;` |

**Notes:**

> 丢失视线范围

---

### Property `ReportTeamTeamRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ReportTeamTeamRadius = 0.f;` |

**Notes:**

> 团队感知的范围

---

### Property `BaseHealingRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float BaseHealingRate = 0.f;` |

**Notes:**

> 基础的愈合速度

---

### Property `ButcherWorkLoad`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float ButcherWorkLoad = 0.f;` |

**Notes:**

> 屠宰需要工作总量

---

### Property `bCanBeTreat`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanBeTreat = false;` |

**Notes:**

> 能否被治疗

---

### Property `bCanBeKnockDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bCanBeKnockDown = true;` |

**Notes:**

> 能否被击倒

---

### Property `bCanChooseNewGame`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanChooseNewGame = true;` |

**Notes:**

> 创建游戏时是否可以被选为队员

---

### Property `AnimalBodyType`

| Field | Details |
|------|------|
| C++ type | [EModAnimalBodyType](CharacterDataStruct__EModAnimalBodyType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="AnimalBase" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EModAnimalBodyType AnimalBodyType = EModAnimalBodyType::Normal;` |

**Notes:**

> 动物体型（体型大小）

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
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capsule") FVector2D CapsuleSize = FVector2D(1,1);` |

**Notes:**

> 胶囊体 x 为半径 y 为 高度

---

### Property `MeshScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh") FVector MeshScale = FVector::Zero();` |

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

### Property `EatItems`

| Field | Details |
|------|------|
| C++ type | TMap<[EModConfigType](BaseDataStruct__EModConfigType.md) , [FModIDs](CharacterDataStruct__FModIDs.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TMap<EModConfigType , FModIDs> EatItems;` |

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
| C++ type | TMap<FName , [FModAllTypeItemDrop](CharacterDataStruct__FModAllTypeItemDrop.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) TMap<FName , FModAllTypeItemDrop>OutputProducts;` |

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
| C++ type | TMap<int32 , [EModAnimalFunc](CharacterDataStruct__EModAnimalFunc.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Taming" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<int32 , EModAnimalFunc> GetFuncWhenReachLevel;` |

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

### Property `InitGameplayAbilityByID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> InitGameplayAbilityByID;` |

**Notes:**

> 初始的能力通过配置表获取

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

### Property `MaxDropNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="DeathDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeathDrop") int32 MaxDropNum{1};` |

**Notes:**

> 死亡后的掉落最大数量

---

### Property `DropItemConfig`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="DeathDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeathDrop") TMap<FName,float> DropItemConfig;` |

**Notes:**

> 死亡后的掉落配置 配置ID -- 掉落权重

---
