# `struct` `FForceAimInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力宗旨配置表

## Blueprint-exposed variables

### Property `SectAimType`

| Field | Details |
|------|------|
| C++ type | [EForceAimType](WorldStruct__EForceAimType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAimType SectAimType = EForceAimType::None;` |

**Notes:**

> 宗旨类型

---

### Property `AttackDesire`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackDesire = 100.f;` |

**Notes:**

> 攻击期望值

---

### Property `ArmisticePeriodMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMin = 180.f;` |

**Notes:**

> 休战期最小值

---

### Property `ArmisticePeriodMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMax = 540.f;` |

**Notes:**

> 休战期最大值

---

### Property `TaxationMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMin = 0.5f;` |

**Notes:**

> 税收最小值

---

### Property `TaxationMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMax = 0.9f;` |

**Notes:**

> 税收最大值

---

### Property `ProbabilityWeight`

| Field | Details |
|------|------|
| C++ type | TMap<[EAttackSuccessOperateType](WorldStruct__EAttackSuccessOperateType.md),int32> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EAttackSuccessOperateType,int32> ProbabilityWeight;` |

**Notes:**

> NPC攻打城镇成功后选择操作的权重

---

### Property `AutoUseCharacterType`

| Field | Details |
|------|------|
| C++ type | [EAutoUseCharacterType](../Struct/CommonEnum__EAutoUseCharacterType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::Random;` |

**Notes:**

> 在战斗中使用角色卡牌的策略

---

### Property `SearchDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float SearchDistance = 8.f;` |

**Notes:**

> 搜索目标半径（单位：格，1格=100像素）。中立=8，保守=5，激进=12；默认8防止0半径搜不到目标

---
