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

**Source comments:**

> 通关条件名称

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> Icon;` |

**Source comments:**

> 图标

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText Describe;` |

**Source comments:**

> 通关条件描述

---

### Property `OpenConditions`

| Field | Details |
|------|------|
| C++ type | TMap<ECondType,[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> OpenConditions;` |

**Source comments:**

> 开启条件

---

### Property `PassConditions`

| Field | Details |
|------|------|
| C++ type | TMap<ECondType,[FCompareCondition](ConditionStruct__FCompareCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<ECondType,FCompareCondition> PassConditions;` |

**Source comments:**

> 通关条件

---
