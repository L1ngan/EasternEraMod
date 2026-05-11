# `struct` `FWorldBattleCharacterInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BattlefieldCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<EBattlefieldRolesType,[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> BattlefieldCharacters;` |

**Source comments:**

> 正在战斗的角色

---

### Property `SeriousInjuryCharacters`

| Field | Details |
|------|------|
| C++ type | TMap<EBattlefieldRolesType,[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> SeriousInjuryCharacters;` |

**Source comments:**

> 重伤的弟子

---
