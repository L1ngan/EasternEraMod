# `struct` `FBattlefieldInformation`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战场信息

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**Source comments:**

> 战场的Guid

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattlePlaceGuid;` |

**Source comments:**

> 战斗地点GUID

---

### Property `RelevancyPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RelevancyPlaceGuid;` |

**Source comments:**

> 战斗关联的地点

---

### Property `BattleRuleset`

| Field | Details |
|------|------|
| C++ type | [FBattleRuleset](WorldBattleStruct__FBattleRuleset.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleRuleset BattleRuleset;` |

**Source comments:**

> 战斗规则

---

### Property `BattleTeamState`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,FBattleTeamState> BattleTeamState;` |

**Source comments:**

> 战斗阵营状态

---

### Property `BattlefieldState`

| Field | Details |
|------|------|
| C++ type | `EBattlefieldStateType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldStateType BattlefieldState = EBattlefieldStateType::None;` |

**Source comments:**

> 战斗状态

---

### Property `bPauseBattle`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPauseBattle = true;` |

**Source comments:**

> 是否暂停

---

### Property `BattleTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleTime = 0.f;` |

**Source comments:**

> 战斗时间

---

### Property `BattlefieldResult`

| Field | Details |
|------|------|
| C++ type | [FBattlefieldResult](WorldBattleStruct__FBattlefieldResult.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldResult BattlefieldResult;` |

**Source comments:**

> 战斗结果

---

### Property `BattlefieldAward`

| Field | Details |
|------|------|
| C++ type | [FBattlefieldAward](WorldBattleStruct__FBattlefieldAward.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldAward BattlefieldAward;` |

**Source comments:**

> 战斗奖励

---

### Property `bPlayerJoinBattle`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoinBattle = false;` |

**Source comments:**

> 是否有玩家参与

---
