# `struct` `FStrongholdRow`

**Source header:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## Functional description (from header comments)

> 据点配置行 — 对应 DT_StrongholdConfig.csv (B2, ~11 行)
> 列结构: Name(主键), DisplayName, GeoLocation, MainPurpose1/2/3, Population, Alignment
> 描述武林重要据点 (门派山门/城市) 的地理位置与主要用途.

## Blueprint-exposed variables

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText DisplayName;` |

**Notes:**

> 据点显示名 (e.g. 武当派)

---

### Property `GeoLocation`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText GeoLocation;` |

**Notes:**

> 地理位置描述 (e.g. 中原Spine正中)

---

### Property `MainPurpose1`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose1;` |

**Notes:**

> 主要用途 1 (策划文案)

---

### Property `MainPurpose2`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose2;` |

**Notes:**

> 主要用途 2 (策划文案)

---

### Property `MainPurpose3`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FText MainPurpose3;` |

**Notes:**

> 主要用途 3 (策划文案)

---

### Property `Population`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") int32 Population = 0;` |

**Notes:**

> 据点人口数量

---

### Property `Alignment`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Stronghold" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stronghold") FName Alignment = NAME_None;` |

**Notes:**

> 阵营归属 (e.g. 正派 / 邪派 / 中立)

---
