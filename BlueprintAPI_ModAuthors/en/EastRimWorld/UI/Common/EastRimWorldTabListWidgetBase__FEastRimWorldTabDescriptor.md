# `struct` `FEastRimWorldTabDescriptor`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

---

## Functional description (from header comments)

> East Rim World Tab Descriptor data structure.

## Blueprint-exposed variables

### Property `TabId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TabId;` |

**Notes:**

> Tab Id field.

---

### Property `TabText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TabText;` |

**Notes:**

> Tab Text field.

---

### Property `IconBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconBrush;` |

**Notes:**

> Icon Brush field.

---

### Property `IconHorverBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconHorverBrush;` |

**Notes:**

> Icon Horver Brush field.

---

### Property `IconSelectedBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconSelectedBrush;` |

**Notes:**

> Icon Selected Brush field.

---

### Property `bHidden`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHidden;` |

**Notes:**

> Boolean flag indicating whether Hidden is enabled or true.

---

### Property `TabButtonType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UCommonButtonBase>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonButtonBase> TabButtonType;` |

**Notes:**

> Tab Button Type field.

---

### Property `TabContentType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UCommonUserWidget>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonUserWidget> TabContentType;` |

**Notes:**

> TODO NDarnell - This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction.

---

### Property `CreatedTabContentWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidget>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(Transient) TObjectPtr<UWidget> CreatedTabContentWidget;` |

**Notes:**

> Executes the Created Tab Content Widget operation.

---
