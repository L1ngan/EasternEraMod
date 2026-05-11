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

**Source comments:**

> 势力中主城初始的角色 读取 CharacterPresetConfig

---

### Property `ExpatriateCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,FNameIDArray> ExpatriateCharacters;` |

**Source comments:**

> 初始外派角色<地点ID,外派角色ID数组>

---

### Property `ForceCharacterDataPool`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ForceCharacterDataPool;` |

**Source comments:**

> 势力中的抽取的角色池 读取 CharacterPresetConfig

---

### Property `WorldNPCForceTroops`

| Field | Details |
|------|------|
| C++ type | TMap<int,[FWorldNPCForceTroops](WorldStruct__FWorldNPCForceTroops.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,FWorldNPCForceTroops> WorldNPCForceTroops;` |

**Source comments:**

> ncp部队的信息

---

### Property `ForceArmorDataPools`

| Field | Details |
|------|------|
| C++ type | TMap<EArmorType,[FNPCForceArmorPool](WorldStruct__FNPCForceArmorPool.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<EArmorType,FNPCForceArmorPool> ForceArmorDataPools;` |

**Source comments:**

> 培养角色的防具池

---

### Property `ForceWeaponDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceWeaponDataPool;` |

**Source comments:**

> 培养角色的武器池<DT_EquipmentQualityRange表,成长积分以及权重>

---

### Property `ForceInternalStrengthDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceInternalStrengthDataPool;` |

**Source comments:**

> 培养角色的内功武学池<ID,成长积分以及权重>

---

### Property `ForceMovesDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForceMovesDataPool;` |

**Source comments:**

> 培养角色的招式武学池<ID,成长积分以及权重>

---

### Property `ForcePassiveDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FName,float> ForcePassiveDataPool;` |

**Source comments:**

> 培养角色的被动武学池<ID,成长积分以及权重>

---

### Property `AttributeGrowScore`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<FGameplayAttribute,float> AttributeGrowScore;` |

**Source comments:**

> 属性成长消耗的成长积分

---

### Property `RealmGrowAttributeWeight`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCultivateAttributeWeight](WorldStruct__FCultivateAttributeWeight.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<int32,FCultivateAttributeWeight> RealmGrowAttributeWeight;` |

**Source comments:**

> 境界等级对应的属性成长权重

---

### Property `CultivateCharacterTypes`

| Field | Details |
|------|------|
| C++ type | TMap<ENPCCultivateCharacterType,[FNPCCultivateCharacterTypeData](WorldStruct__FNPCCultivateCharacterTypeData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") TMap<ENPCCultivateCharacterType,FNPCCultivateCharacterTypeData> CultivateCharacterTypes;` |

**Source comments:**

> 培养角色的方式

---

### Property `CultivateAddMartialArtExp`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float CultivateAddMartialArtExp = 500.f;` |

**Source comments:**

> 培养角色增加的武学经验

---

### Property `StopCultivateGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") float StopCultivateGrowScore = 100.f;` |

**Source comments:**

> 成长积分低于该值时停止培养角色

---

### Property `MaxCultivateTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Cultivate") int32 MaxCultivateTimes = 10;` |

**Source comments:**

> 单次最大培养角色次数

---

### Property `LevelUpPlaceInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 LevelUpPlaceInterval = 3;` |

**Source comments:**

> 定期升级城镇的间隔(天)

---

### Property `BuildTypeTendency`

| Field | Details |
|------|------|
| C++ type | `TMap<EWorldPlaceBuildType,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceBuildType,int32> BuildTypeTendency;` |

**Source comments:**

> 建造城镇设施的类型倾向(<类型,建造设施优先级加值>)

---

### Property `AttackProportion`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackProportion = 0.9f;` |

**Source comments:**

> 进攻其他城镇时的参战比例

---

### Property `DogfaceSelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> DogfaceSelectWeight;` |

**Source comments:**

> 选择出战小兵的权重

---

### Property `StrategicAbilitySelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> StrategicAbilitySelectWeight;` |

**Source comments:**

> 选择战略技能的权重

---

### Property `TowerDefenseSelectWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,int32> TowerDefenseSelectWeight;` |

**Source comments:**

> 选择防御塔的权重

---
