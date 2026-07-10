# `struct` `FPlantTypeTabInfo`

**Source header:** `EastRimWorld/Struct/FarmlandStruct.h`

---

## Functional description (from header comments)

> Plant Type Tab Info data structure.

## Blueprint-exposed variables

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [ECollectPlantType](ItemStruct__ECollectPlantType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ECollectPlantType Type = ECollectPlantType::None;` |

**Notes:**

> 种植物类型

---

### Property `TypeName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText TypeName;` |

**Notes:**

> 种植物类型名称

---

### Property `Sort`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 Sort = 0;` |

**Notes:**

> 种植物类型UI排序

---
