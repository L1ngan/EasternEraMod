# `struct` `FMartialArtsLevelConfig`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学等级配置

## Blueprint-exposed variables

### Property `Score`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<int32> Score;` |

**Notes:**

> 等级增加的评分

---

### Property `Experience`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") TArray<int32> Experience;` |

**Notes:**

> 等级所需的经验

---

### Property `MovesSlotNumber`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArtsLevel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArtsLevel") TArray<int32> MovesSlotNumber;` |

**Notes:**

> 招式插槽数量

---

### Property `PassiveSlotNumber`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArtsLevel" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArtsLevel") TArray<int32> PassiveSlotNumber;` |

**Notes:**

> 被动的插槽数量

---
