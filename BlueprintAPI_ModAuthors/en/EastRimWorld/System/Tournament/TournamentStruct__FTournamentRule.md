# `struct` `FTournamentRule`

**Source header:** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## Functional description (from header comments)

> 比赛规则

## Blueprint-exposed variables

### Property `TournamentType`

| Field | Details |
|------|------|
| C++ type | `ETournamentType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentType TournamentType = ETournamentType::Solo;` |

**Source comments:**

> 比赛类型

---

### Property `SpawnPoint`

| Field | Details |
|------|------|
| C++ type | TArray<[FTournamentSpawnPoint](TournamentStruct__FTournamentSpawnPoint.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentSpawnPoint> SpawnPoint;` |

**Source comments:**

> 角色生成的起始位置

---

### Property `BattleTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleTime = 300.f;` |

**Source comments:**

> 战斗时长

---

### Property `NumberOfPeople`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 NumberOfPeople = 1;` |

**Source comments:**

> 参赛人数

---

### Property `StartBattleLevelSequence`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<ULevelSequence>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<ULevelSequence> StartBattleLevelSequence;` |

**Source comments:**

> 战斗开始播放的关卡序列

---

### Property `GroupSectNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GroupSectNumber = 16;` |

**Source comments:**

> 一个分组中有多少个门派

---

### Property `RankReputation`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FTournamentRankReputation](TournamentStruct__FTournamentRankReputation.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FTournamentRankReputation> RankReputation;` |

**Source comments:**

> 排名所获得的声望 key 所在的分组

---

### Property `WorldPlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WorldPlaceID;` |

**Source comments:**

> 世界地点的id  WorldPlace

---

### Property `RegistrationTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RegistrationTime = 3000;` |

**Source comments:**

> 报名时间

---
