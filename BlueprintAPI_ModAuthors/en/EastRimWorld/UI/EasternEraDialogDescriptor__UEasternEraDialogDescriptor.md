# `class` `UEasternEraDialogDescriptor`

**Source header:** `EastRimWorld/UI/EasternEraDialogDescriptor.h`

---

## Functional description (from header comments)

> Eastern Era Dialog Descriptor UObject type.

## Blueprint-exposed variables

### Property `ObjectParams`

| Field | Details |
|------|------|
| C++ type | `TArray<UObject*>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TArray<UObject*> ObjectParams;` |

**Notes:**

> Object Params field.

---

### Property `StringParams`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TArray<FString> StringParams;` |

**Notes:**

> String Params field.

---

## Blueprint-exposed functions

### Function `CreateConfirmationYesNoLabel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UEasternEraDialogDescriptor](EasternEraDialogDescriptor__UEasternEraDialogDescriptor.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHeader` | `const FText&` |
| `InBody` | `const FText&` |
| `YesLabel` | `const FText&` |
| `NoLabel` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UEasternEraDialogDescriptor* CreateConfirmationYesNoLabel(const FText& InHeader, const FText& InBody, const FText& YesLabel, const FText& NoLabel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Create Confirmation Yes No Label operation.

---
