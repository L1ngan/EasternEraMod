# `struct` `FWorldNPCForceConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> NPC势力信息

## Blueprint-exposed variables

### Property `ForceCharacterData`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterData;` |

**Notes:**

> 势力中主城初始的角色 读取 CharacterPresetConfig

---

### Property `ExpatriateCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,FNameIDArray> ExpatriateCharacters;` |

**Notes:**

> 初始外派角色<地点ID,外派角色ID数组>

---

### Property `ForceCharacterDataPool`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterDataPool;` |

**Notes:**

> 势力中的抽取的角色池 读取 CharacterPresetConfig(2026.6.12 废弃......)

---

### Property `WorldNPCForceTroops`

| Field | Details |
|------|------|
| C++ type | TMap<int,[FWorldNPCForceTroops](WorldStruct__FWorldNPCForceTroops.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,FWorldNPCForceTroops> WorldNPCForceTroops;` |

**Notes:**

> ncp部队的信息

---

### Property `ForceArmorDataPools`

| Field | Details |
|------|------|
| C++ type | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),[FNPCForceArmorPool](WorldStruct__FNPCForceArmorPool.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<EArmorType,FNPCForceArmorPool> ForceArmorDataPools;` |

**Notes:**

> 培养角色的防具池

---

### Property `ForceWeaponDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceWeaponDataPool;` |

**Notes:**

> 培养角色的武器池<DT_EquipmentQualityRange表,成长积分以及权重>

---

### Property `ForceInternalStrengthDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceInternalStrengthDataPool;` |

**Notes:**

> 培养角色的内功武学池<ID,成长积分以及权重>

---

### Property `ForceMovesDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceMovesDataPool;` |

**Notes:**

> 培养角色的招式武学池<ID,成长积分以及权重>

---

### Property `ForcePassiveDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForcePassiveDataPool;` |

**Notes:**

> 培养角色的被动武学池<ID,成长积分以及权重>

---

### Property `AttributeGrowScore`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FGameplayAttribute,float> AttributeGrowScore;` |

**Notes:**

> 属性成长消耗的成长积分

---

### Property `RealmGrowAttributeWeight`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCultivateAttributeWeight](WorldStruct__FCultivateAttributeWeight.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<int32,FCultivateAttributeWeight> RealmGrowAttributeWeight;` |

**Notes:**

> 境界等级对应的属性成长权重

---

### Property `CultivateCharacterTypes`

| Field | Details |
|------|------|
| C++ type | TMap<[ENPCCultivateCharacterType](WorldStruct__ENPCCultivateCharacterType.md),[FNPCCultivateCharacterTypeData](WorldStruct__FNPCCultivateCharacterTypeData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<ENPCCultivateCharacterType,FNPCCultivateCharacterTypeData> CultivateCharacterTypes;` |

**Notes:**

> 培养角色的方式

---

### Property `RecruitRandomDiscipleConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") FName RecruitRandomDiscipleConfigID;` |

**Notes:**

> 招募培养时随机生成弟子的配置ID（DT_RandomDiscipleConfig 表行；未配置或行无效则该势力无法招募）

---

### Property `CultivateAddMartialArtExp`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float CultivateAddMartialArtExp = 500.f;` |

**Notes:**

> 培养角色增加的武学经验

---

### Property `StopCultivateGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float StopCultivateGrowScore = 100.f;` |

**Notes:**

> 成长积分低于该值时停止培养角色

---

### Property `MaxCultivateTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") int32 MaxCultivateTimes = 10;` |

**Notes:**

> 单次最大培养角色次数

---

### Property `LevelUpPlaceInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 LevelUpPlaceInterval = 3;` |

**Notes:**

> 定期升级城镇的间隔(天)

---

### Property `BuildTypeTendency`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldPlaceBuildType](WorldStruct__EWorldPlaceBuildType.md),int32> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceBuildType,int32> BuildTypeTendency;` |

**Notes:**

> 建造城镇设施的类型倾向(<类型,建造设施优先级加值>)

---

### Property `AttackProportion`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackProportion = 0.9f;` |

**Notes:**

> 进攻其他城镇时的参战比例

---

### Property `DogfaceSelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> DogfaceSelectWeight;` |

**Notes:**

> 选择出战小兵的权重

---

### Property `StrategicAbilitySelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> StrategicAbilitySelectWeight;` |

**Notes:**

> 选择战略技能的权重

---

### Property `TowerDefenseSelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> TowerDefenseSelectWeight;` |

**Notes:**

> 选择防御塔的权重

---

### Property `ForceApparelSets`

| Field | Details |
|------|------|
| C++ type | TMap<bool, [FForceApparelSetArray](WorldStruct__FForceApparelSetArray.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Appearance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Appearance") TMap<bool, FForceApparelSetArray> ForceApparelSets;` |

**Notes:**

> 门派外观套装池（整套选取，保证风格统一）<性别(true=男/false=女), 套装数组>
> 为空时降级使用 ForceArmorDataPools 按品质随机（小势力兜底）

---

### Property `ForceAvatarConfigPool`

| Field | Details |
|------|------|
| C++ type | TMap<bool, [FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Appearance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Appearance") TMap<bool, FNameIDArray> ForceAvatarConfigPool;` |

**Notes:**

> 门派立绘配置 ID 池（按性别）<性别(true=男/false=女), 立绘配置ID数组>
> 元素为 DT_CharacterAvatarConfig 的行 ID，一个 ID 已含全部用途立绘；为空则保持模板行默认立绘

---
