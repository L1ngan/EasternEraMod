# `struct` `FResourcePackage`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 新游戏资源包

## Blueprint-exposed variables

### Property `ResourceName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") FName ResourceName;` |

**Source comments:**

> 资源名称

---

### Property `ResourcePrice`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") int32 ResourcePrice = 0;` |

**Source comments:**

> 资源价格

---

### Property `EResourceCategories`

| Field | Details |
|------|------|
| C++ type | `EResourceCategories` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") EResourceCategories EResourceCategories = EResourceCategories::None;` |

**Source comments:**

> 资源UI显示分类

---

### Property `ResourceId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") FName ResourceId;` |

**Source comments:**

> 资源ID

---

### Property `ResourceNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") int32 ResourceNum = 1;` |

**Source comments:**

> 资源数量

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | `EGroundInventoryType` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") EGroundInventoryType ItemType = EGroundInventoryType::None;` |

**Source comments:**

> 资源分类

---

### Property `ResourceEnable`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="ResourcePackage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ResourcePackage") bool ResourceEnable = true;` |

**Source comments:**

> 是否启用

---
