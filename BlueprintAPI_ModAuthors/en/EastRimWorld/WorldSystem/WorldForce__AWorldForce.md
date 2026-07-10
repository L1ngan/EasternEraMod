# `class` `AWorldForce`

**Source header:** `EastRimWorld/WorldSystem/WorldForce.h`

---

## Functional description (from header comments)

> World Force actor type.

## Blueprint-exposed variables

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid SGUID;` |

**Notes:**

> GUID.

---

### Property `ForceAimInfo`

| Field | Details |
|------|------|
| C++ type | [FForceAimInfo](WorldStruct__FForceAimInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) FForceAimInfo ForceAimInfo;` |

**Notes:**

> 势力宗旨

---

### Property `OwnedStationNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedStationNum = 0;` |

**Notes:**

> 注: 势力之间的好感度权威源是 AWorldDirector::AllForceFavorability,
> 经 AWorldDirector::GetForceFavorabilityInfo(A,B) 读取。原本势力上的 TMap 从无写入, 已删除。
> 拥有驻地数量

---

### Property `OwnedCenterCityNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedCenterCityNum = 0;` |

**Notes:**

> 拥有城镇数量

---

### Property `OwnedResourcePointNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedResourcePointNum = 0;` |

**Notes:**

> 拥有资源点数量

---

### Property `ForceState`

| Field | Details |
|------|------|
| C++ type | [EForceState](WorldStruct__EForceState.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly) EForceState ForceState = EForceState::Normal;` |

**Notes:**

> 势力的状态

---

### Property `ForceStateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere) float ForceStateTime = 0.f;` |

**Notes:**

> 状态时间

---

### Property `WanderingDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 WanderingDays = 0;` |

**Notes:**

> [PR-12] 流窜已持续天数（Wandering态每日+1，复活后归零）

---

### Property `bExtinct`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bExtinct = false;` |

**Notes:**

> [PR-12] 势力是否已覆灭（覆灭后Actor保留，标记无效）

---

### Property `AvoidBattleTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float AvoidBattleTime = 0.f;` |

**Notes:**

> 避战时间

---

### Property `TotalCombat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalCombat = 0.f;` |

**Notes:**

> 战力总和

---

### Property `AttackColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) float AttackColdDown = 999999.f;` |

**Notes:**

> 攻击间隔时间

---

### Property `TotalProsperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalProsperity = 0.f;` |

**Notes:**

> 总繁荣度

---

### Property `WorldForceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FName WorldForceID;` |

**Notes:**

> 势力id

---

### Property `WorldForceInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldForceInfo](WorldStruct__FWorldForceInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FWorldForceInfo WorldForceInfo;` |

**Notes:**

> 势力信息

---

### Property `TotalReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalReputation = 0.f;` |

**Notes:**

> 总声望值

---

### Property `ForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FText ForceName;` |

**Notes:**

> 当前势力名称

---

### Property `ForceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 ForceLevel;` |

**Notes:**

> 势力等级

---

### Property `LevelUpPlaceInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 LevelUpPlaceInterval;` |

**Notes:**

> 势力升级地点间隔

---

### Property `OccupiedPlace`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FGuid> OccupiedPlace;` |

**Notes:**

> 占领过的地点

---

### Property `OwnStratagemAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnStratagemAbility;` |

**Notes:**

> 拥有的战略技能

---

### Property `OwnSummonRobot`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnSummonRobot;` |

**Notes:**

> 拥有的机关人

---

### Property `OwnTower`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnTower;` |

**Notes:**

> 拥有的防御塔

---

### Property `PuppetEquipmentData`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FPuppetModificationInfo](../Struct/ItemStruct__FPuppetModificationInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TMap<FName, FPuppetModificationInfo> PuppetEquipmentData;` |

**Notes:**

> 傀儡装备数据存储（傀儡ID -> 装备数据）

---

### Property `OnWorldMapLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FVector OnWorldMapLocation;` |

**Notes:**

> 当前势力在世界地图的位置

---

### Property `LevelUpConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FCommonTaskCondition> LevelUpConditions;` |

**Notes:**

> 升级条件

---

### Property `OnFocreLevelChange`

| Field | Details |
|------|------|
| C++ type | `FOnFocreLevelChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnFocreLevelChange OnFocreLevelChange;` |

**Notes:**

