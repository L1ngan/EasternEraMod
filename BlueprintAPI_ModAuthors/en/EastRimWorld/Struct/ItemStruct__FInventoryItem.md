# `struct` `FInventoryItem`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 物品结构体

## Blueprint-exposed variables

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EItemType](CommonEnum__EItemType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") EItemType ItemType = EItemType::None;` |

**Notes:**

> 物品类型用于筛选和游戏中的互动

---

### Property `UseDescribte`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FText UseDescribte;` |

**Notes:**

> 物品使用效果描述

---

### Property `AddBuffByID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TArray<FName> AddBuffByID;` |

**Notes:**

> 使用这个物品后会添加的buff

---

### Property `FoodType`

| Field | Details |
|------|------|
| C++ type | [EFoodType](ItemStruct__EFoodType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EItemType::Food" )) EFoodType FoodType = EFoodType::None;` |

**Notes:**

> 食物类型

---

### Property `ConsumableID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EItemType::Consumable" )) FName ConsumableID;` |

**Notes:**

> 物品为耗材时关联的耗材配置ID(DT_ConsumableData) 未配置则不会触发耗材使用(多个物品可共用一份耗材配置)

---

### Property `FuelConversionRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float FuelConversionRatio = 0.f;` |

**Notes:**

> 可作为燃料时的转化比

---

### Property `AddAttribute`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TMap<FGameplayAttribute,float> AddAttribute;` |

**Notes:**

> 增加属性

---

### Property `DrugResistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float DrugResistance = 0.f;` |

**Notes:**

> 耐药性

---

### Property `bSaveDrugEffect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") bool bSaveDrugEffect = false;` |

**Notes:**

> 是否记录角色对该药品使用过的数量（和耐药性有关）

---

### Property `RobotID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FName RobotID;` |

**Notes:**

> 物品为激活机关人相关时，对应创建的机关人ID

---

### Property `bIsFragment`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Item|Fragment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Fragment") bool bIsFragment = false;` |

**Notes:**

> 是否为武学残卷(残卷=可收集物品EItemType::Materials, 集齐N张合成完本书)。供UI归类/进度统计/合成判定

---

### Property `FragmentTargetBookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Item|Fragment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Fragment", meta=(EditCondition="bIsFragment")) FName FragmentTargetBookID;` |

**Notes:**

> 残卷的目标完本书ID(指向 DT_MartialArtsBookData 的完本书行)。收集进度按此聚合。
> 注意: 必须填完本书 RowName(S_*_Moves / A_*_Internal), 绝不能填 DT_MartialArtsBookCategory 数组里的 BM_*/Category_*,
> 否则合成产出的是无层级的基础招式版而非完整武学。残卷张数/编号不冗余在此, 单一数据源在配方表 DT_MartialArtsFragmentRecipe。

---
