# `class` `AWorldBattleManager`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `WorldBattleCharacterInfo`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FWorldBattleCharacterInfo](WorldBattleManager__FWorldBattleCharacterInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int32,FWorldBattleCharacterInfo> WorldBattleCharacterInfo;` |

**Source comments:**

> 各阵营战斗的存活（没有重伤）角色信息

---

### Property `CommonLogComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonLogComponent](../../Components/CommonLogComponent__UCommonLogComponent.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UCommonLogComponent> CommonLogComponent;` |

---

### Property `OnExtractStratagemDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnExtractStratagemDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnExtractStratagemDelegate OnExtractStratagemDelegate;` |

**Source comments:**

> 抽取战略卡牌

---

### Property `OnExtractCharacterCardDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnExtractCharacterCardDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnExtractCharacterCardDelegate OnExtractCharacterCardDelegate;` |

**Source comments:**

> 抽取角色卡牌

---

### Property `OnUpdateExtractStratagemTimeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateExtractStratagemTimeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateExtractStratagemTimeDelegate OnUpdateExtractStratagemTimeDelegate;` |

---

### Property `OnUpdateExtractCharacterTimeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateExtractCharacterTimeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateExtractCharacterTimeDelegate OnUpdateExtractCharacterTimeDelegate;` |

---

### Property `OnFOnBattleStateChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnBattleStateChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBattleStateChange OnFOnBattleStateChangeDelegate;` |

---

### Property `OnCancelBattlefieldDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnBattleStateChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBattleStateChange OnCancelBattlefieldDelegate;` |

---

### Property `OnGenerateDogfaceTimeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnGenerateDogfaceTimeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGenerateDogfaceTimeDelegate OnGenerateDogfaceTimeDelegate;` |

**Source comments:**

> 小兵的剩余生成时间

---

### Property `OnUpdateStrategyPointChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateStrategyPointChangeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateStrategyPointChangeDelegate OnUpdateStrategyPointChangeDelegate;` |

---

### Property `OnUpdateResourcePointChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateResourcePointChangeDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateResourcePointChangeDelegate OnUpdateResourcePointChangeDelegate;` |

---

### Property `OnUpdateTeamKillNumberDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTeamKillNumberDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamKillNumberDelegate OnUpdateTeamKillNumberDelegate;` |

---

### Property `OnTeamMultiKillDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnTeamMultiKillDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTeamMultiKillDelegate OnTeamMultiKillDelegate;` |

---

### Property `OnNotificationDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnNotificationDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnNotificationDelegate OnNotificationDelegate;` |

**Source comments:**

> 日志通知

---

### Property `MeanTimeToRecovery`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 MeanTimeToRecovery = 3;` |

**Source comments:**

> 资源量单位的恢复时间

---

### Property `CurTimeToRecovery`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurTimeToRecovery = 0.f;` |

**Source comments:**

> 当前恢复时间

---

## Blueprint-exposed functions

