# `struct` `FSectResidencyInfo`

**Source header:** `EastRimWorld/System/Dominion/DominionTypes.h`

---

## Functional description (from header comments)

> 一个附属门派在某城的进驻信息(随城市记录)

## Blueprint-exposed variables

### Property `ForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid ForceGuid;` |

**Notes:**

> 附属门派的势力Guid(AWorldForce::SGUID)

---

### Property `Loyalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float Loyalty = 50.f;` |

**Notes:**

> 对当前城主的忠诚度(0-100;过低会反水/迁出)

---

### Property `Belonging`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float Belonging = 50.f;` |

**Notes:**

> 归属感(0-100;新迁入较低,随时间增长;影响守备贡献与反水概率)

---

### Property `Morale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float Morale = 50.f;` |

**Notes:**

> 士气(0-100;玩家攻打失败时提升)

---

### Property `TributeRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float TributeRatio = 0.2f;` |

**Notes:**

> 当前缴税比例(城主可加税迫使其迁出)

---

### Property `JoinGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) int32 JoinGameDay = 0;` |

**Notes:**

> 迁入时的游戏天数

---

### Property `bAssistPledged`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) bool bAssistPledged = false;` |

**Notes:**

> 是否已向玩家承诺攻城时协助(交流-请求协助)

---
