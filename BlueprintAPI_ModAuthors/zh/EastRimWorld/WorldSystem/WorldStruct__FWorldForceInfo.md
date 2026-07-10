# `struct` `FWorldForceInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力信息

## 蓝图暴露变量

### 属性 `ForceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceType](WorldStruct__EForceType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceType ForceType = EForceType::None;` |

**说明:**

> 势力类型

---

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId TeamId = FGenericTeamId();` |

**说明:**

> 势力阵营ID

---

### 属性 `ForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid ForceGuid;` |

**说明:**

> 势力GUID

---

### 属性 `ForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceName;` |

**说明:**

> 势力名称

---

### 属性 `ForceManMoveGifid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md),FName> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EWorldMapMoveType,FName> ForceManMoveGifid;` |

**说明:**

> 势力移动动画Id

---

### 属性 `ForceWomanMoveGifid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md), FName> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EWorldMapMoveType, FName> ForceWomanMoveGifid;` |

**说明:**

> Force Woman Move Gifid 字段。

---

### 属性 `WorldPlaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**说明:**

> 势力初始拥有的地点ID

---

### 属性 `WorldForceColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateColor WorldForceColor;` |

**说明:**

> 势力颜色

---

### 属性 `ForceDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceDesc;` |

**说明:**

> 势力描述

---

### 属性 `ForceFeature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceFeature;` |

**说明:**

> 势力特色

---

### 属性 `ForceIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> ForceIcon;` |

**说明:**

> 势力图标

---

### 属性 `ForceWeaponType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldForceWeaponType](WorldStruct__EWorldForceWeaponType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldForceWeaponType ForceWeaponType = EWorldForceWeaponType::None;` |

**说明:**

> 势力武器类型

---

### 属性 `bPlayerForce`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bPlayerForce = false;` |

**说明:**

> 玩家势力

---

### 属性 `ForceAimID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ForceAimID;` |

**说明:**

> 势力宗旨

---

### 属性 `EnhanceAttackStateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float EnhanceAttackStateTime = 0.0f;` |

**说明:**

> 增强攻击状态时间(废弃)

---

### 属性 `ForceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int ForceLevel = 1;` |

**说明:**

> 势力等级

---

### 属性 `NPCForceConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditCondition ="bPlayerForce == false",EditConditionHides)) FName NPCForceConfigID;` |

**说明:**

> 势力的初始属性 包含拥有的角色 机关人等

---

### 属性 `ForceJusticeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ForceJusticeValue = 0.f;` |

**说明:**

> 势力初始正邪值

---

### 属性 `MainConstructionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName MainConstructionID;` |

**说明:**

> 势力主城ID(只能新游戏初始化使用)

---

### 属性 `WorldAttachPlaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WorldAttachPlaceIDs;` |

**说明:**

> [势力割据]势力初始依附驻扎地点(开局以附属门派身份进驻该城市;只能依附1个地点,只能新游戏初始化使用)
> 配置了 WorldAttachPlaceIDs 就不可再配置 WorldPlaceIDs & MainConstructionID,两者互冲;失误同时配置时只认 WorldAttachPlaceIDs

---

### 属性 `GarrisonRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGarrisonRatio](WorldStruct__FGarrisonRatio.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGarrisonRatio> GarrisonRatio;` |

**说明:**

> NPC势力派人驻守的比例

---

### 属性 `InitDogfaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitDogfaceIDs;` |

**说明:**

> 小兵

---

### 属性 `InitStrategicAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitStrategicAbility;` |

**说明:**

> 战略技能

---

### 属性 `InitCrystal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName InitCrystal;` |

**说明:**

> 水晶

---

### 属性 `InitTowerDefense`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitTowerDefense;` |

**说明:**

> 防御塔

---

### 属性 `InitReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 InitReputation = 0;` |

**说明:**

> 初始化声望

---

### 属性 `ForceKongfu`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ForceKongfu;` |

**说明:**

> 势力镇派武学

---

### 属性 `DiscipleRealmMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="RandomDisciple" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RandomDisciple") int32 DiscipleRealmMin = 0;` |

**说明:**

> 随机弟子境界范围下限（含）；用于随机弟子生成，两者均为0时按 ForceLevel 估算

---

### 属性 `DiscipleRealmMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="RandomDisciple" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RandomDisciple") int32 DiscipleRealmMax = 0;` |

**说明:**

> 随机弟子境界范围上限（含）

---

### 属性 `ForceRegion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ForceMeta" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ForceMeta") FName ForceRegion = NAME_None;` |

**说明:**

> Agent 工作流 B1 加: 势力所在地区 (跟 DT_ForceAffiliation.csv Region 字段对接)

---

### 属性 `ForceAlignment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="ForceMeta" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ForceMeta") FName ForceAlignment = NAME_None;` |

**说明:**

> Agent 工作流 B1 加: 正邪阵营 (正派/邪派/中立, 跟 ForceJusticeValue 数值并存)

---
