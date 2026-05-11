# `struct` `FHungryEffectConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 饥饿伤势配置表

## Blueprint-exposed variables

### Property `HungryEffectName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") FText HungryEffectName;` |

**Source comments:**

> 饥饿阶段名称

---

### Property `HungryDegree`

| Field | Details |
|------|------|
| C++ type | `EHungryDegree` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") EHungryDegree HungryDegree = EHungryDegree::None;` |

**Source comments:**

> 饥饿阶段程度

---

### Property `HungryMiniTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") float HungryMiniTime = 0.f;` |

**Source comments:**

> 饥饿阶段最少时间

---

### Property `HungryMaxTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") float HungryMaxTime = 0.f;` |

**Source comments:**

> 饥饿阶段最大时间

---

### Property `ActiveMoodIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") TArray<FName> ActiveMoodIds;` |

**Source comments:**

> 激活心情

---

### Property `ActiveInjuryIds`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,EBodyOrganType>` |
| Reflection specifiers | BlueprintReadWrite, Category="FHungryEffectConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") TMap<FName,EBodyOrganType> ActiveInjuryIds;` |

**Source comments:**

> 激活伤势

---
