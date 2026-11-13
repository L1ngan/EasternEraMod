# `struct` `FModHairstyleOption`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> GetCharacterHairstyles 的返回项

## Blueprint-exposed variables

### Property `HairstyleId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString HairstyleId;` |

**Notes:**

> 发型 ID（发型数据资产路径），传给 SetCharacterHairstyle

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText DisplayName;` |

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UTexture2D> Icon = nullptr;` |

---
