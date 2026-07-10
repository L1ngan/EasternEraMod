# `struct` `FAttackEarlyWarning`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 攻击预警

## Blueprint-exposed variables

### Property `TakeEffect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool TakeEffect = false;` |

**Notes:**

> Take Effect field.

---

### Property `SourceForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SourceForceGuid;` |

**Notes:**

> 攻击来源

---

### Property `TargetForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid TargetForceGuid;` |

**Notes:**

> 攻击目标

---

### Property `AttackWorldPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid AttackWorldPlaceGuid;` |

**Notes:**

> 攻击的城市

---

### Property `TimeRemaining`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeRemaining;` |

**Notes:**

> 攻击剩余时间

---

### Property `StartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StartTime;` |

**Notes:**

> 开始时间

---

### Property `bPopupWarning`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bPopupWarning = false;` |

**Notes:**

> 是否已经弹出过警告

---
