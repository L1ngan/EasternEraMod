# `class` `AEasternEraPostStationActor`

**Source header:** `EastRimWorld/PostStation/EasternEraPostStationActor.h`

---

## Functional description (from header comments)

> GOAP-based post station actor that manages NPC generation lines, martial arts sparring, trade areas and character recruitment.

## Blueprint-exposed variables

### Property `MeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UStaticMeshComponent> MeshComponent;` |

**Notes:**

> Main static mesh component of the post station (holds NPC sockets).

---

### Property `GenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**Notes:**

> Event character generation component used to spawn post station NPCs.

---

### Property `EnvironComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UERW_EnvironComponent](../Components/ERW_EnvironComponent__UERW_EnvironComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UERW_EnvironComponent> EnvironComponent;` |

**Notes:**

> Environment component of the post station (UERW_EnvironComponent).

---

### Property `SaledGoodsAreaMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> SaledGoodsAreaMeshComponent;` |

**Notes:**

> Static mesh component of the sold goods area.

---

### Property `ExchangeMartialArtsAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) FGOAP_Action ExchangeMartialArtsAction;` |

**Notes:**

> GOAP action for martial arts sparring (saved to slot).

---

### Property `ExchangeMartialArtsInstances`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FExchangeMartialArtsInstance](PostStationStruct__FExchangeMartialArtsInstance.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FGuid,FExchangeMartialArtsInstance> ExchangeMartialArtsInstances;` |

**Notes:**

> All active sparring instances keyed by GUID (saved).

---

### Property `ExchangeMartialArtsCharacterTrans`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,FTransform>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FGuid,FTransform> ExchangeMartialArtsCharacterTrans;` |

**Notes:**

> Transforms of characters participating in sparring, keyed by character GUID (saved).

---

### Property `OnExchangeMartialArtsEnd`

| Field | Details |
|------|------|
| C++ type | `FOnExchangeMartialArtsEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnExchangeMartialArtsEnd OnExchangeMartialArtsEnd;` |

**Notes:**

> Delegate broadcast when a sparring match ends, carrying the instance (including the result).

---

### Property `NeedDestroyNPC`

| Field | Details |
|------|------|
| C++ type | TArray<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TArray<AEastRimWorldCharacter_Human*> NeedDestroyNPC;` |

**Notes:**

> ------------补丁 处理火云邪神------------

---

### Property `IsPause`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,meta=(AllowPrivateAccess=true)) bool IsPause = false;` |

**Notes:**

> Whether post station NPC generation is paused.

---

## Blueprint-exposed functions

### Function `UpdateTaskCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void UpdateTaskCondition(const FCommonTaskCondition& Condition) override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Updates a task condition (ITaskInterface implementation).

---

### Function `InitPostStation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitPostStation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 仅新游戏：WorldPlace::InitFirstTimeEnter -> SpawnWorldPlacePostStationActor。读档由存档恢复 Actor，不会调用本函数。

---

### Function `RandGenerate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerateLine` | [FPostStationGenerateLine](PostStationStruct__FPostStationGenerateLine.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RandGenerate(FPostStationGenerateLine& GenerateLine);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Performs a random NPC generation on the given generate line.

---

### Function `OnNPCArriveOriginPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewMonster` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnNPCArriveOriginPoint(AEastRimWorldCharacter * NewMonster);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Handles an NPC arriving at its assigned station socket (origin point).

---

### Function `GetNPCOriginTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FTransform` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FTransform GetNPCOriginTransform(const FGuid& InCharacterGuid);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取驿站NPC插槽所在位置

---

### Function `IsExchangeMartialArtsOngoing`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsExchangeMartialArtsOngoing() const { return ExchangeMartialArtsInstances.Num() > 0; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否有切磋在进行(Waiting/Ongoing 任一)。供事件对决(强袭宿敌)互斥查询

---

### Function `CreateExchangeMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigID` | `const FName&` |
| `NPCCharacter` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `PlayerCharacters` | const TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CreateExchangeMartialArts(const FName& ConfigID,AEastRimWorldCharacter* NPCCharacter,const TArray<AEastRimWorldCharacter*>& PlayerCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建切磋

---

### Function `ExchangeMartialArtsSignIn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattleGuid` | `const FGuid&` |
| `InCharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExchangeMartialArtsSignIn(const FGuid& InBattleGuid,const FGuid& InCharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切磋签到

---

### Function `RecruitCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacter` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecruitCharacter(AEastRimWorldCharacter* InCharacter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 招募角色

---

### Function `ResetSaledGoodsAreaLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetSaledGoodsAreaLocation(const FVector& NewLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Resets the location of the sold goods area mesh component.

---

### Function `ClearPostStation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearPostStation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Clears the post station's generated content and state.

---

### Function `PauseGenerate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InIsPause` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PauseGenerate(bool InIsPause);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets whether post station NPC generation is paused.

---
