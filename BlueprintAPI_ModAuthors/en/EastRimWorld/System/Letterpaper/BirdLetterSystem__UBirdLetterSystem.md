# `class` `UBirdLetterSystem`

**Source header:** `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

---

## Functional description (from header comments)

> Bird Letter System UObject type.

## Blueprint-exposed variables

### Property `FOnUpdateLetterData`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateLetterData` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateLetterData FOnUpdateLetterData;` |

**Notes:**

> On Update Letter Data field.

---

### Property `CharacterLetterMap`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FCharacterLetterData](BirdLetterSystem__FCharacterLetterData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FGuid, FCharacterLetterData> CharacterLetterMap;` |

**Notes:**

> Character Letter Map field.

---

### Property `AvtiveTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 AvtiveTime = -10000;` |

**Notes:**

> Avtive Time field.

---

## Blueprint-exposed functions

### Function `AddNewLetter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LetterType` | [ELetterDialogueType](BirdLetterSystem__ELetterDialogueType.md) |
| `Character` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `AddTime` | `int32` |
| `Mandatory` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") bool AddNewLetter(ELetterDialogueType LetterType, AEastRimWorldCharacter_Human* Character,int32 AddTime,bool Mandatory);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Add New Letter operation.

---

### Function `InitCharacterLetterMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void InitCharacterLetterMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Init Character Letter Map operation.

---

### Function `DialogueComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `dialogueindex` | `FDialogueNode` |
| `addtime` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void DialogueComplete(AEastRimWorldCharacter_Human* Character, FDialogueNode dialogueindex, int32 addtime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 掌门回话对话

---

### Function `EndDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EndCharacterArr` | `TArray<FGuid>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void EndDialogue(TArray<FGuid> EndCharacterArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束对话

---

### Function `CharacterWishEquipment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterArri` | TArray<[AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| `AddTime` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void CharacterWishEquipment(TArray<AEastRimWorldCharacter_Human*> CharacterArri,int32 AddTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色希望获得装备

---

### Function `CharacterHaveDebuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterArr` | TArray<[AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| `AddTime` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void CharacterHaveDebuff(TArray<AEastRimWorldCharacter_Human*> CharacterArr, int32 AddTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色Debuff状态

---

### Function `RemoveDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EndCharacterArr` | `TArray<FGuid>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void RemoveDialogue(TArray<FGuid> EndCharacterArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除对话

---

### Function `GetCanActiveLetter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dialogue Events" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Currenttime` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") bool GetCanActiveLetter(int32 Currenttime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断是否可以主动发起信笺

---
