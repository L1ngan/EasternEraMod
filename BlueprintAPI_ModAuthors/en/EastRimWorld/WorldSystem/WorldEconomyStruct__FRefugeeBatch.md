# `struct` `FRefugeeBatch`

**Source header:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## Functional description (from header comments)

> 单股流民(用于据点之间转移)

## Blueprint-exposed variables

### Property `Count`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Count = 0;` |

**Notes:**

> 该股流民人数

---

### Property `FromPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**Notes:**

> 流出据点 Guid(用于反查 / 后续可携带物资)

---
