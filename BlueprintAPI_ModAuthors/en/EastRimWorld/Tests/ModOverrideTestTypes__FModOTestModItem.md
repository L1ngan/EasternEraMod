# `struct` `FModOTestModItem`

**Source header:** `EastRimWorld/Tests/ModOverrideTestTypes.h`

---

## Functional description (from header comments)

> Mod O Test Mod Item data structure.

## Blueprint-exposed variables

### Property `Id`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName Id;` |

**Notes:**

> Id field.

---

### Property `Value`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 Value = 0;` |

**Notes:**

> Value field.

---

### Property `ExtraField`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float ExtraField = 0.f;` |

**Notes:**

> Mod 多出来的字段，Runtime 没有对应字段时应被忽略而不是报错

---
