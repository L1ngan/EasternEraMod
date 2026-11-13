# `struct` `FModHairstyleSlotConfig`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> 开放给 Mod 的发型槽（头发、胡子各一个），按发型数据资产的类区分

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;` |

---

### Property `HairstyleClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UObject>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<UObject> HairstyleClass;` |

**Notes:**

> 这个槽的发型数据资产类（插件的 BP_CDA_Hairstyle 子类）

---

### Property `bAllowEmpty`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowEmpty = false;` |

**Notes:**

> 是否允许留空（如胡子）

---
