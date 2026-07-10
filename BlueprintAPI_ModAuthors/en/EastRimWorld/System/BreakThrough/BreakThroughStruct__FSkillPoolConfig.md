# `struct` `FSkillPoolConfig`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## Functional description (from header comments)

> 技能池配置

## Blueprint-exposed variables

### Property `SkillIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> SkillIDs;` |

**Notes:**

> 技能ID列表

---

### Property `RandomSkillNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RandomSkillNumber = 2;` |

**Notes:**

> 随机的技能数量

---

### Property `RequiredBreakThroughPoints`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RequiredBreakThroughPoints = 100;` |

**Notes:**

> 所需突破点数（大于）

---

### Property `BehaviorLoopSections`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BehaviorLoopSections;` |

**Notes:**

> 突破循环动画蒙太奇片段名称

---
