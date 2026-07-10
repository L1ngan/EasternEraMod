# `struct` `FModOTestRuntimeRow`

**Source header:** `EastRimWorld/Tests/ModOverrideTestTypes.h`

---

## Functional description (from header comments)

> Mod O Test Runtime Row data structure.

## Blueprint-exposed variables

### Property `TemplateID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName TemplateID;` |

**Notes:**

> Template ID field.

---

### Property `Color`

| Field | Details |
|------|------|
| C++ type | [EModOTestColor](ModOverrideTestTypes__EModOTestColor.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EModOTestColor Color = EModOTestColor::Red;` |

**Notes:**

> Color field.

---

### Property `ColorList`

| Field | Details |
|------|------|
| C++ type | TArray<[EModOTestColor](ModOverrideTestTypes__EModOTestColor.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<EModOTestColor> ColorList;` |

**Notes:**

> Color List field.

---

### Property `ColorScores`

| Field | Details |
|------|------|
| C++ type | TMap<[EModOTestColor](ModOverrideTestTypes__EModOTestColor.md), int32> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<EModOTestColor, int32> ColorScores;` |

**Notes:**

> Color Scores field.

---

### Property `ColorItems`

| Field | Details |
|------|------|
| C++ type | TMap<[EModOTestColor](ModOverrideTestTypes__EModOTestColor.md), [FModOTestItem](ModOverrideTestTypes__FModOTestItem.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<EModOTestColor, FModOTestItem> ColorItems;` |

**Notes:**

> Color Items field.

---

### Property `Items`

| Field | Details |
|------|------|
| C++ type | TArray<[FModOTestItem](ModOverrideTestTypes__FModOTestItem.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FModOTestItem> Items;` |

**Notes:**

> Items field.

---
