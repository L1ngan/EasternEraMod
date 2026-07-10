# `struct` `FCharacterTypes`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

## Functional description (from header comments)

> Character Types data structure.

## Blueprint-exposed variables

### Property `Characters`

| Field | Details |
|------|------|
| C++ type | TArray<class [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TArray<class AEastRimWorldCharacter*> Characters;` |

**Notes:**

> 角色（运行时缓存；标 Transient 防止作为存档结构体序列化悬空指针致崩；当前容器非 SaveGame，防御性）

---
