# `struct` `FMartialArtsComprehendSession`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 当前的参悟会话（瞬态，不存档；确认/取消后清空）

## Blueprint-exposed variables

### Property `bActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") bool bActive = false;` |

**Notes:**

> 是否有进行中的参悟会话

---

### Property `MartialArtsLearnDataMapKey`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") FName MartialArtsLearnDataMapKey;` |

**Notes:**

> 本次参悟的武学（MartialArtsLearnData 的 TMap 键）

---

### Property `Slots`

| Field | Details |
|------|------|
| C++ type | TArray<[FMartialArtsComprehendSlot](MartialArts__FMartialArtsComprehendSlot.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArts|参悟" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "MartialArts|参悟") TArray<FMartialArtsComprehendSlot> Slots;` |

**Notes:**

> 每个词条槽位的前后对比

---
