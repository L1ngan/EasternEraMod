# `struct` `FForceFavorabilityRow`

**Source header:** `EastRimWorld/WorldSystem/ForceAffiliationRow.h`

---

## Functional description (from header comments)

> 势力初始好感度行 — 对应 DT_ForceFavorabilityInit.csv (B2, ~50 行)
> 列结构: Name(主键), ForceA, ForceB, InitFavorability(int), Reason
> 描述游戏初始化时两个势力之间预设的好感值.

## Blueprint-exposed variables

### Property `ForceA`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Favorability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FName ForceA = NAME_None;` |

**Notes:**

> 势力 A 的 ID (e.g. NPC_Sect2)

---

### Property `ForceB`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Favorability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FName ForceB = NAME_None;` |

**Notes:**

> 势力 B 的 ID (e.g. NPC_Sect5)

---

### Property `InitFavorability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Favorability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") int32 InitFavorability = 0;` |

**Notes:**

> 初始好感值 (范围 -100 ~ 100)

---

### Property `Reason`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Favorability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Favorability") FText Reason;` |

**Notes:**

> 好感预设原因说明 (e.g. 武当达摩并称南尊北崇道佛双峰盟好百年)

---
