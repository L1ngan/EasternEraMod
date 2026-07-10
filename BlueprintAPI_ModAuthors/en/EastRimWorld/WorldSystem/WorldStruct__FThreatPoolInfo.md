# `struct` `FThreatPoolInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 威胁池信息

## Blueprint-exposed variables

### Property `ThreatPoolName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ThreatPoolName;` |

**Notes:**

> 威胁名称

---

### Property `ThreatPoolDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ThreatPoolDesc;` |

**Notes:**

> 威胁描述

---

### Property `ThreatPoolType`

| Field | Details |
|------|------|
| C++ type | [EThreatType](WorldStruct__EThreatType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EThreatType ThreatPoolType = EThreatType::None;` |

**Notes:**

> 威胁类型

---

### Property `ConditionIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> ConditionIDs;` |

**Notes:**

> 威胁条件 DT_CommonTaskCondition 配置表

---

### Property `RaidPoints`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 RaidPoints = 0;` |

**Notes:**

> 袭击点数(必须为整数，随机有用)

---

### Property `CooldownTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float CooldownTime = 9600.f;` |

**Notes:**

> 冷却时间(秒)

---

### Property `MonsterGenerationIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterGenerationIDs;` |

**Notes:**

> （废弃）

---

### Property `GenerationIDsMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FNameIDArray> GenerationIDsMap;` |

**Notes:**

> 创建生成的配置ID<地图名称,生成配置ID数组>创建怪物IDs(调用 DT_MonsterGenerationConfig ) /敌对势力袭击IDs （调用 DT_EnemyAttackGenerationConfig）

---

### Property `BuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> BuffIDs;` |

**Notes:**

> 触发Buff(调用 DT_CommonBuff )

---

### Property `SetModEnabled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool SetModEnabled = true;` |

**Notes:**

> 是否启用此威胁

---