### Function `GetWorldBattleManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldBattleManager](WorldBattleManager__AWorldBattleManager.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static AWorldBattleManager * GetWorldBattleManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `CreateBattlefield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleType` | `EBattleType` |
| `BattlePlaceGuid` | `const FGuid &` |
| `RelevancyPlaceGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattlefieldInformation& CreateBattlefield(EBattleType BattleType,const FGuid & BattlePlaceGuid,const FGuid & RelevancyPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建战场信息

---

### Function `CancelBattlefield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CancelBattlefield(const FGuid & InBattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 取消战场不做结算

---

### Function `GetBattlefieldInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `OutBattlefieldInformation` | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBattlefieldInformation(const FGuid & InBattlefieldGuid, FBattlefieldInformation & OutBattlefieldInformation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查找战场信息

---

### Function `JoinBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForce` | [AWorldForce](../WorldForce__AWorldForce.md) * |
| `InBattlefieldGuid` | `const FGuid &` |
| `BattleTeamInfo` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool JoinBattle(AWorldForce * WorldForce,const FGuid & InBattlefieldGuid,const FBattleTeamInfo & BattleTeamInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入战斗

---

### Function `CheckCanRetreatBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldInformation` | const [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md)& |
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanRetreatBattle(const FBattlefieldInformation& InBattlefieldInformation,int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以撤退

---

### Function `RetreatBattleOnStart`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RetreatBattleOnStart(const FGuid & InBattlefieldGuid,int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 战斗开始前撤退

---

### Function `RemoveBattlefieldInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveBattlefieldInformation(const FGuid & InBattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除战斗信息

---

### Function `BattleSurrender`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `TeamID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BattleSurrender(const FGuid & InBattlefieldGuid,int32 TeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 战斗投降

---

### Function `EnterBattlefield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EnterBattlefield(const FGuid & InBattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 进入战场

---

### Function `GetCharacterMovePath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FVector>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FVector> GetCharacterMovePath(ACharacter * Character,int32 BranchingIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色当前的行进路线

---

### Function `GetCurPlaceBattlefieldInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattlefieldInformation GetCurPlaceBattlefieldInformation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前地点的战场信息

---

### Function `GetNextPathPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |
| `OutPathIndex` | `int32 &` |
| `(unnamed / type only)` | `float MinDistance = 100.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector GetNextPathPoint(ACharacter * Character,int32 BranchingIndex,int32 & OutPathIndex,float MinDistance = 100.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取行走的下一个路径点

---

### Function `GetNextPathPointByIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |
| `InPathIndex` | `int32` |
| `OutPathIndex` | `int32 &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector GetNextPathPointByIndex(ACharacter * Character,int32 BranchingIndex,int32 InPathIndex, int32 & OutPathIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前路径点的下一个路径点

---

### Function `GetWorldBattleCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamID` | `int32` |
| `BattlefieldRolesType` | `EBattlefieldRolesType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<AEastRimWorldCharacter*> GetWorldBattleCharacters(int32 TeamID,EBattlefieldRolesType BattlefieldRolesType);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取战斗中的角色

---

### Function `GetCrystalCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) AEastRimWorldCharacter* GetCrystalCharacter(int32 TeamID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取存活的水晶

---

### Function `ReleaseStrategicAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StratagemAbility` | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| `TeamId` | `int32` |
| `ProjectileHitEventData` | `FProjectileHitEventData` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ReleaseStrategicAbility(FStratagemAbility StratagemAbility,int32 TeamId,FProjectileHitEventData ProjectileHitEventData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放战略技能

---

### Function `ReleaseRangeAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `TeamId` | `int32` |
| `ProjectileHitEventData` | `const FProjectileHitEventData &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ReleaseRangeAbility(const FStratagemAbility & StratagemAbility,int32 TeamId,const FProjectileHitEventData & ProjectileHitEventData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放范围技能

---

### Function `ReleaseGlobalAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReleaseGlobalAbility(const FStratagemAbility & StratagemAbility,int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放全局技能

---

### Function `CheckCanReleaseStrategic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanReleaseStrategic(const FStratagemAbility & StratagemAbility,const FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以释放战略技能

---

### Function `ExtractStratagemAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `Number` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExtractStratagemAbility(FBattleTeamState & BattleTeamState,int Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 抽取战略卡牌

---

### Function `ExtractCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `Number` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExtractCharacters(FBattleTeamState & BattleTeamState,int Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 抽取角色卡牌

---

### Function `ExtractStratagemAbilityByTeamGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamGuid` | `const FGuid &` |
| `Number` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExtractStratagemAbilityByTeamGuid(const FGuid & TeamGuid,int Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过阵营guid抽取战略卡牌

---

### Function `ExtractCharactersByTeamGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamGuid` | `const FGuid &` |
| `Number` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExtractCharactersByTeamGuid(const FGuid & TeamGuid,int Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过角色guid抽取角色卡牌

---

### Function `GetBattleTeamState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattleTeamState GetBattleTeamState(int32 TeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取阵营信息

---

### Function `StartExtractionStratagemTiming`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartExtractionStratagemTiming(FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开启抽取战略计时

---

### Function `CheckCanExtractionStratagem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanExtractionStratagem(const FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以抽取战略

---

### Function `StartExtractionCharacterTiming`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartExtractionCharacterTiming(FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开启抽取角色计时

---

### Function `CheckCanExtractionCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanExtractionCharacter(const FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以抽取角色

---

### Function `ClearTimerHandleAndDelegate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearTimerHandleAndDelegate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 清理定时器

---

### Function `AddTimerHandleAndDelegate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTimerHandleAndDelegate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加定时器

---

### Function `GetPlayerBattleTeamState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattleTeamState GetPlayerBattleTeamState();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取玩家阵营信息

---

### Function `GetPlayerBattleTeamStateById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattleTeamState GetPlayerBattleTeamStateById(const FGuid & InBattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 或者通过战场信息获取玩家阵营信息

---

### Function `UseCharacterCard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterSaveData` | const [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool UseCharacterCard(const FCharacterSaveData & CharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 释放角色卡牌

---

### Function `CheckCanUseCharacterCard`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterSaveData` | const [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) & |
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanUseCharacterCard(const FCharacterSaveData & CharacterSaveData,const FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否可以释放角色卡牌

---

### Function `ChangeStrategyPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PointValue` | `int32` |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeStrategyPoint(int32 PointValue,FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 改变战略点数

---

### Function `ChangeResourcePoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PointValue` | `int32` |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeResourcePoint(int32 PointValue,FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 改变资源点数

---

### Function `GetMaxStrategyPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetMaxStrategyPoint(const FBattleTeamState& BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取战略点上限

---

### Function `GetMaxResourcePoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetMaxResourcePoint(const FBattleTeamState& BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取资源点上限

---

### Function `RecordCombatData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterDeathInformation` | const [FCharacterDeathInformation](../../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecordCombatData(const FCharacterDeathInformation & CharacterDeathInformation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 统计战斗数据

---

### Function `UpdateAutoReleaseStrategyTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `DeltaTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateAutoReleaseStrategyTime(FBattleTeamState & BattleTeamState,float DeltaTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新自动使用战略技能时间

---

### Function `AutoReleaseStrategy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StratagemAbility` | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AutoReleaseStrategy(FStratagemAbility StratagemAbility,FBattleTeamState & BattleTeamState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 自动使用战略技能

---

### Function `UpdateAutoUseCharacterTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `DeltaTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateAutoUseCharacterTime(FBattleTeamState & BattleTeamState,float DeltaTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新自动使用角色技能时间

---

### Function `ReturnToBase`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReturnToBase();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 返回驻地

---

### Function `PlayerSelectDisposalPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `PlaceDisposalType` | `EPlaceDisposalType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool PlayerSelectDisposalPlace(const FGuid & BattlefieldInformationGuid,EPlaceDisposalType PlaceDisposalType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 玩家胜利处置城市

---

### Function `PlayerDisposalCaptureCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `PostwarCharacterDispose` | `const TMap<FGuid,ECaptureCharacterDisposalType> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerDisposalCaptureCharacter(const FGuid & BattlefieldInformationGuid,const TMap<FGuid,ECaptureCharacterDisposalType> & PostwarCharacterDispose);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 玩家胜利处置俘虏的角色

---

### Function `PlayerSelectGarrisonCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `GarrisonCharacter` | `const TArray<FGuid>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerSelectGarrisonCharacter(const FGuid & BattlefieldInformationGuid,const TArray<FGuid> GarrisonCharacter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 选择留守的人

---

### Function `SettleAccountsComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SettleAccountsComplete(const FGuid & BattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 结算完成

---

### Function `AttackerStartMove`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldGuid` | `const FGuid &` |
| `(unnamed / type only)` | `ETransportationType TransportationType = ETransportationType::Walking` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AttackerStartMove(const FGuid & BattlefieldGuid,ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 攻击方开始出发

---

### Function `RemoveBattleMoverTip`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttacherMoverGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveBattleMoverTip(const FGuid & AttacherMoverGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 删除战斗移动提示

---

### Function `UpdateSeriousInjuryCharacterState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `CharacterCureState` | `ECharacterCureState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateSeriousInjuryCharacterState(AEastRimWorldCharacter * Character,ECharacterCureState CharacterCureState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新重伤人员的状态

---

### Function `FindLayDownSeriousInjuryPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuredCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) FCharacterCureInfo FindLayDownSeriousInjuryPoint(AEastRimWorldCharacter * InjuredCharacter);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取一个可以放置伤员的位置

---

### Function `GetCharacterCureInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuredCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) FCharacterCureInfo GetCharacterCureInfo(AEastRimWorldCharacter * InjuredCharacter);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取治疗信息

---
