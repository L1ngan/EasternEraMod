# `struct` `FModEquipmentAttribute`

**Source header:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## Functional description (from header comments)

> Mod 装备属性结构

## Blueprint-exposed variables

### Property `AttributeInfo`

| Field | Details |
|------|------|
| C++ type | `FDataTableRowHandle` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Attribute" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") FDataTableRowHandle AttributeInfo;` |

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

### Property `Comment`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FString Comment;` |

**Source comments:**

> Comment

---
