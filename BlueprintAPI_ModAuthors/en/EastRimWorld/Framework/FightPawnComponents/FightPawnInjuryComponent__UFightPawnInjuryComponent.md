# `class` `UFightPawnInjuryComponent`

**Source header:** `EastRimWorld/Framework/FightPawnComponents/FightPawnInjuryComponent.h`

---

## Functional description (from header comments)

> FightPawn injury component: applies per-organ injuries with gameplay effects, handles self-healing/worsening, treatment with medicine consumption, scar formation/removal, whole-body heatstroke/hypothermia injuries, plus related queries and broadcasts.

## Blueprint-exposed variables

### Property `OnRemoveInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FFP_RemoveInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_RemoveInjuryBuffDelegate OnRemoveInjuryDelegate;` |

**Notes:**

> Event fired when an injury is removed (carries the injury config, organ ID, and injury instance GUID).

---

### Property `OnAddInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FFP_AddInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_AddInjuryBuffDelegate OnAddInjuryDelegate;` |

**Notes:**

> Event fired when an injury is added (carries the injury config, organ ID, and injury instance GUID).

---

### Property `OnUpdateInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FFP_UpdateInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_UpdateInjuryBuffDelegate OnUpdateInjuryDelegate;` |

**Notes:**

> Event fired when injury states are updated.

---

### Property `OnStartTreatDelegate`

| Field | Details |
|------|------|
| C++ type | `FFP_StartTreatDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_StartTreatDelegate OnStartTreatDelegate;` |

**Notes:**

> Event fired when a treatment starts (carries the injury config and organ ID).

---

### Property `OnFinishTreatDelegate`

| Field | Details |
|------|------|
| C++ type | `FFP_FinishTreatDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFP_FinishTreatDelegate OnFinishTreatDelegate;` |

**Notes:**

> Event fired when a treatment finishes (carries the injury config and organ ID).

---

### Property `CurTreatNeedMedicines`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName, int32> CurTreatNeedMedicines;` |

**Notes:**

> Medicines required for the current treatment (medicine ID to quantity).

---

### Property `CurrentTreatInjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurrentTreatInjuryId;` |

**Notes:**

> ID of the injury currently being treated.

---

### Property `CurInjuryEffectArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Injury" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**Notes:**

> 当前激活的伤势列表

---

## Blueprint-exposed functions

### Function `AddInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md)& |
| `OrganID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool AddInjury(const FInjuryEffectConfig& AddInjuryConfig, FName OrganID, EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds an injury from the given injury config to the specified organ (organ ID and organ type); returns whether it was added successfully.

---

### Function `AddInjuryByOrganType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool AddInjuryByOrganType(FName InjuryID, EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds an injury by injury ID and organ type; returns whether it was added successfully.

---

### Function `ActiveInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryEffectInstance` | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void ActiveInjury(FInjuryEffectInstance& InjuryEffectInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Activates the given injury instance and applies its injury effect.

---

### Function `InjuryCanAdd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md)& |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool InjuryCanAdd(const FInjuryEffectConfig& AddInjuryConfig, EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the given injury config can be added to the specified organ type.

---

### Function `CheckHaveInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool CheckHaveInjury(const FName& BuffID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether an injury with the given buff ID currently exists.

---

### Function `BroadcastUpdateInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void BroadcastUpdateInjury();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Broadcasts the injury update event (OnUpdateInjuryDelegate).

---

### Function `TreatInjuries`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Doctor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool TreatInjuries(AActor* Doctor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 治疗伤势（Doctor 可以是另一个 FightPawn / NPC）

---

### Function `ReMoveScar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool ReMoveScar(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the scar with the given instance GUID; returns whether the removal succeeded.

---

### Function `ReMoveScarUseMedicines`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |
| `InventoryManagerComponent` | [UInventoryManagerComponent](../../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool ReMoveScarUseMedicines(FGuid InjuryInstanceID, UInventoryManagerComponent* InventoryManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the scar with the given GUID using medicines from the specified inventory; returns whether it succeeded.

---

### Function `CheckIsHaveNotTreatedInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="FightPawn|Injury" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|Injury") bool CheckIsHaveNotTreatedInjury();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Checks whether there is any injury that has not been treated yet.

---

### Function `GetRecoverWorseTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") int32 GetRecoverWorseTime(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the recovery/worsening time of the injury instance with the given GUID.

---

### Function `CalRecoverWorsePercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") float CalRecoverWorsePercent(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates the recovery/worsening progress percentage of the injury instance with the given GUID.

---

### Function `CalHealingRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInfo` | const [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") float CalHealingRate(const FInjuryEffectInstance& InjuryInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates the healing rate of the given injury instance.

---

### Function `GetInjuryEffectInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") FInjuryEffectInstance& GetInjuryEffectInstance(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets a reference to the injury instance with the given instance GUID.

---

### Function `GetInjuryEffectInstanceByOrganType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganType(const EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets all injury instances on organs of the given organ type.

---

### Function `GetInjuryEffectInstanceByOrganID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganID(const FName OrganID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets all injury instances on the organ with the given organ ID.

---

### Function `GetAllInjuryInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `isScar` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetAllInjuryInstances(bool isScar);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets all injury instances; isScar filters between scars and normal injuries.

---

### Function `GetCurInjurysByBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BufName` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetCurInjurysByBuff(FString BufName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the list of current injury instances matching the given buff name.

---

### Function `CalculateDamagePercentage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Injury" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| `Attributes` | `TMap<FGameplayAttribute, float>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void CalculateDamagePercentage(const EBodyOrganType OrganType, TMap<FGameplayAttribute, float>& Attributes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates injury damage percentages for the given organ type and writes the results into the Attributes map (attribute to value).

---
