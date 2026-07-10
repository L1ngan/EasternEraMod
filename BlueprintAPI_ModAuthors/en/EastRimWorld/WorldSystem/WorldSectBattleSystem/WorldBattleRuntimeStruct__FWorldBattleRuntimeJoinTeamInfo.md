# `struct` `FWorldBattleRuntimeJoinTeamInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 蓝图加入战场时填写的数据。
> 势力 Guid 和 TeamID 不在这里填，JoinBattle 会从 WorldForce 自动读取。
> 当前门派战只根据 TeamRole 决定生成规则，不再区分玩家队字段。

## Blueprint-exposed variables

### Property `TeamRole`

| Field | Details |
|------|------|
| C++ type | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldBattleRuntimeTeamRole TeamRole = EWorldBattleRuntimeTeamRole::None;` |

**Notes:**

> Team Role field.

---

### Property `CharacterGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CharacterGuids;` |

**Notes:**

> 选择参战的弟子 Guid。

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Prosperity = 0.f;` |

**Notes:**

> 城市繁荣度（join 时传入，供宝箱掉落等玩法读取）。

---

### Property `Offering`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Offering = 0.f;` |

**Notes:**

> 供奉值（join 时传入）。

---

### Property `SectName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName SectName = NAME_None;` |

**Notes:**

> 门派名字（join 时传入，特殊箱掉落据此查表）。

---

### Property `CityName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText CityName;` |

**Notes:**

> 城市名字（join 时传入，FText 用于 UI 显示，不参与宝箱查表）。

---

### Property `bIsPlayer`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsPlayer = false;` |

**Notes:**

> 这支队伍是否是玩家所属队伍。为 true 的那一支，其数据会被 manager 单独存为 PlayerJoinedTeamInfo 供后续使用。

---
