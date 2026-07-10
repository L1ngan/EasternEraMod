# `struct` `FSectBattleBuffDisplayItem`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> 单条 buff 的显示数据（UI 直接读，不必接触角色实例）。

## Blueprint-exposed variables

### Property `Buff`

| Field | Details |
|------|------|
| C++ type | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FCommonBuff Buff;` |

**Notes:**

> 原始 buff 数据（图标 BuffIcon / 名字 BuffName / 描述 Describe / 剩余时间 Duration 等都在内）。

---

### Property `Kind`

| Field | Details |
|------|------|
| C++ type | [ESectBattleBuffKind](WorldSectBattleManager__ESectBattleBuffKind.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") ESectBattleBuffKind Kind = ESectBattleBuffKind::Other;` |

**Notes:**

> buff 分类：士气 / 事件 / 其它（按 manager 记录的 OriginGuid 判定）。

---

### Property `MoraleStage`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") int32 MoraleStage = 0;` |

**Notes:**

> 士气 buff 的档位（= 该方占旗数；Kind==Morale 时有效，其它为 0）。

---
