# `struct` `FModCustomizationParamConfig`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> 开放给 Mod 的捏脸滑条（照官方宗门时装界面的滑条配置）

## Blueprint-exposed variables

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

**Notes:**

> 滑条 ID，Mod 用它读写

---

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;` |

---

### Property `Category`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName Category;` |

**Notes:**

> 分组，如 Body / Face / Eyes / Skin

---

### Property `MinValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinValue = 0.f;` |

---

### Property `MaxValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxValue = 1.f;` |

---

### Property `DefaultValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) float DefaultValue = 0.f;` |

---

### Property `Targets`

| Field | Details |
|------|------|
| C++ type | TArray<[FModCustomizationParamTarget](ModCharacterLayerTypes__FModCustomizationParamTarget.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FModCustomizationParamTarget> Targets;` |

**Notes:**

> 一个滑条可同时改多个参数（如年龄同时改动画混合、形变和皮肤）；读值取第一个

---
