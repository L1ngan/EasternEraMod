# `struct` `FInjuryConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 伤势配置解构

## Blueprint-exposed variables

### Property `DamageType`

| Field | Details |
|------|------|
| C++ type | `EDamageType` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") EDamageType DamageType = EDamageType::None;` |

**Source comments:**

> 伤害攻击类型

---

### Property `HurtLevel`

| Field | Details |
|------|------|
| C++ type | `EHurtLevel` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") EHurtLevel HurtLevel = EHurtLevel::None;` |

**Source comments:**

> 受伤害等级

---

### Property `InjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FInjuryConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") FName InjuryId;` |

**Source comments:**

> 伤势类型ID

---
