# `struct` `FItemSimpleData`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> Item Simple Data data structure.

## Blueprint-exposed variables

### Property `Id`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName Id;` |

**Notes:**

> 物品id

---

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGroundInventoryType Type;` |

**Notes:**

> 物品类型

---

### Property `Num`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Num = 1;` |

**Notes:**

> 物品数量

---

### Property `bRandomAttribute`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "Type == EGroundInventoryType::Equipment")) bool bRandomAttribute = false;` |

**Notes:**

> 当为装备时是否随机属性 如果是则读取DT_EquipmentQualityRange表

---
