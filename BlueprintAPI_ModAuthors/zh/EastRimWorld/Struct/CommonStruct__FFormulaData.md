# `struct` `FFormulaData`

**源码头文件:** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> 配方

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText Name;` |

**说明:**

> 配方名称

---

### 属性 `ActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName ActionID;` |

**说明:**

> 对应GOAP Action的ID

---

### 属性 `StartActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName StartActionID;` |

**说明:**

> 如果建筑物是自动制造 开始action

---

### 属性 `GoalID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName GoalID;` |

**说明:**

> 对应GOAP目标的ID 如果是自动制造 只用于搬运资源动态创建action，否则创建制造action和搬运action都使用

---

### 属性 `FormulaIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> FormulaIcon;` |

**说明:**

> 配方在UI上显示的图标

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText Description;` |

**说明:**

> 在UI上显示的文字描述

---

### 属性 `FormatDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FFormatText FormatDescription;` |

**说明:**

> 格式化后的描述

---

### 属性 `RequiredAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,int>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute,int> RequiredAttributes;` |

**说明:**

> 需要的属性值

---

### 属性 `ConsumingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ConsumingTime = 0.f;` |

**说明:**

> 耗时（界面显示使用，不参与实际功能）

---

### 属性 `NecessityConsumingResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> NecessityConsumingResource;` |

**说明:**

> 必须消耗的资源

---

### 属性 `SelectableResourceNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SelectableResourceNumber = 0;` |

**说明:**

> 总共需要的可选资源数量

---

### 属性 `SelectableResourceTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTag SelectableResourceTag;` |

**说明:**

> 可选的资源标签

---

### 属性 `SelectableTypeNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SelectableTypeNumber = 1;` |

**说明:**

> 最多可选择的种类数量

---

### 属性 `OutputResourceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EGroundInventoryType OutputResourceType = EGroundInventoryType::None;` |

**说明:**

> 产出的资源类型

---

### 属性 `OutputItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName OutputItemID;` |

**说明:**

> 产出的ID 根据产出的类型不同查询不同的表 （NormalItem：道具表，装备：DT_FabricateEquipmentData）

---

### 属性 `OutputItemNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int OutputItemNumber = 1;` |

**说明:**

> 产出的数量

---

### 属性 `AddToMakerAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute,float> AddToMakerAttributes;` |

**说明:**

> 制造完成后给制造者添加的属性 获得的经验

---

### 属性 `bNeedPeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bNeedPeople = true;` |

**说明:**

> 是否需要人提供工作量

---

### 属性 `RequiredWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float RequiredWorkload = 0.f;` |

**说明:**

> 需要的工作量 （在制造装备时会用于品质值相乘得出最终品质）

---

### 属性 `GameplayTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTag GameplayTag;` |

**说明:**

> 产出物品所属的分组，用于检查库存

---

### 属性 `BuildingID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName BuildingID;` |

**说明:**

> 关联的建筑物ID 在什么建筑物上可以使用这个配方

---

### 属性 `CommonButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ECommonButtonType CommonButtonType = ECommonButtonType::None;` |

**说明:**

> 关联的建筑物上个按钮类型 建筑物点击不同的按钮

---

### 属性 `GameplayTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTagContainer GameplayTags;` |

**说明:**

> 解锁需要的物品大类

---

### 属性 `CanUnlockByItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool CanUnlockByItem = false;` |

**说明:**

> 是否可以通过获取物品解锁配方

---

### 属性 `UnlockItemTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FGameplayTag> UnlockItemTags;` |

**说明:**

> 解锁必须要获取的物品的TAG（满足任意一，就可以解锁）

---

### 属性 `UnlockItemDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText UnlockItemDesc;` |

**说明:**

> 解锁必须要获取的物品描述内容

---

### 属性 `FormatUnlockItemDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FFormatText FormatUnlockItemDesc;` |

**说明:**

> 格式化的解锁必须要获取的物品描述内容

---

### 属性 `bIsUnLock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool bIsUnLock = false;` |

**说明:**

> 配方是否可以使用

---
