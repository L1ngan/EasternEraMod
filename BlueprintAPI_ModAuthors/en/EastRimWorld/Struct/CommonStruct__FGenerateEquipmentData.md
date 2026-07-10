# `struct` `FGenerateEquipmentData`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> 生成装备的数据

## Blueprint-exposed variables

### Property `EquipmentType`

| Field | Details |
|------|------|
| C++ type | [EEquipmentType](CommonEnum__EEquipmentType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EEquipmentType EquipmentType = EEquipmentType::None;` |

**Notes:**

> 此池子产出的装备类型

---

### Property `EquipmentName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText EquipmentName;` |

**Notes:**

> 装备名字

---

### Property `EquipmentID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName EquipmentID;` |

**Notes:**

> 对应的装备ID 根据具体的装备类型 查询相应的装备表

---

### Property `MainAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> MainAttributes;` |

**Notes:**

> 此装备的主属性(EquipmentAttribute表）

---

### Property `SubAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> SubAttributes;` |

**Notes:**

> 此装备的次属性(EquipmentAttribute表）

---

### Property `EquipmentAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> EquipmentAbility;` |

**Notes:**

> 此装备自带的技能

---
