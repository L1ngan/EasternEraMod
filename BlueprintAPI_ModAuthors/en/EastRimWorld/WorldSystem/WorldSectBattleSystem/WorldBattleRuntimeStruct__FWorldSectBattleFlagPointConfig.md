# `struct` `FWorldSectBattleFlagPointConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战中一个旗子的点位配置。

## Blueprint-exposed variables

### Property `FlagID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 FlagID = INDEX_NONE;` |

**Notes:**

> 对应 FWorldSectBattleFlagConfig 里的 FlagID。

---

### Property `FlagTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform FlagTransform = FTransform::Identity;` |

**Notes:**

> 旗子在战场里的生成变换，包含位置、朝向和缩放。

---
