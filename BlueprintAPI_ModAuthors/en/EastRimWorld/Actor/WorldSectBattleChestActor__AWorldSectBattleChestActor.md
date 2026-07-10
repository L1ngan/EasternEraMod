# `class` `AWorldSectBattleChestActor`

**Source header:** `EastRimWorld/Actor/WorldSectBattleChestActor.h`

---

## Functional description (from header comments)

> Sect battle chest. Uses the FightPawn interactable flow and notifies the manager when opened.

## Blueprint-exposed variables

### Property `OpeningProgressWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidgetComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Chest") TObjectPtr<UWidgetComponent> OpeningProgressWidget;` |

**Notes:**

> Widget component displaying the opening progress.

---

### Property `ChestIdleEffectComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Chest") TObjectPtr<UNiagaraComponent> ChestIdleEffectComponent;` |

**Notes:**

> Niagara component for the chest's idle visual effect.

---

### Property `OpeningProgressWidgetClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest") TSubclassOf<UUserWidget> OpeningProgressWidgetClass;` |

**Notes:**

> UserWidget class used for the opening progress widget.

---

### Property `OpeningProgressBarName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest") FName OpeningProgressBarName = TEXT("ProgressBar");` |

**Notes:**

> Name of the progress bar widget inside the opening progress widget; defaults to "ProgressBar".

---

### Property `OpeningDurationSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest", meta = (ClampMin = "0.0")) float OpeningDurationSeconds = 2.f;` |

**Notes:**

> Duration in seconds required to open the chest; defaults to 2.

---

### Property `NormalChestMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest|Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest|Mesh") TArray<TObjectPtr<UStaticMesh>> NormalChestMeshes;` |

**Notes:**

> 普通宝箱可用模型数组：InitWorldSectBattleChest(Normal) 时在这里随机一个设置到 StaticMeshComponent。

---

### Property `SpecialChestMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest|Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest|Mesh") TArray<TObjectPtr<UStaticMesh>> SpecialChestMeshes;` |

**Notes:**

> 特殊宝箱可用模型数组：InitWorldSectBattleChest(Special) 时在这里随机一个设置到 StaticMeshComponent。

---

### Property `DropActorClass`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AWorldSectBattleChestDropActor](WorldSectBattleChestDropActor__AWorldSectBattleChestDropActor.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop") TSubclassOf<AWorldSectBattleChestDropActor> DropActorClass;` |

**Notes:**

> Drop actor class spawned when the chest is opened.

---

### Property `NormalDropCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0")) int32 NormalDropCount = 3;` |

**Notes:**

> Number of drops for a normal chest; defaults to 3.

---

### Property `SpecialDropCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0")) int32 SpecialDropCount = 5;` |

**Notes:**

> Number of drops for a special chest; defaults to 5.

---

### Property `ChestType`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") EWorldSectBattleChestType ChestType = EWorldSectBattleChestType::None;` |

**Notes:**

> Chest type (Normal or Special).

---

### Property `bOpened`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bOpened = false;` |

**Notes:**

> Whether the chest has been opened.

---

### Property `bOpening`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bOpening = false;` |

**Notes:**

> Whether the chest is currently being opened.

---

### Property `bTriggerWealthEventOnOpened`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bTriggerWealthEventOnOpened = true;` |

**Notes:**

> Whether opening the chest triggers the wealth event; defaults to true.

---

### Property `DropConfigKey`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") FName DropConfigKey = NAME_None;` |

**Notes:**

> Key name of the drop configuration.

---

### Property `OpeningElapsedSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") float OpeningElapsedSeconds = 0.f;` |

**Notes:**

> Elapsed time in seconds of the current opening process.

---

## Blueprint-exposed functions

### Function `InitWorldSectBattleChest`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InChestType` | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void InitWorldSectBattleChest(EWorldSectBattleChestType InChestType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Initializes the sect battle chest with the given chest type.

---

### Function `GetChestType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") EWorldSectBattleChestType GetChestType() const { return ChestType; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the chest type.

---

### Function `IsOpened`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsOpened() const { return bOpened; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether the chest has been opened.

---

### Function `IsOpening`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsOpening() const { return bOpening; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether the chest is currently being opened.

---

### Function `SetTriggerWealthEventOnOpened`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bInTrigger` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void SetTriggerWealthEventOnOpened(bool bInTrigger) { bTriggerWealthEventOnOpened = bInTrigger; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets whether opening the chest triggers the wealth event.

---

### Function `ShouldTriggerWealthEventOnOpened`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool ShouldTriggerWealthEventOnOpened() const { return bTriggerWealthEventOnOpened; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether opening the chest triggers the wealth event.

---

### Function `SetDropConfigKey`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDropConfigKey` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void SetDropConfigKey(FName InDropConfigKey) { DropConfigKey = InDropConfigKey; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the drop configuration key.

---

### Function `GetDropConfigKey`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `FName` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") FName GetDropConfigKey() const { return DropConfigKey; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the drop configuration key.

---

### Function `SpawnChestDrops`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void SpawnChestDrops();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Spawns the chest's drop actors.

---

### Function `K2_OnSectBattleChestOpened`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Interactor` | `AActor*` |
| `OpenedChestType` | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Chest", meta = (DisplayName = "OnSectBattleChestOpened")) void K2_OnSectBattleChestOpened(AActor* Interactor, EWorldSectBattleChestType OpenedChestType);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnSectBattleChestOpened".

**Notes:**

> Blueprint reads loot by ChestType and plays open feedback here.

---
