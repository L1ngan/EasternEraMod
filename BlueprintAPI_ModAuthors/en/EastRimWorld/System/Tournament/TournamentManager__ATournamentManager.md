# `class` `ATournamentManager`

**Source header:** `EastRimWorld/System/Tournament/TournamentManager.h`

---

## Functional description (from header comments)

> 武林大会管理器

## Blueprint-exposed variables

### Property `LastSoloTournamentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float LastSoloTournamentTime = 0.0f;` |

**Notes:**

> 上次单人比赛的时间

---

### Property `LastTeamTournamentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float LastTeamTournamentTime = 0.0f;` |

**Notes:**

> 上次多人比赛的时间

---

### Property `CurrentTournamentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurrentTournamentTime = 0.0f;` |

**Notes:**

> //当前比赛时间（以进入场景时间为准 场景外使用倒计时计算）

---

### Property `TournamentConfigurationAsset`

| Field | Details |
|------|------|
| C++ type | TWeakObjectPtr<[UTournamentConfigurationAsset](../../Components/ERW_GameConfigComponent__UTournamentConfigurationAsset.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TWeakObjectPtr<UTournamentConfigurationAsset> TournamentConfigurationAsset;` |

**Notes:**

> Tournament Configuration Asset field.

---

### Property `OnTournamentStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnTournamentStateChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTournamentStateChanged OnTournamentStateChanged;` |

**Notes:**

> 委托：比赛状态变化

---

### Property `OnSingleBattlePrepare`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTournamentBattleInfo` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattlePrepare;` |

**Notes:**

> 单场比赛预备(连线动画)

---

### Property `OnSingleBattleStart`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTournamentBattleInfo` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleStart;` |

**Notes:**

> 单场比赛开始(战斗开始动画)

---

### Property `OnSingleBattleInProgress`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTournamentBattleInfo` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleInProgress;` |

**Notes:**

> 单场比赛开始(战斗开始动画)

---

### Property `OnSingleBattleEnd`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTournamentBattleInfo` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleEnd;` |

**Notes:**

> 单场比赛结束(显示战斗结果)

---

### Property `OnSingleBattleSettle`

| Field | Details |
|------|------|
| C++ type | `FOnUpdateTournamentBattleInfo` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleSettle;` |

**Notes:**

> 单场比赛结算(结果连线)

---

### Property `OnTournamentNextRound`

| Field | Details |
|------|------|
| C++ type | `FOnTournamentNextRound` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTournamentNextRound OnTournamentNextRound;` |

**Notes:**

> 下一回合

---

### Property `OnTournamentEnd`

| Field | Details |
|------|------|
| C++ type | `FOnTournamentEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTournamentEnd OnTournamentEnd;` |

**Notes:**

> On Tournament End event or callback.

---

### Property `OnSkipCurRoundSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnSkipCurRoundSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnSkipCurRoundSucceed OnSkipCurRoundSucceed;` |

**Notes:**

> 跳过当前回合成功

---

### Property `OnRegistrationChange`

| Field | Details |
|------|------|
| C++ type | `FOnRegistrationChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRegistrationChange OnRegistrationChange;` |

**Notes:**

> 报名状态切换

---

## Blueprint-exposed functions

### Function `GetTournamentManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ATournamentManager](TournamentManager__ATournamentManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static ATournamentManager* GetTournamentManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Tournament Manager.

---

### Function `GetCurrentTournamentInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutTournamentInfo` | [FTournamentInstance](TournamentStruct__FTournamentInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetCurrentTournamentInfo(FTournamentInstance& OutTournamentInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前比赛信息

---

### Function `GetLastTournamentInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutTournamentInfo` | [FTournamentInstance](TournamentStruct__FTournamentInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetLastTournamentInfo(FTournamentInstance& OutTournamentInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取上一次比赛信息

---

### Function `IsInRegistrationPeriod`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsInRegistrationPeriod() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否在报名期间

---

### Function `IsRegistered`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsRegistered(const FGuid& SectGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否已报名

---

### Function `PlayerRegisterTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool PlayerRegisterTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 报名比赛

---

### Function `AssignCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuids` | `const TArray<FGuid> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AssignCharacter(const TArray<FGuid> & CharacterGuids);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 指派角色

---

### Function `CancelCharacterJoinTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CancelCharacterJoinTournament(const FGuid & CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消角色参加比赛

---

### Function `PlayerSitOutTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerSitOutTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家不参加比赛

---

### Function `PlayerUnregisterTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerUnregisterTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家取消报名

---

### Function `GetRegistrationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `OutSectInfo` | [FTournamentSectInfo](TournamentStruct__FTournamentSectInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetRegistrationInfo(const FGuid& SectGuid,FTournamentSectInfo& OutSectInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取报名信息

---

### Function `ExecuteOffFieldOperation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SourceSectGuid` | `const FGuid&` |
| `TargetSectGuid` | `const FGuid&` |
| `OperationID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ExecuteOffFieldOperation(const FGuid& SourceSectGuid, const FGuid& TargetSectGuid, const FName& OperationID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 执行场外操作

---

### Function `CancelOffFieldOperation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SourceSectGuid` | `const FGuid&` |
| `TargetSectGuid` | `const FGuid&` |
| `OperationID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CancelOffFieldOperation(const FGuid& SourceSectGuid, const FGuid& TargetSectGuid, const FName& OperationID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 执行场外操作

---

### Function `PlayerStartTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerStartTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家所在分组开始比赛

---

### Function `ProcessPlayerGroupBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ProcessPlayerGroupBattle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 处理玩家分组比赛

---

### Function `AboutToStartTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AboutToStartTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通知比赛即将开始 除玩家阵营所在分组外直接计算结果

---

### Function `TournamentEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TournamentEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束比赛并结算

---

### Function `TournamentSettle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TournamentSettle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Tournament Settle field.

---

### Function `UpdateTournamentCycle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateTournamentCycle(float GameTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新比赛周期

---

### Function `GetLastTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetLastTime();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取倒计时

---

### Function `CheckCanCreateTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanCreateTournament() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否需要创建新比赛

---

### Function `CreateNewTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TournamentType` | [ETournamentType](TournamentStruct__ETournamentType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateNewTournament(ETournamentType TournamentType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建新比赛

---

### Function `CalculateTournamentGroups`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateTournamentGroups();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算比赛分组信息

---

### Function `CalculateSectCombatPower`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateSectCombatPower();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算各门派战力

---

### Function `SkipAndCalculateBattleResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleInfo` | [FTournamentBattleInfo](TournamentStruct__FTournamentBattleInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipAndCalculateBattleResult(FTournamentBattleInfo & BattleInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 跳过战斗（自动计算结果）

---

### Function `SkipBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipBattle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 跳过当前战斗

---

### Function `EnterTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool EnterTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 进入门派比武

---

### Function `ExitTournament`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ExitTournament();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 离开门派比武

---

### Function `SetSkipPlayerBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSkip` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSkipPlayerBattle(bool bSkip);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置跳过玩家战斗

---

### Function `SetSkipNpcBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSkip` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetSkipNpcBattle(bool bSkip);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置跳过NPC战斗

---

### Function `GetSkipPlayerBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetSkipPlayerBattle() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取跳过玩家战斗状态

---

### Function `GetSkipNpcBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetSkipNpcBattle() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取跳过NPC战斗状态

---

### Function `SkipAllCurRound`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipAllCurRound();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 跳过当前轮所有的比赛 并直接计算结果

---

### Function `SetRankResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RankList` | `TArray<FGuid>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRankResult(TArray<FGuid> RankList);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 比武结束时设置排名信息

---
