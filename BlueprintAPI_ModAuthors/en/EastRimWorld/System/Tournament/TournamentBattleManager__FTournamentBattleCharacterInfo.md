# `struct` `FTournamentBattleCharacterInfo`

**Source header:** `EastRimWorld/System/Tournament/TournamentBattleManager.h`

---

## Functional description (from header comments)

> 门派比武战斗角色信息

## Blueprint-exposed variables

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Notes:**

> TeamID

---

### Property `BattleCharacters`

| Field | Details |
|------|------|
| C++ type | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<AEastRimWorldCharacter*> BattleCharacters;` |

**Notes:**

> 正在战斗的角色

---

### Property `SeriousInjuryCharacters`

| Field | Details |
|------|------|
| C++ type | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<AEastRimWorldCharacter*> SeriousInjuryCharacters;` |

**Notes:**

> 重伤的弟子

---

### Property `CharacterBattleInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterBattleInfo](../../WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterBattleInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,FCharacterBattleInfo> CharacterBattleInfos;` |

**Notes:**

> 伤害统计

---
