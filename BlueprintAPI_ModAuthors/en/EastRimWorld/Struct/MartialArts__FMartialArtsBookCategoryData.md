# `struct` `FMartialArtsBookCategoryData`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学书籍种类

## Blueprint-exposed variables

### Property `CategoryName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText CategoryName;` |

**Notes:**

> 种类名称

---

### Property `MartialArtsBooks`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") TArray<FName> MartialArtsBooks;` |

**Notes:**

> 包含的武学书籍

---

### Property `BookType`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsBookType](MartialArts__EMartialArtsBookType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsBookType BookType = EMartialArtsBookType::None;` |

**Notes:**

> 秘籍顶层类型（图鉴左侧顶层标签分组用）

---

### Property `BookQuality`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FName BookQuality;` |

**Notes:**

> 秘籍品质

---

### Property `CollectPrize`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FName CollectPrize;` |

**Notes:**

> 集齐奖励(称号ID)

---

### Property `BookDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FText BookDesc;` |

**Notes:**

> 秘籍介绍

---

### Property `Founder`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") FText Founder;` |

**Notes:**

> 祖师

---
