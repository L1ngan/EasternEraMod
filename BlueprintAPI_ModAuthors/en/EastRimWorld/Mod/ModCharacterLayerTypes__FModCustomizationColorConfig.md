# `struct` `FModCustomizationColorConfig`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> 开放给 Mod 的颜色参数（照官方宗门时装界面的取色器配置）

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

### Property `Target`

| Field | Details |
|------|------|
| C++ type | [EModCustomizationColorTarget](ModCharacterLayerTypes__EModCustomizationColorTarget.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) EModCustomizationColorTarget Target = EModCustomizationColorTarget::Skin;` |

---

### Property `ParameterName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParameterName;` |

**Notes:**

> 插件里的材质参数名

---
