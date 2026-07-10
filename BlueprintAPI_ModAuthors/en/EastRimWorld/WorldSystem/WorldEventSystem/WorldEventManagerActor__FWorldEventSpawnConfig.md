# `struct` `FWorldEventSpawnConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## Functional description (from header comments)

> 世界事件生成信息

## Blueprint-exposed variables

### Property `ParameterArray`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ParameterArray;` |

**Notes:**

> 参数列表 随机一个或多个

---

### Property `UnlockConditionArray`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockConditionArray;` |

**Notes:**

> 解锁条件id

---

### Property `SpawnMaxNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int SpawnMaxNumber = 1;` |

**Notes:**

> 一次生成的最大数量

---

### Property `SpawnMinNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int SpawnMinNumber = 1;` |

**Notes:**

> 一次生成的最小数量

---

### Property `ConflictEventID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ConflictEventID;` |

**Notes:**

> 冲突的事件id 与同时存在的数量相关联

---

### Property `RefreshTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float RefreshTime = 0.f;` |

**Notes:**

> 刷新时间

---

### Property `SpawnGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid SpawnGuid = FGuid();` |

**Notes:**

> Spawn Guid field.

---

### Property `LimitOfTimes`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int LimitOfTimes = 0;` |

**Notes:**

> 事件生成器的限定次数 0 是无限制

---
