# `struct` `FEmergenceReverseGate`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 反向闸门(防刷屏) — 策划案 §2 "反向闸门"。
> 与 10 个正向压力语义相反, 不管题材只管节流: 玩家正经历危机时压低/关闭冒事。
> Throttle ∈ [0,1]: 1=完全放行, 0=完全关闭。

## Blueprint-exposed variables

### Property `Throttle`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Gate" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") float Throttle = 1.f;` |

**Notes:**

> 节流系数 [0,1], 乘到冒事概率上。1=放行, 0=关闭

---

### Property `CitiesUnderAttack`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Gate" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 CitiesUnderAttack = 0;` |

**Notes:**

> 当前被攻城的城数(收紧闸门的主因之一)

---

### Property `RecentCriticalCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Gate" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 RecentCriticalCount = 0;` |

**Notes:**

> 过去一段时间写入事件日志的高优先级条目数(刚刷过屏则收紧)

---

### Property `UrgentLetterCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Gate" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 UrgentLetterCount = 0;` |

**Notes:**

> 未读紧急信件数

---
