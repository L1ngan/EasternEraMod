# `struct` `FForceAimInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力宗旨配置表

## Blueprint-exposed variables

### Property `SectAimType`

| Field | Details |
|------|------|
| C++ type | `EForceAimType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAimType SectAimType = EForceAimType::None;` |

**Source comments:**

> 宗旨类型

---

### Property `AttackDesire`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackDesire = 100.f;` |

**Source comments:**

> 攻击期望值

---

### Property `ArmisticePeriodMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMin = 180.f;` |

**Source comments:**

> 休战期最小值

---

### Property `ArmisticePeriodMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMax = 540.f;` |

**Source comments:**

> 休战期最大值

---

### Property `TaxationMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMin = 0.5f;` |

**Source comments:**

> 税收最小值

---

### Property `TaxationMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMax = 0.9f;` |

**Source comments:**

> 税收最大值

---

### Property `ProbabilityWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<EAttackSuccessOperateType,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EAttackSuccessOperateType,int32> ProbabilityWeight;` |

**Source comments:**

> NPC攻打城镇成功后选择操作的权重

---

### Property `AutoUseCharacterType`

| Field | Details |
|------|------|
| C++ type | `EAutoUseCharacterType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::Random;` |

**Source comments:**

> 在战斗中使用角色卡牌的策略

---
