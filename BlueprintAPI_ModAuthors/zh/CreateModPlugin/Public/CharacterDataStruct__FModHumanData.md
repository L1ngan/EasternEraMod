# `struct` `FModHumanData`

**源码头文件:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## 功能说明（来自头文件注释）

> 人类角色配置表行数据，定义捏人外观、基础信息、初始武学装备与属性等

## 蓝图暴露变量

### 属性 `CustomizationId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterCustomization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FString CustomizationId;` |

**说明:**

> 捏人数据的id

---

### 属性 `Height`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Character Customization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Height", ClampMin = "100", ClampMax = "250")) int32 Height = 180;` |

**说明:**

> 身高

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Character Customization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Weight", ClampMin = "30", ClampMax = "200")) int32 Weight = 120;` |

**说明:**

> 体重

---

### 属性 `BackgroundStory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Character Customization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Customization", meta = (DisplayName = "Background Story", MultiLine = true)) FText BackgroundStory;` |

**说明:**

> 背景故事

---

### 属性 `RefuseText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterCustomization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText RefuseText;` |

**说明:**

> 投靠时拒绝文本

---

### 属性 `AcceptText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterCustomization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText AcceptText;` |

**说明:**

> 投靠时接受文本

---

### 属性 `JoinText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterCustomization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterCustomization") FText JoinText;` |

**说明:**

> 投靠加入时显示的文本

---

### 属性 `InitCharacteristicIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitCharacteristicIds;` |

**说明:**

> 初始特性

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterName;` |

**说明:**

> 角色名字

---

### 属性 `CharacterFirstName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterFirstName;` |

**说明:**

> 角色姓氏

---

### 属性 `Sex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex = false;` |

**说明:**

> 角色性别 true 男：false 女

---

### 属性 `Age`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 Age = 0;` |

**说明:**

> 角色年龄

---

### 属性 `DeathAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath DeathAnimMontage;` |

**说明:**

> 死亡动画，死亡时释放GA，GA从死亡动画数组里面取动画

---

### 属性 `DeathMontageSection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> DeathMontageSection;` |

**说明:**

> 死亡动画蒙太奇的片段名列表

---

### 属性 `Avatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Avatar;` |

**说明:**

> 头像

---

### 属性 `Half_Avatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_Avatar;` |

**说明:**

> 半身立绘

---

### 属性 `Half_TourAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_TourAvatar;` |

**说明:**

> 比武半身立绘

---

### 属性 `SmallTourAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath SmallTourAvatar;` |

**说明:**

> 比武五人对战立绘

---

### 属性 `Half_UIAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base", meta = (AllowedClasses = "/Script/Engine.Texture2D")) FSoftObjectPath Half_UIAvatar;` |

**说明:**

> UI显示半身立绘

---

### 属性 `HitAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModHitType](CharacterDataStruct__EModHitType.md),FSoftObjectPath> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<EModHitType,FSoftObjectPath> HitAnimMontage;` |

**说明:**

> 受击动画

---

### 属性 `InitWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitWeapon = NAME_None;` |

**说明:**

> 初始的武器

---

### 属性 `InitArmor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModArmorType](CharacterDataStruct__EModArmorType.md),FName> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EModArmorType,FName>InitArmor;` |

**说明:**

> 初始的防具

---

### 属性 `SightRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float SightRadius = 1000;` |

**说明:**

> 视线范围

---

### 属性 `LoseSightRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float LoseSightRadius = 1100;` |

**说明:**

> 丢失视线范围

---

### 属性 `ReportTeamTeamRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ReportTeamTeamRadius = 3000.f;` |

**说明:**

> 团队感知的范围

---

### 属性 `BaseHealingRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float BaseHealingRate = 0.f;` |

**说明:**

> 基础的愈合速度

---

### 属性 `bCanBeTreat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanBeTreat = false;` |

**说明:**

> 能否被治疗

---

### 属性 `bCanChooseNewGame`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanChooseNewGame = true;` |

**说明:**

> 创建游戏时是否可以被选为队员

---

### 属性 `ControlEffectAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FSoftObjectPath>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<FGameplayTag,FSoftObjectPath> ControlEffectAnimMontage;` |

**说明:**

> 控制效果蒙太奇

---

### 属性 `InitInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitInternalStrength = NAME_None;` |

**说明:**

> 初始的内功

---

### 属性 `InitMoves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitMoves;` |

**说明:**

> 携带的招式 在解锁丹田后自动携带

---

### 属性 `InitPassive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> InitPassive;` |

**说明:**

> 携带的被动 在解锁丹田后自动携带

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadOnly, Category="Attributes" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TMap<FName,float> Attributes;` |

**说明:**

> 属性

---
