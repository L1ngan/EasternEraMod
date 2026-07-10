# `struct` `FCharacterTeamInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Character team info: team ID and the behavior trees used per place/battle type

## Blueprint-exposed variables

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TeamId = 255;` |

**Notes:**

> 阵营ID

---

### Property `GameplayTeamBehaviorTree`

| Field | Details |
|------|------|
| C++ type | TArray<[FGameplayTeamBehaviorTree](CharacterStruct__FGameplayTeamBehaviorTree.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTeamBehaviorTree> GameplayTeamBehaviorTree;` |

**Notes:**

> 各地点的行为树

---
