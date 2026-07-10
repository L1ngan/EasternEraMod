# `class` `UFightPawnEquipmentComponent`

**Source header:** `EastRimWorld/Framework/FightPawnComponents/FightPawnEquipmentComponent.h`

---

## Functional description (from header comments)

> Player pawn equipment/appearance component: loads equipped weapons and armor from save data, attaches weapon static meshes to skeletal sockets, swaps armor appearance via Blueprint, applies custom apparels, and grants equipment abilities/tags to the ASC.

## Blueprint-exposed variables

### Property `Weapons`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TArray<FCharacterWeapon> Weapons;` |

**Notes:**

> 当前装备的武器列表（运行时）

---

### Property `Equipments`

| Field | Details |
|------|------|
| C++ type | TMap<[EArmorType](../../Struct/CommonEnum__EArmorType.md), [FCharacterApparel](../../Struct/ItemStruct__FCharacterApparel.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TMap<EArmorType, FCharacterApparel> Equipments;` |

**Notes:**

> 当前装备的防具列表（按部位）

---

### Property `CarryWeapons`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FCarryWeaponsInfo](../../Struct/CharacterStruct__FCarryWeaponsInfo.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TMap<FName, FCarryWeaponsInfo> CarryWeapons;` |

**Notes:**

> 当前挂载到 Pawn Mesh 上的武器 Mesh 组件

---

### Property `bClothingDisplay`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Equipment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FightPawn|Equipment") bool bClothingDisplay = true;` |

**Notes:**

> 是否显示服装外观（默认 true）

---

## Blueprint-exposed functions

### Function `LoadEquipmentFromSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void LoadEquipmentFromSaveData(const FCharacterSaveData& InSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从存档加载装备：
>   1) 把 SaveData.UseItemSaveData 中的物品实例化到 InventoryManagerComponent
>   2) 对 BeEquipped 状态的物品调用 LoadEquipEquipment（挂武器/换外观）
>   3) 对未装备部位调用 ChangeDefaultEquipment 给默认装备
>   4) 应用 CustomApparels 自定义外观

---

### Function `ApplyCustomApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bUseApparel` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void ApplyCustomApparels(bool bUseApparel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 应用自定义外观（仅外观，不改变装备效果）

---

### Function `EquipEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UCanUseInventoryItemInstance](../../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool EquipEquipment(UCanUseInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 真正"穿上"一件装备：设置状态 + 调 GiveEquipment（武器挂 mesh / 防具换外观）

---

### Function `LoadEquipEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool LoadEquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加载已穿装备（不重新设置物品状态，直接走 GiveEquipment）

---

### Function `ChangeDefaultEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentType` | [EEquipmentType](../../Struct/CommonEnum__EEquipmentType.md) |
| `(unnamed / type only)` | [EArmorType](../../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void ChangeDefaultEquipment(EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 装备默认武器/防具（按 CharacterData.DefaultWeapon / DefaultArmor）

---

### Function `GiveEquipmentByWeaponID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeaponID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool GiveEquipmentByWeaponID(FName WeaponID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按 ID 直接生成一件武器并装上

---

### Function `GiveEquipmentByArmorID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ArmorID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool GiveEquipmentByArmorID(FName ArmorID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按 ID 直接生成一件防具并装上

---

### Function `FindEquipmentByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Equipment" |
| Return type | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EquipmentType` | [EEquipmentType](../../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") UInventoryItemInstance* FindEquipmentByType(EEquipmentType EquipmentType, EArmorType ArmorType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找已装备的物品（用于装新装备前卸下旧装备）

---

### Function `GiveWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Weapon" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void GiveWeapon(const FCharacterWeapon& InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把武器 StaticMesh 创建并挂到 CarryParentSocket

---

### Function `RemoveWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Weapon" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void RemoveWeapon(const FCharacterWeapon& InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 销毁武器 Mesh

---

### Function `HandWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Weapon" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void HandWeapon(const FCharacterWeapon& InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 武器切换到 HandParentSocket（手持）

---

### Function `PackUpWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Weapon" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void PackUpWeapon(const FCharacterWeapon& InWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 武器切换到 CarryParentSocket（收起）

---
