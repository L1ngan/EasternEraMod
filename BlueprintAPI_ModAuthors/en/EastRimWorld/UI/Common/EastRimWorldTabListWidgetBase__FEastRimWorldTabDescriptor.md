# `struct` `FEastRimWorldTabDescriptor`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TabId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TabId;` |

---

### Property `TabText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TabText;` |

---

### Property `IconBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconBrush;` |

---

### Property `IconHorverBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconHorverBrush;` |

---

### Property `IconSelectedBrush`

| Field | Details |
|------|------|
| C++ type | `FSlateBrush` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconSelectedBrush;` |

---

### Property `bHidden`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHidden;` |

---

### Property `TabButtonType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UCommonButtonBase>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonButtonBase> TabButtonType;` |

---

### Property `TabContentType`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UCommonUserWidget>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCommonUserWidget> TabContentType;` |

**Source comments:**

> TODO NDarnell - This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction.

---

### Property `CreatedTabContentWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidget>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(Transient) TObjectPtr<UWidget> CreatedTabContentWidget;` |

---
