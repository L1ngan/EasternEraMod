# `struct` `FCarryWeaponsInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Carried weapon info: weapon ID and the list of weapon mesh/socket entries for it

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName ID;` |

**Notes:**

> 武器ID

---

### Property `WeaponsInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FWeaponsInfo](CharacterStruct__FWeaponsInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FWeaponsInfo> WeaponsInfo;` |

**Notes:**

> 携带的武器插槽对应的网格组件

---
