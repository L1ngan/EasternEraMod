# `struct` `FCharacterTeamInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TeamId`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TeamId = 255;` |

**Source comments:**

> 阵营ID

---

### Property `GameplayTeamBehaviorTree`

| Field | Details |
|------|------|
| C++ type | TArray<[FGameplayTeamBehaviorTree](CharacterStruct__FGameplayTeamBehaviorTree.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTeamBehaviorTree> GameplayTeamBehaviorTree;` |

**Source comments:**

> 各地点的行为树

---
