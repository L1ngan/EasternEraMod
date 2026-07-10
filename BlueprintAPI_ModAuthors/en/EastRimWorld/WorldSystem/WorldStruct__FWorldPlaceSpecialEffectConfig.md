# `struct` `FWorldPlaceSpecialEffectConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 地点特殊效果配置（对应数据表行）；参数直接写在配置中，按效果类型使用对应字段即可

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") FText Name;` |

**Notes:**

> 显示名称

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") FText Description;` |

**Notes:**

> 说明

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 图标

---

### Property `EffectType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceSpecialEffectType](WorldStruct__EWorldPlaceSpecialEffectType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base") EWorldPlaceSpecialEffectType EffectType = EWorldPlaceSpecialEffectType::None;` |

**Notes:**

> 效果类型

---

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Base", meta = (DisplayName = "阵营ID", ClampMin = "0", ClampMax = "255")) int32 TeamId = 255;` |

**Notes:**

> 阵营 ID；仅对「添加阵营全局 Buff」等阵营相关效果有效。255 表示所有阵营，其他值表示指定阵营

---

### Property `IdParams`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Params" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Params", meta = (DisplayName = "ID 参数")) TArray<FName> IdParams;` |

**Notes:**

> ID 类参数（如阵营全局 Buff 的 BuffId，可配置多个）

---

### Property `NumericParams`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly, Category="Params" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Params", meta = (DisplayName = "数值参数")) TArray<float> NumericParams;` |

**Notes:**

> 数值类参数（如倍率、加成百分比、减免百分比等，可配置多个时按效果类型约定顺序使用）

---
