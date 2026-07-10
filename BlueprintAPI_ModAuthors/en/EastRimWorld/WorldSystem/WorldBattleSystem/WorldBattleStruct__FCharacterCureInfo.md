# `struct` `FCharacterCureInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 角色的治疗信息

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**Notes:**

> 角色的Guid

---

### Property `CharacterCureState`

| Field | Details |
|------|------|
| C++ type | [ECharacterCureState](WorldBattleStruct__ECharacterCureState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECharacterCureState CharacterCureState = ECharacterCureState::None;` |

**Notes:**

> 治疗状态

---

### Property `CureIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CureIndex = INDEX_NONE;` |

**Notes:**

> 治疗位置下标

---

### Property `CureTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform CureTransform;` |

**Notes:**

> 治疗位置下标

---
