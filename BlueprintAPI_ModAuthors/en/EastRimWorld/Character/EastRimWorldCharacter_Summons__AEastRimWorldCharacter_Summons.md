# `class` `AEastRimWorldCharacter_Summons`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter_Summons.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OwnerGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FGuid OwnerGuid;` |

**Source comments:**

> 拥有此召唤物的对象GUID

---

### Property `SelfAttachActor`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AActor> SelfAttachActor;` |

**Source comments:**

> 召唤物的附加者

---

### Property `WorkComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldWorkComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

---

### Property `CurRobotName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FText CurRobotName;` |

**Source comments:**

> 当前机关人的名字

---

### Property `bAutoTreat`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bAutoTreat = true;` |

**Source comments:**

> 受伤时是否需要自动维修（治疗）

---

### Property `bIsFindingRepairBuildings`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bIsFindingRepairBuildings = false;` |

**Source comments:**

> 是否正在主动寻找充能

---

### Property `ResidueLifeTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float ResidueLifeTime = -1.f;` |

---

### Property `ActiveType`

| Field | Details |
|------|------|
| C++ type | `ERobotActiveType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) ERobotActiveType ActiveType = ERobotActiveType::Normal;` |

**Source comments:**

> 机关人的状态

---

### Property `UsePuppetPlatformSlotLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FVector UsePuppetPlatformSlotLocation = FVector::ZeroVector;` |

**Source comments:**

> 记录使用的傀儡台位置

---

### Property `UsePuppetPlatform`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FUObjectData UsePuppetPlatform;` |

**Source comments:**

> 记录使用的傀儡台

---

### Property `OnSummonsRename`

| Field | Details |
|------|------|
| C++ type | `FSummonsRename` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FSummonsRename OnSummonsRename;` |

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

---

### Function `RemoveStandbyAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveStandbyAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---
