# `struct` `FPlaceInitGameplayEffect`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Place initial GE config: GameplayEffects initially applied for a given place type and battle type (e.g. continuous satiety drain)

## Blueprint-exposed variables

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceType](CommonEnum__EWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**Notes:**

> 关卡类型

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EBattleType BattleType = EBattleType::None;` |

**Notes:**

> 战斗类型

---

### Property `InitGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadOnly, Category="Abilities" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/Engine.GameplayEffect")) TArray<FSoftClassPath> InitGameplayEffect;` |

**Notes:**

> 初始的Ge 例如持续的减少饱食度

---
