# `struct` `FWorldAgreement`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> World Agreement data structure.

## Blueprint-exposed variables

### Property `AgreementType`

| Field | Details |
|------|------|
| C++ type | [EAgreementType](WorldStruct__EAgreementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAgreementType AgreementType = EAgreementType::None;` |

**Notes:**

> 协议类型

---

### Property `SourceDuty`

| Field | Details |
|------|------|
| C++ type | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> SourceDuty;` |

**Notes:**

> 发起者责任

---

### Property `ReceiverDuty`

| Field | Details |
|------|------|
| C++ type | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ReceiverDuty;` |

**Notes:**

> 接受者责任

---

### Property `TimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit = 0.f;` |

**Notes:**

> 期限

---

### Property `ReceiverAward`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ReceiverAward;` |

**Notes:**

> 接受者完成协议奖励

---

### Property `ReceiverPunishment`

| Field | Details |
|------|------|
| C++ type | TArray<[EPunishmentType](WorldStruct__EPunishmentType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> ReceiverPunishment;` |

**Notes:**

> 接受者违约处罚

---

### Property `SourcePunishment`

| Field | Details |
|------|------|
| C++ type | TArray<[EPunishmentType](WorldStruct__EPunishmentType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> SourcePunishment;` |

**Notes:**

> 发起者违约处罚

---

### Property `ClashDuty`

| Field | Details |
|------|------|
| C++ type | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ClashDuty;` |

**Notes:**

> 此协议冲突的责任

---

### Property `CoolingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime = 0.f;` |

**Notes:**

> 冷却时间(从开始签订开始计时)

---

### Property `SourceForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SourceForceGuid;` |

**Notes:**

> 发起者势力Guid

---

### Property `ReceiverForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ReceiverForceGuid;` |

**Notes:**

> 接受者势力Guid

---

### Property `OtherGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OtherGuid;` |

**Notes:**

> 第三方Guid 根据协议类型不同而不同

---
