# `struct` `FWorldBattleRuntimeInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 一场门派战的最小运行数据。

## Blueprint-exposed variables

### Property `BattleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattleGuid;` |

**Notes:**

> Battle Guid field.

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**Notes:**

> Battle Type field.

---

### Property `BattleState`

| Field | Details |
|------|------|
| C++ type | [EWorldBattleRuntimeState](WorldBattleRuntimeStruct__EWorldBattleRuntimeState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldBattleRuntimeState BattleState = EWorldBattleRuntimeState::None;` |

**Notes:**

> Battle State field.

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattlePlaceGuid;` |

**Notes:**

> 调用 EnterBattle 时要进入的地点。

---

### Property `RelevancyPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RelevancyPlaceGuid;` |

**Notes:**

> 关联地点，后续玩法需要时再使用。

---

### Property `FromPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**Notes:**

> [PR-6]出征发起地点(攻方从哪出发)。默认无效时回退攻方 MainPlace。

---

### Property `Teams`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FWorldBattleRuntimeTeam](WorldBattleRuntimeStruct__FWorldBattleRuntimeTeam.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid, FWorldBattleRuntimeTeam> Teams;` |

**Notes:**

> Teams field.

---

### Property `BattlefieldAward`

| Field | Details |
|------|------|
| C++ type | [FBattlefieldAward](../WorldBattleSystem/WorldBattleStruct__FBattlefieldAward.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldAward BattlefieldAward;` |

**Notes:**

> 门派战战后结算奖励/处置。与遭遇战 FBattlefieldInformation::BattlefieldAward 同结构，
> 占旗分胜负后由 AWorldSectBattleManager 结算流程填充，供返程/UI 读取。

---

### Property `BattleRuleset`

| Field | Details |
|------|------|
| C++ type | [FBattleRuleset](../WorldBattleSystem/WorldBattleStruct__FBattleRuleset.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleRuleset BattleRuleset;` |

**Notes:**

> 战斗规则。与遭遇战 FBattlefieldInformation::BattleRuleset 同结构，
> CreateBattle 时按 BattleType 从 GameMode 配置取一份，供结算口径(攻城正邪/俘虏处置概率等)读取。

---
