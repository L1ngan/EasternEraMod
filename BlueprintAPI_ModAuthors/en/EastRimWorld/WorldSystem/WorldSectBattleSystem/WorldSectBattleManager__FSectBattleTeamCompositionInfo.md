# `struct` `FSectBattleTeamCompositionInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> 攻/防某一方的编制构成（按门派层级细分），供 UI 显示"内门弟子 / 外门弟子 / 支援"人数。

## Blueprint-exposed variables

### Property `InnerDiscipleCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 InnerDiscipleCount = 0;` |

**Notes:**

> 内门弟子数量。

---

### Property `OuterDiscipleCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 OuterDiscipleCount = 0;` |

**Notes:**

> 外门弟子数量。

---

### Property `SupportCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 SupportCount = 0;` |

**Notes:**

> 支援数量（暂留位，后续接入，当前恒为 0）。

---
