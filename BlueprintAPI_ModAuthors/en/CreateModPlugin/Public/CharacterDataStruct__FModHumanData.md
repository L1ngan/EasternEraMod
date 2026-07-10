# `struct` `FModHumanData`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## Functional description (from header comments)

> Human character config table row defining customization appearance, base info, initial martial arts/equipment and attributes.

## Blueprint-exposed variables

### Property `CustomizationId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FString CustomizationId;` |

**Notes:**

> 捏人数据的id

---

### Property `Height`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Character Customization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Height", ClampMin = "100", ClampMax = "250")) int32 Height = 180;` |

**Notes:**

> 身高

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Character Customization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Weight", ClampMin = "30", ClampMax = "200")) int32 Weight = 120;` |

**Notes:**

> 体重

---

### Property `BackgroundStory`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Character Customization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Background Story", MultiLine = true)) FText BackgroundStory;` |

**Notes:**

> 背景故事

---

### Property `RefuseText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText RefuseText;` |

**Notes:**

> 投靠时拒绝文本

---

### Property `AcceptText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText AcceptText;` |

**Notes:**

> 投靠时接受文本

---

### Property `JoinText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterCustomization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText JoinText;` |

**Notes:**

> Text shown when the character joins.

---

### Property `InitCharacteristicIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitCharacteristicIds;` |

**Notes:**

> 初始特性

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
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float BaseHealingRate = 0.f;` |

**Notes:**

> 基础的愈合速度

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

### Property `ControlEffectAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FSoftObjectPath>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<FGameplayTag,FSoftObjectPath> ControlEffectAnimMontage;` |

**Notes:**

> 控制效果蒙太奇

---

### Property `InitInternalStrength`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitInternalStrength = NAME_None;` |

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

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadOnly, Category="Attributes" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TMap<FName,float> Attributes;` |

**Notes:**

> 属性

---
