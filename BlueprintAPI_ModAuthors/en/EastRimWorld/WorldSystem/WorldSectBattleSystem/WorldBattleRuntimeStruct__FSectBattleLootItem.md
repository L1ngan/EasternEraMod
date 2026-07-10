# `struct` `FSectBattleLootItem`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战拾取的战利品（队伍共享）。一条 = 一种物品（同 id 累加数量）。供 UI 展示战利品/背包列表。

## Blueprint-exposed variables

### Property `ItemId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName ItemId;` |

**Notes:**

> 物品 id

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EGroundInventoryType ItemType = EGroundInventoryType::None;` |

**Notes:**

> 物品类型（决定查哪张物品表）

---

### Property `Num`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 Num = 0;` |

**Notes:**

> 数量（同 id 拾取时累加）

---

### Property `ItemName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText ItemName;` |

**Notes:**

> 名字

---

### Property `ItemDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText ItemDescription;` |

**Notes:**

> 描述

---

### Property `ItemIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TSoftObjectPtr<UTexture2D> ItemIcon;` |

**Notes:**

> 图标

---

### Property `ItemQuality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EItemQuality ItemQuality = EItemQuality::None;` |

**Notes:**

> 品质

---

### Property `ItemGrade`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText ItemGrade;` |

**Notes:**

> 品阶

---
