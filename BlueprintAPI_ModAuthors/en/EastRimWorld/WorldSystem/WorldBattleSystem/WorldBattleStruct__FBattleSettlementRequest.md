# `struct` `FBattleSettlementRequest`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> [PR-A 阶段1] 统一战后结算输入结构（本阶段仅定义；Make 适配函数后续 PR 再补）。

## Blueprint-exposed variables

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EBattleType BattleType = EBattleType::None; UPROPERTY(BlueprintReadWrite) EBattleSettlementSource Source = EBattleSettlementSource::Encounter;` |

**Notes:**

> Battle Type field.

---

### Property `BattlefieldGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FGuid BattlefieldGuid; UPROPERTY(BlueprintReadWrite) FGuid RelevancyPlaceGuid;` |

**Notes:**

> Battlefield Guid field.

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FGuid BattlePlaceGuid; UPROPERTY(BlueprintReadWrite) FGuid FromPlaceGuid;` |

**Notes:**

> Battle Place Guid field.

---

### Property `WinnerForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FGuid WinnerForceGuid; UPROPERTY(BlueprintReadWrite) int32 WinnerTeamID = 255;` |

**Notes:**

> Winner Force Guid field.

---

### Property `PlayerResult`

| Field | Details |
|------|------|
| C++ type | [EPlayerBattleResult](WorldBattleStruct__EPlayerBattleResult.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EPlayerBattleResult PlayerResult = EPlayerBattleResult::None; UPROPERTY(BlueprintReadWrite) bool bPlayerInvolved = false;` |

**Notes:**

> Executes the Player Result operation.

---

### Property `AttackerTeam`

| Field | Details |
|------|------|
| C++ type | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FBattleTeamInfo AttackerTeam;` |

**Notes:**

> Attacker Team field.

---
