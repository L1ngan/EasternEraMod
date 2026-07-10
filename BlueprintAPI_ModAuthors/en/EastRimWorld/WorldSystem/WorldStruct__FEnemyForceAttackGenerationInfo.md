# `struct` `FEnemyForceAttackGenerationInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Enemy Force Attack Generation Info data structure.

## Blueprint-exposed variables

### Property `GenerationConfig`

| Field | Details |
|------|------|
| C++ type | [FEnemyAttackGenerationConfig](WorldStruct__FEnemyAttackGenerationConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FEnemyAttackGenerationConfig GenerationConfig;` |

**Notes:**

> 生成的配置ID

---

### Property `GenerationInstanceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationInstanceGuid;` |

**Notes:**

> 生成队列激活的实例Guid

---

### Property `AttackState`

| Field | Details |
|------|------|
| C++ type | [EEnemyAttackStateType](WorldStruct__EEnemyAttackStateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EEnemyAttackStateType AttackState = EEnemyAttackStateType::None;` |

**Notes:**

> 当前状态

---

### Property `StateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StateTime = 0.f;` |

**Notes:**

> 当前状态时间

---

### Property `RetreatPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector RetreatPosition = FVector::ZeroVector;` |

**Notes:**

> 撤退位置

---

### Property `ForceId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ForceId;` |

**Notes:**

> 势力ID

---

### Property `ForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ForceName;` |

**Notes:**

> 势力名称

---
