# `struct` `FApprenticeshipEventCondition`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow.h`

---

## Functional description (from header comments)

> Apprenticeship Event Condition data structure.

## Blueprint-exposed variables

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipConditionType](ApprenticeshipDataRow__EApprenticeshipConditionType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Condition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") EApprenticeshipConditionType Type = EApprenticeshipConditionType::RealmLevel;` |

**Notes:**

> 条件类型

---

### Property `MinValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Condition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") int32 MinValue = 0;` |

**Notes:**

> 数值下限(境界=境界等级 / 好感=好感值)

---

### Property `MaxValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Condition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") int32 MaxValue = 0;` |

**Notes:**

> 数值上限(<=0 或 < MinValue 视为无上限)

---

### Property `ForceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Condition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipConditionType::ForceFavorability")) FName ForceID;` |

**Notes:**

> Type=门派好感度 时:对比哪个门派(ForceID=DT_WorldForceInfoConfig RowName)对玩家的好感

---