> 升级通知

---

### Property `OnRefleshFocrePeople`

| Field | Details |
|------|------|
| C++ type | `FOnRefleshFocrePeople` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRefleshFocrePeople OnRefleshFocrePeople;` |

**Notes:**

> 人员被踢提示

---

### Property `OnOwnedWorldPlaceChange`

| Field | Details |
|------|------|
| C++ type | `FOnOwnedWorldPlaceChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnOwnedWorldPlaceChange OnOwnedWorldPlaceChange;` |

**Notes:**

> On Owned World Place Change event or callback.

---

### Property `OnForceMainPlaceChanged`

| Field | Details |
|------|------|
| C++ type | `FOnForceMainPlaceChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnForceMainPlaceChanged OnForceMainPlaceChanged;` |

**Notes:**

> [PR-12] 主城变更通知（UI/剧情链挂此事件；nullptr=进入流窜）

---

### Property `MainConstructionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FName MainConstructionID;` |

**Notes:**

> 当前势力的主城ID

---

### Property `ForceLevelInfo`

| Field | Details |
|------|------|
| C++ type | [FForceLevelInfo](WorldStruct__FForceLevelInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FForceLevelInfo ForceLevelInfo;` |

**Notes:**

> 势力等级信息

---

### Property `WorldCharacterData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> WorldCharacterData;` |

**Notes:**

> 所在势力的角色信息

---

### Property `CacheFixRemovedCharacterData`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> CacheFixRemovedCharacterData;` |

**Notes:**

> ----补丁 4.15 22:03 暂时保留一下修复存档被移除的数据----

---

### Property `SubClassArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceSubClassInfo> SubClassArr;` |

**Notes:**

> ------------------------------------------------
> 分堂信息(索引从1开始,0为堂主预留)

---

### Property `LeaderSubClassInfo`

