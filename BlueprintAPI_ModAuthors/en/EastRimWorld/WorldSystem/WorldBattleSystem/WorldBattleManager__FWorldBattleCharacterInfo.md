# `struct` `FWorldBattleCharacterInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

## Functional description (from header comments)

> World Battle Character Info data structure.

## Blueprint-exposed variables

### Property `BattlefieldCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<[EBattlefieldRolesType](../../Struct/CommonEnum__EBattlefieldRolesType.md),[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> BattlefieldCharacters;` |

**Notes:**

> 正在战斗的角色

---

### Property `SeriousInjuryCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<[EBattlefieldRolesType](../../Struct/CommonEnum__EBattlefieldRolesType.md),[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> SeriousInjuryCharacters;` |

**Notes:**

> 重伤的弟子

---
