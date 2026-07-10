# `struct` `FWorldSectBattleFlagRuntimeInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> World Sect Battle Flag Runtime Info data structure.

## Blueprint-exposed variables

### Property `FlagType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagType](WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) EWorldSectBattleFlagType FlagType = EWorldSectBattleFlagType::None;` |

**Notes:**

> 旗帜类型（普通旗 / 特殊旗）。

---

### Property `CurrentOwner`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) EWorldSectBattleFlagOwner CurrentOwner = EWorldSectBattleFlagOwner::Neutral;` |

**Notes:**

> 当前归属阵营（进攻方 / 防守方 / 中立）。

---
