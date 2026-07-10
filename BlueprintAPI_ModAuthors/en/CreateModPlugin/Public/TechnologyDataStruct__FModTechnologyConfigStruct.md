# `struct` `FModTechnologyConfigStruct`

**Source header:** `CreateModPlugin/Public/TechnologyDataStruct.h`

---

## Functional description (from header comments)

> 科技配置表结构

## Blueprint-exposed variables

### Property `TechName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText TechName;` |

**Notes:**

> 科技名称

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> UI上显示的图标

---

### Property `Category`

| Field | Details |
|------|------|
| C++ type | [EModTechCategory](TechnologyDataStruct__EModTechCategory.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModTechCategory Category = EModTechCategory::Food;` |

**Notes:**

> 科技分类

---

### Property `DifficultyLevel`

| Field | Details |
|------|------|
| C++ type | [EModTechLevel](TechnologyDataStruct__EModTechLevel.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModTechLevel DifficultyLevel = EModTechLevel::Beginner;` |

**Notes:**

> 科技等级

---

### Property `PrevTechIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> PrevTechIds;` |

**Notes:**

> 前置科技ID

---

### Property `UnlockItemIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> UnlockItemIds;` |

**Notes:**

> 解锁物品

---

### Property `NeedTechPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[EModTechPointType](TechnologyDataStruct__EModTechPointType.md),int32> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModTechPointType,int32> NeedTechPoints;` |

**Notes:**

> 需要的科技点数

---

### Property `NeedResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int32> NeedResources;` |

**Notes:**

> 研究需要消耗的资源

---

### Property `NeedForceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 NeedForceLevel = 0;` |

**Notes:**

> 需要的势力等级

---

### Property `UIX`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 UIX { 0 };` |

**Notes:**

> 科技元素在UI上的位置X

---

### Property `UIY`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 UIY { 0 };` |

**Notes:**

> 科技元素在UI上的位置Y

---

### Property `TechDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText TechDesc;` |

**Notes:**

> 科技的描述文字（逐渐停用）

---

### Property `FormatItemTechDesc`

| Field | Details |
|------|------|
| C++ type | [FModFormatText](BaseDataStruct__FModFormatText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FModFormatText FormatItemTechDesc;` |

**Notes:**

> 科技的描述文字(格式化)

---

### Property `Enable`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool Enable = true;` |

**Notes:**

> 科技的是否开放可用

---
