# `struct` `FPathfindingResult`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## Functional description (from header comments)

> 路径查找结果

## Blueprint-exposed variables

### Property `Path`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FVector> Path;` |

**Notes:**

> Path field.

---

### Property `PathLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float PathLength;` |

**Notes:**

> Path Length field.

---

### Property `Error`

| Field | Details |
|------|------|
| C++ type | [EPathfindingError](WorldMapPathSubsystem__EPathfindingError.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EPathfindingError Error;` |

**Notes:**

> Error field.

---

### Property `SearchTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float SearchTime;` |

**Notes:**

> Search Time field.

---

### Property `NodesExplored`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 NodesExplored;` |

**Notes:**

> Nodes Explored field.

---
