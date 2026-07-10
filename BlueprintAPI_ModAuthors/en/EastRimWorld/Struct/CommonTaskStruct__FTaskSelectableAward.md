# `struct` `FTaskSelectableAward`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> Task Selectable Award data structure.

## Blueprint-exposed variables

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**Notes:**

> 物品信息

---

### Property `ConsumeFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ConsumeFavor = 0.f;` |

**Notes:**

> 消耗好感度(暂不实现)

---

### Property `ConsumeItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> ConsumeItems;` |

**Notes:**

> 消耗物品(暂不实现)

---
