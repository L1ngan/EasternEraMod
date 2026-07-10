# `struct` `FMonsterGenerationConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 怪物生成

## Blueprint-exposed variables

### Property `GenerationCondition`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GenerationCondition;` |

**Notes:**

> 生成条件 commonCondition 配置表

---

### Property `ActivateCountDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ActivateCountDown = 0.f;` |

**Notes:**

> 激活倒计时

---

### Property `GenerationDelay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationDelay = 0;` |

**Notes:**

> 生成怪物的延迟

---

### Property `GenerationSetData`

| Field | Details |
|------|------|
| C++ type | TArray<[FGenerationSetData](WorldStruct__FGenerationSetData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGenerationSetData> GenerationSetData;` |

**Notes:**

> 生成设置

---

### Property `GenerationTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationTimes = -1;` |

**Notes:**

> 生成的次数 -1 为无限次

---

### Property `bActivateCheckCondition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bActivateCheckCondition = false;` |

**Notes:**

> 是否在激活时重新检查条件

---

### Property `GenerationInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationInterval = 0;` |

**Notes:**

> 生成的间隔

---

### Property `GenerationMaxNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationMaxNumber = -1;` |

**Notes:**

> 此生成配置 生成的单位最多同时存在多少个 -1 为无限制

---

### Property `Condition`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Not Config" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition = "false"), Category="Not Config") TArray<FCommonTaskCondition> Condition;` |

**Notes:**

> 包含的条件

---

### Property `AlreadyGenerationTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Not Config" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "false"),Category="Not Config") int32 AlreadyGenerationTimes = 0;` |

**Notes:**

> 已经生成的次数

---

### Property `ActivateTips`

| Field | Details |
|------|------|
| C++ type | [ETipsType](WorldStruct__ETipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType ActivateTips = ETipsType::None;` |

**Notes:**

> 提示 激活提示

---

### Property `GenerationTips`

| Field | Details |
|------|------|
| C++ type | [ETipsType](WorldStruct__ETipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType GenerationTips = ETipsType::None;` |

**Notes:**

> 提示 生成提示

---

### Property `GenerationRule`

| Field | Details |
|------|------|
| C++ type | [FGenerationRuleData](WorldStruct__FGenerationRuleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenerationRuleData GenerationRule;` |

**Notes:**

> 生成规则

---

### Property `GenerationActorType`

| Field | Details |
|------|------|
| C++ type | [EGenerationActorType](WorldStruct__EGenerationActorType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationActorType GenerationActorType = EGenerationActorType::SpawnMonster;` |

**Notes:**

> 生成actor的类型

---

### Property `ForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Not Config" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "false"),Category="Not Config") FGuid ForceGuid;` |

**Notes:**

> 此配置所属的势力

---
