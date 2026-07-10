# `struct` `FCharacterOrganConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色器官配置

## Blueprint-exposed variables

### Property `Attribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FGameplayAttribute Attribute;` |

**Notes:**

> 器官对应的血量属性值

---

### Property `OwnedSpecies`

| Field | Details |
|------|------|
| C++ type | [ESpeciesType](CommonEnum__ESpeciesType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") ESpeciesType OwnedSpecies = ESpeciesType::Human;` |

**Notes:**

> 拥有此器官类型的种族

---

### Property `OrganName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FText OrganName;` |

**Notes:**

> 器官名称

---

### Property `OrganStatus`

| Field | Details |
|------|------|
| C++ type | TArray<[FOrganStatus](CharacterStruct__FOrganStatus.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganStatus> OrganStatus;` |

**Notes:**

> 器官所处在区间的状态信息

---

### Property `MaxLifeAttribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FGameplayAttribute MaxLifeAttribute;` |

**Notes:**

> 器官对应的最大血量属性

---

### Property `ForBodyStates`

| Field | Details |
|------|------|
| C++ type | TMap<[EBodyStateType](CharacterStruct__EBodyStateType.md),float> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TMap<EBodyStateType,float> ForBodyStates;` |

**Notes:**

> 器官关联的身体状态的百分比（0-1）

---

### Property `AttackedWeight`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") int AttackedWeight = 1;` |

**Notes:**

> 器官的被攻击到的权重

---

### Property `AttackedSharePercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedSharePercent = 0.0f;` |

**Notes:**

> 器官的被攻击到的分摊几率(0-1)(<=0 不分摊; >=1 必分摊)

---

### Property `AttackedShareConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FOrganAttackedShareConfig](CharacterStruct__FOrganAttackedShareConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganAttackedShareConfig> AttackedShareConfigs;` |

**Notes:**

> 器官的被攻击到的分摊伤害的配置

---

### Property `DestoryDie`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool DestoryDie = false;` |

**Notes:**

> 器官损毁是否导致死亡

---

### Property `AttackedOverPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedOverPercent = 0.75f;` |

**Notes:**

> 最大损毁过量比例

---

### Property `MinAttackedOverPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float MinAttackedOverPercent = 0.f;` |

**Notes:**

> 最小损毁过量比例

---

### Property `KnockDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool KnockDown = false;` |

**Notes:**

> Whether damage to this organ can trigger a knock-down

---

### Property `KnockDownPrecent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float KnockDownPrecent = 0.f;` |

**Notes:**

> Percentage threshold at which the knock-down is triggered

---

### Property `InjuryConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryConfig](CharacterStruct__FInjuryConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FInjuryConfig> InjuryConfigs;` |

**Notes:**

> 部位伤势配置

---

### Property `ScarPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float ScarPercent = 0.f;` |

**Notes:**

> 部位形成疤痕概率

---

### Property `OrganType`

| Field | Details |
|------|------|
| C++ type | [EBodyOrganType](../ERW_CommonTypes__EBodyOrganType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") EBodyOrganType OrganType = EBodyOrganType::None;` |

**Notes:**

> 身体部位类型枚举

---
