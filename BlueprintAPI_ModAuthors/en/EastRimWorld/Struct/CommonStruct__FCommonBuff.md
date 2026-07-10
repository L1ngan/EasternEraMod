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

**Notes:**

> BUFF名称

---

### Property `BuffClassifyTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer BuffClassifyTag;` |

**Notes:**

> BUFF分类Tag

---

### Property `ActivateMastHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastHaveTags;` |

**Notes:**

> BUFF激活需要的标签

---

### Property `ActivateMastNotHaveTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGameplayTagContainer ActivateMastNotHaveTags;` |

**Notes:**

> BUFF激活不能有的标签

---

### Property `BuffIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TSoftObjectPtr<UTexture2D> BuffIcon;` |

**Notes:**

> BUFF图标

---

### Property `bShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") bool bShow;` |

**Notes:**

> BUFF展示

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FText Describe;` |

**Notes:**

> BUFF描述

---

### Property `FormatDescribe`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CommonBuff") FFormatText FormatDescribe;` |

**Notes:**

> 格式化的 BUFF描述

---

### Property `IsShowFormatOrAttributes`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Characteristic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Characteristic") bool IsShowFormatOrAttributes = false;` |

**Notes:**

> 显示格式化描述还是属性描述 true 格式化描述 false 属性描述

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") int Priority;` |

**Notes:**

> BUFF的优先级 越大优先级越高

---

### Property `Quality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EItemQuality Quality = EItemQuality::None;` |

**Notes:**

> 品质

---

### Property `DurationType`

| Field | Details |
|------|------|
| C++ type | [EBuffType](CommonStruct__EBuffType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") EBuffType DurationType = EBuffType::ForEver;` |

**Notes:**

> buff持续时间类型

---

### Property `Duration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") float Duration;` |

**Notes:**

> 持续时间 秒数

---

### Property `GameplayEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;` |

**Notes:**

> 效果Ge

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") TMap<FGameplayAttribute,float> Attributes;` |

**Notes:**

> 效果中包含的属性

---

### Property `GameplayTagContainer`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "CommonBuff") FGameplayTagContainer GameplayTagContainer;` |

**Notes:**

> 为自身添加的tag

---

### Property `ConflictBuffID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") TArray<FName> ConflictBuffID;` |

**Notes:**

> 冲突的buff ID

---

### Property `NumberOfSuperpositions`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "CommonBuff") int NumberOfSuperpositions = 1;` |

**Notes:**

> 相同的buff可叠加的次数 0 是无限制 1 默认

---

### Property `OriginGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") FGuid OriginGuid;` |

**Notes:**

> 来源

---

### Property `OriginType`

| Field | Details |
|------|------|
| C++ type | [EBuffOriginType](CommonStruct__EBuffOriginType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "CommonBuff") EBuffOriginType OriginType = EBuffOriginType::None;` |

**Notes:**

> 来源类型

---

### Property `BuffGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") FGuid BuffGuid;` |

**Notes:**

> 每个buff独立的guid

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonConditionType](../ERW_Enumerations__ECommonConditionType.md) , [FConditions](../ERW_CommonTypes__FConditions.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CommonBuff") TMap<ECommonConditionType , FConditions> Conditions;` |

**Notes:**

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

**Notes:**

> buff在施加GE时显示的提示 与GE 一一对应

---

### Property `bIsActivated`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "CommonBuff") bool bIsActivated = false;` |

**Notes:**

> 当前buff的激活状态

---

### Property `bSave`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CommonBuff" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "CommonBuff") bool bSave;` |

**Notes:**

> Boolean flag indicating whether Save is enabled or true.

---
