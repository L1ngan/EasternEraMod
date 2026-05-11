# `struct` `FPostwarCharacterDispose`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战场结果

## Blueprint-exposed variables

### Property `CaptureCharacter`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> CaptureCharacter;` |

**Source comments:**

> 俘虏的角色

---

### Property `LoseCharacter`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> LoseCharacter;` |

**Source comments:**

> 被俘虏的角色

---

### Property `DisposalCaptureCharacter`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,ECaptureCharacterDisposalType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalCaptureCharacter;` |

**Source comments:**

> 俘虏的角色处置

---

### Property `DisposalLoseCharacter`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,ECaptureCharacterDisposalType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalLoseCharacter;` |

**Source comments:**

> 被俘虏的角色处置

---

### Property `BackBaseCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> BackBaseCharacter;` |

**Source comments:**

> 返回的人

---

### Property `GarrisonCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GarrisonCharacter;` |

**Source comments:**

> 驻守的人

---

### Property `WanderCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> WanderCharacter;` |

**Source comments:**

> 游荡的人

---
