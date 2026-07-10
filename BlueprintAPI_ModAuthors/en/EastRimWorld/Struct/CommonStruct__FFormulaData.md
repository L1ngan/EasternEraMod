# `struct` `FFormulaData`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> 配方

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText Name;` |

**Notes:**

> 配方名称

---

### Property `ActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName ActionID;` |

**Notes:**

> 对应GOAP Action的ID

---

### Property `StartActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName StartActionID;` |

**Notes:**

> 如果建筑物是自动制造 开始action

---

### Property `GoalID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName GoalID;` |

**Notes:**

> 对应GOAP目标的ID 如果是自动制造 只用于搬运资源动态创建action，否则创建制造action和搬运action都使用

---

### Property `FormulaIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> FormulaIcon;` |

**Notes:**

> 配方在UI上显示的图标

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText Description;` |

**Notes:**

> 在UI上显示的文字描述

---

### Property `FormatDescription`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FFormatText FormatDescription;` |

**Notes:**

> 格式化后的描述

---

### Property `RequiredAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,int>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute,int> RequiredAttributes;` |

**Notes:**

> 需要的属性值

---

### Property `ConsumingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ConsumingTime = 0.f;` |

**Notes:**

> 耗时（界面显示使用，不参与实际功能）

---

### Property `NecessityConsumingResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int> NecessityConsumingResource;` |

**Notes:**

> 必须消耗的资源

---

### Property `SelectableResourceNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SelectableResourceNumber = 0;` |

**Notes:**

> 总共需要的可选资源数量

---

### Property `SelectableResourceTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTag SelectableResourceTag;` |

**Notes:**

> 可选的资源标签

---

### Property `SelectableTypeNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SelectableTypeNumber = 1;` |

**Notes:**

> 最多可选择的种类数量

---

### Property `OutputResourceType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EGroundInventoryType OutputResourceType = EGroundInventoryType::None;` |

**Notes:**

> 产出的资源类型

---

### Property `OutputItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName OutputItemID;` |

**Notes:**

> 产出的ID 根据产出的类型不同查询不同的表 （NormalItem：道具表，装备：DT_FabricateEquipmentData）

---

### Property `OutputItemNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int OutputItemNumber = 1;` |

**Notes:**

> 产出的数量

---

### Property `AddToMakerAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute,float> AddToMakerAttributes;` |

**Notes:**

> 制造完成后给制造者添加的属性 获得的经验

---

### Property `bNeedPeople`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bNeedPeople = true;` |

**Notes:**

> 是否需要人提供工作量

---

### Property `RequiredWorkload`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float RequiredWorkload = 0.f;` |

**Notes:**

> 需要的工作量 （在制造装备时会用于品质值相乘得出最终品质）

---

### Property `GameplayTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTag GameplayTag;` |

**Notes:**

> 产出物品所属的分组，用于检查库存

---

### Property `BuildingID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName BuildingID;` |

**Notes:**

> 关联的建筑物ID 在什么建筑物上可以使用这个配方

---

### Property `CommonButtonType`

| Field | Details |
|------|------|
| C++ type | [ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ECommonButtonType CommonButtonType = ECommonButtonType::None;` |

**Notes:**

> 关联的建筑物上个按钮类型 建筑物点击不同的按钮

---

### Property `GameplayTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FGameplayTagContainer GameplayTags;` |

**Notes:**

> 解锁需要的物品大类

---

### Property `CanUnlockByItem`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool CanUnlockByItem = false;` |

**Notes:**

> 是否可以通过获取物品解锁配方

---

### Property `UnlockItemTags`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FGameplayTag> UnlockItemTags;` |

**Notes:**

> 解锁必须要获取的物品的TAG（满足任意一，就可以解锁）

---

### Property `UnlockItemDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText UnlockItemDesc;` |

**Notes:**

> 解锁必须要获取的物品描述内容

---

### Property `FormatUnlockItemDesc`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FFormatText FormatUnlockItemDesc;` |

**Notes:**

> 格式化的解锁必须要获取的物品描述内容

---

### Property `bIsUnLock`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool bIsUnLock = false;` |

**Notes:**

> 配方是否可以使用

---
