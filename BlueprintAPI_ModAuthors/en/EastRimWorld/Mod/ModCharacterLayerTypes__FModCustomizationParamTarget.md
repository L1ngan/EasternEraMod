# `struct` `FModCustomizationParamTarget`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> 一个捏脸滑条改动的一个插件参数

## Blueprint-exposed variables

### Property `TargetType`

| Field | Details |
|------|------|
| C++ type | [EModCustomizationTargetType](ModCharacterLayerTypes__EModCustomizationTargetType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) EModCustomizationTargetType TargetType = EModCustomizationTargetType::MorphTarget;` |

---

### Property `ParameterName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParameterName;` |

**Notes:**

> 插件里的参数名（形变名、动画混合参数名或材质参数名）

---
