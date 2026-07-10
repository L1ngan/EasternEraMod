# `struct` `FAutoUseCharacterRule`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 自动释放战略规则

## Blueprint-exposed variables

### Property `AutoUseCharacterType`

| Field | Details |
|------|------|
| C++ type | [EAutoUseCharacterType](../../Struct/CommonEnum__EAutoUseCharacterType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::None;` |

**Notes:**

> 自动使用的类型

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**Notes:**

> 战场类型

---

### Property `UseIntervalMinTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMinTime = 10.f;` |

**Notes:**

> 使用的最小间隔时间

---

### Property `UseIntervalMaxTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMaxTime = 10.f;` |

**Notes:**

> 使用的最大间隔时间

---

### Property `NeedResourcePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::ResourcePriority",EditConditionHides)) int32 NeedResourcePoint = 0;` |

**Notes:**

> 资源优先时资源需达到的值

---

### Property `DetectionIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::LevelPriority",EditConditionHides)) float DetectionIntervalTime = 3.f;` |

**Notes:**

> 检测间隔时间

---

### Property `WaitTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "AutoUseCharacterType == EAutoUseCharacterType::ResourcePriority",EditConditionHides)) float WaitTime = 10.f;` |

**Notes:**

> 等待时间

---
