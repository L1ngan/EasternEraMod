# `class` `UFightPawnEquipmentComponent`

**源码头文件:** `EastRimWorld/Framework/FightPawnComponents/FightPawnEquipmentComponent.h`

---

## 功能说明（来自头文件注释）

> 玩家Pawn装备/外观组件：从存档加载已装备的武器防具，武器直接挂StaticMesh到骨骼插槽，防具经蓝图换装，应用自定义外观并把装备能力/Tag给到ASC。

## 蓝图暴露变量

### 属性 `Weapons`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TArray<FCharacterWeapon> Weapons;` |

**说明:**

> 当前装备的武器列表（运行时）

---

### 属性 `Equipments`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EArmorType](../../Struct/CommonEnum__EArmorType.md), [FCharacterApparel](../../Struct/ItemStruct__FCharacterApparel.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TMap<EArmorType, FCharacterApparel> Equipments;` |

**说明:**

> 当前装备的防具列表（按部位）

---

### 属性 `CarryWeapons`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FCarryWeaponsInfo](../../Struct/CharacterStruct__FCarryWeaponsInfo.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|Equipment") TMap<FName, FCarryWeaponsInfo> CarryWeapons;` |

**说明:**

> 当前挂载到 Pawn Mesh 上的武器 Mesh 组件

---

### 属性 `bClothingDisplay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FightPawn|Equipment") bool bClothingDisplay = true;` |

**说明:**

> 是否显示服装外观（默认 true）

---

## 蓝图暴露函数

### 函数 `LoadEquipmentFromSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void LoadEquipmentFromSaveData(const FCharacterSaveData& InSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从存档加载装备：
>   1) 把 SaveData.UseItemSaveData 中的物品实例化到 InventoryManagerComponent
>   2) 对 BeEquipped 状态的物品调用 LoadEquipEquipment（挂武器/换外观）
>   3) 对未装备部位调用 ChangeDefaultEquipment 给默认装备
>   4) 应用 CustomApparels 自定义外观

---

### 函数 `ApplyCustomApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bUseApparel` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void ApplyCustomApparels(bool bUseApparel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 应用自定义外观（仅外观，不改变装备效果）

---

### 函数 `EquipEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UCanUseInventoryItemInstance](../../Inventory/CanUseInventoryItemInstance__UCanUseInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool EquipEquipment(UCanUseInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 真正"穿上"一件装备：设置状态 + 调 GiveEquipment（武器挂 mesh / 防具换外观）

---

### 函数 `LoadEquipEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool LoadEquipEquipment(UInventoryItemInstance* InventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载已穿装备（不重新设置物品状态，直接走 GiveEquipment）

---

### 函数 `ChangeDefaultEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentType` | [EEquipmentType](../../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") void ChangeDefaultEquipment(EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 装备默认武器/防具（按 CharacterData.DefaultWeapon / DefaultArmor）

---

### 函数 `GiveEquipmentByWeaponID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WeaponID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool GiveEquipmentByWeaponID(FName WeaponID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按 ID 直接生成一件武器并装上

---

### 函数 `GiveEquipmentByArmorID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ArmorID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") bool GiveEquipmentByArmorID(FName ArmorID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按 ID 直接生成一件防具并装上

---

### 函数 `FindEquipmentByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Equipment" |
| 返回类型 | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentType` | [EEquipmentType](../../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Equipment") UInventoryItemInstance* FindEquipmentByType(EEquipmentType EquipmentType, EArmorType ArmorType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找已装备的物品（用于装新装备前卸下旧装备）

---

### 函数 `GiveWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Weapon" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void GiveWeapon(const FCharacterWeapon& InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把武器 StaticMesh 创建并挂到 CarryParentSocket

---

### 函数 `RemoveWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Weapon" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void RemoveWeapon(const FCharacterWeapon& InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 销毁武器 Mesh

---

### 函数 `HandWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Weapon" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void HandWeapon(const FCharacterWeapon& InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 武器切换到 HandParentSocket（手持）

---

### 函数 `PackUpWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Weapon" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | const [FCharacterWeapon](../../Struct/ItemStruct__FCharacterWeapon.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Weapon") void PackUpWeapon(const FCharacterWeapon& InWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 武器切换到 CarryParentSocket（收起）

---
