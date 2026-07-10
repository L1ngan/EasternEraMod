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

**Notes:**

> 俘虏的角色

---

### Property `LoseCharacter`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> LoseCharacter;` |

**Notes:**

> 被俘虏的角色

---

### Property `DisposalCaptureCharacter`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalCaptureCharacter;` |

**Notes:**

> 俘虏的角色处置

---

### Property `DisposalLoseCharacter`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalLoseCharacter;` |

**Notes:**

> 被俘虏的角色处置

---

### Property `BackBaseCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> BackBaseCharacter;` |

**Notes:**

> 返回的人

---

### Property `GarrisonCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GarrisonCharacter;` |

**Notes:**

> 驻守的人

---

### Property `WanderCharacter`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> WanderCharacter;` |

**Notes:**

> 游荡的人

---
