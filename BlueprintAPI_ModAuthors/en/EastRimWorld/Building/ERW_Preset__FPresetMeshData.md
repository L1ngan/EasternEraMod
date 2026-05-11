# `struct` `FPresetMeshData`

**Source header:** `EastRimWorld/Building/ERW_Preset.h`

---

## Functional description (from header comments)

> 预设模型数据

## Blueprint-exposed variables

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `UStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) UStaticMeshComponent* StaticMeshComponent { nullptr };` |

**Source comments:**

> 静态模型组件

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | `EEnvironType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EEnvironType EnvironType { EEnvironType::None };` |

**Source comments:**

> 环境类型

---

### Property `IsWide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) bool IsWide { false };` |

**Source comments:**

> 是否是宽的门或窗

---
