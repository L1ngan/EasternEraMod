# `struct` `FModSettingDef`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> One setting declared in ModInfo.json Settings.

## Blueprint-exposed variables

### Property `Key`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString Key;` |

**Notes:**

> Setting key (1-64 characters, must not start with __).

---

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EModSettingType](ModInfo__EModSettingType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EModSettingType Type = EModSettingType::Bool;` |

**Notes:**

> Value type.

---

### Property `Default`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString Default;` |

**Notes:**

> Default value as text, normalized for the type.

---

### Property `bHasMin`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bHasMin = false;` |

**Notes:**

> Whether Min is set.

---

### Property `Min`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) double Min = 0.0;` |

**Notes:**

> Lower bound for int/float (values are clamped).

---

### Property `bHasMax`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bHasMax = false;` |

**Notes:**

> Whether Max is set.

---

### Property `Max`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) double Max = 0.0;` |

**Notes:**

> Upper bound for int/float (values are clamped).

---

### Property `Step`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) double Step = 0.0;` |

**Notes:**

> Step for the settings panel (not used for validation).

---

### Property `Options`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> Options;` |

**Notes:**

> Allowed values for enum.

---

### Property `NameKey`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString NameKey;` |

**Notes:**

> String table key of the display name (for the settings panel).

---

### Property `DescKey`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString DescKey;` |

**Notes:**

> String table key of the description (for the settings panel).

---
