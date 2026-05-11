# `struct` `FEastRimWorldSummonsData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 召唤物的数据

## Blueprint-exposed variables

### Property `EastRimWorldSummonsType`

| Field | Details |
|------|------|
| C++ type | `EEastRimWorldSummonsType` |
| Reflection specifiers | BlueprintReadWrite, Category="SummonsData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") EEastRimWorldSummonsType EastRimWorldSummonsType = EEastRimWorldSummonsType::None;` |

---

### Property `FormatDesc`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FFormatText FormatDesc;` |

**Source comments:**

> 召唤物描述

---

### Property `ParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Ride" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ride", meta = (EditConditionHides, EditCondition = "EastRimWorldSummonsType == EEastRimWorldSummonsType::OnlyControl || EastRimWorldSummonsType == EEastRimWorldSummonsType::AutoOrControl")) FName ParentSocket;` |

**Source comments:**

> 骑乘的插槽

---

### Property `RideAnim`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Ride" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ride", meta = (AllowedClasses = "AnimSequence",EditConditionHides, EditCondition = "EastRimWorldSummonsType == EEastRimWorldSummonsType::OnlyControl || EastRimWorldSummonsType == EEastRimWorldSummonsType::AutoOrControl")) FSoftObjectPath RideAnim;` |

**Source comments:**

> 骑乘的动画

---

### Property `SummonsMesh`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh",meta = (AllowedClasses = "SkeletalMesh")) FSoftObjectPath SummonsMesh;` |

**Source comments:**

> 召唤物模型

---

### Property `SummonsBlendSpace`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Animation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta = (AllowedClasses = "BlendSpace1D")) FSoftObjectPath SummonsBlendSpace;` |

**Source comments:**

> 召唤物行走混合空间1d

---

### Property `bOverrideBlueprint`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="ActorSizeSetting" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting") bool bOverrideBlueprint = true;` |

**Source comments:**

> 是否覆盖蓝图设置

---

### Property `CapsuleSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="ActorSizeSetting" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector2D CapsuleSize = FVector2D(40,90);` |

**Source comments:**

> 胶囊体 x 为半径 y 为 高度

---

### Property `MeshScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="ActorSizeSetting" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector MeshScale = FVector::One();` |

**Source comments:**

> 模型大小

---

### Property `MeshLocationOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="ActorSizeSetting" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector MeshLocationOffset = FVector::Zero();` |

**Source comments:**

> 模型偏移

---

### Property `RobotType`

| Field | Details |
|------|------|
| C++ type | `ERobotType` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") ERobotType RobotType = ERobotType::None;` |

**Source comments:**

> 机关角色类型

---

### Property `RobotTotalEnergy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotTotalEnergy = 0.f;` |

**Source comments:**

> 机关角色总能量

---

### Property `RobotExpendEnergyEveryTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotExpendEnergyEveryTime = 0.f;` |

**Source comments:**

> 机关角色单位时间消耗的能量

---

### Property `RobotRecoveryEnergyWhenStanby`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotRecoveryEnergyWhenStanby = 0.f;` |

**Source comments:**

> 待机时单位时间恢复的能量

---

### Property `RobotRecoveryEnergyWhenInBuilding`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotRecoveryEnergyWhenInBuilding = 0.f;` |

**Source comments:**

> 处于单位时间恢复的能量

---

### Property `RepairNeedLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="MechanismRole" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere, Category="MechanismRole") int32 RepairNeedLevel = 0;` |

**Source comments:**

> 维修需要的手工技能

---

### Property `SummonsBattleType`

| Field | Details |
|------|------|
| C++ type | `ESummonsBattleType` |
| Reflection specifiers | BlueprintReadWrite, Category="SummonsData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") ESummonsBattleType SummonsBattleType = ESummonsBattleType::None;` |

**Source comments:**

> 召唤物战斗类型

---

### Property `SummonLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SummonsData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") int32 SummonLevel = 1;` |

**Source comments:**

> 召唤物等级

---

### Property `bIsUpgradedPuppet`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="PuppetModification" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") bool bIsUpgradedPuppet = false;` |

**Source comments:**

> 傀儡装备改造相关字段
> 傀儡类型（基础款/升级款）

---

### Property `PuppetSilhouetteTexture`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="PuppetModification" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification", meta = (AllowedClasses = "Texture2D")) FSoftObjectPath PuppetSilhouetteTexture;` |

**Source comments:**

> 傀儡剪影图

---

### Property `AvailableEquipmentTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EEquipmentType>` |
| Reflection specifiers | BlueprintReadWrite, Category="PuppetModification" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") TArray<EEquipmentType> AvailableEquipmentTypes;` |

**Source comments:**

> 可改装的装备类型列表（使用现有装备系统）

---

### Property `AvailableArmorTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EArmorType>` |
| Reflection specifiers | BlueprintReadWrite, Category="PuppetModification" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") TArray<EArmorType> AvailableArmorTypes;` |

**Source comments:**

> 可改装的防具类型列表

---
