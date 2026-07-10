# `struct` `FModInventoryItem`

**Source header:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## Functional description (from header comments)

> 物品结构体

## Blueprint-exposed variables

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

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EModItemType](ItemDataStruct__EModItemType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") EModItemType ItemType = EModItemType::None;` |

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

### Property `FoodType`

| Field | Details |
|------|------|
| C++ type | [EModFoodType](ItemDataStruct__EModFoodType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EModItemType::Food" )) EModFoodType FoodType = EModFoodType::None;` |

**Notes:**

> 食物类型

---
