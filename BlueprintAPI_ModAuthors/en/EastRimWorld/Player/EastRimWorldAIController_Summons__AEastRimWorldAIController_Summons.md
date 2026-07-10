# `class` `AEastRimWorldAIController_Summons`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController_Summons.h`

---

## Functional description (from header comments)

> AI controller for summons: driven by the owner's controller, handles the summon's behavior state and battle behavior checks

## Blueprint-exposed variables

### Property `SelfController`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AEastRimWorldAIController> SelfController;` |

**Notes:**

> 召唤物的控制者

---

### Property `bUseOwnerCharacterBehavior`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bUseOwnerCharacterBehavior = false;` |

**Notes:**

> 使用拥有者的行为

---

## Blueprint-exposed functions

### Function `SetSummonsController`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Summons" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewController` | [AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Summons") bool SetSummonsController(AEastRimWorldAIController * NewController);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置召唤物的控制器（骑乘者）

---

### Function `GetSummonsData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldSummonsData](../Struct/CharacterStruct__FEastRimWorldSummonsData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldSummonsData GetSummonsData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the summon's data (FEastRimWorldSummonsData)

---

### Function `CheckCanRunBattleBehavior`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanRunBattleBehavior();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the summon can currently run battle behavior

---

### Function `GetOwnerCharacterLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Summons" |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Summons") FVector GetOwnerCharacterLocation() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the current location of the owner character

---
