# `struct` `FFuelData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 燃料相关数据

## Blueprint-exposed variables

### Property `CurFuelValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurFuelValue = 0.f;` |

**Notes:**

> 当前的燃料储量

---

### Property `bHaveFuel`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bHaveFuel = true;` |

**Notes:**

> 是否有燃料

---

### Property `bNeedCreateAction`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bNeedCreateAction = true;` |

**Notes:**

> 是否需要创建添加燃料得GOAP，第一次创建，只有当移除GOAP得时候才再次为true

---

### Property `bNeedAbortPlan`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bNeedAbortPlan = true;` |

**Notes:**

> 是否需要打断一次当前建筑需要燃料才能执行的GOAP，第一次允许，后续只有当添加燃料的时候才为true

---

### Property `bAutoAddFuel`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bAutoAddFuel = true;` |

**Notes:**

> 燃料低于20%时是否自动为其添加燃料

---

### Property `UpdateFuelTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 UpdateFuelTimerID { INDEX_NONE };` |

**Notes:**

> 燃料消耗更新定时器

---
