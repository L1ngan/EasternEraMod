# `struct` `FWorldAgreement`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `AgreementType`

| Field | Details |
|------|------|
| C++ type | `EAgreementType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAgreementType AgreementType = EAgreementType::None;` |

**Source comments:**

> 协议类型

---

### Property `SourceDuty`

| Field | Details |
|------|------|
| C++ type | `TArray<EAgreementDutyType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> SourceDuty;` |

**Source comments:**

> 发起者责任

---

### Property `ReceiverDuty`

| Field | Details |
|------|------|
| C++ type | `TArray<EAgreementDutyType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ReceiverDuty;` |

**Source comments:**

> 接受者责任

---

### Property `TimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit = 0.f;` |

**Source comments:**

> 期限

---

### Property `ReceiverAward`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ReceiverAward;` |

**Source comments:**

> 接受者完成协议奖励

---

### Property `ReceiverPunishment`

| Field | Details |
|------|------|
| C++ type | `TArray<EPunishmentType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> ReceiverPunishment;` |

**Source comments:**

> 接受者违约处罚

---

### Property `SourcePunishment`

| Field | Details |
|------|------|
| C++ type | `TArray<EPunishmentType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> SourcePunishment;` |

**Source comments:**

> 发起者违约处罚

---

### Property `ClashDuty`

| Field | Details |
|------|------|
| C++ type | `TArray<EAgreementDutyType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ClashDuty;` |

**Source comments:**

> 此协议冲突的责任

---

### Property `CoolingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime = 0.f;` |

**Source comments:**

> 冷却时间(从开始签订开始计时)

---

### Property `SourceForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SourceForceGuid;` |

**Source comments:**

> 发起者势力Guid

---

### Property `ReceiverForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ReceiverForceGuid;` |

**Source comments:**

> 接受者势力Guid

---

### Property `OtherGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OtherGuid;` |

**Source comments:**

> 第三方Guid 根据协议类型不同而不同

---
