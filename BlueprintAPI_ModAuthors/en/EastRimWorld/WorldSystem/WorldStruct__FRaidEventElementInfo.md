# `struct` `FRaidEventElementInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 事件队列信息（事件冷却队列，袭击事件执行队列）

## Blueprint-exposed variables

### Property `ThreatPool`

| Field | Details |
|------|------|
| C++ type | [FThreatPoolInfo](WorldStruct__FThreatPoolInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FThreatPoolInfo ThreatPool;` |

**Notes:**

> 袭击信息

---

### Property `EventTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float EventTime = 0.f;` |

**Notes:**

> 事件时间（倒计时时间） 或 袭击执行的剩余时间

---
