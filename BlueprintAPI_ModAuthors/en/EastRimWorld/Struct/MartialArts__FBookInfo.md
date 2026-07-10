# `struct` `FBookInfo`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 书籍

## Blueprint-exposed variables

### Property `BookClassificationType`

| Field | Details |
|------|------|
| C++ type | [EBookClassificationType](MartialArts__EBookClassificationType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") EBookClassificationType BookClassificationType = EBookClassificationType::None;` |

**Notes:**

> 书籍分类

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") TMap<FGameplayAttribute,float> Attributes;` |

**Notes:**

> 需要的属性值

---

### Property `bCanReadRepeatedly`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") bool bCanReadRepeatedly = false;` |

**Notes:**

> 是否可以反复阅读(阅读完后是否可以再次阅读，阅读完以阅读时间为准)

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") int RealmLevel = 0;` |

**Notes:**

> 阅读需要的境界等级(最小境界)

---

### Property `ReadingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") float ReadingTime = 60.f;` |

**Notes:**

> 阅读时间

---

### Property `ReadAddExpAttribute`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") TMap<FGameplayAttribute,float> ReadAddExpAttribute;` |

**Notes:**

> 阅读后增加属性值

---

### Property `CopyTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") float CopyTime = 60.f;` |

**Notes:**

> 单次抄录完需要的时间

---

### Property `MaxCopyNum`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") int MaxCopyNum = 1;` |

**Notes:**

> 最大可复制(抄录)次数

---

### Property `UnlockFormulaID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="BookInfo" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BookInfo") FName UnlockFormulaID;` |

**Notes:**

> 解锁的配方 DT_FormulaData ID 字段

---
