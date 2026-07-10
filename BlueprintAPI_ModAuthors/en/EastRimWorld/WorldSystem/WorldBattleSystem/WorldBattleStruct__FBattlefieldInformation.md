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

**Notes:**

> 战场的Guid

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattlePlaceGuid;` |

**Notes:**

> 战斗地点GUID

---

### Property `RelevancyPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RelevancyPlaceGuid;` |

**Notes:**

> 战斗关联的地点

---

### Property `FromPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**Notes:**

> [PR-6]出征发起地点(攻方从哪出发)。默认无效时回退攻方 MainPlace

---

### Property `BattleRuleset`

| Field | Details |
|------|------|
| C++ type | [FBattleRuleset](WorldBattleStruct__FBattleRuleset.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleRuleset BattleRuleset;` |

**Notes:**

> 战斗规则

---

### Property `BattleTeamState`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,FBattleTeamState> BattleTeamState;` |

**Notes:**

> 战斗阵营状态

---

### Property `BattlefieldState`

| Field | Details |
|------|------|
| C++ type | [EBattlefieldStateType](WorldBattleStruct__EBattlefieldStateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldStateType BattlefieldState = EBattlefieldStateType::None;` |

**Notes:**

> 战斗状态

---

### Property `bPauseBattle`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPauseBattle = true;` |

**Notes:**

> 是否暂停

---

### Property `BattleTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleTime = 0.f;` |

**Notes:**

> 战斗时间

---

### Property `BattlefieldResult`

| Field | Details |
|------|------|
| C++ type | [FBattlefieldResult](WorldBattleStruct__FBattlefieldResult.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldResult BattlefieldResult;` |

**Notes:**

> 战斗结果

---

### Property `BattlefieldAward`

| Field | Details |
|------|------|
| C++ type | [FBattlefieldAward](WorldBattleStruct__FBattlefieldAward.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldAward BattlefieldAward;` |

**Notes:**

> 战斗奖励

---

### Property `bPlayerJoinBattle`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoinBattle = false;` |

**Notes:**

> 是否有玩家参与

---
