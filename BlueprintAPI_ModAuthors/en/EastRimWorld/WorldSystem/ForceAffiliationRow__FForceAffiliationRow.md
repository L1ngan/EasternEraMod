# `struct` `FForceAffiliationRow`

**Source header:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## Functional description (from header comments)

> 派系归属行 — 对应 DT_ForceAffiliation.csv (B1, ~88 行)
> 列结构: Name(主键), DisplayName, MainCityID, Region, Alignment, TerritoryNotes
> 描述每个武林门派/势力所在区域、主城、阵营归属.

## Blueprint-exposed variables

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceAffiliation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FText DisplayName;` |

**Notes:**

> 势力显示名 (e.g. 武当派)

---

### Property `MainCityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceAffiliation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName MainCityID = NAME_None;` |

**Notes:**

> 主城 ID, 对应大地图城市数据表 (e.g. AreaCity1_HangZhou)

---

### Property `Region`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceAffiliation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName Region = NAME_None;` |

**Notes:**

> 所在大区域 (e.g. 江南, 中原, 北方, 西域)

---

### Property `Alignment`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceAffiliation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FName Alignment = NAME_None;` |

**Notes:**

> 阵营归属 (e.g. 正派 / 邪派 / 中立)

---

### Property `TerritoryNotes`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="ForceAffiliation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ForceAffiliation") FText TerritoryNotes;` |

**Notes:**

> 领土/背景描述文本 (策划文案, 供 UI tooltip 使用)

---
