# `struct` `FModCharacterTool`

**Source header:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## Functional description (from header comments)

> Mod character tool equipment struct, extending character equipment with durability loss on collecting

## Blueprint-exposed variables

### Property `CollectLossDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float CollectLossDurability = 0.f;` |

**Notes:**

> 采集掉耐久

---
