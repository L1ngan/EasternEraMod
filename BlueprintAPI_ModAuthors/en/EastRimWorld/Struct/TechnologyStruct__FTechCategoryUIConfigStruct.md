# `struct` `FTechCategoryUIConfigStruct`

**Source header:** `EastRimWorld/Struct/TechnologyStruct.h`

---

## Functional description (from header comments)

> 科技分类UI配置表结构

## Blueprint-exposed variables

### Property `Category`

| Field | Details |
|------|------|
| C++ type | `ETechCategory` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") ETechCategory Category = ETechCategory::Food;` |

**Source comments:**

> 物品类型

---

### Property `CategoryName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText CategoryName;` |

**Source comments:**

> 分类显示的名字

---

### Property `CategoryIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> CategoryIcon;` |

**Source comments:**

> 分类在UI上显示的图标

---

### Property `CategoryUIHeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 CategoryUIHeight { 0 };` |

**Source comments:**

> 分类在UI上占用格子

---

### Property `CategoryBG`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> CategoryBG;` |

**Source comments:**

> 分类在UI上背景

---
