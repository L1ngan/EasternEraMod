# `struct` `FEastRimWorldSummonsData`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 召唤物的数据

## 蓝图暴露变量

### 属性 `EastRimWorldSummonsType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEastRimWorldSummonsType](CharacterStruct__EEastRimWorldSummonsType.md) |
| 反射说明符 | BlueprintReadWrite, Category="SummonsData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") EEastRimWorldSummonsType EastRimWorldSummonsType = EEastRimWorldSummonsType::None;` |

**说明:**

> 召唤物控制类型（只能控制/自动/可控制也可自动）

---

### 属性 `FormatDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FFormatText FormatDesc;` |

**说明:**

> 召唤物描述

---

### 属性 `ParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Ride" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ride", meta = (EditConditionHides, EditCondition = "EastRimWorldSummonsType == EEastRimWorldSummonsType::OnlyControl || EastRimWorldSummonsType == EEastRimWorldSummonsType::AutoOrControl")) FName ParentSocket;` |

**说明:**

> 骑乘的插槽

---

### 属性 `RideAnim`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Ride" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ride", meta = (AllowedClasses = "AnimSequence",EditConditionHides, EditCondition = "EastRimWorldSummonsType == EEastRimWorldSummonsType::OnlyControl || EastRimWorldSummonsType == EEastRimWorldSummonsType::AutoOrControl")) FSoftObjectPath RideAnim;` |

**说明:**

> 骑乘的动画

---

### 属性 `SummonsMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh",meta = (AllowedClasses = "SkeletalMesh")) FSoftObjectPath SummonsMesh;` |

**说明:**

> 召唤物模型

---

### 属性 `SummonsBlendSpace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta = (AllowedClasses = "BlendSpace1D")) FSoftObjectPath SummonsBlendSpace;` |

**说明:**

> 召唤物行走混合空间1d

---

### 属性 `bOverrideBlueprint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="ActorSizeSetting" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting") bool bOverrideBlueprint = true;` |

**说明:**

> 是否覆盖蓝图设置

---

### 属性 `CapsuleSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="ActorSizeSetting" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector2D CapsuleSize = FVector2D(40,90);` |

**说明:**

> 胶囊体 x 为半径 y 为 高度

---

### 属性 `MeshScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="ActorSizeSetting" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector MeshScale = FVector::One();` |

**说明:**

> 模型大小

---

### 属性 `MeshLocationOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="ActorSizeSetting" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorSizeSetting",meta=(EditCondition = "bOverrideBlueprint",EditConditionHides)) FVector MeshLocationOffset = FVector::Zero();` |

**说明:**

> 模型偏移

---

### 属性 `RobotType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERobotType](../ERW_Enumerations__ERobotType.md) |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") ERobotType RobotType = ERobotType::None;` |

**说明:**

> 机关角色类型

---

### 属性 `RobotTotalEnergy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotTotalEnergy = 0.f;` |

**说明:**

> 机关角色总能量

---

### 属性 `RobotExpendEnergyEveryTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotExpendEnergyEveryTime = 0.f;` |

**说明:**

> 机关角色单位时间消耗的能量

---

### 属性 `RobotRecoveryEnergyWhenStanby`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotRecoveryEnergyWhenStanby = 0.f;` |

**说明:**

> 待机时单位时间恢复的能量

---

### 属性 `RobotRecoveryEnergyWhenInBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MechanismRole") float RobotRecoveryEnergyWhenInBuilding = 0.f;` |

**说明:**

> 处于单位时间恢复的能量

---

### 属性 `RepairNeedLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="MechanismRole" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere, Category="MechanismRole") int32 RepairNeedLevel = 0;` |

**说明:**

> 维修需要的手工技能

---

### 属性 `SummonsBattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESummonsBattleType](CommonEnum__ESummonsBattleType.md) |
| 反射说明符 | BlueprintReadWrite, Category="SummonsData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") ESummonsBattleType SummonsBattleType = ESummonsBattleType::None;` |

**说明:**

> 召唤物战斗类型

---

### 属性 `SummonLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SummonsData" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SummonsData") int32 SummonLevel = 1;` |

**说明:**

> 召唤物等级

---

### 属性 `bIsUpgradedPuppet`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="PuppetModification" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") bool bIsUpgradedPuppet = false;` |

**说明:**

> 傀儡装备改造相关字段
> 傀儡类型（基础款/升级款）

---

### 属性 `PuppetSilhouetteTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="PuppetModification" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification", meta = (AllowedClasses = "Texture2D")) FSoftObjectPath PuppetSilhouetteTexture;` |

**说明:**

> 傀儡剪影图

---

### 属性 `AvailableEquipmentTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EEquipmentType](CommonEnum__EEquipmentType.md)> |
| 反射说明符 | BlueprintReadWrite, Category="PuppetModification" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") TArray<EEquipmentType> AvailableEquipmentTypes;` |

**说明:**

> 可改装的装备类型列表（使用现有装备系统）

---

### 属性 `AvailableArmorTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EArmorType](CommonEnum__EArmorType.md)> |
| 反射说明符 | BlueprintReadWrite, Category="PuppetModification" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PuppetModification") TArray<EArmorType> AvailableArmorTypes;` |

**说明:**

> 可改装的防具类型列表

---
