# `struct` `FInjuryEffectConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 伤势效果配置表

## Blueprint-exposed variables

### Property `InjuryName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FText InjuryName;` |

**Source comments:**

> 伤势类型

---

### Property `InjuryGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") TArray<TSoftClassPtr<UGameplayEffect>> InjuryGameplayEffect;` |

**Source comments:**

> 效果对应GE (降低部位健康值,降低整体健康值 武学效果降低)

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "InjuryTypeEffectConfig") TMap<FGameplayAttribute,float> Attributes;` |

**Source comments:**

> 效果中包含的属性

---

### Property `GameplayTagContainer`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "InjuryTypeEffectConfig") FGameplayTagContainer GameplayTagContainer;` |

**Source comments:**

> 为自身添加的tag

---

### Property `BuffGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGuid BuffGuid;` |

**Source comments:**

> 每个buff独立的guid

---

### Property `InjuryHealingRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float InjuryHealingRate = 0.f;` |

**Source comments:**

> 愈合速度（总愈合速度等于伤势愈合速度+人物的基础愈合速度）

---

### Property `TotalHurtValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float TotalHurtValue = 0.f;` |

**Source comments:**

> 初始伤势程度(减到0为治愈)

---

### Property `BadInjuryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FName BadInjuryID = NAME_None;` |

**Source comments:**

> 恶化到的ID（InjuryTypeEffectConfig的ID）

---

### Property `bMedicineOnly`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") bool bMedicineOnly = false;` |

**Source comments:**

> 是否只能使用药品治疗

---

### Property `TreatMedicines`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FInjuryMedicine](CharacterStruct__FInjuryMedicine.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") TMap<FName,FInjuryMedicine> TreatMedicines;` |

**Source comments:**

> 治疗必需要的药品(药品ID,数量)[没有足够药品就不能治疗]

---

### Property `TreatAddition`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float TreatAddition = 0.f;` |

**Source comments:**

> 治疗加成(可以看成使用药物的加成)

---

### Property `TreatActionId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FName TreatActionId;` |

**Source comments:**

> 伤势对应的治疗Action

---

### Property `TreatRemoveBuffID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") TArray<FName> TreatRemoveBuffID;` |

**Source comments:**

> 治疗后去除的buff

---

### Property `ScarPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float ScarPercent = 0.f;` |

**Source comments:**

> 形成疤痕概率

---

### Property `IsScar`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") bool IsScar = false;` |

**Source comments:**

> 是否是疤痕(疤痕不会自愈，也不会恶化)

---

### Property `InjuryDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FText InjuryDesc;` |

**Source comments:**

> 伤势描述

---

### Property `FormatInjuryDesc`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FFormatText FormatInjuryDesc;` |

**Source comments:**

> 伤势描述 格式化后的描述

---

### Property `AddBuffID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") TArray<FName> AddBuffID;` |

**Source comments:**

> 增加的buff 伤势治愈或恶化后去除

---

### Property `AddMastHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGameplayTagContainer AddMastHaveTags;` |

**Source comments:**

> 伤势添加需要的标签

---

### Property `AddMastNotHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGameplayTagContainer AddMastNotHaveTags;` |

**Source comments:**

> 伤势添加不能有的标签

---

### Property `ConflictInjuryID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "InjuryTypeEffectConfig") TArray<FName> ConflictInjuryID;` |

**Source comments:**

> 冲突的伤势 ID

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "InjuryTypeEffectConfig") int Priority = 0;` |

**Source comments:**

> BUFF的优先级 越大优先级越高

---

### Property `NumberOfSuperpositions`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "InjuryTypeEffectConfig") int NumberOfSuperpositions = 1;` |

**Source comments:**

> 相同的buff可叠加的次数 0 是无限制 1 默认

---
