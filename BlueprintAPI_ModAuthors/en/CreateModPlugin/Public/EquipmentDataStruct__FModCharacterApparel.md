# `struct` `FModCharacterApparel`

**Source header:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## Functional description (from header comments)

> Mod 防具结构

## Blueprint-exposed variables

### Property `ArmorType`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") uint8 ArmorType = 0;` |

**Source comments:**

> 防具类型

---

### Property `ApparelMaleDataAsset`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UPrimaryDataAsset>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelMaleDataAsset;` |

**Source comments:**

> 男外观数据资产引用

---

### Property `ApparelFemaleDataAsset`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UPrimaryDataAsset>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelFemaleDataAsset;` |

**Source comments:**

> 女外观数据资产引用

---

### Property `MaterialVariantsIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") int32 MaterialVariantsIndex = -1;` |

**Source comments:**

> 数据资产里外观材质的索引

---

### Property `MaterialColor`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, FLinearColor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TMap<FName, FLinearColor> MaterialColor;` |

**Source comments:**

> 外观材质的颜色

---

### Property `BeAttakedLossDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") float BeAttakedLossDurability = 0.f;` |

**Source comments:**

> 被攻击时减少的耐久度

---
