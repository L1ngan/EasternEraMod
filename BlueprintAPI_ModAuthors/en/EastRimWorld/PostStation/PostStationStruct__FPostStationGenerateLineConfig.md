# `struct` `FPostStationGenerateLineConfig`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Post station generate line config row: linked generation config IDs, refresh timing, sockets and generate/destroy conditions.

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName ID;` |

**Notes:**

> 此配置ID

---

### Property `PostStationGenerateIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> PostStationGenerateIDs;` |

**Notes:**

> 关联DT_PostStationGenerateConfig表

---

### Property `FirstTimeSpawnDelay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float FirstTimeSpawnDelay;` |

**Notes:**

> 第一次开始生成的延迟(无视生成配置的时间)

---

### Property `SpawnTimeRange`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FIntPoint SpawnTimeRange;` |

**Notes:**

> 刷新时间随机范围(基于生成配置的加值)

---

### Property `Sockets`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> Sockets;` |

**Notes:**

> NPC在驿站停留的位置(驿站的插槽)

---

### Property `SpawnSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName SpawnSocket;` |

**Notes:**

> NPC生成中心位置(驿站的插槽)

---

### Property `SpawnPointHalfRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float SpawnPointHalfRadius = 1000.f;` |

**Notes:**

> NPC生成范围半径

---

### Property `GenerateConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**Notes:**

> 开始生成的条件

---

### Property `DestroyConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FCommonTaskCondition> DestroyConditions;` |

**Notes:**

> 删除条件

---

### Property `RetryGenerateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float RetryGenerateInterval;` |

**Notes:**

> 生成阻塞后(比如位置不够)重新尝试生成的时间

---
