# `struct` `FExchangeMartialArtsConfig`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Sparring config row: win/lose awards, dialogues, player join limit, NPC generation IDs and both team IDs.

## Blueprint-exposed variables

### Property `Awards`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> Awards;` |

**Notes:**

> 胜利奖励

---

### Property `FailedAwards`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> FailedAwards;` |

**Notes:**

> 失败奖励

---

### Property `WinDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WinDialogueID;` |

**Notes:**

> 胜利对话(DT_DialogueGroup表ID)

---

### Property `FailedDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName FailedDialogueID;` |

**Notes:**

> 失败对话(DT_DialogueGroup表ID)

---

### Property `PlayerJoinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 PlayerJoinNum;` |

**Notes:**

> 玩家参战人数限制

---

### Property `NPCGenerateIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NPCGenerateIDs;` |

**Notes:**

> NPC参战生成配置

---

### Property `PlayerTeam`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenericTeamId PlayerTeam;` |

**Notes:**

> 队伍ID1

---

### Property `NPCTeam`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenericTeamId NPCTeam;` |

**Notes:**

> 队伍ID2

---
