# `struct` `FCharacterApparel`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 角色防具

## Blueprint-exposed variables

### Property `ArmorType`

| Field | Details |
|------|------|
| C++ type | [EArmorType](CommonEnum__EArmorType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") EArmorType ArmorType = EArmorType::None;` |

**Notes:**

> 防具类型

---

### Property `ApparelMaleDataAsset`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UPrimaryDataAsset>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelMaleDataAsset;` |

**Notes:**

> 男外观数据资产引用

---

### Property `ApparelFemaleDataAsset`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UPrimaryDataAsset>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TSoftObjectPtr<UPrimaryDataAsset> ApparelFemaleDataAsset;` |

**Notes:**

> 女外观数据资产引用

---

### Property `MaterialVariantsIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") int MaterialVariantsIndex;` |

**Notes:**

> 数据资产里外观材质的索引

---

### Property `MaterialColor`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FLinearColor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") TMap<FName,FLinearColor> MaterialColor;` |

**Notes:**

> 外观材质的颜色

---

### Property `BeAttakedLossDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Apparel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Apparel") float BeAttakedLossDurability;` |

**Notes:**

> 被攻击时减少的耐久度

---
