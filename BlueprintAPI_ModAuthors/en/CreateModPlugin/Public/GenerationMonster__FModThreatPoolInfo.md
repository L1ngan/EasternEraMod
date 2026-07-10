# `struct` `FModThreatPoolInfo`

**Source header:** `CreateModPlugin/Public/GenerationMonster.h`

---

## Functional description (from header comments)

> 威胁池信息

## Blueprint-exposed variables

### Property `ThreatPoolType`

| Field | Details |
|------|------|
| C++ type | [EModThreatType](GenerationMonster__EModThreatType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModThreatType ThreatPoolType = EModThreatType::None;` |

**Notes:**

> 威胁类型

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

### Property `GenerationIDsMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FModNameIDArray](GenerationMonster__FModNameIDArray.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FModNameIDArray> GenerationIDsMap;` |

**Notes:**

> 创建生成的配置ID<地图名称,生成配置ID数组>创建怪物IDs(调用 DT_MonsterGenerationConfig ) /敌对势力袭击IDs （调用 DT_EnemyAttackGenerationConfig）

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
