# `struct` `FTaskSelectableAward`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**Source comments:**

> 物品信息

---

### Property `ConsumeFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ConsumeFavor = 0.f;` |

**Source comments:**

> 消耗好感度(暂不实现)

---

### Property `ConsumeItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> ConsumeItems;` |

**Source comments:**

> 消耗物品(暂不实现)

---
