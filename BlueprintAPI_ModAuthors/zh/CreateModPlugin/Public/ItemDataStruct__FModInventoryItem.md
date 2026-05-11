# `struct` `FModInventoryItem`

**源码头文件:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## 功能说明（来自头文件注释）

> 物品结构体

## 蓝图暴露变量

### 属性 `RobotID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FName RobotID;` |

**源码注释:**

> 物品为激活机关人相关时，对应创建的机关人ID

---

### 属性 `bSaveDrugEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") bool bSaveDrugEffect = false;` |

**源码注释:**

> 是否记录角色对该药品使用过的数量（和耐药性有关）

---

### 属性 `DrugResistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float DrugResistance = 0.f;` |

**源码注释:**

> 耐药性

---

### 属性 `AddAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TMap<FGameplayAttribute,float> AddAttribute;` |

**源码注释:**

> 增加属性

---

### 属性 `FuelConversionRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") float FuelConversionRatio = 0.f;` |

**源码注释:**

> 可作为燃料时的转化比

---

### 属性 `AddBuffByID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") TArray<FName> AddBuffByID;` |

**源码注释:**

> 使用这个物品后会添加的buff

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModItemType` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") EModItemType ItemType = EModItemType::None;` |

**源码注释:**

> 物品类型用于筛选和游戏中的互动

---

### 属性 `UseDescribte`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item") FText UseDescribte;` |

**源码注释:**

> 物品使用效果描述

---

### 属性 `FoodType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModFoodType` |
| 反射说明符 | BlueprintReadWrite, Category="Item" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=( editcondition="ItemType == EModItemType::Food" )) EModFoodType FoodType = EModFoodType::None;` |

**源码注释:**

> 食物类型

---
