# `struct` `FMonsterAttackSetting`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 怪物巢穴攻击设置

## Blueprint-exposed variables

### Property `WaitingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float WaitingTime = 0.f;` |

**Notes:**

> 攻击的等待时间

---

### Property `IntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float IntervalTime = 100.f;` |

**Notes:**

> 间隔时间

---

### Property `MonsterID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterID;` |

**Notes:**

> 发起攻击时的指定怪物ID 不为空时 只有包含的怪物才会攻击

---

### Property `AttackNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AttackNumber = INDEX_NONE;` |

**Notes:**

> 发起攻击时的指定数量 -1为当前营地所有怪物 会受到指定怪物id限制

---

### Property `RunNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 RunNumber = INDEX_NONE;` |

**Notes:**

> 此设置运行的次数 -1 为无限次

---

### Property `MonsterAttackState`

| Field | Details |
|------|------|
| C++ type | [EMonsterAttackState](WorldStruct__EMonsterAttackState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category = "Runtime") EMonsterAttackState MonsterAttackState = EMonsterAttackState::None;` |

**Notes:**

> 状态 不配置

---

### Property `StateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category = "Runtime") float StateTime = 0.f;` |

**Notes:**

> 当前状态时间 不配置

---
