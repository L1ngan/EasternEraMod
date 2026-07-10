# `struct` `FCityDominionState`

**Source header:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## Functional description (from header comments)

> 一座城市的割据状态(key=城市Guid)

## Blueprint-exposed variables

### Property `ResidentSects`

| Field | Details |
|------|------|
| C++ type | TArray<[FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FSectResidencyInfo> ResidentSects;` |

**Notes:**

> 城内附属门派(不含城主自己)

---

### Property `PendingMoveInForces`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FGuid> PendingMoveInForces;` |

**Notes:**

> 申请迁入待城主批准的门派Guid(流浪门派或他城门派)

---

### Property `LastGovernanceGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 LastGovernanceGameDay = 0;` |

**Notes:**

> 上次NPC城主治理决策的游戏天数

---

### Property `CityTributeRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float CityTributeRatio = 0.f;` |

**Notes:**

> 城市缴税比例

---
