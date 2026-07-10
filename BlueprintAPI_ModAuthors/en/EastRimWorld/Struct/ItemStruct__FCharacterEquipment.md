# `struct` `FCharacterEquipment`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 角色装备

## Blueprint-exposed variables

### Property `EquipmentGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") FGuid EquipmentGuid = FGuid();` |

**Notes:**

> 装备的唯一GUID 运行时生成

---

### Property `EquipmentType`

| Field | Details |
|------|------|
| C++ type | [EEquipmentType](CommonEnum__EEquipmentType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") EEquipmentType EquipmentType = EEquipmentType::None;` |

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

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") FString CharacterName;` |

**Notes:**

> 打造的人名字

---

### Property `CharacterGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") FGuid CharacterGUID;` |

**Notes:**

> 打造的人GUID

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
