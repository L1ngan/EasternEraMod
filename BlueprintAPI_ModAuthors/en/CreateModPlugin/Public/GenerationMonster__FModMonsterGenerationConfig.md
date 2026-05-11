# `struct` `FModMonsterGenerationConfig`

**Source header:** `CreateModPlugin/Public/GenerationMonster.h`

---

## Functional description (from header comments)

> 怪物生成

## Blueprint-exposed variables

### Property `ActivateCountDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ActivateCountDown = 0.f;` |

**Source comments:**

> 激活倒计时

---

### Property `GenerationDelay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationDelay = 0;` |

**Source comments:**

> 生成怪物的延迟

---

### Property `GenerationSetData`

| Field | Details |
|------|------|
| C++ type | TArray<[FModGenerationSetData](GenerationMonster__FModGenerationSetData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModGenerationSetData> GenerationSetData;` |

**Source comments:**

> 生成设置

---

### Property `GenerationTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationTimes = -1;` |

**Source comments:**

> 生成的次数 -1 为无限次

---

### Property `GenerationInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationInterval = 0;` |

**Source comments:**

> 生成的间隔

---

### Property `GenerationMaxNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationMaxNumber = -1;` |

**Source comments:**

> 此生成配置 生成的单位最多同时存在多少个 -1 为无限制

---

### Property `ActivateTips`

| Field | Details |
|------|------|
| C++ type | `EModTipsType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModTipsType ActivateTips = EModTipsType::None;` |

**Source comments:**

> 提示 激活提示

---

### Property `GenerationTips`

| Field | Details |
|------|------|
| C++ type | `EModTipsType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModTipsType GenerationTips = EModTipsType::None;` |

**Source comments:**

> 提示 生成提示

---

### Property `GenerationRule`

| Field | Details |
|------|------|
| C++ type | [FModGenerationRuleData](GenerationMonster__FModGenerationRuleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FModGenerationRuleData GenerationRule;` |

**Source comments:**

> 生成规则

---

### Property `GenerationActorType`

| Field | Details |
|------|------|
| C++ type | `EModGenerationActorType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModGenerationActorType GenerationActorType = EModGenerationActorType::SpawnMonster;` |

**Source comments:**

> 生成actor的类型

---
