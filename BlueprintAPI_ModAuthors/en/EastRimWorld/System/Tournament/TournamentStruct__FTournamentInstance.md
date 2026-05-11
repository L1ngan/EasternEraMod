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

**Source comments:**

> 比赛唯一标识

---

### Property `TournamentType`

| Field | Details |
|------|------|
| C++ type | `ETournamentType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentType TournamentType = ETournamentType::Solo;` |

**Source comments:**

> 比赛规则

---

### Property `TournamentState`

| Field | Details |
|------|------|
| C++ type | `ETournamentState` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) ETournamentState TournamentState = ETournamentState::NotStarted;` |

**Source comments:**

> 比赛状态

---

### Property `StartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float StartTime = 0.f;` |

**Source comments:**

> 开始时间

---

### Property `TournamentGroups`

| Field | Details |
|------|------|
| C++ type | TArray<[FTournamentGroupInfo](TournamentStruct__FTournamentGroupInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentGroupInfo> TournamentGroups;` |

**Source comments:**

> 比赛分组信息

---

### Property `SectGuid`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> SectGuid;` |

**Source comments:**

> 参赛的门派GUID

---

### Property `CompleteRankGuid`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CompleteRankGuid;` |

**Source comments:**

> 排名数据

---

### Property `PlayerGroupIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 PlayerGroupIndex = -1;` |

**Source comments:**

> 玩家阵营所在的分组索引

---

### Property `bPlayerJoin`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoin = false;` |

**Source comments:**

> 玩家是否参加比赛

---
