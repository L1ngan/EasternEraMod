# `struct` `FMartialArtsComprehendSlot`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 单个词条槽位的参悟预览（参悟前 vs 参悟后）

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") int32 Level = 0;` |

**Notes:**

> 槽位对应的武学等级

---

### Property `OldEntryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName OldEntryId;` |

**Notes:**

> 参悟前的词条 RowName

---

### Property `NewEntryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName NewEntryId;` |

**Notes:**

> 参悟后新抽的词条 RowName（无可换时回退为 OldEntryId）

---

### Property `bRolledBack`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") bool bRolledBack = false;` |

**Notes:**

> 是否已回溯（true=该槽改用旧词条 OldEntryId）

---
