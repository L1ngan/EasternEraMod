# `struct` `FCultivateAttributeWeight`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> NPC培养角色属性抽取权重

## Blueprint-exposed variables

### Property `AttributeWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGameplayAttribute,int32> AttributeWeight;` |

**Source comments:**

> 境界等级对应的属性抽取权重

---

### Property `AttributeValueWeight`

| Field | Details |
|------|------|
| C++ type | TMap<FGameplayAttribute,[FCultivateAttributeValueWeight](WorldStruct__FCultivateAttributeValueWeight.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGameplayAttribute,FCultivateAttributeValueWeight> AttributeValueWeight;` |

**Source comments:**

> 境界等级对应的属性加值抽取权重

---
