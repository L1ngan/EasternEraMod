# `struct` `FTournamentGroupInfo`

**Source header:** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## Functional description (from header comments)

> 比赛分组信息

## Blueprint-exposed variables

### Property `GroupIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GroupIndex = 0;` |

**Notes:**

> 分组索引（1-32, 33-64等）

---

### Property `StartRank`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 StartRank = 1;` |

**Notes:**

> 该分组包含的门派ID范围

---

### Property `EndRank`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EndRank = 32;` |

**Notes:**

> End Rank field.

---

### Property `SectInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FTournamentSectInfo](TournamentStruct__FTournamentSectInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentSectInfo> SectInfos;` |

**Notes:**

> 该分组中的门派ID列表

---
