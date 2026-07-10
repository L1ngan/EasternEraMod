# `struct` `FNPCForceArmorPool`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> NPC Force Armor Pool data structure.

## Blueprint-exposed variables

### Property `ForceArmorDataPool`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,float> ForceArmorDataPool;` |

**Notes:**

> 培养角色的防具池<DT_EquipmentQualityRange表ID,成长积分>

---
