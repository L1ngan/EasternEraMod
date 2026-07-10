# `struct` `FGameplayTeamBehaviorTree`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Team behavior tree config: the behavior tree a team uses for a given place type and battle type

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

### Property `BehaviorTree`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UBehaviorTree>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBehaviorTree> BehaviorTree;` |

**Notes:**

> 阵营对应的行为树

---
