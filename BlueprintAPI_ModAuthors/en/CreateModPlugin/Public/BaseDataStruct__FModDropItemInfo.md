# `struct` `FModDropItemInfo`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> 掉落物品信息

## Blueprint-exposed variables

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight{1};` |

**Source comments:**

> 权重

---

### Property `Num`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Num {0};` |

**Source comments:**

> 数量

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | `EModGroundInventoryType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModGroundInventoryType ItemType = EModGroundInventoryType::NormalItem;` |

**Source comments:**

> 类型

---
