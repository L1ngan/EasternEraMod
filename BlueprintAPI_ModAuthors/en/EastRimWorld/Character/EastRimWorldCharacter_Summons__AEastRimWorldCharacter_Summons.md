# `class` `AEastRimWorldCharacter_Summons`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter_Summons.h`

---

## Functional description (from header comments)

> Summons (robot/automaton) character class supporting attach actors, energy management, puppet platforms and survival countdown

## Blueprint-exposed variables

### Property `OwnerGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FGuid OwnerGuid;` |

**Notes:**

> 拥有此召唤物的对象GUID

---

### Property `SelfAttachActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AActor> SelfAttachActor;` |

**Notes:**

> 召唤物的附加者

---

### Property `WorkComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldWorkComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

**Notes:**

> Work component

---

### Property `bIsBuildingAttachSummons`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bIsBuildingAttachSummons = false;` |

**Notes:**

> 是否是建筑物附加的召唤物

---

### Property `CurRobotName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FText CurRobotName;` |

**Notes:**

> 当前机关人的名字

---

### Property `bAutoTreat`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bAutoTreat = true;` |

**Notes:**

> 受伤时是否需要自动维修（治疗）

---

### Property `bIsFindingRepairBuildings`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bIsFindingRepairBuildings = false;` |

**Notes:**

> 是否正在主动寻找充能

---

### Property `ResidueLifeTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float ResidueLifeTime = -1.f;` |

**Notes:**

> Remaining lifetime of the summons; -1 means unlimited

---

### Property `ActiveType`

| Field | Details |
|------|------|
| C++ type | [ERobotActiveType](../Struct/CommonEnum__ERobotActiveType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) ERobotActiveType ActiveType = ERobotActiveType::Normal;` |

**Notes:**

> 机关人的状态

---

### Property `UsePuppetPlatformSlotLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FVector UsePuppetPlatformSlotLocation = FVector::ZeroVector;` |

**Notes:**

> 记录使用的傀儡台位置

---

### Property `UsePuppetPlatform`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FUObjectData UsePuppetPlatform;` |

**Notes:**

> 记录使用的傀儡台

---

### Property `OnSummonsRename`

| Field | Details |
|------|------|
| C++ type | `FSummonsRename` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FSummonsRename OnSummonsRename;` |

**Notes:**

> Delegate broadcast when the summons is renamed (passes the new name)

---

## Blueprint-exposed functions

### Function `CanRemoveStandbyAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CanRemoveStandbyAction() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether the standby action can be removed

---

### Function `RemoveStandbyAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveStandbyAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the standby action

---

### Function `SetRobotAutoTreat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Selected` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRobotAutoTreat(bool Selected);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置机关人受伤是否自动维修

---

### Function `SetRobotDormant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsDormant` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRobotDormant(bool bIsDormant);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置生物休眠

---

### Function `SetAttachActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Summons" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewActor` | `AActor *` |
| `AttachTransform` | `FTransform` |
| `NAME_None` | `FName SocketName =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category = "Summons") void SetAttachActor(AActor * NewActor,FTransform AttachTransform, FName SocketName = NAME_None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置召唤物的控制器（骑乘者）

---

### Function `UpdateSummonsStateBar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void UpdateSummonsStateBar();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新召唤物的名字条

---

### Function `GetSummonsData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldSummonsData](../Struct/CharacterStruct__FEastRimWorldSummonsData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldSummonsData GetSummonsData() { if (auto SummonsData = EastRimWorldCharacterData.GetPtr<FEastRimWorldSummonsData>()) { return *SummonsData; } return {}; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取召唤物的信息

---

### Function `SetUsePuppetPlatform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetPlatform` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `SlotLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetUsePuppetPlatform(AGOAP_ActorBase* PuppetPlatform, const FVector& SlotLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置使用的傀儡台

---

### Function `HasPuppetPlatform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool HasPuppetPlatform() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否有傀儡台

---

### Function `SetSummonsName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSummonsName(FText NewName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the summons' name

---
