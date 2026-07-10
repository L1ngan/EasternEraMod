# `struct` `FPathGoalData`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> 路径目标数据

## Blueprint-exposed variables

### Property `IDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FName> IDs;` |

**Notes:**

> 指定的物品ID

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EItemType](../Struct/CommonEnum__EItemType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EItemType ItemType = EItemType::None;` |

**Notes:**

> 指定的物品类型

---

### Property `SpecifiedGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGuid SpecifiedGuid;` |

**Notes:**

> GUID of the specified target object

---
