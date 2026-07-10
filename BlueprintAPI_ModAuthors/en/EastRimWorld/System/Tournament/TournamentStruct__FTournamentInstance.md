# `struct` `FTournamentInstance`

**Source header:** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## Functional description (from header comments)

> 比赛信息

## Blueprint-exposed variables

### Property `TournamentGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid TournamentGuid;` |

**Notes:**

> 比赛唯一标识

---

### Property `TournamentType`

| Field | Details |
|------|------|
| C++ type | [ETournamentType](TournamentStruct__ETournamentType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentType TournamentType = ETournamentType::Solo;` |

**Notes:**

> 比赛规则

---

### Property `TournamentState`

| Field | Details |
|------|------|
| C++ type | [ETournamentState](TournamentStruct__ETournamentState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) ETournamentState TournamentState = ETournamentState::NotStarted;` |

**Notes:**

> 比赛状态

---

### Property `StartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float StartTime = 0.f;` |

**Notes:**

> 开始时间

---

### Property `TournamentGroups`

| Field | Details |
|------|------|
| C++ type | TArray<[FTournamentGroupInfo](TournamentStruct__FTournamentGroupInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentGroupInfo> TournamentGroups;` |

**Notes:**

> 比赛分组信息

---

### Property `SectGuid`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> SectGuid;` |

**Notes:**

> 参赛的门派GUID

---

### Property `CompleteRankGuid`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CompleteRankGuid;` |

**Notes:**

> 排名数据

---

### Property `PlayerGroupIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 PlayerGroupIndex = -1;` |

**Notes:**

> 玩家阵营所在的分组索引

---

### Property `bPlayerJoin`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoin = false;` |

**Notes:**

> 玩家是否参加比赛

---
