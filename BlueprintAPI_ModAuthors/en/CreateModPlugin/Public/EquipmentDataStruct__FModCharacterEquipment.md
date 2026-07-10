# `struct` `FModCharacterEquipment`

**Source header:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## Functional description (from header comments)

> 角色装备

## Blueprint-exposed variables

### Property `EquipmentType`

| Field | Details |
|------|------|
| C++ type | [EModEquipmentType](EquipmentDataStruct__EModEquipmentType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") EModEquipmentType EquipmentType = EModEquipmentType::None;` |

**Notes:**

> 装备的类型

---

### Property `MainAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> MainAttributes;` |

**Notes:**

> 此装备的主属性(EquipmentAttribute表）

---

### Property `SubAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> SubAttributes;` |

**Notes:**

> 此装备的次属性(EquipmentAttribute表）

---

### Property `EquipmentAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> EquipmentAbility;` |

**Notes:**

> 此装备自带的技能

---

### Property `RefitDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Puppet Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puppet Equipment") float RefitDurability = 500.f;` |

**Notes:**

> 傀儡改装耐久度

---
