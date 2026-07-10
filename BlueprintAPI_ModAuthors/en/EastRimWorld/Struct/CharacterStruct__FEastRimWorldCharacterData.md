# `struct` `FEastRimWorldCharacterData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Base character config data table row: name, sex, attributes, initial GEs/GAs, equipment, animations, team info, drops, etc.

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
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex;` |

**Notes:**

> 角色性别 true 男：false 女

---

### Property `Age`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 Age;` |

**Notes:**

> 角色年龄

---

### Property `AnimGroup`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 AnimGroup;` |

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

### Property `InitGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadOnly, Category="Abilities" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/Engine.GameplayEffect")) TArray<FSoftClassPath> InitGameplayEffect;` |

**Notes:**

> 初始的公共Ge 不区分场景

---

### Property `InitGameplayAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadOnly, Category="Abilities" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/EastRimWorld.EastRimWorldGameplayAbility")) TArray<FSoftClassPath> InitGameplayAbility;` |

**Notes:**

> 初始的能力

---

### Property `InitActivateGameplayAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadOnly, Category="Abilities" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities",meta = (AllowedClasses = "/Script/EastRimWorld.EastRimWorldGameplayAbility")) TArray<FSoftClassPath> InitActivateGameplayAbility;` |

**Notes:**

> 初始激活一次的能力 激活后移除

---

### Property `PlaceInitGameplayEffect`

| Field | Details |
|------|------|
| C++ type | TArray<[FPlaceInitGameplayEffect](CharacterStruct__FPlaceInitGameplayEffect.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Attributes" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TArray<FPlaceInitGameplayEffect> PlaceInitGameplayEffect;` |

**Notes:**

> 在具体的地点中初始化的GE

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

### Property `InitGameplayTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") FGameplayTagContainer InitGameplayTags;` |

**Notes:**

> 初始获得的标签

---

### Property `InitResource`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FItemSimpleData> InitResource;` |

**Notes:**

> 新游戏初始携带的物资

---

### Property `Species`

| Field | Details |
|------|------|
| C++ type | [ESpeciesType](CommonEnum__ESpeciesType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") ESpeciesType Species;` |

**Notes:**

> 物种，用于获取身体器官

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterRuntime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterRuntime") FGuid CharacterGuid;` |

**Notes:**

> 角色的GUID

---

### Property `InformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName InformationWidget;` |

**Notes:**

> 点击后显示的界面ID 关联DT_CommonUIConfig表

---

### Property `DeathInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName DeathInformationWidget;` |

**Notes:**

> 死亡后显示的界面ID，关联DT_CommonUIConfig表

---

### Property `KnockDownInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName KnockDownInformationWidget;` |

**Notes:**

> 击倒后显示的界面ID，关联DT_CommonUIConfig表

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

> List of section names available in the death anim montage

---

### Property `PickedUpAnimMontage`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PickedUpAnimMontage;` |

**Notes:**

> 被抱起的动画

---

### Property `PutDownAnimMontage`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PutDownAnimMontage;` |

**Notes:**

> 被放下的动画

---

### Property `PickUpHumanLoopAnimMontage`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PickUpHumanLoopAnimMontage;` |

**Notes:**

> 抱起人类的动画

---

### Property `Avatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Avatar;` |

**Notes:**

> 头像

---

### Property `Half_Avatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_Avatar;` |

**Notes:**

> 半身立绘

---

### Property `Half_TourAvatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_TourAvatar;` |

**Notes:**

> 比武半身立绘

---

### Property `SmallTourAvatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath SmallTourAvatar;` |

**Notes:**

> 比武五人对战立绘

---

### Property `Half_UIAvatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_UIAvatar;` |

**Notes:**

> UI显示半身立绘

---

### Property `HitAnimMontage`

| Field | Details |
|------|------|
| C++ type | TMap<[EHitType](CharacterStruct__EHitType.md),FSoftObjectPath> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<EHitType,FSoftObjectPath> HitAnimMontage;` |

**Notes:**

> 受击动画

---

### Property `CharacterTeamInfo`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCharacterTeamInfo](CharacterStruct__FCharacterTeamInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base") TMap<int32,FCharacterTeamInfo> CharacterTeamInfo;` |

**Notes:**

> 此角色的阵营信息

---

### Property `InitWeapon`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitWeapon;` |

**Notes:**

> 初始的武器

---

### Property `InitArmor`

| Field | Details |
|------|------|
| C++ type | TMap<[EArmorType](CommonEnum__EArmorType.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EArmorType,FName>InitArmor;` |

**Notes:**

> 初始的防具

---

### Property `DefaultArmor`

| Field | Details |
|------|------|
| C++ type | TMap<[EArmorType](CommonEnum__EArmorType.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EArmorType,FName> DefaultArmor;` |

**Notes:**

> 默认防具 在没有装备时生效

---

### Property `DefaultWeapon`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName DefaultWeapon;` |

**Notes:**

> 默认武器 在没有装备武器时生效

---

### Property `CharacterClass`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FSoftClassPath CharacterClass;` |

**Notes:**

> 角色类

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | [ECharacterType](CommonEnum__ECharacterType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,EditAnywhere, Category = "Base") ECharacterType CharacterType = ECharacterType::None;` |

**Notes:**

> 角色类型

---

### Property `Output`

| Field | Details |
|------|------|
| C++ type | [FOutputDatas](ItemStruct__FOutputDatas.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FOutputDatas Output;` |

**Notes:**

> 死亡产出

---

### Property `InteractDefinition`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base",meta = (AllowedClasses = "SmartObjectDefinition")) FSoftObjectPath InteractDefinition;` |

**Notes:**

> 角色交互定义

---

### Property `SightRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float SightRadius = 1000;` |

**Notes:**

> 视线范围

---

### Property `LoseSightRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float LoseSightRadius = 1100;` |

**Notes:**

> 丢失视线范围

---

### Property `ReportTeamTeamRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ReportTeamTeamRadius = 3000.f;` |

**Notes:**

> 团队感知的范围

---

### Property `BaseHealingRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float BaseHealingRate;` |

**Notes:**

> 基础的愈合速度

---

### Property `ButcherWorkLoad`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float ButcherWorkLoad;` |

**Notes:**

> 屠宰需要工作总量

---

### Property `bCanBeTreat`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanBeTreat;` |

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

### Property `IdleSound`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound") FName IdleSound;` |

**Notes:**

> 待机音效 读取GameSoundInfo 配置表

---

### Property `ClickVoice`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound") FName ClickVoice;` |

**Notes:**

> 点击语音

---

### Property `ControlEffectAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FControlEffectAnimMontage>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<FGameplayTag,FControlEffectAnimMontage> ControlEffectAnimMontage;` |

**Notes:**

> 控制效果蒙太奇

---

### Property `HobbyIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> HobbyIds;` |

**Notes:**

> 爱好

---

### Property `InitInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitInternalStrength;` |

**Notes:**

> 初始的内功

---

### Property `InitMoves`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitMoves;` |

**Notes:**

> 携带的招式 在解锁丹田后自动携带

---

### Property `InitPassive`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitPassive;` |

**Notes:**

> 携带的被动 在解锁丹田后自动携带

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
