# `struct` `FWorldSectBattleEventSpawnPointConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战事件刷新点配置。每个门派可以为进攻方、防守方、中立分别配置多个坐标，事件执行时按类型随机取一个。

## Blueprint-exposed variables

### Property `SpawnPointType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleEventSpawnPointType](WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventSpawnPointType SpawnPointType = EWorldSectBattleEventSpawnPointType::None;` |

**Notes:**

> 刷新点类型。和事件库里的 SpawnPointType 对应。

---

### Property `SpawnTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform SpawnTransform = FTransform::Identity;` |

**Notes:**

> 事件实际刷新坐标。刷怪和刷宝箱会使用这个 Transform。

---
