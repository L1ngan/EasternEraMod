# `struct` `FModCharacteristicNumWeight`

**Source header:** `CreateModPlugin/Public/ModNewGameStruct.h`

---

## Functional description (from header comments)

> Struct mapping characteristic count to weight, used for quality-based random rolling of protagonist characteristics

## Blueprint-exposed variables

### Property `NumAndWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32,int32> NumAndWeight;` |

**Notes:**

> Map from count to weight

---
