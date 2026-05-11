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

**Source comments:**

> 建筑物中已添加的傀儡ID列表（相同的傀儡只能添加一次）

---

### Property `CurrentRefit`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FGameplayTag CurrentRefit;` |

---

### Property `RefitMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) TMap<FGameplayTag,FName> RefitMap;` |

---

### Property `RefitItemSaveData`

| Field | Details |
|------|------|
| C++ type | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FUseItemSaveData RefitItemSaveData;` |

---

### Property `RefitCarrayReourceActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FName RefitCarrayReourceActionID;` |

---
