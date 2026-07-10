# `struct` `FModFormulaData`

**Source header:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## Functional description (from header comments)

> Mod 配方数据结构

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

> 对应GOAP目标的ID

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
| C++ type | `TMap<FGameplayAttribute, int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute, int32> RequiredAttributes;` |

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
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName, int32> NecessityConsumingResource;` |

**Notes:**

> 必须消耗的资源

---

### Property `SelectableResourceNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 SelectableResourceNumber = 0;` |

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
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 SelectableTypeNumber = 1;` |

**Notes:**

> 最多可选择的种类数量

---

### Property `OutputResourceType`

| Field | Details |
|------|------|
| C++ type | [EModGroundInventoryType](BaseDataStruct__EModGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModGroundInventoryType OutputResourceType = EModGroundInventoryType::None;` |

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

> 产出的ID

---

### Property `OutputItemNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 OutputItemNumber = 1;` |

**Notes:**

> 产出的数量

---

### Property `AddToMakerAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute, float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayAttribute, float> AddToMakerAttributes;` |

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

> 需要的工作量

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

> 关联的建筑物ID

---

### Property `CommonButtonType`

| Field | Details |
|------|------|
| C++ type | [EModCommonButtonType](EquipmentDataStruct__EModCommonButtonType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModCommonButtonType CommonButtonType = EModCommonButtonType::None;` |

**Notes:**

> 关联的建筑物上个按钮类型

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
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool CanUnlockByItem = false;` |

**Notes:**

> 是否可以通过获取物品解锁配方

---

### Property `UnlockItemTags`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGameplayTag> UnlockItemTags;` |

**Notes:**

> 解锁必须要获取的物品的TAG（满足任意一，就可以解锁）

---

### Property `UnlockItemDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText UnlockItemDesc;` |

**Notes:**

> 解锁必须要获取的物品描述内容

---

### Property `FormatUnlockItemDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI") FText FormatUnlockItemDesc;` |

**Notes:**

> 格式化的解锁必须要获取的物品描述内容

---

### Property `bIsUnLock`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsUnLock = false;` |

**Notes:**

> 配方是否可以使用

---

### Property `Comment`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FString Comment;` |

**Notes:**

> Comment

---
