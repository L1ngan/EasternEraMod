# `struct` `FModFormatText`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> 可替换文本结构

## Blueprint-exposed variables

### Property `TextMain`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TextMain;` |

**Source comments:**

> 主文本

---

### Property `TextParams`

| Field | Details |
|------|------|
| C++ type | `TMap<FString, FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FString, FText> TextParams;` |

**Source comments:**

> 替换变量文本

---
