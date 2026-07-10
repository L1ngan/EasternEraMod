# `struct` `FForceAttackTypeConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力攻击行为配置

## Blueprint-exposed variables

### Property `ForceAttackType`

| Field | Details |
|------|------|
| C++ type | [EForceAttackType](WorldStruct__EForceAttackType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAttackType ForceAttackType = EForceAttackType::None;` |

**Notes:**

> 攻击类型

---

### Property `SectFavorabilityChange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SectFavorabilityChange = 0.f;` |

**Notes:**

> 好感度变化 增加为正值 减少为负值

---
