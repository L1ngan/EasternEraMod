# `struct` `FCarryWeaponsInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName ID;` |

**Source comments:**

> 武器ID

---

### Property `WeaponsInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FWeaponsInfo](CharacterStruct__FWeaponsInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FWeaponsInfo> WeaponsInfo;` |

**Source comments:**

> 携带的武器插槽对应的网格组件

---
