# `struct` `FModOTestModRow`

**Source header:** `EastRimWorld/Tests/ModOverrideTestTypes.h`

---

## Functional description (from header comments)

> Mod O Test Mod Row data structure.

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
| C++ type | [EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EModOTestModColor Color = EModOTestModColor::Red;` |

**Notes:**

> Color field.

---

### Property `ColorList`

| Field | Details |
|------|------|
| C++ type | TArray<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<EModOTestModColor> ColorList;` |

**Notes:**

> Color List field.

---

### Property `ColorScores`

| Field | Details |
|------|------|
| C++ type | TMap<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md), int32> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<EModOTestModColor, int32> ColorScores;` |

**Notes:**

> Color Scores field.

---

### Property `ColorItems`

| Field | Details |
|------|------|
| C++ type | TMap<[EModOTestModColor](ModOverrideTestTypes__EModOTestModColor.md), [FModOTestModItem](ModOverrideTestTypes__FModOTestModItem.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<EModOTestModColor, FModOTestModItem> ColorItems;` |

**Notes:**

> Color Items field.

---

### Property `Items`

| Field | Details |
|------|------|
| C++ type | TArray<[FModOTestModItem](ModOverrideTestTypes__FModOTestModItem.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FModOTestModItem> Items;` |

**Notes:**

> Items field.

---
