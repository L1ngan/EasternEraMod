# `class` `UGPUInfoLibrary`

**Source header:** `EastRimWorld/GPUInfoLibrary.h`

---

## Functional description (from header comments)

> Blueprint function library for querying GPU info and checking the vendor (NVIDIA/AMD/Intel)

## Blueprint-exposed functions

### Function `GetGPUInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="System|GPU" |
| Return type | [FGPUInfo](GPUInfoLibrary__FGPUInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="System|GPU") static FGPUInfo GetGPUInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取显卡信息

---

### Function `IsNVIDIA`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="System|GPU" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsNVIDIA();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否 NVIDIA 显卡

---

### Function `IsAMD`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="System|GPU" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsAMD();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否 AMD 显卡

---

### Function `IsIntel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="System|GPU" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsIntel();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否 Intel 显卡

---
