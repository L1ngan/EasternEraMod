# `struct` `FWorldSectBattleDiscipleSettlementInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> World Sect Battle Disciple Settlement Info data structure.

## Blueprint-exposed variables

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FGuid CharacterGuid;` |

**Notes:**

> Character Guid field.

---

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FText CharacterName;` |

**Notes:**

> Character Name field.

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 RealmLevel = 0;` |

**Notes:**

> Realm Level field.

---

### Property `RealmName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FText RealmName;` |

**Notes:**

> Realm Name field.

---

### Property `KillEnemyCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 KillEnemyCount = 0;` |

**Notes:**

> Kill Enemy Count field.

---

### Property `DamageDoneToEnemy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float DamageDoneToEnemy = 0.f;` |

**Notes:**

> Damage Done To Enemy field.

---

### Property `DamageTakenFromEnemy`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float DamageTakenFromEnemy = 0.f;` |

**Notes:**

> Damage Taken From Enemy field.

---

### Property `DeathCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 DeathCount = 0;` |

**Notes:**

> Death Count field.

---

### Property `KD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float KD = 0.f;` |

**Notes:**

> KD.

---

### Property `bIsLeader`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") bool bIsLeader = false;` |

**Notes:**

> 是否为本方领队（玩家主控 FightPawn / 队伍领队），UI 可据此高亮或置顶。

---
