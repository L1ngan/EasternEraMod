# `struct` `FAllTypeItemDrop`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> All Type Item Drop data structure.

## Blueprint-exposed variables

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EGroundInventoryType ItemType = EGroundInventoryType::None;` |

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
