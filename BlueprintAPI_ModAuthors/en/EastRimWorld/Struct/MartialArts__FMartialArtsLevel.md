# `struct` `FMartialArtsLevel`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学等级

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") int Level = 0;` |

**Source comments:**

> 等级

---

### Property `MartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<FName> MartialArtsEntries;` |

**Source comments:**

> 词条属性 关联MartialArtsEntries 配置

---

### Property `EntriesDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText EntriesDescribe;` |

**Source comments:**

> 词条属性描述

---

### Property `FormatEntriesDescribe`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FFormatText FormatEntriesDescribe;` |

**Source comments:**

> 词条属性描述（格式化文本）

---

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText LevelName;` |

**Source comments:**

> 等级名字

---

### Property `DescribeTag`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<FGameplayTag> DescribeTag;` |

**Source comments:**

> 描述中的详细标签 顺序取值

---

### Property `DescribeValue`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<float> DescribeValue;` |

**Source comments:**

> 描述中的详细数值 顺序取值

---
