# `struct` `FEquipmentAttribute`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 装备属性

## Blueprint-exposed variables

### Property `AttributeInfo`

| Field | Details |
|------|------|
| C++ type | `FDataTableRowHandle` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Attribute" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute",meta=(RowType = "/Script/EastRimWorld.CharacterAttributeInfo")) FDataTableRowHandle AttributeInfo;` |

**Source comments:**

> 属性信息

---

### Property `AttributeValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Attribute" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") float AttributeValue = 0.f;` |

**Source comments:**

> 属性值

---

### Property `ItemQuality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Attribute" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") EItemQuality ItemQuality = EItemQuality::None;` |

**Source comments:**

> 词条品质

---
