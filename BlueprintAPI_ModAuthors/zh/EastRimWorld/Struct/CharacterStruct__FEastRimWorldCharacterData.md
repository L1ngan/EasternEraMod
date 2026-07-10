# `struct` `FEastRimWorldCharacterData`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色基础配置数据表行：名字、性别、属性、初始GE/GA、装备、动画、阵营、掉落等

## 蓝图暴露变量

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
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex;` |

**说明:**

> 角色性别 true 男：false 女

---

### 属性 `Age`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 Age;` |

**说明:**

> 角色年龄

---

### 属性 `AnimGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 AnimGroup;` |

**说明:**

> 角色分组，用于不同骨骼的角色用不同的动画

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadOnly, Category="Attributes" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TMap<FName,float> Attributes;` |

**说明:**

> 属性 key 为角色属性表 id 不是属性名字

---

### 属性 `InitGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftClassPath>` |
| 反射说明符 | BlueprintReadOnly, Category="Abilities" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/Engine.GameplayEffect")) TArray<FSoftClassPath> InitGameplayEffect;` |

**说明:**

> 初始的公共Ge 不区分场景

---

### 属性 `InitGameplayAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftClassPath>` |
| 反射说明符 | BlueprintReadOnly, Category="Abilities" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/EastRimWorld.EastRimWorldGameplayAbility")) TArray<FSoftClassPath> InitGameplayAbility;` |

**说明:**

> 初始的能力

---

### 属性 `InitActivateGameplayAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftClassPath>` |
| 反射说明符 | BlueprintReadOnly, Category="Abilities" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities",meta = (AllowedClasses = "/Script/EastRimWorld.EastRimWorldGameplayAbility")) TArray<FSoftClassPath> InitActivateGameplayAbility;` |

**说明:**

> 初始激活一次的能力 激活后移除

---

### 属性 `PlaceInitGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPlaceInitGameplayEffect](CharacterStruct__FPlaceInitGameplayEffect.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Attributes" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes") TArray<FPlaceInitGameplayEffect> PlaceInitGameplayEffect;` |

**说明:**

> 在具体的地点中初始化的GE

---

### 属性 `InitGameplayAbilityByID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> InitGameplayAbilityByID;` |

**说明:**

> 初始的能力通过配置表获取

---

### 属性 `InitGameplayTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") FGameplayTagContainer InitGameplayTags;` |

**说明:**

> 初始获得的标签

---

### 属性 `InitResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FItemSimpleData> InitResource;` |

**说明:**

> 新游戏初始携带的物资

---

### 属性 `Species`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESpeciesType](CommonEnum__ESpeciesType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") ESpeciesType Species;` |

**说明:**

> 物种，用于获取身体器官

---

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="CharacterRuntime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterRuntime") FGuid CharacterGuid;` |

**说明:**

> 角色的GUID

---

### 属性 `InformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName InformationWidget;` |

**说明:**

> 点击后显示的界面ID 关联DT_CommonUIConfig表

---

### 属性 `DeathInformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName DeathInformationWidget;` |

**说明:**

> 死亡后显示的界面ID，关联DT_CommonUIConfig表

---

### 属性 `KnockDownInformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName KnockDownInformationWidget;` |

**说明:**

> 击倒后显示的界面ID，关联DT_CommonUIConfig表

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

> 死亡动画蒙太奇可用的Section名称列表

---

### 属性 `PickedUpAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PickedUpAnimMontage;` |

**说明:**

> 被抱起的动画

---

### 属性 `PutDownAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PutDownAnimMontage;` |

**说明:**

> 被放下的动画

---

### 属性 `PickUpHumanLoopAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) FSoftObjectPath PickUpHumanLoopAnimMontage;` |

**说明:**

> 抱起人类的动画

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
| C++ 类型 | TMap<[EHitType](CharacterStruct__EHitType.md),FSoftObjectPath> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<EHitType,FSoftObjectPath> HitAnimMontage;` |

**说明:**

> 受击动画

---

### 属性 `CharacterTeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FCharacterTeamInfo](CharacterStruct__FCharacterTeamInfo.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base") TMap<int32,FCharacterTeamInfo> CharacterTeamInfo;` |

**说明:**

> 此角色的阵营信息

---

### 属性 `InitWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitWeapon;` |

**说明:**

> 初始的武器

---

### 属性 `InitArmor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EArmorType](CommonEnum__EArmorType.md),FName> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EArmorType,FName>InitArmor;` |

**说明:**

> 初始的防具

---

### 属性 `DefaultArmor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EArmorType](CommonEnum__EArmorType.md),FName> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EArmorType,FName> DefaultArmor;` |

**说明:**

> 默认防具 在没有装备时生效

---

### 属性 `DefaultWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName DefaultWeapon;` |

**说明:**

> 默认武器 在没有装备武器时生效

---

### 属性 `CharacterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FSoftClassPath CharacterClass;` |

**说明:**

> 角色类

---

### 属性 `CharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterType](CommonEnum__ECharacterType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,EditAnywhere, Category = "Base") ECharacterType CharacterType = ECharacterType::None;` |

**说明:**

> 角色类型

---

### 属性 `Output`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FOutputDatas](ItemStruct__FOutputDatas.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FOutputDatas Output;` |

**说明:**

> 死亡产出

---

### 属性 `InteractDefinition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base",meta = (AllowedClasses = "SmartObjectDefinition")) FSoftObjectPath InteractDefinition;` |

**说明:**

> 角色交互定义

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
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float BaseHealingRate;` |

**说明:**

> 基础的愈合速度

---

### 属性 `ButcherWorkLoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float ButcherWorkLoad;` |

**说明:**

> 屠宰需要工作总量

---

### 属性 `bCanBeTreat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bCanBeTreat;` |

**说明:**

> 能否被治疗

---

### 属性 `bCanBeKnockDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bCanBeKnockDown = true;` |

**说明:**

> 能否被击倒

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

### 属性 `IdleSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound") FName IdleSound;` |

**说明:**

> 待机音效 读取GameSoundInfo 配置表

---

### 属性 `ClickVoice`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound") FName ClickVoice;` |

**说明:**

> 点击语音

---

### 属性 `ControlEffectAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FControlEffectAnimMontage>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Base", meta = (AllowedClasses = "/Script/Engine.AnimMontage")) TMap<FGameplayTag,FControlEffectAnimMontage> ControlEffectAnimMontage;` |

**说明:**

> 控制效果蒙太奇

---

### 属性 `HobbyIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> HobbyIds;` |

**说明:**

> 爱好

---

### 属性 `InitInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName InitInternalStrength;` |

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

### 属性 `MaxDropNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="DeathDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeathDrop") int32 MaxDropNum{1};` |

**说明:**

> 死亡后的掉落最大数量

---

### 属性 `DropItemConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="DeathDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeathDrop") TMap<FName,float> DropItemConfig;` |

**说明:**

> 死亡后的掉落配置 配置ID -- 掉落权重

---
