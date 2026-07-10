# `struct` `FSectBattleCharacterBuffDisplay`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> 一个角色（带进战场的弟子 / FightPawn）的整组 buff 显示数据。

## Blueprint-exposed variables

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FGuid CharacterGuid;` |

**Notes:**

> Character Guid field.

---

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FText CharacterName;` |

**Notes:**

> Character Name field.

---

### Property `bIsFightPawn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") bool bIsFightPawn = false;` |

**Notes:**

> 是否为玩家操控的 FightPawn。

---

### Property `TeamRole`

| Field | Details |
|------|------|
| C++ type | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") EWorldBattleRuntimeTeamRole TeamRole = EWorldBattleRuntimeTeamRole::None;` |

**Notes:**

> 所属阵营（进攻方 / 防守方）。

---

### Property `Buffs`

| Field | Details |
|------|------|
| C++ type | TArray<[FSectBattleBuffDisplayItem](WorldSectBattleManager__FSectBattleBuffDisplayItem.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") TArray<FSectBattleBuffDisplayItem> Buffs;` |

**Notes:**

> 该角色当前要显示的 buff 列表（已过滤 bShow=false）。

---
