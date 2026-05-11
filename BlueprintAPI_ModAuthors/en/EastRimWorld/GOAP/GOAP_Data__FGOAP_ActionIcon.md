# `struct` `FGOAP_ActionIcon`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> GOAP行为图标

## Blueprint-exposed variables

### Property `ActionIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) TSoftObjectPtr<UTexture2D> ActionIcon;` |

**Source comments:**

> 行为图标

---

### Property `CharacterBehaviorStates`

| Field | Details |
|------|------|
| C++ type | `TArray<ECharacterBehaviorState>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) TArray<ECharacterBehaviorState> CharacterBehaviorStates;` |

**Source comments:**

> 行为的类型数组

---
