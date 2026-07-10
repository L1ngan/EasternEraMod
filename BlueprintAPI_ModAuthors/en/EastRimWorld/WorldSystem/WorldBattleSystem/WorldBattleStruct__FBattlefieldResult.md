# `struct` `FBattlefieldResult`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战场结果

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**Notes:**

> 胜利方势力

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Notes:**

> 胜利方势力

---

### Property `PlayerBattleResult`

| Field | Details |
|------|------|
| C++ type | [EPlayerBattleResult](WorldBattleStruct__EPlayerBattleResult.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlayerBattleResult PlayerBattleResult = EPlayerBattleResult::None;` |

**Notes:**

> 玩家方战斗结果

---

### Property `MVPCharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid MVPCharacterGuid;` |

**Notes:**

> MVP角色GUID

---
