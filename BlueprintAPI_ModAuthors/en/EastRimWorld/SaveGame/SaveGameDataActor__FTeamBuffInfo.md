# `struct` `FTeamBuffInfo`

**Source header:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## Functional description (from header comments)

> Team buff info (team ID and its buff list) used for team buff save data.

## Blueprint-exposed variables

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FGenericTeamId TeamId;` |

**Notes:**

> 阵营ID

---

### Property `TeamBuff`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FCommonBuff> TeamBuff;` |

**Notes:**

> List of buffs held by this team.

---