| Field | Details |
|------|------|
| C++ type | [FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FForceSubClassInfo LeaderSubClassInfo;` |

**Notes:**

> 掌门的堂口信息（目前仅用于门规管理，其中只有堂口Index和门规有效）(仅玩家势力使用)

---

### Property `ForceMemberJob`

| Field | Details |
|------|------|
| C++ type | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceMemberJobInfo> ForceMemberJob;` |

**Notes:**

> 人员职位信息

---

### Property `MasterGeneration`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) int32 MasterGeneration = 0;` |

**Notes:**

> 第N代掌门

---

### Property `LeaderGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid LeaderGuid;` |

**Notes:**

> 掌门GUID

---

### Property `WorldNPCForceConfig`

| Field | Details |
|------|------|
| C++ type | [FWorldNPCForceConfig](WorldStruct__FWorldNPCForceConfig.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FWorldNPCForceConfig WorldNPCForceConfig;` |

**Notes:**

> NCP配置信息

---

### Property `UnlockForceApparel`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName>UnlockForceApparel;` |

**Notes:**

> 已经解锁的门派服饰

---

### Property `ForceMoney`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) float ForceMoney=0;` |

**Notes:**

> 势力拥有的金钱

---

### Property `ActivePurpose`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FFGuidArr](WorldStruct__FFGuidArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FName , FFGuidArr> ActivePurpose;` |

**Notes:**

> 当前激活的宗旨ID

---

### Property `BefriendedForceGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> BefriendedForceGuids;` |

**Notes:**

> 玩家外交：已结交的门派GUID列表

---

### Property `LastBreakOffDiplomacyTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastBreakOffDiplomacyTime = -1.f;` |

**Notes:**

> 玩家外交：上次断交操作的游戏时间（用于冷却判定，所有门派共享）

---

### Property `LastRequireTaskTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastRequireTaskTime = -1.f;` |

**Notes:**

> 玩家外交：上次请求任务操作的游戏时间（用于冷却判定，所有门派共享）

---

### Property `LastRequireHelpTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastRequireHelpTime = -1.f;` |

**Notes:**

> 玩家外交：上次请求援助操作的游戏时间（用于冷却判定，所有门派共享）

---

### Property `OnPlayerBefriendWithOther`

| Field | Details |
|------|------|
| C++ type | `FOnPlayerBefriendWithOther` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPlayerBefriendWithOther OnPlayerBefriendWithOther;` |

**Notes:**

> On Player Befriend With Other event or callback.

---

### Property `OnPlayerBreakOffWithOther`

| Field | Details |
|------|------|
| C++ type | `FOnPlayerBreakOffWithOther` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPlayerBreakOffWithOther OnPlayerBreakOffWithOther ;` |

**Notes:**

> On Player Break Off With Other event or callback.

---

### Property `ForceRelationLedgers`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="RelationLedger" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, Category = "RelationLedger") TMap<FName, FRelationLedger> ForceRelationLedgers;` |

**Notes:**

> Agent 工作流 PR-003: 势力关系账本 (跟其他势力的恩仇), Key: 另一势力 ID

---

## Blueprint-exposed functions

### Function `AITimeToAttackOtherWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AITimeToAttackOtherWorldPlace();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> AI势力攻击其他地点

---

### Function `CheckCanAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否可以攻击

---

### Function `CalculateTotalDefense`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateTotalDefense() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算城防

---

### Function `AttackWorldPlaceSuccess`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceSuccess(class AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 攻击地点成功(战斗结束后调用)

---

### Function `AttackWorldPlaceFail`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceFail(class AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 攻击地点失败(战斗结束后调用)

---

### Function `WorldPlaceWithSelfDistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float WorldPlaceWithSelfDistance(const AWorldPlace* WorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 地点距离我的城市最短距离

---

### Function `PointWithSelfDistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetPoint` | `const FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float PointWithSelfDistance(const FVector2D& TargetPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 我距离点最近的城市的距离

---

### Function `CalculateTotalCombat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateTotalCombat();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算总战力

---

### Function `CalculateTotalProsperity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateTotalProsperity();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算总繁荣

---

### Function `CheckCanLevelUpForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanLevelUpForce() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否升级势力

---

### Function `LevelUpForceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LevelUpForceLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 升级势力(先调用CheckCanLevelUpForce检查升级条件)

---

### Function `SetMemberJob`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MemberId` | `const FGuid&` |
| `JobType` | const [EForceJobType](WorldStruct__EForceJobType.md) |
| `SubClassIndex` | `const int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetMemberJob(const FGuid& MemberId, const EForceJobType JobType, const int32 SubClassIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置成员的职位

---

### Function `GetMembersJobInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobInfo(const int32 SubClassIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询分堂的成员的职位

---

### Function `GetMembersJobByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `JobType` | [EForceJobType](WorldStruct__EForceJobType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobByType(EForceJobType JobType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询某个职位的成员

---

### Function `K2_FindMemberJobInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MemberId` | `const FGuid&` |
| `OutForceMemberJobInfo` | [FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="FindMemberJobInfo") bool K2_FindMemberJobInfo(const FGuid& MemberId,FForceMemberJobInfo& OutForceMemberJobInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Find Member Job Info field.

---

### Function `CheckMemberIsInnerSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MemberId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsInnerSect(const FGuid& MemberId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查某人是否内门

---

### Function `CheckMemberIsMaster`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MemberId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsMaster(const FGuid& MemberId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查某人是否掌门

---

### Function `CheckCanRecruitMember`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckCanRecruitMember();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查能否招募到主城

---

### Function `UpdateSubClassSetting`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `int32` |
| `NewSubClassName` | `FText` |
| `NewSubClassFeatures` | `TArray<FName>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateSubClassSetting(int32 SubClassIndex, FText NewSubClassName, TArray<FName> NewSubClassFeatures);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新分堂设置

---

### Function `GetForceSubClassInfoByIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FForceSubClassInfo& GetForceSubClassInfoByIndex(int32 SubClassIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取分堂信息

---

### Function `SetSubClassApparel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |
| `bUseSubClassApparel` | `bool` |
| `false` | `bool bIsLeader =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSubClassApparel(const int32 SubClassIndex,bool bUseSubClassApparel , bool bIsLeader = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置分堂所有成员使用统一的服装

---

### Function `SetSubClassApparelByCharacterGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSubClassApparelByCharacterGuid(FGuid CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 给角色应用他所在该分堂的服饰（如果分堂为设置使用统一服装，就还是使用）

---

### Function `GetForceSubClassApparelConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FNameIDArray> GetForceSubClassApparelConfig(const int32 SubClassIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询分堂可以使用的服饰列表

---

### Function `GetUnlockForceLevelByApparelId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ApparelId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetUnlockForceLevelByApparelId(FName ApparelId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询势力服装对应的解锁势力等级

---

### Function `GetSubClassApparelData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |
| `ChaSex` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FName> GetSubClassApparelData(const int32 SubClassIndex,bool ChaSex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取分堂服饰数据

---

### Function `GetSubClassApparelData2`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<bool,[FCustomApparelsSkin](WorldStruct__FCustomApparelsSkin.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<bool,FCustomApparelsSkin> GetSubClassApparelData2(const int32 SubClassIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Sub Class Apparel Data 2.

---

### Function `SetItemUseState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `Tag` | `const FGameplayTag&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetItemUseState(const int32& SubClassIndex , const FGameplayTag& Tag , bool State , bool bIsLeader);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置物品使用状态

---

### Function `SetActionState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `ManageGoal` | `const FName&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool State , bool bIsLeader);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置行为可执行状态

---

### Function `SetTreasureStallState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `StallIndex` | `const int32&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool State , bool bIsLeader);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置货柜可使用状态

---

### Function `InitForceRuleStates`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitForceRuleStates();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化门规管理状态

---

### Function `GetActionState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `ManageGoal` | `const FName&` |
| `bIsLeader` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool bIsLeader) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取行为可执行状态

---

### Function `GetTreasureStallState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `StallIndex` | `const int32&` |
| `bIsLeader` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool bIsLeader) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取可购买的货柜

---

### Function `GetActiveTagNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetActiveTagNum(const int32& SubClassIndex , const FGameplayTag& Tag) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得可用Tag数量

---

### Function `SaveSubClassApparel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SubClassIndex` | `const int32` |
| `NewForceApparels` | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| `CharSex` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SaveSubClassApparel(const int32 SubClassIndex,TMap<EArmorType,FName> NewForceApparels,bool CharSex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 保存势力服饰配置

---

### Function `AddForceReputation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddReputation` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddForceReputation(float AddReputation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加势力声望

---

### Function `ActiveForcePurpose`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PurposeID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ActiveForcePurpose(FName PurposeID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 激活门派宗旨

---

### Function `DeActiveForcePurpose`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PurposeID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DeActiveForcePurpose(FName PurposeID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消门派宗旨

---

### Function `CheckCanOccupyPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `const FGuid &` |
| `WorldPlaceType` | const [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanOccupyPlace(const FGuid & PlaceGuid,const EWorldPlaceType& WorldPlaceType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Check Can Occupy Place.

---

### Function `GetOwnedWorldPlaceArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const TArray<FGuid>&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const TArray<FGuid>& GetOwnedWorldPlaceArray();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取拥有的所有地点GUID

---

### Function `GiveUpWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GiveUpWorldPlace(FGuid PlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 放弃城市

---

### Function `GetCharacterDataByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldCharacterData GetCharacterDataByGuid(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找角色信息

---

### Function `GetCharacterDataByGuidPtr`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `CharacterData` | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetCharacterDataByGuidPtr(const FGuid& CharacterGuid,FEastRimWorldCharacterData& CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Character Data By Guid Ptr.

---

### Function `FindCharacterData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterSaveData FindCharacterData(const FGuid & CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取角色信息

---

### Function `GetAllForceCharacterData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TMap<FGuid,FCharacterSaveData>& GetAllForceCharacterData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get All Force Character Data.

---

### Function `FindCharacterDataRef`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterSaveData & FindCharacterDataRef(const FGuid & CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取角色信息的引用

---

### Function `KickOutCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void KickOutCharacter(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将弟子从势力中踢出

---

### Function `UpdateCharacterData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateCharacterData(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新世界中角色信息

---

### Function `SetCharacterInPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |
| `NewWorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCharacterInPlace(FGuid CharacterGuid,AWorldPlace* NewWorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Character In Place operation.

---

### Function `GetStationCeiling`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FORCEINLINE int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetStationCeiling() const{return ForceLevelInfo.NumberOfStations+ExtraStationCeiling;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取驻地上限

---

### Function `GetResourcePointCeiling`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FORCEINLINE int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetResourcePointCeiling() const{return ForceLevelInfo.NumberOfResourcePoints+ExtraResourcePointCeiling;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取资源点上限

---

### Function `GetCenterCityCeiling`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FORCEINLINE int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetCenterCityCeiling() const{return ForceLevelInfo.NumberOfTowns+ExtraCenterCityCeiling;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取城镇上限

---

### Function `TrySignAgreementWith`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TrySignAgreementWith(const FWorldAgreement& InAgreement){return false;}`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试签署协议

---

### Function `IsJusticeForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FORCEINLINE bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FORCEINLINE bool IsJusticeForce(){return ForceJusticeValue>=0;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否是正派

---

### Function `GetJusticeForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `FORCEINLINE float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FORCEINLINE float GetJusticeForce() const {return ForceJusticeValue;}`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Justice Force.

---

### Function `AddJusticeValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddValue` | `const float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddJusticeValue(const float& AddValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加正邪值

---

### Function `AddNPCGrowScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddValue` | `const float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddNPCGrowScore(const float& AddValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加NPC势力成长积分

---

### Function `GetCurrentGrowScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetCurrentGrowScore() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前成长积分

---

### Function `CheckPlaceOccupied`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlaceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckPlaceOccupied(FGuid PlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否占领过这个地点

---

### Function `JoinForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |
| `BelongToPlaceGuid` | `const FGuid &` |
| `BeInPlaceGuid` | `FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void JoinForce(const FCharacterSaveData & CharacterData,const FGuid & BelongToPlaceGuid,FGuid & BeInPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入势力

---

### Function `LeaveForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LeaveForce(const FGuid & CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 离开势力

---

### Function `GetWorldForceMainConstruction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldPlace* GetWorldForceMainConstruction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取势力主城

---

### Function `GetBattleCanRecruitNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattlefieldInformation` | const [FBattlefieldInformation](WorldBattleSystem/WorldBattleStruct__FBattlefieldInformation.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetBattleCanRecruitNumber(const FBattlefieldInformation & BattlefieldInformation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取战斗可招募的数量

---

### Function `GetAllCanUseSummonRobot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseSummonRobot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有可用的小兵

---

### Function `GetAllCanUseStratagemAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseStratagemAbility();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有可使用的战略技能

---

### Function `GetAllCanUseTower`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseTower();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有可使用的防御塔

---

### Function `GetAllCanBattlePuppet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanBattlePuppet();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有可上阵的傀儡

---

### Function `GetBattleBuffGroups`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FBattleBuffGroup](WorldStruct__FBattleBuffGroup.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FBattleBuffGroup> GetBattleBuffGroups();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取战斗中的buff组

---

### Function `CanPuppetEquipEquipmentType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `(unnamed / type only)` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CanPuppetEquipEquipmentType(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查傀儡是否可以装备指定类型的装备

---

### Function `GetPuppetEquippedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `(unnamed / type only)` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FUseItemSaveData GetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取傀儡的装备数据（使用现有装备系统）

---

### Function `SetPuppetEquippedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ItemData` | const [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)& |
| `(unnamed / type only)` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, const FUseItemSaveData& ItemData, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置傀儡的装备数据

---

### Function `RemovePuppetEquippedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `(unnamed / type only)` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemovePuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除傀儡的装备数据

---

### Function `IsPuppetEquippedWithItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `(unnamed / type only)` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsPuppetEquippedWithItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查傀儡是否已装备指定类型的装备

---

### Function `GetPuppetModificationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FPuppetModificationInfo](../Struct/ItemStruct__FPuppetModificationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FPuppetModificationInfo GetPuppetModificationInfo(const FName& PuppetID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取傀儡的完整装备信息

---

### Function `BuildingAddPuppet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `BuildingGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BuildingAddPuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑物添加傀儡

---

### Function `BuildingRemovePuppet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PuppetID` | `const FName&` |
| `BuildingGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BuildingRemovePuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑物移除傀儡

---

### Function `AddForceMoney`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddForceMoney(float AddValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加或减少势力金钱

---

### Function `GameYearChange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GameYearChange();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 年份更新

---

### Function `CanLaunchActiveAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CanLaunchActiveAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否允许主动发起进攻（驻地有效驻防≥1即可，NPC/玩家统一口径）供UI灰显及AI决策使用

---

### Function `CanPlayerLaunchActiveAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") bool CanPlayerLaunchActiveAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [玩家占旗-C1] 玩家是否可发起主动攻城（薄封装 CanLaunchActiveAttack）。
> 供 W_BattlePrepare 的 Button_Start 灰显 / OpenPlaceAttack 入口拦截。

---

### Function `GetPlayerEligibleAttackPool`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutPool` | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") void GetPlayerEligibleAttackPool(TArray<FCharacterSaveData>& OutPool);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [玩家占旗-C2] 返回玩家主城 D9 可选出征弟子池（复用 BuildEligiblePool 的排除：
> 非物理驻留主城/游荡流亡/闭关突破）。供 W_BattlePrepare 选人列表作数据源。
> 返回值数组拷贝(FCharacterSaveData 为 BlueprintType)，BP 直接绑列表。

---

### Function `RequestPlayerAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetPlaceGuid` | `const FGuid&` |
| `PlayerSelected` | const [FBattleTeamInfo](WorldBattleSystem/WorldBattleStruct__FBattleTeamInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") bool RequestPlayerAttack(const FGuid& TargetPlaceGuid, const FBattleTeamInfo& PlayerSelected);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [玩家占旗-C3] 玩家主动攻城入口：用玩家手选弟子组队，走占旗实战分流(RequestAttack 玩家相关路径)。
> 内部先 CanLaunchActiveAttack 拦截；PlayerSelected.Characters 应来自 GetPlayerEligibleAttackPool。
> 返回是否成功发起(拦截/目标无效则 false)。供 W_BattlePrepare 的 Button_Start 调用。

---

### Function `EnterWandering`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `nullptr` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* LastLostPlace = |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EnterWandering(class AWorldPlace* LastLostPlace = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [PR-12] 进入流窜态：状态机切换 + 委托广播 + [流浪势力]用最后失去的据点作起点在地图上创建流浪队伍条目

---

### Function `ReviveFromWandering`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewBase` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReviveFromWandering(class AWorldPlace* NewBase);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [PR-12] 从流窜态复活：设新主城 + 状态还原

---

### Function `HasWanderingMembers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool HasWanderingMembers() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [流窜求存] 本势力是否有处于世界地图流浪态(OnWorldMapWander)的弟子——供攻城胜利时"无城/有流浪弟子则强制占领"判断

---

### Function `ForcePayRollTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ForcePayRollTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 势力添加发放例银定时器

---

### Function `ForceStartPayRoll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ForceStartPayRoll();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否开始发放例银

---

### Function `AddCurYearReputationFromTreasureHouse`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddReputation` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddCurYearReputationFromTreasureHouse(int32 AddReputation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加从珍宝阁获得的声望

---

### Function `ResetCurYearReputationFromTreasureHouse`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetCurYearReputationFromTreasureHouse();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重置每年从珍宝阁获得的声望

---

### Function `CheckCanBefriendForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanBefriendForce(const FGuid& TargetForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 结交其他门派：检查是否可结交（数量限制、金钱、目标关系等）

---

### Function `BefriendForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool BefriendForce(const FGuid& TargetForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结交其他门派：执行结交，成功后增加好感度并扣除金钱

---

### Function `CheckCanBreakOffForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanBreakOffForce(const FGuid& TargetForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 断交：检查是否可断交（冷却时间、当前是否已结交等）

---

### Function `BreakOffForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool BreakOffForce(const FGuid& TargetForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 断交：执行断交，扣除好感度

---

### Function `GetBefriendedForceCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetBefriendedForceCount() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前结交的门派数量

---

### Function `IsBefriendedWithForce`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsBefriendedWithForce(const FGuid& TargetForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查是否已与某门派结交

---

### Function `TriggerRequireTaskDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerRequireTaskDialogue(AWorldForce* TargetForce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 发起向其他门派请求任务的对话

---

### Function `TriggerRequireHelpDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerRequireHelpDialogue(AWorldForce* TargetForce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 发起向其他门派请求援助的对话

---

### Function `CheckCanRequireTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanRequireTask(AWorldForce* TargetForce);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Check Can Require Task.

---

### Function `CheckCanRequireHelp`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanRequireHelp(AWorldForce* TargetForce);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Check Can Require Help.

---

### Function `TriggerGivePresentsDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerGivePresentsDialogue(AWorldForce* TargetForce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 发起向其他门派上供的对话

---

### Function `TriggerTauntDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerTauntDialogue(AWorldForce* TargetForce);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 发起嘲讽其他门派的对话

---
