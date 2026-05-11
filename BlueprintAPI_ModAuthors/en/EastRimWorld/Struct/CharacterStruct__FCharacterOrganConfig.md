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

**Source comments:**

> 器官对应的血量属性值

---

### Property `OwnedSpecies`

| Field | Details |
|------|------|
| C++ type | `ESpeciesType` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") ESpeciesType OwnedSpecies = ESpeciesType::Human;` |

**Source comments:**

> 拥有此器官类型的种族

---

### Property `OrganName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FText OrganName;` |

**Source comments:**

> 器官名称

---

### Property `OrganStatus`

| Field | Details |
|------|------|
| C++ type | TArray<[FOrganStatus](CharacterStruct__FOrganStatus.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganStatus> OrganStatus;` |

**Source comments:**

> 器官所处在区间的状态信息

---

### Property `MaxLifeAttribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") FGameplayAttribute MaxLifeAttribute;` |

**Source comments:**

> 器官对应的最大血量属性

---

### Property `ForBodyStates`

| Field | Details |
|------|------|
| C++ type | `TMap<EBodyStateType,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TMap<EBodyStateType,float> ForBodyStates;` |

**Source comments:**

> 器官关联的身体状态的百分比（0-1）

---

### Property `AttackedWeight`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") int AttackedWeight = 1;` |

**Source comments:**

> 器官的被攻击到的权重

---

### Property `AttackedSharePercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedSharePercent = 0.0f;` |

**Source comments:**

> 器官的被攻击到的分摊几率(0-1)(<=0 不分摊; >=1 必分摊)

---

### Property `AttackedShareConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FOrganAttackedShareConfig](CharacterStruct__FOrganAttackedShareConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FOrganAttackedShareConfig> AttackedShareConfigs;` |

**Source comments:**

> 器官的被攻击到的分摊伤害的配置

---

### Property `DestoryDie`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool DestoryDie = false;` |

**Source comments:**

> 器官损毁是否导致死亡

---

### Property `AttackedOverPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float AttackedOverPercent = 0.75f;` |

**Source comments:**

> 最大损毁过量比例

---

### Property `MinAttackedOverPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float MinAttackedOverPercent = 0.f;` |

**Source comments:**

> 最小损毁过量比例

---

### Property `KnockDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") bool KnockDown = false;` |

---

### Property `KnockDownPrecent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float KnockDownPrecent = 0.f;` |

---

### Property `InjuryConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryConfig](CharacterStruct__FInjuryConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") TArray<FInjuryConfig> InjuryConfigs;` |

**Source comments:**

> 部位伤势配置

---

### Property `ScarPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") float ScarPercent = 0.f;` |

**Source comments:**

> 部位形成疤痕概率

---

### Property `OrganType`

| Field | Details |
|------|------|
| C++ type | `EBodyOrganType` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterOrganConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterOrganConfig") EBodyOrganType OrganType = EBodyOrganType::None;` |

**Source comments:**

> 身体部位类型枚举

---
