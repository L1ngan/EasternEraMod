# `class` `UEventGenerateCharacterComponent`

**Source header:** `EastRimWorld/System/EventGenerateCharacterComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `bInitComponent`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bInitComponent = false;` |

**Source comments:**

> 是否初始化完成

---

### Property `MonsterGenerationInfoQueue`

| Field | Details |
|------|------|
| C++ type | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FMonsterGenerationInfo> MonsterGenerationInfoQueue;` |

**Source comments:**

> 队列中的信息

---

### Property `GenerationInstanceInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FGenerationInstanceInfo](../WorldSystem/WorldStruct__FGenerationInstanceInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FGuid,FGenerationInstanceInfo> GenerationInstanceInfos;` |

**Source comments:**

> 已经生成的信息

---

### Property `MonsterDissatisfyGenerationInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FMonsterGenerationInfo> MonsterDissatisfyGenerationInfo;` |

**Source comments:**

> 不满足条件的信息

---

### Property `EnemyForceAttackGenerationInfoQueue`

| Field | Details |
|------|------|
| C++ type | TArray<[FEnemyForceAttackGenerationInfo](../WorldSystem/WorldStruct__FEnemyForceAttackGenerationInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FEnemyForceAttackGenerationInfo> EnemyForceAttackGenerationInfoQueue;` |

**Source comments:**

> 敌对势力袭击生成队列

---

### Property `NotGenerationID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FName> NotGenerationID;` |

**Source comments:**

> 不再生成的配置

---

### Property `OnGenerateCharacterDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnGenerateCharacterDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGenerateCharacterDelegate OnGenerateCharacterDelegate;` |

**Source comments:**

> 生成角色

---

### Property `OnUpdateGenerateTimeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateGenerateTimeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateGenerateTimeDelegate OnUpdateGenerateTimeDelegate;` |

---

### Property `OnGenerateAllFinish`

| Field | Details |
|------|------|
| C++ type | `FOnGenerateAllFinish` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGenerateAllFinish OnGenerateAllFinish;` |

---

### Property `GenerateCharacterSourceType`

| Field | Details |
|------|------|
| C++ type | `EGenerateCharacterSourceType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EGenerateCharacterSourceType GenerateCharacterSourceType = EGenerateCharacterSourceType::None;` |

**Source comments:**

> 此组件生成的对象

---

## Blueprint-exposed functions

### Function `GetInstanceGenerationActorInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FInstanceGenerationActorInfo](../WorldSystem/WorldStruct__FInstanceGenerationActorInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInstanceGenerationActorInfo GetInstanceGenerationActorInfo(const FGuid & GenerationInstanceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过GUID获取对应的生成怪物信息实例信息

---

### Function `GetGenerationQueueInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FMonsterGenerationInfo GetGenerationQueueInfo(const FGuid & GenerationGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过GUID获取对应的生成队列中的信息

---

### Function `RemoveGenerationActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGenerationActor(AActor * Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除生成记录的单位

---

### Function `RemoveGenerationActorByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActorGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGenerationActorByGuid(FGuid ActorGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ExcludeCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |
| `CharacterActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExcludeCharacter(const FGuid & GenerationInstanceGuid,AEastRimWorldCharacter * CharacterActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 生成中排除角色

---

### Function `GetMonsterArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FString, int32>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MonsterArray` | `const TArray<FString>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FString, int32> GetMonsterArray(const TArray<FString>& MonsterArray);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 归类怪物

---

### Function `GetAllGenerationCharacterByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGenerationInstanceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllGenerationCharacterByGuid(const FGuid & InGenerationInstanceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过GUID获取所有生成的角色

---

### Function `CreateGenerationByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGenerationID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateGenerationByID(const FName & InGenerationID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID 创建生成信息

---

### Function `CreateGenerationByIDWithTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGenerationID` | `const FName&` |
| `DelayTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateGenerationByIDWithTime(const FName& InGenerationID,float DelayTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID 创建生成信息附加延迟时间

---
