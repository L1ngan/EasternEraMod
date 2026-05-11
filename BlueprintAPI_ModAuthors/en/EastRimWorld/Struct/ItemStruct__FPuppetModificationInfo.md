# `struct` `FPuppetModificationInfo`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 傀儡装备改造相关结构体

## Blueprint-exposed variables

### Property `PuppetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PuppetID;` |

**Source comments:**

> 傀儡ID

---

### Property `BuildingGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BuildingGUID;` |

**Source comments:**

> 建筑物Guid

---

### Property `EquippedWeapon`

| Field | Details |
|------|------|
| C++ type | [FUseItemSaveData](ItemStruct__FUseItemSaveData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FUseItemSaveData EquippedWeapon;` |

**Source comments:**

> 已装备的武器

---

### Property `EquippedArmors`

| Field | Details |
|------|------|
| C++ type | TMap<EArmorType, [FUseItemSaveData](ItemStruct__FUseItemSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EArmorType, FUseItemSaveData> EquippedArmors;` |

**Source comments:**

> 已装备的防具数据

---
