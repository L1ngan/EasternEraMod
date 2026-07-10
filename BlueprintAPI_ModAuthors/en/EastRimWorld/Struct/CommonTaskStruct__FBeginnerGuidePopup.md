# `struct` `FBeginnerGuidePopup`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 新手引导弹窗配置结构

## Blueprint-exposed variables

### Property `Title`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Title;` |

**Notes:**

> 标题

---

### Property `Contents`

| Field | Details |
|------|------|
| C++ type | TArray<[FBeginnerGuidePopupContent](CommonTaskStruct__FBeginnerGuidePopupContent.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FBeginnerGuidePopupContent> Contents;` |

**Notes:**

> 弹窗内容

---
