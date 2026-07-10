# `struct` `FWikiUIConfig`

**Source header:** `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

---

## Functional description (from header comments)

> wiki结构表

## Blueprint-exposed variables

### Property `TitleText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FText TitleText;` |

**Notes:**

> 标题

---

### Property `ClassifyText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FText ClassifyText;` |

**Notes:**

> 分类

---

### Property `ContentText`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) TArray<FText> ContentText;` |

**Notes:**

> 内容

---

### Property `InfoIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UObject>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) TSoftObjectPtr<UObject> InfoIcon;` |

**Notes:**

> 内容图标

---

### Property `IconSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance) FVector2D IconSize = FVector2D::ZeroVector;` |

**Notes:**

> 内容图标

---
