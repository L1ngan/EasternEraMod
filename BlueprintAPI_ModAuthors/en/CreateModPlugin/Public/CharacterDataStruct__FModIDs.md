# `struct` `FModIDs`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## Functional description (from header comments)

> Wrapper struct holding an array of FName IDs, used to nest arrays inside map values.

## Blueprint-exposed variables

### Property `IDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName> IDs;` |

**Notes:**

> List of IDs.

---
