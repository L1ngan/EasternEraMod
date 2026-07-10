# `struct` `FTaskCategoryDetail`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 任务类别信息

## Blueprint-exposed variables

### Property `TaskCategory`

| Field | Details |
|------|------|
| C++ type | [ETaskCategory](CommonTaskStruct__ETaskCategory.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETaskCategory TaskCategory = ETaskCategory::None;` |

**Notes:**

> 任务类型枚举

---

### Property `Title`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText Title;` |

**Notes:**

> 任务名称

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText Desc;` |

**Notes:**

> 任务说明

---
