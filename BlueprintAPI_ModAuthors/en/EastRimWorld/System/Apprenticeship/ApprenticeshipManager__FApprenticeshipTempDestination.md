# `struct` `FApprenticeshipTempDestination`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipManager.h`

---

## Functional description (from header comments)

> [涌现 §4.8 江湖现洞府] 临时历练目的地 — 涌现侦测沉寂地"现洞府"后运行时注册,
> 让该地点(可非中心城)成为可派遣历练目的地并叠加专属探宝事件, 到期自动失效。

## Blueprint-exposed variables

### Property `PlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid PlaceGuid;` |

**Notes:**

> 目的地地点 Guid(AWorldDirector::WorldPlaces 的 key)

---

### Property `EventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) TArray<FName> EventIDs;` |

**Notes:**

> 该地点叠加的专属历练事件 ID(并入候选; 空则只走通用事件库)

---

### Property `ExpireGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 ExpireGameDay = 0;` |

**Notes:**

> 失效游戏天(GameDay 超过即清除)

---

### Property `MaxTriggerCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 MaxTriggerCount = 0;` |

**Notes:**

> 限次: 本目的地专属事件累计触发达此数即撤销(0=不限次, 沿用旧"江湖现洞府")

---

### Property `TriggeredCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 TriggeredCount = 0;` |

**Notes:**

> 已触发次数(专属事件每命中一次 +1)

---
