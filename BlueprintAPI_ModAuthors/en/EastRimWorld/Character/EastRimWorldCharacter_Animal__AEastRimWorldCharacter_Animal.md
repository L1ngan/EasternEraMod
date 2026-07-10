# `class` `AEastRimWorldCharacter_Animal`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter_Animal.h`

---

## Functional description (from header comments)

> Animal character class supporting taming, breeding, cultivation, growth and output production

## Blueprint-exposed variables

### Property `BreedingComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCharacterBreedingComponent](Components/CharacterBreedingComponent__UCharacterBreedingComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Animal", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCharacterBreedingComponent> BreedingComponent;` |

**Notes:**

> 繁育组件

---

### Property `CultivationComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UAnimalCultivationComponent](Components/AnimalCultivationComponent__UAnimalCultivationComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Animal" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Animal", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAnimalCultivationComponent> CultivationComponent;` |

**Notes:**

> 修炼组件

---

### Property `CurrentTameCD`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 CurrentTameCD = 0;` |

**Notes:**

> Current taming cooldown time

---

### Property `CurAnimalGrowthValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float CurAnimalGrowthValue;` |

**Notes:**

> 动物当前成长值

---

### Property `LoopingPSC`

| Field | Details |
|------|------|
| C++ type | `UParticleSystemComponent*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) UParticleSystemComponent* LoopingPSC;` |

**Notes:**

> Looping particle system component

---

### Property `CurAnimalOutputRemainingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float CurAnimalOutputRemainingTime;` |

**Notes:**

> 动物产出间隔剩余时间

---

### Property `bHadBreeding`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) bool bHadBreeding;` |

**Notes:**

> Whether the animal has already bred

---

### Property `bPregnant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) bool bPregnant;` |

**Notes:**

> Whether the animal is pregnant

---

### Property `CurAnimalName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) FText CurAnimalName;` |

**Notes:**

> The animal's current name

---

### Property `OnAnimalRename`

| Field | Details |
|------|------|
| C++ type | `FAnimalRename` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAnimalRename OnAnimalRename;` |

**Notes:**

> Delegate broadcast when the animal is renamed (passes the new name)

---

## Blueprint-exposed functions

### Function `GetAnimalData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldAnimalData](../Struct/CharacterStruct__FEastRimWorldAnimalData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldAnimalData GetAnimalData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取动物的信息

---

### Function `StartEnterTameCD`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartEnterTameCD();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Starts the taming cooldown countdown

---

### Function `CalculationGrowBonus`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculationGrowBonus();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates and returns the animal's growth bonus value

---

### Function `CalcTameIsSuccessful`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TameCharacter` | [AEastRimWorldCharacter](EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CalcTameIsSuccessful(AEastRimWorldCharacter* TameCharacter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算驯服是否成功

---

### Function `TameSuccessed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TameSuccessed();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 驯服成功

---

### Function `TameFailed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TameFailed();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 驯服失败

---

### Function `CreateTameAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateTameAction(FGuid CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建驯服行为

---

### Function `CheckAnimalNeedGrowUp`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckAnimalNeedGrowUp();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查动物是否需要进化

---

### Function `CancelTameAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelTameAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消驯服行为

---

### Function `AnimalTrainingFinish`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AnimalTrainingFinish();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Handles completion of animal training

---

### Function `CreateAnimalOutputAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateAnimalOutputAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Creates the animal output GOAP action

---

### Function `CancelAnimalOutputAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelAnimalOutputAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Cancels the animal output GOAP action

---

### Function `SetAnimalName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAnimalName(FText NewName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the animal's name

---
