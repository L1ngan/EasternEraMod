# `struct` `FGPUInfo`

**Source header:** `EastRimWorld/GPUInfoLibrary.h`

---

## Functional description (from header comments)

> GPU information (brand, adapter name, vendor and device IDs)

## Blueprint-exposed variables

### Property `GPUBrand`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="GPU" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString GPUBrand;` |

**Notes:**

> GPU brand string

---

### Property `AdapterName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="GPU" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString AdapterName;` |

**Notes:**

> Name of the GPU adapter

---

### Property `VendorId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="GPU" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="GPU") int32 VendorId = 0;` |

**Notes:**

> GPU vendor ID

---

### Property `DeviceId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="GPU" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="GPU") int32 DeviceId = 0;` |

**Notes:**

> GPU device ID

---

### Property `VendorName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="GPU" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString VendorName;` |

**Notes:**

> Name of the GPU vendor

---
