# `struct` `FEffectLevelData`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> GE等级信息

## Blueprint-exposed variables

### Property `EffectLevelType`

| Field | Details |
|------|------|
| C++ type | [EEffectLevelType](WorldStruct__EEffectLevelType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EEffectLevelType EffectLevelType = EEffectLevelType::FixedLevel;` |

**Notes:**

> 等级来源类型

---

### Property `ExtraLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtraLevel = 0;` |

**Notes:**

> 额外等级 固定等级时直接使用该值 掌门/势力等级时在来源等级基础上加上该值

---
