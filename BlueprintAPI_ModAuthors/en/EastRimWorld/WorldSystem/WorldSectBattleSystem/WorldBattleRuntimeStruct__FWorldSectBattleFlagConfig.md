# `struct` `FWorldSectBattleFlagConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战旗子配置，用于创建 DataTable。

## Blueprint-exposed variables

### Property `FlagID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 FlagID = INDEX_NONE;` |

**Notes:**

> 旗子的唯一编号，配置表内独立对应。

---

### Property `SectName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName SectName = NAME_None;` |

**Notes:**

> 该旗配置所属的门派名。门派战运行时按【防守方门派名 + FlagID】联合查这张表。

---

### Property `FlagName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText FlagName;` |

**Notes:**

> 旗子的显示名称。

---

### Property `FlagType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagType](WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleFlagType FlagType = EWorldSectBattleFlagType::Normal;` |

**Notes:**

> 旗子的类型：特殊旗或普通旗。

---

### Property `CaptureValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CaptureValue = 0;` |

**Notes:**

> 占领该旗子需要累计达到的总占领值。

---

### Property `CaptureValuePerSecond`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CaptureValuePerSecond = 1;` |

**Notes:**

> 单个单位每秒提供的基础占领值。时间步长默认按 1 秒计算，实际增量可在运行时按人数差累加。

---

### Property `CaptureRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CaptureRadius = 800.f;` |

**Notes:**

> 圆形占领范围半径。以旗子生成位置为圆心，角色进入该范围后开始累计占领进度。

---

### Property `InitialOwner`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleFlagOwner InitialOwner = EWorldSectBattleFlagOwner::Neutral;` |

**Notes:**

> 战斗开始时旗子的初始归属。

---

### Property `BuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BuffIDs;` |

**Notes:**

> 旗子占有时关联的 Buff ID。

---

### Property `MonsterGenerationConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName MonsterGenerationConfigID = NAME_None;` |

**Notes:**

> 旗子关联的野怪组 ID。

---
