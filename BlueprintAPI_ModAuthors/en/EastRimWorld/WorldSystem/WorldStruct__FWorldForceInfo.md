# `struct` `FWorldForceInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力信息

## Blueprint-exposed variables

### Property `ForceType`

| Field | Details |
|------|------|
| C++ type | [EForceType](WorldStruct__EForceType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceType ForceType = EForceType::None;` |

**Notes:**

> 势力类型

---

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId TeamId = FGenericTeamId();` |

**Notes:**

> 势力阵营ID

---

### Property `ForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid ForceGuid;` |

**Notes:**

> 势力GUID

---

### Property `ForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceName;` |

**Notes:**

> 势力名称

---

### Property `ForceManMoveGifid`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md),FName> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EWorldMapMoveType,FName> ForceManMoveGifid;` |

**Notes:**

> 势力移动动画Id

---

### Property `ForceWomanMoveGifid`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md), FName> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EWorldMapMoveType, FName> ForceWomanMoveGifid;` |

**Notes:**

> Force Woman Move Gifid field.

---

### Property `WorldPlaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**Notes:**

> 势力初始拥有的地点ID

---

### Property `WorldForceColor`

| Field | Details |
|------|------|
| C++ type | `FSlateColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSlateColor WorldForceColor;` |

**Notes:**

> 势力颜色

---

### Property `ForceDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceDesc;` |

**Notes:**

> 势力描述

---

### Property `ForceFeature`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceFeature;` |

**Notes:**

> 势力特色

---

### Property `ForceIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> ForceIcon;` |

**Notes:**

> 势力图标

---

### Property `ForceWeaponType`

| Field | Details |
|------|------|
| C++ type | [EWorldForceWeaponType](WorldStruct__EWorldForceWeaponType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldForceWeaponType ForceWeaponType = EWorldForceWeaponType::None;` |

**Notes:**

> 势力武器类型

---

### Property `bPlayerForce`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bPlayerForce = false;` |

**Notes:**

> 玩家势力

---

### Property `ForceAimID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ForceAimID;` |

**Notes:**

> 势力宗旨

---

### Property `EnhanceAttackStateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float EnhanceAttackStateTime = 0.0f;` |

**Notes:**

> 增强攻击状态时间(废弃)

---

### Property `ForceLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int ForceLevel = 1;` |

**Notes:**

> 势力等级

---

### Property `NPCForceConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditCondition ="bPlayerForce == false",EditConditionHides)) FName NPCForceConfigID;` |

**Notes:**

> 势力的初始属性 包含拥有的角色 机关人等

---

### Property `ForceJusticeValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ForceJusticeValue = 0.f;` |

**Notes:**

> 势力初始正邪值

---

### Property `MainConstructionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName MainConstructionID;` |

**Notes:**

> 势力主城ID(只能新游戏初始化使用)

---

### Property `WorldAttachPlaceIDs`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName WorldAttachPlaceIDs;` |

**Notes:**

> [势力割据]势力初始依附驻扎地点(开局以附属门派身份进驻该城市;只能依附1个地点,只能新游戏初始化使用)
> 配置了 WorldAttachPlaceIDs 就不可再配置 WorldPlaceIDs & MainConstructionID,两者互冲;失误同时配置时只认 WorldAttachPlaceIDs

---

### Property `GarrisonRatio`

| Field | Details |
|------|------|
| C++ type | TArray<[FGarrisonRatio](WorldStruct__FGarrisonRatio.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGarrisonRatio> GarrisonRatio;` |

**Notes:**

> NPC势力派人驻守的比例

---

### Property `InitDogfaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitDogfaceIDs;` |

**Notes:**

> 小兵

---

### Property `InitStrategicAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitStrategicAbility;` |

**Notes:**

> 战略技能

---

### Property `InitCrystal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName InitCrystal;` |

**Notes:**

> 水晶

---

### Property `InitTowerDefense`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> InitTowerDefense;` |

**Notes:**

> 防御塔

---

### Property `InitReputation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 InitReputation = 0;` |

**Notes:**

> 初始化声望

---

### Property `ForceKongfu`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ForceKongfu;` |

**Notes:**

> 势力镇派武学

---

### Property `DiscipleRealmMin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="RandomDisciple" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RandomDisciple") int32 DiscipleRealmMin = 0;` |

**Notes:**

> 随机弟子境界范围下限（含）；用于随机弟子生成，两者均为0时按 ForceLevel 估算

---

### Property `DiscipleRealmMax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="RandomDisciple" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RandomDisciple") int32 DiscipleRealmMax = 0;` |

**Notes:**

> 随机弟子境界范围上限（含）

---

### Property `ForceRegion`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceMeta" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ForceMeta") FName ForceRegion = NAME_None;` |

**Notes:**

> Agent 工作流 B1 加: 势力所在地区 (跟 DT_ForceAffiliation.csv Region 字段对接)

---

### Property `ForceAlignment`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceMeta" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ForceMeta") FName ForceAlignment = NAME_None;` |

**Notes:**

> Agent 工作流 B1 加: 正邪阵营 (正派/邪派/中立, 跟 ForceJusticeValue 数值并存)

---
