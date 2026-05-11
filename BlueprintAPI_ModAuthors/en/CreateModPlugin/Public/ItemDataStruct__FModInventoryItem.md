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

**Source comments:**

> 物品为激活机关人相关时，对应创建的机关人ID

---

### Property `bSaveDrugEffect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") bool bSaveDrugEffect = false;` |

**Source comments:**

> 是否记录角色对该药品使用过的数量（和耐药性有关）

---

### Property `DrugResistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float DrugResistance = 0.f;` |

**Source comments:**

> 耐药性

---

### Property `AddAttribute`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TMap<FGameplayAttribute,float> AddAttribute;` |

**Source comments:**

> 增加属性

---

### Property `FuelConversionRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float FuelConversionRatio = 0.f;` |

**Source comments:**

> 可作为燃料时的转化比

---

### Property `AddBuffByID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TArray<FName> AddBuffByID;` |

**Source comments:**

> 使用这个物品后会添加的buff

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | `EModItemType` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") EModItemType ItemType = EModItemType::None;` |

**Source comments:**

> 物品类型用于筛选和游戏中的互动

---

### Property `UseDescribte`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FText UseDescribte;` |

**Source comments:**

> 物品使用效果描述

---

### Property `FoodType`

| Field | Details |
|------|------|
| C++ type | `EModFoodType` |
| Reflection specifiers | BlueprintReadWrite, Category="Item" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EModItemType::Food" )) EModFoodType FoodType = EModFoodType::None;` |

**Source comments:**

> 食物类型

---
