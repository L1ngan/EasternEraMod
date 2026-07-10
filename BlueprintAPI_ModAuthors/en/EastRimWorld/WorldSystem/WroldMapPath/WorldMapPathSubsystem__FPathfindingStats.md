# `struct` `FPathfindingStats`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## Functional description (from header comments)

> 性能统计

## Blueprint-exposed variables

### Property `AverageFindTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float AverageFindTime;` |

**Notes:**

> 路径查找时间

---

### Property `MaxFindTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float MaxFindTime;` |

**Notes:**

> Max Find Time field.

---

### Property `CacheHitRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CacheHitRate;` |

**Notes:**

> 缓存命中率

---

### Property `TotalPathRequests`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 TotalPathRequests;` |

**Notes:**

> 路径查找次数

---

### Property `SuccessfulPaths`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 SuccessfulPaths;` |

**Notes:**

> Successful Paths field.

---
