# `struct` `FSectDominionInfo`

**Source header:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## Functional description (from header comments)

> 单个门派的割据全局记录(key=势力Guid)

## Blueprint-exposed variables

### Property `ExpelledByCities`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FGuid> ExpelledByCities;` |

**Notes:**

> 驱逐记录:被哪些城市驱逐过(被驱逐过的城市不能再迁入;某城城主变化时清空对该城的驱逐记录)

---

### Property `bWanderingSect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) bool bWanderingSect = false;` |

**Notes:**

> 是否为流浪门派(失去落脚地;实力大幅削弱,玩家攻打获胜即灭门)

---

### Property `BecameWanderingGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 BecameWanderingGameDay = 0;` |

**Notes:**

> 转为流浪门派的游戏天数

---
