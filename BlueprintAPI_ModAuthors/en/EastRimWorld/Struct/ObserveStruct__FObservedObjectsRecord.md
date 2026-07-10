# `struct` `FObservedObjectsRecord`

**Source header:** `EastRimWorld/Struct/ObserveStruct.h`

---

## Functional description (from header comments)

> Observed Objects Record data structure.

## Blueprint-exposed variables

### Property `ObserverId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGuid ObserverId;` |

**Notes:**

> 完成观察的角色Guid

---

### Property `ObservedDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 ObservedDay = 0;` |

**Notes:**

> 完成观察的时间点(改成了游戏时长)

---
