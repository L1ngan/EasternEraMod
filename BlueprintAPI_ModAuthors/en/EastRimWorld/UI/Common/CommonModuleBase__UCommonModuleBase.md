# `class` `UCommonModuleBase`

**Source header:** `EastRimWorld/UI/Common/CommonModuleBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `InputModuleInfo`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FInstancedStruct InputModuleInfo;` |

---

### Property `InputObject`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UObject>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UObject> InputObject;` |

---

## Blueprint-exposed functions

### Function `InitModuleInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInputModuleInfo` | `const FInstancedStruct &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitModuleInfo(const FInstancedStruct & InInputModuleInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 初始化模块信息

---

### Function `InitModuleInfoByObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InObject` | `UObject *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitModuleInfoByObject(UObject * InObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 初始化模块通过object

---

### Function `UpdateModuleInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateModuleInfo();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 更新模块信息

---
