# `struct` `FPassGameConditionDescribe`

**Source header:** `EastRimWorld/Struct/ForceStruct.h`

---

## Functional description (from header comments)

> 通关条件表结构体

## Blueprint-exposed variables

### Property `PassGameName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText PassGameName;` |

**Notes:**

> 通关条件名称

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 图标

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText Describe;` |

**Notes:**

> 通关条件描述

---

### Property `OpenConditions`

| Field | Details |
|------|------|
| C++ type | TMap<[ECondType](ConditionStruct__ECondType.md),[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> OpenConditions;` |

**Notes:**

> 开启条件

---

### Property `PassConditions`

| Field | Details |
|------|------|
| C++ type | TMap<[ECondType](ConditionStruct__ECondType.md),[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> PassConditions;` |

**Notes:**

> 通关条件

---
