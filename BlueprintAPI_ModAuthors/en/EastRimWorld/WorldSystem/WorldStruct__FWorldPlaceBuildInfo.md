# `struct` `FWorldPlaceBuildInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> World Place Build Info data structure.

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName ID;` |

**Notes:**

> 表ID

---

### Property `RunState`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceBuildRunState](WorldStruct__EWorldPlaceBuildRunState.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EWorldPlaceBuildRunState RunState = EWorldPlaceBuildRunState::Normal;` |

**Notes:**

> 运行状态

---

### Property `BuildLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 BuildLevel = 1;` |

**Notes:**

> 当前等级

---

### Property `RemainBuildTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float RemainBuildTime = 999.f;` |

**Notes:**

> 剩余建成时间

---
