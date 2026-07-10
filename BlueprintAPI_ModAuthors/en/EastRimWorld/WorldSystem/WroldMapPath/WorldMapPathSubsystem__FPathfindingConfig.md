# `struct` `FPathfindingConfig`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## Functional description (from header comments)

> 性能配置

## Blueprint-exposed variables

### Property `MaxSearchDepth`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1", ClampMax = "10000")) int32 MaxSearchDepth;` |

**Notes:**

> 最大搜索深度

---

### Property `CacheExpireTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1.0", ClampMax = "3600.0")) float CacheExpireTime;` |

**Notes:**

> 缓存过期时间（秒）

---

### Property `MaxParallelTasks`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1", ClampMax = "16")) int32 MaxParallelTasks;` |

**Notes:**

> 并行任务数量

---

### Property `MaxWaypointsPerNode`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1", ClampMax = "100")) int32 MaxWaypointsPerNode;` |

**Notes:**

> 空间索引参数

---

### Property `MaxQuadTreeDepth`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "1", ClampMax = "16")) int32 MaxQuadTreeDepth;` |

**Notes:**

> Max Quad Tree Depth field.

---

### Property `bEnableCache`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableCache;` |

**Notes:**

> 是否启用缓存

---

### Property `bEnableSpatialIndex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableSpatialIndex;` |

**Notes:**

> 是否启用空间索引

---
