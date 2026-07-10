# `struct` `FEmergencePressureObject`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 压力指向对象条目 — 单对象维只填 ObjectA(如最沉寂地/最重伤弟子); 成对维两个都填(如结仇: ObjectA+ObjectB=一对仇家)。

## Blueprint-exposed variables

### Property `ObjectA`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Pressure") FGuid ObjectA;` |

**Notes:**

> 主对象 Guid

---

### Property `ObjectB`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Pressure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Pressure") FGuid ObjectB;` |

**Notes:**

> 次对象 Guid(仅成对维度填, 如结仇对的另一方)

---
