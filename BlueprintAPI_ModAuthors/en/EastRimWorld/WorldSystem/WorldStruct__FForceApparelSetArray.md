# `struct` `FForceApparelSetArray`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 门派外观套装数组（UHT 不支持 TMap 值为 TArray，需此包装）

## Blueprint-exposed variables

### Property `ApparelSets`

| Field | Details |
|------|------|
| C++ type | TArray<[FCustomApparelsSkin](WorldStruct__FCustomApparelsSkin.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FCustomApparelsSkin> ApparelSets;` |

**Notes:**

> 套装数组 每个元素是一套完整服装

---
