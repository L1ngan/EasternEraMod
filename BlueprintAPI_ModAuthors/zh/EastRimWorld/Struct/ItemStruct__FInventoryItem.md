# `struct` `FInventoryItem`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 物品结构体

## 蓝图暴露变量

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EItemType](CommonEnum__EItemType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") EItemType ItemType = EItemType::None;` |

**说明:**

> 物品类型用于筛选和游戏中的互动

---

### 属性 `UseDescribte`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FText UseDescribte;` |

**说明:**

> 物品使用效果描述

---

### 属性 `AddBuffByID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TArray<FName> AddBuffByID;` |

**说明:**

> 使用这个物品后会添加的buff

---

### 属性 `FoodType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EFoodType](ItemStruct__EFoodType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EItemType::Food" )) EFoodType FoodType = EFoodType::None;` |

**说明:**

> 食物类型

---

### 属性 `ConsumableID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EItemType::Consumable" )) FName ConsumableID;` |

**说明:**

> 物品为耗材时关联的耗材配置ID(DT_ConsumableData) 未配置则不会触发耗材使用(多个物品可共用一份耗材配置)

---

### 属性 `FuelConversionRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float FuelConversionRatio = 0.f;` |

**说明:**

> 可作为燃料时的转化比

---

### 属性 `AddAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TMap<FGameplayAttribute,float> AddAttribute;` |

**说明:**

> 增加属性

---

### 属性 `DrugResistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float DrugResistance = 0.f;` |

**说明:**

> 耐药性

---

### 属性 `bSaveDrugEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") bool bSaveDrugEffect = false;` |

**说明:**

> 是否记录角色对该药品使用过的数量（和耐药性有关）

---

### 属性 `RobotID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FName RobotID;` |

**说明:**

> 物品为激活机关人相关时，对应创建的机关人ID

---

### 属性 `bIsFragment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Item|Fragment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Fragment") bool bIsFragment = false;` |

**说明:**

> 是否为武学残卷(残卷=可收集物品EItemType::Materials, 集齐N张合成完本书)。供UI归类/进度统计/合成判定

---

### 属性 `FragmentTargetBookID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Item|Fragment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item|Fragment", meta=(EditCondition="bIsFragment")) FName FragmentTargetBookID;` |

**说明:**

> 残卷的目标完本书ID(指向 DT_MartialArtsBookData 的完本书行)。收集进度按此聚合。
> 注意: 必须填完本书 RowName(S_*_Moves / A_*_Internal), 绝不能填 DT_MartialArtsBookCategory 数组里的 BM_*/Category_*,
> 否则合成产出的是无层级的基础招式版而非完整武学。残卷张数/编号不冗余在此, 单一数据源在配方表 DT_MartialArtsFragmentRecipe。

---
