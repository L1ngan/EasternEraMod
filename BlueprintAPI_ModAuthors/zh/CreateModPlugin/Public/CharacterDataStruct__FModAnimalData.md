# `struct` `FModAnimalData`

**源码头文件:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## 功能说明（来自头文件注释）

> 动物配置表行数据，定义动物的基础信息、属性、模型动画、驯服训练、产出与死亡掉落等配置

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

### 属性 `AnimGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") int32 AnimGroup = 0;` |

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

### 属性 `Species`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModSpeciesType](CharacterDataStruct__EModSpeciesType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") EModSpeciesType Species = EModSpeciesType::Beast;` |

**说明:**

> 物种，用于获取身体器官

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

### 属性 `DefaultArmor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModArmorType](CharacterDataStruct__EModArmorType.md),FName> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TMap<EModArmorType,FName> DefaultArmor;` |

**说明:**

> 默认防具 在没有装备时生效

---

### 属性 `DefaultWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName DefaultWeapon = NAME_None;` |

**说明:**

> 默认武器 在没有装备武器时生效

---

### 属性 `Output`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FModOutputDatas](CharacterDataStruct__FModOutputDatas.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FModOutputDatas Output;` |

**说明:**

> 死亡产出

---

### 属性 `SightRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float SightRadius = 0.f;` |

**说明:**

> 视线范围

---

### 属性 `LoseSightRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float LoseSightRadius = 0.f;` |

**说明:**

> 丢失视线范围

---

### 属性 `ReportTeamTeamRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ReportTeamTeamRadius = 0.f;` |

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

### 属性 `ButcherWorkLoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") float ButcherWorkLoad = 0.f;` |

**说明:**

> 屠宰需要工作总量

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

### 属性 `AnimalBodyType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModAnimalBodyType](CharacterDataStruct__EModAnimalBodyType.md) |
| 反射说明符 | BlueprintReadWrite, Category="AnimalBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") EModAnimalBodyType AnimalBodyType = EModAnimalBodyType::Normal;` |

**说明:**

> 动物体型（体型大小）

---

### 属性 `InitGrowth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="AnimalBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float InitGrowth = 0.f;` |

**说明:**

> 初始成长值

---

### 属性 `MaxGrowth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="AnimalBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float MaxGrowth = 0.f;` |

**说明:**

> 最大成长值

---

### 属性 `MustDieGrowth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="AnimalBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float MustDieGrowth = 0.f;` |

**说明:**

> 必须死亡的成长值

---

### 属性 `AddGrowthValueEveryHour`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="AnimalBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimalBase") float AddGrowthValueEveryHour = 0.f;` |

**说明:**

> 每小时增加的成长值

---

### 属性 `AnimalMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh",meta = (AllowedClasses = "SkeletalMesh")) FSoftObjectPath AnimalMesh;` |

**说明:**

> 动物模型

---

### 属性 `CapsuleSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Capsule" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capsule") FVector2D CapsuleSize = FVector2D(1,1);` |

**说明:**

> 胶囊体 x 为半径 y 为 高度

---

### 属性 `MeshScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh") FVector MeshScale = FVector::Zero();` |

**说明:**

> 模型大小

---

### 属性 `MeshLocationOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh") FVector MeshLocationOffset = FVector::Zero();` |

**说明:**

> 模型偏移

---

### 属性 `AnimalBlendSpace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta = (AllowedClasses = "BlendSpace1D")) FSoftObjectPath AnimalBlendSpace;` |

**说明:**

> 动物行走混合空间1d

---

### 属性 `EatItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EModConfigType](BaseDataStruct__EModConfigType.md) , [FModIDs](CharacterDataStruct__FModIDs.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TMap<EModConfigType , FModIDs> EatItems;` |

**说明:**

> 能吃的对象ID
> TMap<配置表类型 , 对应的ID>

---

### 属性 `NutritionTimer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") float NutritionTimer { 0.f };` |

**说明:**

> 进食时间(秒)

---

### 属性 `bCanTame`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming") bool bCanTame = false;` |

**说明:**

> 是否可以驯服

---

### 属性 `TameRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameRate = 0.f;` |

**说明:**

> 基础驯服机率

---

### 属性 `TameCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameCD = 0.f;` |

**说明:**

> 驯服动物失败后多久不能再次驯服：单位秒

---

### 属性 `TameSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) float TameSchedule = 0.f;` |

**说明:**

> 驯服的工作量

---

### 属性 `TameLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) int32 TameLevel = 0;` |

**说明:**

> 驯服需要的等级d

---

### 属性 `bCanTraining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", Meta = (EditCondition = "bCanTame")) bool bCanTraining = false;` |

**说明:**

> 是否可以训练

---

### 属性 `TrainingCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTraining")) float TrainingCD = 0.f;` |

**说明:**

> 训练的CD

---

### 属性 `bHaveOutput`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming") bool bHaveOutput = false;` |

**说明:**

> 是否有产出

---

### 属性 `OutPutPeriod`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) float OutPutPeriod = 0.f;` |

**说明:**

> 产出副产品周期

---

### 属性 `NutritionInfluenceOutPeriod`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , float>` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) TMap<FName , float> NutritionInfluenceOutPeriod;` |

**说明:**

> 饥饿度影响产出副产品周期

---

### 属性 `OutputProducts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FModAllTypeItemDrop](CharacterDataStruct__FModAllTypeItemDrop.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taming", meta = (EditConditionHides = "bHaveOutput")) TMap<FName , FModAllTypeItemDrop>OutputProducts;` |

**说明:**

> 产出的副产品

---

### 属性 `MoodInfluenceOutPut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<float , float>` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<float , float> MoodInfluenceOutPut;` |

**说明:**

> 心情影响产出

---

### 属性 `GetFuncWhenReachLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [EModAnimalFunc](CharacterDataStruct__EModAnimalFunc.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<int32 , EModAnimalFunc> GetFuncWhenReachLevel;` |

**说明:**

> 达到多少级可以获得的功能

---

### 属性 `GetAbilityWhenReachLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Taming" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Taming", meta = (EditConditionHides = "bCanTame")) TMap<int32 , FName> GetAbilityWhenReachLevel;` |

**说明:**

> 达到多少级可以获得的技能(关联技能表)

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

### 属性 `BeforeObserveName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveName;` |

**说明:**

> 观察前名称

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
