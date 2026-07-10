# `struct` `FCharacterDeathInformation`

**Source header:** `EastRimWorld/Struct/CharacterDeathInformation.h`

---

## Functional description (from header comments)

> 角色的死亡信息

## Blueprint-exposed variables

### Property `VictimGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid VictimGuid;` |

**Notes:**

> 受害者的Guid

---

### Property `VictimTeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 VictimTeamID = 255;` |

**Notes:**

> 被伤害者阵营

---

### Property `AttackerGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid AttackerGuid;` |

**Notes:**

> 攻击者guid

---

### Property `AttackerTeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 AttackerTeamID = 255;` |

**Notes:**

> 阵营

---

### Property `DamageValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DamageValue = 0;` |

**Notes:**

> 伤害

---

### Property `CurativeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CurativeValue = 0;` |

**Notes:**

> 恢复值

---

### Property `AttackerType`

| Field | Details |
|------|------|
| C++ type | [EBattlefieldRolesType](CommonEnum__EBattlefieldRolesType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldRolesType AttackerType = EBattlefieldRolesType::Hero;` |

**Notes:**

> 攻击者类型

---

### Property `VictimType`

| Field | Details |
|------|------|
| C++ type | [EBattlefieldRolesType](CommonEnum__EBattlefieldRolesType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldRolesType VictimType = EBattlefieldRolesType::Hero;` |

**Notes:**

> 受害者类型

---

### Property `AttackTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AttackTime = 0.f;` |

**Notes:**

> 攻击时间

---

### Property `AbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName AbilityID = NAME_None;` |

**Notes:**

> 技能ID

---
