# `struct` `FOutputInformation`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 资源产出的展示信息

## Blueprint-exposed variables

### Property `Title`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;` |

**Notes:**

> 标题

---

### Property `OutPutInfo`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,int> OutPutInfo;` |

**Notes:**

> 产出的数量

---
