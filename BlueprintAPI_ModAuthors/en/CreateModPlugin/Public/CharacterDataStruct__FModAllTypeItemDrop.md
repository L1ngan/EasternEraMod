# `struct` `FModAllTypeItemDrop`

**Source header:** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## Functional description (from header comments)

> Generic item drop entry recording the drop item type and quantity.

## Blueprint-exposed variables

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EModGroundInventoryType](BaseDataStruct__EModGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EModGroundInventoryType ItemType = EModGroundInventoryType::None;` |

**Notes:**

> 掉落物的类型

---

### Property `DropNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 DropNum = 0;` |

**Notes:**

> 掉落物的数量

---
