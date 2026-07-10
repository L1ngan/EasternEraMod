# `struct` `FExchangeMartialArtsInstance`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Runtime instance data of a sparring match: participants, sign-ins, substitutes, time limits and result.

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**Notes:**

> Unique GUID of this sparring instance.

---

### Property `ConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ConfigID;` |

**Notes:**

> ID of the sparring config row used (FExchangeMartialArtsConfig).

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | [EExchangeMartialArtsState](PostStationStruct__EExchangeMartialArtsState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EExchangeMartialArtsState State;` |

**Notes:**

> Current state of the sparring (waiting or ongoing).

---

### Property `PlayerTeamGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamGuids;` |

**Notes:**

> 队伍1角色GUID

---

### Property `NPCTeamGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamGuids;` |

**Notes:**

> 队伍2角色GUID

---

### Property `PlayerTeamSignInGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamSignInGuids;` |

**Notes:**

> 队伍1角色签到GUID

---

### Property `NPCTeamSignInGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamSignInGuids;` |

**Notes:**

> 队伍2角色签到GUID

---

### Property `PlayerTeamCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TMap<FGuid,AEastRimWorldCharacter*> PlayerTeamCharacters;` |

**Notes:**

> 玩家参加的角色（运行时缓存；读档时按 PlayerTeamGuids 重建，标 Transient 避免序列化悬空指针致崩）

---

### Property `NPCTeamCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TMap<FGuid,AEastRimWorldCharacter*> NPCTeamCharacters;` |

**Notes:**

> NPC角色(不包含开始之后生成的)（运行时缓存；读档时按 NPCTeamGuids 重建，标 Transient）

---

### Property `PlayerTeamSubstitutes`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamSubstitutes;` |

**Notes:**

> 玩家角色创建的替身GUID

---

### Property `NPCTeamSubstitutes`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamSubstitutes;` |

**Notes:**

> NPC创建的替身GUID

---

### Property `NPCGenerationGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCGenerationGuids;` |

**Notes:**

> NPC开场生成信息的GUID

---

### Property `NPCGenerationCharacterGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCGenerationCharacterGuids;` |

**Notes:**

> NPC开场生成的角色GUID

---

### Property `NPCGenerationCharacterDeathCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 NPCGenerationCharacterDeathCount;` |

**Notes:**

> Death count of NPC characters generated at the start.

---

### Property `TimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit;` |

**Notes:**

> 切磋限时

---

### Property `StartTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StartTimeLimit;` |

**Notes:**

> 切磋创建到开始限时

---

### Property `Result`

| Field | Details |
|------|------|
| C++ type | [EExchangeMartialArtsResult](PostStationStruct__EExchangeMartialArtsResult.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EExchangeMartialArtsResult Result = EExchangeMartialArtsResult::None;` |

**Notes:**

> 结束结果(End 前由胜/负/取消路径写入, 随 OnExchangeMartialArtsEnd 广播带出, 供订阅方区分)

---
