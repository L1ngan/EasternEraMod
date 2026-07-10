# `struct` `FPuppetData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 傀儡相关数据

## Blueprint-exposed variables

### Property `AddedPuppetIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite) TArray<FName> AddedPuppetIDs;` |

**Notes:**

> 建筑物中已添加的傀儡ID列表（相同的傀儡只能添加一次）

---

### Property `CurrentRefit`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FGameplayTag CurrentRefit;` |

**Notes:**

> Gameplay tag of the currently active refit

---

### Property `RefitMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) TMap<FGameplayTag,FName> RefitMap;` |

**Notes:**

> Map from refit gameplay tags to their corresponding config IDs

---

### Property `RefitItemSaveData`

| Field | Details |
|------|------|
| C++ type | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FUseItemSaveData RefitItemSaveData;` |

**Notes:**

> Save data of the item used for the refit

---

### Property `RefitCarrayReourceActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FName RefitCarrayReourceActionID;` |

**Notes:**

> Action ID for carrying resources for the refit

---
