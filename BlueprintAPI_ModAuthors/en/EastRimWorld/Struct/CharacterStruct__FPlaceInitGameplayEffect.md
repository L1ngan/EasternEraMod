# `struct` `FPlaceInitGameplayEffect`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | `EWorldPlaceType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**Source comments:**

> 关卡类型

---

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | `EBattleType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EBattleType BattleType = EBattleType::None;` |

**Source comments:**

> 战斗类型

---

### Property `InitGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadOnly, Category="Abilities" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowedClasses = "/Script/Engine.GameplayEffect")) TArray<FSoftClassPath> InitGameplayEffect;` |

**Source comments:**

> 初始的Ge 例如持续的减少饱食度

---
