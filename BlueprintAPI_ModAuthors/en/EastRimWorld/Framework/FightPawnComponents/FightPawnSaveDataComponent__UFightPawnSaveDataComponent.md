# `class` `UFightPawnSaveDataComponent`

**Source header:** `EastRimWorld/Framework/FightPawnComponents/FightPawnSaveDataComponent.h`

---

## Functional description (from header comments)

> Player-pawn save data hub: holds all FCharacterSaveData fields (except martial arts/injuries) and provides save-data initialization/write-back, ability grant/removal, characteristic management, apparel application, and state fields such as hunger, dantian and spawn point.

## Blueprint-exposed variables

### Property `CharacterSaveData`

| Field | Details |
|------|------|
| C++ type | [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FCharacterSaveData CharacterSaveData;` |

**Notes:**

> 完整存档结构（包含所有 FCharacterSaveData 字段）

---

### Property `EastRimWorldCharacterData`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FightPawn|SaveData") FInstancedStruct EastRimWorldCharacterData;` |

**Notes:**

> 当前生效的角色配置（FEastRimWorldCharacterData 或 FEastRimWorldHumanData）

---

### Property `CharacteristicInfos`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TArray<FName> CharacteristicInfos;` |

**Notes:**

> 拥有的特性列表

---

### Property `bOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bOpenDanTian = false;` |

**Notes:**

> 是否开启丹田

---

### Property `bCanOpenDanTian`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bCanOpenDanTian = false;` |

**Notes:**

> 是否可以开启丹田

---

### Property `NutritionTriggerFlag`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool NutritionTriggerFlag = false;` |

**Notes:**

> Flag indicating whether the nutrition trigger has fired.

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../../UI/Struct/UIStruct__ECommonButtonType.md), bool> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TMap<ECommonButtonType, bool> ButtonOperationState;` |

**Notes:**

> Operation state of common buttons (button type to enabled flag), persisted in the save data.

---

### Property `ItemDrugUsed`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") TMap<FName, int32> ItemDrugUsed;` |

**Notes:**

> Record of drug item usage (item ID to use count), persisted in the save data.

---

### Property `CurrentHungryIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") float CurrentHungryIntervalTime = 0.f;` |

**Notes:**

> Accumulated timer of the current hunger interval.

---

### Property `CurHungryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FName CurHungryId;` |

**Notes:**

> ID of the current hunger state.

---

### Property `ProhibitTreatSelf`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool ProhibitTreatSelf = true;` |

**Notes:**

> Whether self-treatment is prohibited (defaults to true).

---

### Property `bCanSelect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bCanSelect = true;` |

**Notes:**

> Whether the pawn can be selected (defaults to true).

---

### Property `SpawnPoint`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") FVector SpawnPoint = FVector::ZeroVector;` |

**Notes:**

> Spawn point coordinates (world location), persisted in the save data.

---

### Property `bRegisterWorld`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame, Category = "FightPawn|SaveData") bool bRegisterWorld = false;` |

**Notes:**

> Whether the pawn has been registered to the world system, persisted in the save data.

---

### Property `bInitializationCompleted`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|SaveData" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|SaveData") bool bInitializationCompleted = false;` |

**Notes:**

> Whether save-data initialization has completed.

---

## Blueprint-exposed functions

### Function `InitializeBySaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|SaveData" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterSaveData` | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void InitializeBySaveData(const FCharacterSaveData& InCharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过完整 FCharacterSaveData 初始化 Pawn（仿 AEastRimWorldCharacter::InitializeCharacterBySaveData）

---

### Function `UpdateSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|SaveData" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void UpdateSaveData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把当前 Pawn 上的运行时状态回写到 CharacterSaveData

---

### Function `GetCharacterSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|SaveData" |
| Return type | const [FCharacterSaveData](../../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|SaveData") const FCharacterSaveData& GetCharacterSaveData() const { return CharacterSaveData; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 完整存档数据

---

### Function `GiveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool GiveAbilityByAbilityID(FName GameplayAbilityID, int Level = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Grants a gameplay ability by ability ID (with optional level, default 1); returns whether it succeeded.

---

### Function `RemoveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes a previously granted gameplay ability by ability ID; returns whether it succeeded.

---

### Function `AddNewCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Characteristic" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void AddNewCharacteristic(const FName& NewCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds a new characteristic by its ID and applies its effect.

---

### Function `ApplyCharacteristicByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Characteristic" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void ApplyCharacteristicByID(const FName& NewCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies the effect of the characteristic with the given ID.

---

### Function `RemoveCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Characteristic" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RemoveCharacteristicID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void RemoveCharacteristic(const FName& RemoveCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the characteristic with the given ID.

---

### Function `OpenDanTian`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Cultivation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Cultivation") void OpenDanTian();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Opens the dantian (cultivation entry; sets the dantian-opened state).

---

### Function `ApplyCustomApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Appearance" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bUseApparel` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Appearance") void ApplyCustomApparels(bool bUseApparel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies custom apparels; bUseApparel controls whether custom apparels are enabled.

---
