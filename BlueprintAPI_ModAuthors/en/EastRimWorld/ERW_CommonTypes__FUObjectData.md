# `struct` `FUObjectData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 包含UObject和其对应的Guid的结构

## Blueprint-exposed variables

### Property `Object`

| Field | Details |
|------|------|
| C++ type | `UObject*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) UObject* Object { nullptr };` |

**Source comments:**

> Object

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGuid Guid;` |

**Source comments:**

> Object对应的Guid

---

### Property `OwnerType`

| Field | Details |
|------|------|
| C++ type | `EActorType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EActorType OwnerType { EActorType::None };` |

**Source comments:**

> Owner的类型

---
