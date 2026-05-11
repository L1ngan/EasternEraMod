# `struct` `FUseItemSaveData`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `InventoryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FName InventoryID;` |

**Source comments:**

> 物品的id

---

### Property `GroundInventoryType`

| Field | Details |
|------|------|
| C++ type | `EGroundInventoryType` |
| Reflection specifiers | BlueprintReadWrite, Category="Common" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**Source comments:**

> 物品的大分类

---

### Property `EquipmentType`

| Field | Details |
|------|------|
| C++ type | `EEquipmentType` |
| Reflection specifiers | BlueprintReadWrite, Category="Common" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EEquipmentType EquipmentType = EEquipmentType::None;` |

**Source comments:**

> 装备的类型

---

### Property `ArmorType`

| Field | Details |
|------|------|
| C++ type | `EArmorType` |
| Reflection specifiers | BlueprintReadWrite, Category="Common" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EArmorType ArmorType = EArmorType::None;` |

**Source comments:**

> 防具的类型

---

### Property `ItemTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame,Category = "Common") FTransform ItemTransform;` |

**Source comments:**

> 物品在世界中的位置

---

### Property `bOperationMark`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bOperationMark = false;` |

**Source comments:**

> 是否被操作标记

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 相关按钮的状态 是否选中

---

### Property `InventoryItemStateType`

| Field | Details |
|------|------|
| C++ type | `EInventoryItemStateType` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**Source comments:**

> 物品状态

---

### Property `ItemGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FGuid ItemGuid;` |

**Source comments:**

> 物品的GUID

---

### Property `SmallGrids`

| Field | Details |
|------|------|
| C++ type | TArray<[FWarehouseSmallGrid](ItemStruct__FWarehouseSmallGrid.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") TArray<FWarehouseSmallGrid> SmallGrids;` |

**Source comments:**

> 此物品占用的小格子信息

---

### Property `ItemCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 ItemCount = 1;` |

**Source comments:**

> 物品的数量

---

### Property `GroundSoilType`

| Field | Details |
|------|------|
| C++ type | `EGroundSoilType` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**Source comments:**

> 物品所在的地面类型

---

### Property `ResidueItemShelfLife`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float ResidueItemShelfLife = 0.f;` |

**Source comments:**

> 剩余保质期

---

### Property `CurDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurDurability = 0.f;` |

**Source comments:**

> 当前耐久度

---

### Property `CurCopyNum`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurCopyNum = 0.f;` |

**Source comments:**

> 当前已抄录次数

---

### Property `CurAirDryingDegree`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Common" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 CurAirDryingDegree = 0;` |

**Source comments:**

> 当前风干度

---

### Property `MainAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> MainAttributes;` |

**Source comments:**

> 此装备的主属性(EquipmentAttribute表）

---

### Property `SubAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> SubAttributes;` |

**Source comments:**

> 此装备的次属性(EquipmentAttribute表）

---

### Property `EquipmentAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> EquipmentAbility;` |

**Source comments:**

> 此装备自带的技能

---

### Property `CharacterName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") FString CharacterName;` |

**Source comments:**

> 打造的人名字

---

### Property `ItemState`

| Field | Details |
|------|------|
| C++ type | `EItemUseState` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite ,SaveGame , Category = "Equipment") EItemUseState ItemState = EItemUseState::None;` |

**Source comments:**

> 装备的使用状态

---

### Property `GrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldForce" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "WorldForce") float GrowScore = 0.f;` |

---
