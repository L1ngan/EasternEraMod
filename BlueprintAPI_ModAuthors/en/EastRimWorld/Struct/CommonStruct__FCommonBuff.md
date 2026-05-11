# `struct` `FCommonBuff`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

## Functional description (from header comments)

> 通用BUFF

## Blueprint-exposed variables

### Property `BuffName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FText BuffName;` |

**Source comments:**

> BUFF名称

---

### Property `BuffClassifyTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer BuffClassifyTag;` |

**Source comments:**

> BUFF分类Tag

---

### Property `ActivateMastHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastHaveTags;` |

**Source comments:**

> BUFF激活需要的标签

---

### Property `ActivateMastNotHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastNotHaveTags;` |

**Source comments:**

> BUFF激活不能有的标签

---

### Property `BuffIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TSoftObjectPtr<UTexture2D> BuffIcon;` |

**Source comments:**

> BUFF图标

---

### Property `bShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") bool bShow;` |

**Source comments:**

> BUFF展示

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FText Describe;` |

**Source comments:**

> BUFF描述

---

### Property `FormatDescribe`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CommonBuff") FFormatText FormatDescribe;` |

**Source comments:**

> 格式化的 BUFF描述

---

### Property `IsShowFormatOrAttributes`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Characteristic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic") bool IsShowFormatOrAttributes = false;` |

**Source comments:**

> 显示格式化描述还是属性描述 true 格式化描述 false 属性描述

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") int Priority;` |

**Source comments:**

> BUFF的优先级 越大优先级越高

---

### Property `Quality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EItemQuality Quality = EItemQuality::None;` |

**Source comments:**

> 品质

---

### Property `DurationType`

| Field | Details |
|------|------|
| C++ type | `EBuffType` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EBuffType DurationType = EBuffType::ForEver;` |

**Source comments:**

> buff持续时间类型

---

### Property `Duration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") float Duration;` |

**Source comments:**

> 持续时间 秒数

---

### Property `GameplayEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;` |

**Source comments:**

> 效果Ge

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") TMap<FGameplayAttribute,float> Attributes;` |

**Source comments:**

> 效果中包含的属性

---

### Property `GameplayTagContainer`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") FGameplayTagContainer GameplayTagContainer;` |

**Source comments:**

> 为自身添加的tag

---

### Property `ConflictBuffID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") TArray<FName> ConflictBuffID;` |

**Source comments:**

> 冲突的buff ID

---

### Property `NumberOfSuperpositions`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "CommonBuff") int NumberOfSuperpositions = 1;` |

**Source comments:**

> 相同的buff可叠加的次数 0 是无限制 1 默认

---

### Property `OriginGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") FGuid OriginGuid;` |

**Source comments:**

> 来源

---

### Property `OriginType`

| Field | Details |
|------|------|
| C++ type | `EBuffOriginType` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") EBuffOriginType OriginType = EBuffOriginType::None;` |

**Source comments:**

> 来源类型

---

### Property `BuffGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGuid BuffGuid;` |

**Source comments:**

> 每个buff独立的guid

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TMap<ECommonConditionType , [FConditions](../ERW_CommonTypes__FConditions.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TMap<ECommonConditionType , FConditions> Conditions;` |

**Source comments:**

> 效果满足条件
> TMap<条件类型 , 条件>

---

### Property `GameplayEffectText`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TArray<FText> GameplayEffectText;` |

**Source comments:**

> buff在施加GE时显示的提示 与GE 一一对应

---

### Property `bIsActivated`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") bool bIsActivated = false;` |

**Source comments:**

> 当前buff的激活状态

---

### Property `bSave`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "CommonBuff") bool bSave;` |

---
