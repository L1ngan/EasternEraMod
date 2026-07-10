# `struct` `FAutoReleaseStrategyRule`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 自动释放战略规则

## Blueprint-exposed variables

### Property `DetectionIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float DetectionIntervalTime = 3.f;` |

**Notes:**

> 持有牌时无法使用检测间隔时间

---

### Property `WaitTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WaitTime = 10.f;` |

**Notes:**

> 释放条件不满足时同一张牌等待时间

---

### Property `UseIntervalMinTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMinTime = 10.f;` |

**Notes:**

> 使用技能的最小间隔时间

---

### Property `UseIntervalMaxTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMaxTime = 10.f;` |

**Notes:**

> 使用技能的最大间隔时间

---
