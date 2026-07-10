# `struct` `FWorldSectBattleEventConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战事件库配置。士气库、击杀库、财富库、倒计时库四张表共用这个结构。

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EventID = INDEX_NONE;` |

**Notes:**

> 事件唯一编号。策划填写，用于日志、调试和识别具体事件。

---

### Property `EventName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText EventName;` |

**Notes:**

> 事件显示名称。可用于 UI 提示、战报或策划查看。

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Description;` |

**Notes:**

> 事件描述文本。可用于 UI 提示、战报或调试信息。

---

### Property `EventType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleEventType](WorldBattleRuntimeStruct__EWorldSectBattleEventType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventType EventType = EWorldSectBattleEventType::None;` |

**Notes:**

> 事件类型。决定代码执行刷怪、刷宝箱还是加 Buff。

---

### Property `ContentID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ContentID = NAME_None;` |

**Notes:**

> 事件内容 ID。
> 刷怪：填写怪物生成配置行名。
> 刷宝箱：填写宝箱配置 ID。
> 加 Buff：填写 BuffID。

---

### Property `TargetCamp`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleEventTargetCamp](WorldBattleRuntimeStruct__EWorldSectBattleEventTargetCamp.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventTargetCamp TargetCamp = EWorldSectBattleEventTargetCamp::None;` |

**Notes:**

> 目标阵营。加 Buff 事件会按这个字段决定 Buff 加给谁；刷怪、刷宝箱可填无。

---

### Property `SpawnPointType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleEventSpawnPointType](WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventSpawnPointType SpawnPointType = EWorldSectBattleEventSpawnPointType::None;` |

**Notes:**

> 刷新坐标类型。刷怪和刷宝箱会按这个类型从当前门派布局中随机取坐标；加 Buff 可填无。

---
