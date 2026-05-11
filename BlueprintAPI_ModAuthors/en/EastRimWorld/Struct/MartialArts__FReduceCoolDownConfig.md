# `struct` `FReduceCoolDownConfig`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 冷却时间减少的配置

## Blueprint-exposed variables

### Property `TargetAbilityTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadOnly, Category="Cooldown" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown") FGameplayTag TargetAbilityTag;` |

**Source comments:**

> 目标GA的Tag

---

### Property `ReduceTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Cooldown" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cooldown") float ReduceTime{0.f};` |

**Source comments:**

> 装备时增加的属性

---
