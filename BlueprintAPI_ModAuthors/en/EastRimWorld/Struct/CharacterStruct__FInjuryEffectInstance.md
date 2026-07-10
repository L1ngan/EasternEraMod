# `struct` `FInjuryEffectInstance`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 伤势效果实施对象

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FName ID;` |

**Notes:**

> ID（伤势配置的ID,和InjuryConfig里的ID相同）

---

### Property `InjuryID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FGuid InjuryID;` |

**Notes:**

> 伤势ID（唯一值）

---

### Property `OrganID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FName OrganID;` |

**Notes:**

> 部位ID

---

### Property `OrganType`

| Field | Details |
|------|------|
| C++ type | [EBodyOrganType](../ERW_CommonTypes__EBodyOrganType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") EBodyOrganType OrganType = EBodyOrganType::None;` |

**Notes:**

> 部位类型

---

### Property `RestHurtValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float RestHurtValue = 0.f;` |

**Notes:**

> 当前剩余损伤程度（减小到0就治愈了）

---

### Property `TreatValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float TreatValue = 0.f;` |

**Notes:**

> 当前治疗值(如果>0则正在治疗)

---

### Property `TreatRemainTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float TreatRemainTime = 0.f;` |

**Notes:**

> 剩余治疗时间

---

### Property `InjuryConfig`

| Field | Details |
|------|------|
| C++ type | [FInjuryEffectConfig](CharacterStruct__FInjuryEffectConfig.md) |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FInjuryEffectConfig InjuryConfig;` |

**Notes:**

> 伤势配置

---
