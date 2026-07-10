# `struct` `FStratagemAbilityFunction`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战略技能

## Blueprint-exposed variables

### Property `AbilityFunctionType`

| Field | Details |
|------|------|
| C++ type | [EAbilityFunctionType](WorldBattleStruct__EAbilityFunctionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EAbilityFunctionType AbilityFunctionType = EAbilityFunctionType::None;` |

**Notes:**

> 战略技能功能

---

### Property `Parameter`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float Parameter = 0.f;` |

**Notes:**

> 参数 根据不同功能类型填不同值

---
