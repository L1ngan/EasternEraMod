# `class` `AWorldSectBattleManager`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> World Sect Battle Manager actor type.

## Blueprint-exposed variables

### Property `OnBattleCreated`

| Field | Details |
|------|------|
| C++ type | `FOnWorldBattleRuntimeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleCreated;` |

**Notes:**

> 创建战斗时广播（携带战斗运行时信息）。

---

### Property `OnBattleEntered`

| Field | Details |
|------|------|
| C++ type | `FOnWorldBattleRuntimeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleEntered;` |

**Notes:**

> 进入战斗时广播（携带战斗运行时信息）。

---

### Property `OnSectBattleEnded`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleEnded` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleEnded OnSectBattleEnded;` |

**Notes:**

> 门派战结束时广播（胜方角色 + 结束原因），供蓝图 / UI 监听。
> 注意：EndCurrentSectBattle 内部不再直接调用此广播，改为广播 OnSectBattleEndedUIRequested 弹出结算 UI，
> 由 UI 弹出后调用 BroadcastSectBattleEnded 转发此委托。

---

### Property `OnSectBattleEndedUIRequested`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleEndedUIRequested` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleEndedUIRequested OnSectBattleEndedUIRequested;` |

**Notes:**

> 门派战结束、需要弹出结算 UI 时广播（胜方角色 + 结束原因）。UI 监听此委托弹出结算界面，
> 弹出后应调用 BroadcastSectBattleEnded 转发真正的 OnSectBattleEnded 通知。

---

### Property `OnSectBattleTimeChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleTimeChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleTimeChanged OnSectBattleTimeChanged;` |

**Notes:**

> 门派战剩余时间变化时广播，供 UI 刷新倒计时显示。

---

### Property `OnBattleFlagInfosChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleFlagInfosChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Flag") FOnWorldSectBattleFlagInfosChanged OnBattleFlagInfosChanged;` |

**Notes:**

> 旗帜运行时信息（占领状态 / 归属）变化时广播，供 UI 刷新旗帜列表。

---

### Property `OnBattleMoraleChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleMoraleChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Morale" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Morale") FOnWorldSectBattleMoraleChanged OnBattleMoraleChanged;` |

**Notes:**

> 士气值变化时广播：按当前所有旗子归属占比计算，供 UI 刷新进攻/防守士气条。

---

### Property `OnSectBattleEventTriggered`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleEventTriggered` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Event" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Event") FOnWorldSectBattleEventTriggered OnSectBattleEventTriggered;` |

**Notes:**

> 门派战隐藏事件触发时广播，供 UI 弹出事件提示（事件名 + 描述）。

---

### Property `OnAttackSquadsChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectAttackSquadsChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectAttackSquadsChanged OnAttackSquadsChanged;` |

**Notes:**

> 进攻方小队分组变化时广播，供 UI 刷新弟子所在小队。

---

### Property `OnSectBattleRespawnCountdown`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleRespawnCountdown` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleRespawnCountdown OnSectBattleRespawnCountdown;` |

**Notes:**

> 弟子被击倒→安排复活时广播(参数:复活弟子 Guid + 倒计时秒数)。UI 监听此委托显示复活倒计时(与置灰 OnAttackSquadsChanged=-1 同时机)。

---

### Property `OnSquadStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectSquadStateChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectSquadStateChanged OnSquadStateChanged;` |

**Notes:**

> 进攻方小队作战状态（跟随 / 进攻 / 驻守 Guard 等）变化时广播。

---

### Property `OnGuardPickRequested`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectGuardPickRequested` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectGuardPickRequested OnGuardPickRequested;` |

**Notes:**

> 请求为某个小队挑选 Guard 驻守目标时广播，由 UI 弹出选点交互后回填给 AI。

---

### Property `AttackSquad1State`

| Field | Details |
|------|------|
| C++ type | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad1State = ECharacterSectCombatCommandState::FollowPlayer;` |

**Notes:**

> 进攻方第 1 小队当前作战指令状态。

---

### Property `AttackSquad2State`

| Field | Details |
|------|------|
| C++ type | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad2State = ECharacterSectCombatCommandState::FollowPlayer;` |

**Notes:**

> 进攻方第 2 小队当前作战指令状态。

---

### Property `AttackSquad3State`

| Field | Details |
|------|------|
| C++ type | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad3State = ECharacterSectCombatCommandState::FollowPlayer;` |

**Notes:**

> 进攻方第 3 小队当前作战指令状态。

---

### Property `BattleDurationSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Runtime", meta = (ClampMin = "0.0")) float BattleDurationSeconds = 900.f;` |

**Notes:**

> 战斗总时长（秒），到时未攻破特殊旗则判防守方获胜，可在编辑器中配置。

---

### Property `BattleRemainingSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") float BattleRemainingSeconds = 0.f;` |

**Notes:**

> 战斗剩余时间（秒），由倒计时逻辑实时更新。

---

### Property `bCurrentBattleEnded`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bCurrentBattleEnded = false;` |

**Notes:**

> 当前战斗是否已结束（用于阻止结束后重复结算并供 UI 显示）。

---

### Property `CurrentBattleWinnerRole`

| Field | Details |
|------|------|
| C++ type | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") EWorldBattleRuntimeTeamRole CurrentBattleWinnerRole = EWorldBattleRuntimeTeamRole::None;` |

**Notes:**

> 当前战斗的胜方角色（进攻方 / 防守方）。

---

### Property `bLastSectBattlePlayerVictory`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bLastSectBattlePlayerVictory = false;` |

**Notes:**

> [波3·结算UI用] 本场(最近一场)玩家是否真正获胜。由 EndCurrentSectBattle 用权威身份(GetFightPawnTeamRole 比对 WinnerRole)收敛得出，
> 结算 UI 应读 IsLastSectBattlePlayerVictory() 判胜负，而不再自行判 WinnerRole==Attack(守方局会判反)。

---

### Property `bPendingPlayerVictoryTownDisposal`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bPendingPlayerVictoryTownDisposal = false;` |

**Notes:**

> [玩家占旗胜利-城镇处理] 标记本场占旗战玩家是否获胜，待回基地后弹出城镇处理界面。
> 胜利判定 = 玩家参与(TODO 暂未接入) && WinnerRole==Attack && EndReason==SpecialFlagCaptured。
> 回基地后由 AWorldForce::ReturnMainConstructionBase / Station 处理界面读取，处理完调用 ClearPendingPlayerVictoryTownDisposal 清除。

---

### Property `bPendingOpenWorldMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bPendingOpenWorldMap = false;` |

**Notes:**

> [回基地-弹大地图] 标记门派战结束回到主基地后需要弹出大世界地图，由蓝图在大地图打开后清除。
> 回基地由 AWorldSectBattleManager::ReturnToBase 置位，大地图打开后由蓝图调用 ClearPendingOpenWorldMap 清除。

---

### Property `EventGenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Event" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Event") TObjectPtr<UEventGenerateCharacterComponent> EventGenerateCharacterComponent;` |

**Notes:**

> 门派战隐藏事件用的角色生成组件，负责按事件配置在战场 WorldPlace 内生成角色。

---

### Property `ChestActorClass`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AWorldSectBattleChestActor](../../Actor/WorldSectBattleChestActor__AWorldSectBattleChestActor.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TSubclassOf<AWorldSectBattleChestActor> ChestActorClass;` |

**Notes:**

> Chest Actor Class field.

---

### Property `OpeningChestSpawnChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest", meta = (ClampMin = "0.0", ClampMax = "1.0")) float OpeningChestSpawnChance = 0.5f;` |

**Notes:**

> Executes the Opening Chest Spawn Chance operation.

---

### Property `FlagActorClass`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AWorldSectBattleFlagActor](../../Actor/WorldSectBattleFlagActor__AWorldSectBattleFlagActor.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TSubclassOf<AWorldSectBattleFlagActor> FlagActorClass;` |

**Notes:**

> 旗帜 Actor 蓝图类，用于生成战场旗帜。

---

### Property `CarriageActorClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Carriage" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Carriage") TSubclassOf<AActor> CarriageActorClass;` |

**Notes:**

> 马车 Actor 蓝图类（一辆，所有门派战统一在此设一次）；生成 Transform 在布局表 FWorldSectBattleSectConfig.CarriageSpawnTransform。

---

### Property `FlagConfigTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TObjectPtr<UDataTable> FlagConfigTable;` |

**Notes:**

> 旗帜配置数据表，按 FlagID 查询单面旗帜的配置。

---

### Property `SectFlagLayoutTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TObjectPtr<UDataTable> SectFlagLayoutTable;` |

**Notes:**

> 门派旗帜布局数据表，按布局行配置各旗帜的摆放点。

---

### Property `NormalChestDropTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TObjectPtr<UDataTable> NormalChestDropTable;` |

**Notes:**

> Normal Chest Drop Table field.

---

### Property `SpecialChestDropTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TObjectPtr<UDataTable> SpecialChestDropTable;` |

**Notes:**

> Special Chest Drop Table field.

---

### Property `CityProsperity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") int32 CityProsperity = 1;` |

**Notes:**

> Current city prosperity. Set by Blueprint at battle start; Normal chest matches NormalChestDropTable.CityProsperity by this.

---

### Property `SectName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") FName SectName = NAME_None;` |

**Notes:**

> Current defender sect name. Set by Blueprint at battle start; Special chest matches SpecialChestDropTable.SectName by this.

---

### Property `MoraleEventTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> MoraleEventTable;` |

**Notes:**

> 士气事件数据表：占旗等触发士气事件时从此表随机抽取一条事件配置。

---

### Property `KillEventTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> KillEventTable;` |

**Notes:**

> 击杀事件数据表：击杀防守方等触发击杀事件时从此表随机抽取一条事件配置。

---

### Property `WealthEventTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> WealthEventTable;` |

**Notes:**

> 财富事件数据表：开启宝箱等触发财富事件时从此表随机抽取一条事件配置。

---

### Property `CountdownEventTable`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> CountdownEventTable;` |

**Notes:**

> 倒计时事件数据表：临近结束时按间隔触发倒计时事件，从此表随机抽取一条事件配置。

---

### Property `OnPlayerTeamBuffChanged`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattlePlayerTeamBuffChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Buff" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Buff") FOnSectBattlePlayerTeamBuffChanged OnPlayerTeamBuffChanged;` |

**Notes:**

> ★【主界面 / 头像 UI —— 绑这一个就够】队伍统一 buff 一变化（加 / 事件到期移除 / 士气切档）就广播最新全队 buff 数组。

---

### Property `SectBattlePickedItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Loot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Loot") TArray<FSectBattleLootItem> SectBattlePickedItems;` |

**Notes:**

> 本场拾取的战利品列表（队伍共享）。

---

### Property `OnSectBattleLootChanged`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleLootChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Loot" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Loot") FOnSectBattleLootChanged OnSectBattleLootChanged;` |

**Notes:**

> 战利品变化时广播（新增 / 累加 / 清空），UI 据此刷新背包列表。

---

### Property `CurrentAttackMoraleValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Morale" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Morale", meta = (AllowPrivateAccess = "true")) float CurrentAttackMoraleValue = 0.f;` |

**Notes:**

> Current Attack Morale Value field.

---

### Property `CurrentDefenseMoraleValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Morale" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Morale", meta = (AllowPrivateAccess = "true")) float CurrentDefenseMoraleValue = 0.f;` |

**Notes:**

> Current Defense Morale Value field.

---

### Property `CapturedEnemyDiscipleGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture", meta = (AllowPrivateAccess = "true")) TArray<FGuid> CapturedEnemyDiscipleGuids;` |

**Notes:**

> 已俘虏的敌方弟子 GUID（去重）。打死≥3次后按概率命中即记；被俘弟子仍照常重生、仅标记，战后由清理函数统一处理。每场开局重置。

---

### Property `SelectedDiscipleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|FightPawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|FightPawn") FGuid SelectedDiscipleGuid;` |

**Notes:**

> Leader disciple whose SaveData initializes FightPawn. Falls back to first attacker if invalid or not in this battle.
> Set by the future choose-leader UI; this disciple is NOT spawned as an AI clone.

---

### Property `PlayerJoinedTeamInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldBattleRuntimeJoinTeamInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Team" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Team") FWorldBattleRuntimeJoinTeamInfo PlayerJoinedTeamInfo;` |

**Notes:**

> Player team's join data (the team joined with bIsPlayer=true). Stored separately so chest drop / UI can read it directly without scanning Teams.

---

### Property `BaseRespawnDelaySeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float BaseRespawnDelaySeconds = 2.f;` |

**Notes:**

> 每个角色单独复活时间：基础秒数 / 每次死亡递增 / 最大秒数（双方带入弟子 + FightPawn 共用）。

---

### Property `RespawnDelayIncreasePerDeath`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float RespawnDelayIncreasePerDeath = 1.f;` |

**Notes:**

> Respawn Delay Increase Per Death field.

---

### Property `MaxRespawnDelaySeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float MaxRespawnDelaySeconds = 10.f;` |

**Notes:**

> Max Respawn Delay Seconds field.

---

## Blueprint-exposed functions

### Function `GetWorldSectBattleManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | [AWorldSectBattleManager](WorldSectBattleManager__AWorldSectBattleManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") static AWorldSectBattleManager* GetWorldSectBattleManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前世界门派战管理器单例（蓝图可直接调用）。

---

### Function `GetCurrentBattleMorale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Morale" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAttackMorale` | `float&` |
| `OutDefenseMorale` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Morale") void GetCurrentBattleMorale(float& OutAttackMorale, float& OutDefenseMorale) const { OutAttackMorale = CurrentAttackMoraleValue; OutDefenseMorale = CurrentDefenseMoraleValue; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Current Battle Morale.

---

### Function `IsLastSectBattlePlayerVictory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Runtime") bool IsLastSectBattlePlayerVictory() const { return bLastSectBattlePlayerVictory; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [波3·结算UI查询] 返回最近一场门派战玩家是否获胜(权威口径)。供结算 UI 蓝图读取显示胜/败，替代 UI 自判 WinnerRole==Attack。

---

### Function `CreateBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleType` | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| `BattlePlaceGuid` | `const FGuid&` |
| `RelevancyPlaceGuid` | `const FGuid&` |
| `(unnamed / type only)` | `FGuid FromPlaceGuid = FGuid()` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") FWorldBattleRuntimeInfo CreateBattle(EBattleType BattleType, const FGuid& BattlePlaceGuid, const FGuid& RelevancyPlaceGuid, FGuid FromPlaceGuid = FGuid());`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建一场门派战，返回新建的战斗运行时信息（同时广播创建事件）。
> FromPlaceGuid: 进入战斗前所在的来源地点（如从主基地 MainPlace 出征），用于战斗结束后返回。

---

### Function `RemoveBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool RemoveBattle(const FGuid& BattleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除指定的战斗。

---

### Function `GetBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |
| `OutBattleInfo` | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetBattle(const FGuid& BattleGuid, FWorldBattleRuntimeInfo& OutBattleInfo) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 按 Guid 获取战斗运行时信息。

---

### Function `GetCurrentBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutBattleInfo` | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetCurrentBattle(FWorldBattleRuntimeInfo& OutBattleInfo) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前正在进行的战斗运行时信息。

---

### Function `GetCurrentFightPawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") AERW_FightPawn* GetCurrentFightPawn() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前作为玩家替身的 FightPawn（主控战斗角色）。
> UI 可据此获取 血量组件 → GetHealthComponent → 绑定 OnHealthChanged / OnDamageShieldChanged 监听血量/护盾变化。
> 未 Possess FightPawn 时返回 nullptr。

---

### Function `GetAttackForceName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutForceName` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackForceName(FText& OutForceName) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前战斗进攻方的势力名称。

---

### Function `GetDefenseForceName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutForceName` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetDefenseForceName(FText& OutForceName) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前战斗防守方的势力名称。

---

### Function `GetDefenseForceGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutForceGuid` | `FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetDefenseForceGuid(FGuid& OutForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前战斗防守方的势力 GUID（AWorldForce::SGUID）。供旗子刷怪覆盖 ForceGuid，让随机弟子跟随守方门派。

---

### Function `JoinBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForce` | [AWorldForce](../WorldForce__AWorldForce.md)* |
| `BattleGuid` | `const FGuid&` |
| `JoinTeamInfo` | const [FWorldBattleRuntimeJoinTeamInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool JoinBattle(AWorldForce* WorldForce, const FGuid& BattleGuid, const FWorldBattleRuntimeJoinTeamInfo& JoinTeamInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入战斗：以传入 WorldForce 的 TeamID / TeamGuid 注册一支 WorldForce 队伍。

---

### Function `LeaveBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |
| `TeamGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool LeaveBattle(const FGuid& BattleGuid, const FGuid& TeamGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 让指定队伍离开指定战斗。

---

### Function `EnterBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool EnterBattle(const FGuid& BattleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 进入指定战斗：请求切到战场地点，并由 WorldDirector 处理切图。

---

### Function `ReturnToBase`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void ReturnToBase();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束当前门派战并返回来源地点（镜像 AWorldBattleManager::ReturnToBase）。
> 供战斗结算 UI 上的"返回"按钮调用。

---

### Function `BroadcastSectBattleEnded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WinnerRole` | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| `EndReason` | [EWorldSectBattleEndReason](WorldSectBattleManager__EWorldSectBattleEndReason.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void BroadcastSectBattleEnded(EWorldBattleRuntimeTeamRole WinnerRole, EWorldSectBattleEndReason EndReason) { OnSectBattleEnded.Broadcast(WinnerRole, EndReason); }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [结算 UI 弹出后转发] 供监听 OnSectBattleEndedUIRequested 弹出的结算 UI 调用：
> 转发广播真正的 OnSectBattleEnded(WinnerRole, EndReason)，供其余监听方（记录/存档等）响应战斗结束。

---

### Function `FindBattleGuidByPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RelevancyPlaceGuid` | `const FGuid&` |
| `OutBattleGuid` | `FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool FindBattleGuidByPlace(const FGuid& RelevancyPlaceGuid, FGuid& OutBattleGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [蓝图入口-据点反查] 按关联地点（据点 Guid）查找对应的门派战 BattleGuid。
> 用关联地点 RelevancyPlaceGuid 匹配创建态的 SectBattle 战斗，便于后续 EnterBattle。
> 若该 SectBattle 尚未进入则返回其 BattleGuid，用于由据点界面直接进入对应的门派战。

---

### Function `ChangeWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceGuid` | `const FGuid&` |
| `bEnter` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool ChangeWorldPlace(const FGuid& WorldPlaceGuid, bool bEnter);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换战场地点：进入或离开指定 WorldPlace，bEnter 控制进入还是离开。

---

### Function `SpawnCurrentBattleOpeningCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool SpawnCurrentBattleOpeningCharacters();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 触发当前门派战开局：生成旗子、攻防与中立角色并启动倒计时等整套开局流程。

---

### Function `SpawnCurrentBattleFlags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Flag" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") bool SpawnCurrentBattleFlags();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成当前战斗的旗子 Actor。

---

### Function `ClearSpawnedBattleFlags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void ClearSpawnedBattleFlags();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清理已生成的战斗旗子 Actor。

---

### Function `GetSpawnedBattleFlagRuntimeInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutFlagInfos` | TArray<[FWorldSectBattleFlagRuntimeInfo](WorldSectBattleManager__FWorldSectBattleFlagRuntimeInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") void GetSpawnedBattleFlagRuntimeInfos(TArray<FWorldSectBattleFlagRuntimeInfo>& OutFlagInfos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前已生成旗帜的运行时信息列表，供 UI 显示旗帜状态。

---

### Function `GetNearestEnemyFlagLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `OutLocation` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure=false, Category = "WorldSectBattle|Flag") bool GetNearestEnemyFlagLocation(AActor* Actor, FVector& OutLocation) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [占旗] 根据角色/FightPawn 取【最近的敌方旗帜】位置：阵营由其 TeamId 比对开局攻/守 TeamID 得出，
> 敌方旗帜=当前归属(CurrentOwner)为对方阵营的旗子。找到则 OutLocation 回填其位置并返回 true；Actor 无效/非攻守方/无敌方旗则返回 false。

---

### Function `GetSectBattleMoraleValues`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Morale" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAttackMorale` | `float&` |
| `OutDefenseMorale` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Morale") void GetSectBattleMoraleValues(float& OutAttackMorale, float& OutDefenseMorale) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前士气值：按所有旗子归属占比计算，范围 0~100。

---

### Function `GetPlayerTeamBuffs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Buff" |
| Return type | TArray<[FSectBattleBuffDisplayItem](WorldSectBattleManager__FSectBattleBuffDisplayItem.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") TArray<FSectBattleBuffDisplayItem> GetPlayerTeamBuffs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> ★【主界面 / 头像 UI】获取玩家这队"统一的" buff 列表（士气 + 事件，已过滤不显示项）。初次填充调一次；之后靠上面委托自动更新。无需角色实例。

---

### Function `GetSectBattleCharacterBuffDisplay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Buff" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | `AActor*` |
| `OutDisplay` | [FSectBattleCharacterBuffDisplay](WorldSectBattleManager__FSectBattleCharacterBuffDisplay.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") bool GetSectBattleCharacterBuffDisplay(AActor* Character, FSectBattleCharacterBuffDisplay& OutDisplay) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 【头顶 UI 用】传入头顶 widget 绑定的那个角色：判断它是否「带进战场的弟子 / FightPawn」并返回其 buff 显示数据。
> 返回 false = 不是（事件怪 / 中立 / 非战斗角色）→ 头顶 UI 应隐藏 buff 容器；
> 返回 true = 是，OutDisplay 为其 buff 显示数据（含士气/事件分类 + 档位）。

---

### Function `GetCharacterHeadBuffIcons`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Buff" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | `AActor*` |
| `bHasMorale` | `bool&` |
| `OutMorale` | [FHeadBuffDisplay](WorldSectBattleManager__FHeadBuffDisplay.md)& |
| `OutEvents` | TArray<[FHeadBuffDisplay](WorldSectBattleManager__FHeadBuffDisplay.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") bool GetCharacterHeadBuffIcons(AActor* Character, bool& bHasMorale, FHeadBuffDisplay& OutMorale, TArray<FHeadBuffDisplay>& OutEvents) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 【头顶 buff 图标 UI 专用】传角色 → 返回它该显示的 buff 图标数据（已分好士气/事件 + 算好转圈%+剩余秒）。
> 返回 false = 不显示（非门派战 / 事件怪 / 中立 / 大世界角色）→ UI 把整个 Buff 框 Collapsed（不影响大世界）。
> bHasMorale + OutMorale = 第1个士气槽；OutEvents = 后续事件槽（已按序，UI 从左往右紧凑填、多余 Collapsed 即自动补位）。

---

### Function `GetSpawnedAttackBattleCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void GetSpawnedAttackBattleCharacters(TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前已生成的进攻方战斗角色列表。

---

### Function `GetSpawnedDefenseBattleCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void GetSpawnedDefenseBattleCharacters(TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前已生成的防守方战斗角色列表。

---

### Function `GetSectBattleTeamCharacterCounts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAttackCount` | `int32&` |
| `OutDefenseCount` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") void GetSectBattleTeamCharacterCounts(int32& OutAttackCount, int32& OutDefenseCount) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 UI 显示用攻防编制人数：加入战斗时带入的弟子数量 + 玩家所在阵营的 FightPawn。

---

### Function `GetSectBattleTeamComposition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | [FSectBattleTeamCompositionInfo](WorldSectBattleManager__FSectBattleTeamCompositionInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bAttackSide` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "WorldSectBattle|Runtime") FSectBattleTeamCompositionInfo GetSectBattleTeamComposition(bool bAttackSide) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 按阵营获取按门派层级细分的编制构成（内门弟子 / 外门弟子 / 支援）。bAttackSide=true 取进攻方，false 取防守方。
> 内外门按各弟子所属势力 AWorldForce::CheckMemberIsInnerSect 判定；支援暂留位(恒 0)，后续接入。

---

### Function `HasPendingPlayerVictoryTownDisposal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool HasPendingPlayerVictoryTownDisposal() const { return bPendingPlayerVictoryTownDisposal; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [玩家占旗胜利-城镇处理] 查询当前是否有待处理的"玩家占旗胜利城镇处理"。

---

### Function `HasPendingOpenWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool HasPendingOpenWorldMap() const { return bPendingOpenWorldMap; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [回基地-弹大地图] 查询当前是否有待处理的"回基地后弹大地图"。

---

### Function `ClearPendingOpenWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void ClearPendingOpenWorldMap() { bPendingOpenWorldMap = false; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [回基地-弹大地图] 大地图打开后由蓝图调用，清除"回基地后弹大地图"标记。

---

### Function `GetAttackSquadCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SquadIndex` | `int32` |
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackSquadCharacters(int32 SquadIndex, TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前进攻方指定小队的角色列表（SquadIndex 取 1 / 2 / 3）。

---

### Function `GetAttackSquadCharacterGuids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SquadIndex` | `int32` |
| `OutCharacterGuids` | `TArray<FGuid>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackSquadCharacterGuids(int32 SquadIndex, TArray<FGuid>& OutCharacterGuids) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前进攻方指定小队的角色 Guid 列表（即便角色 Actor 不在场也能返回 Guid）。

---

### Function `MoveAttackCharacterToSquad`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `TargetSquadIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool MoveAttackCharacterToSquad(const FGuid& CharacterGuid, int32 TargetSquadIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把指定 CharacterGuid 的进攻方角色移动到目标小队（TargetSquadIndex 取 1 / 2 / 3）。

---

### Function `SetSquadState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SquadIndex` | `int32` |
| `NewState` | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool SetSquadState(int32 SquadIndex, ECharacterSectCombatCommandState NewState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置指定小队的作战指令状态；若为 Guard 驻守状态则改为请求选点交互，由 UI 回填。

---

### Function `ConfirmSquadGuardState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SquadIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool ConfirmSquadGuardState(int32 SquadIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 确认指定小队的 Guard 驻守状态（选点交互完成后调用，正式置为 Guard 并下发给 AI）。

---

### Function `GetDefenseCharacterAssignedFlagArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `OutCenter` | `FVector&` |
| `OutRadius` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") bool GetDefenseCharacterAssignedFlagArea(AEastRimWorldCharacter* Character, FVector& OutCenter, float& OutRadius) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 供 AI 查询：取防守方角色被分配驻守的旗帜区域中心点与半径。

---

### Function `GetCurrentAttackTargetLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") FVector GetCurrentAttackTargetLocation() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 供 AI 查询：获取当前进攻方的进攻目标位置。

---

### Function `SetCurrentGuardTargetLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|AI" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|AI") void SetCurrentGuardTargetLocation(const FVector& NewLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> UI/玩家设置当前 Guard 驻守目标位置。

---

### Function `SetFightPawnInputPaused`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bPaused` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void SetFightPawnInputPaused(bool bPaused);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> UI 只需拿 manager：转发给当前 FightPawn 暂停/恢复本地输入（WASD/滚轮/交互/技能/驻守点选）。true=暂停，false=恢复。

---

### Function `GetCurrentGuardTargetLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") FVector GetCurrentGuardTargetLocation() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 供 AI 查询：获取当前 Guard 驻守目标位置。

---

### Function `GetNearestContestedFlagLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SearchLocation` | `const FVector&` |
| `OutFlagLocation` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") bool GetNearestContestedFlagLocation(const FVector& SearchLocation, FVector& OutFlagLocation) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 供 AI 查询：从指定位置出发查找最近的争夺中（Contested）旗帜位置，找不到返回 false。

---

### Function `HandleWorldSectBattleFlagOwnerChanged`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FlagActor` | [AWorldSectBattleFlagActor](../../Actor/WorldSectBattleFlagActor__AWorldSectBattleFlagActor.md)* |
| `NewOwner` | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void HandleWorldSectBattleFlagOwnerChanged(AWorldSectBattleFlagActor* FlagActor, EWorldSectBattleFlagOwner NewOwner);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 旗帜归属变化时调用：刷新进攻目标、判定战斗结果、为对应阵营施加占旗 Buff 等。

---

### Function `GetBattleRemainingSeconds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") float GetBattleRemainingSeconds() const { return BattleRemainingSeconds; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前战斗剩余时间（秒），供 UI 显示倒计时。

---

### Function `GetBattleDurationSeconds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") float GetBattleDurationSeconds() const { return BattleDurationSeconds; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Battle Duration Seconds.

---

### Function `GetActorByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") AEastRimWorldCharacter* GetActorByGuid(FGuid CharacterGuid);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 按 Guid 获取已生成的角色 Actor。

---

### Function `NotifySectBattleChestOpened`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChestActor` | [AWorldSectBattleChestActor](../../Actor/WorldSectBattleChestActor__AWorldSectBattleChestActor.md)* |
| `ChestType` | [EWorldSectBattleChestType](../../Actor/WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| `nullptr` | `AActor* OpenerActor =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void NotifySectBattleChestOpened(AWorldSectBattleChestActor* ChestActor, EWorldSectBattleChestType ChestType, AActor* OpenerActor = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Notify Sect Battle Chest Opened operation.

---

### Function `GetSectBattleChestDropItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Chest" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ChestType` | [EWorldSectBattleChestType](../../Actor/WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| `OutItems` | TMap<FName, [FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)>& |
| `NAME_None` | `FName OverrideDropConfigKey =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void GetSectBattleChestDropItems(EWorldSectBattleChestType ChestType, TMap<FName, FItemSimpleData>& OutItems, FName OverrideDropConfigKey = NAME_None);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取本箱掉落物品：按宝箱类型选表——普通箱用城市繁荣度 CityProsperity 匹配 NormalChestDropTable，特殊箱用守方门派名 SectName 匹配 SpecialChestDropTable。
> 拿到 DropItemConfigID 后从 DT_DropItemConfig(FDropSetConfig) 按权重 roll DropCount 次合并（CityProsperity/SectName 为 manager 蓝图可读写成员，由 UI 设置）。

---

### Function `AddSectBattleLootItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Loot" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LootItem` | const [FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Loot") void AddSectBattleLootItem(const FSectBattleLootItem& LootItem);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 掉落物被我方（FightPawn 或同队弟子）拾取时调用：并入共享战利品数组（同 id 累加数量）并广播。

---

### Function `GetSectBattlePickedItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Loot" |
| Return type | const TArray<[FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Loot") const TArray<FSectBattleLootItem>& GetSectBattlePickedItems() const { return SectBattlePickedItems; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> UI 获取本场全部战利品。

---

### Function `GetSectBattlePickedItemsSimple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Loot" |
| Return type | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Loot") TArray<FItemSimpleData> GetSectBattlePickedItemsSimple() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> UI 获取本场全部战利品，转换为 FItemSimpleData 列表（id / 类型 / 数量），供通用物品 UI 复用。

---

### Function `IsSectBattleAttackActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsSectBattleAttackActor(AActor* Actor) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Is Sect Battle Attack Actor.

---

### Function `IsSectBattlePlayerCampActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsSectBattlePlayerCampActor(AActor* Actor) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 判定 Actor 是否属于「玩家当前所在阵营」（按 GetFightPawnTeamRole() 结果取 Attack/Defense 对应 TeamID 比对，玩家 FightPawn 恒 true）。
> 与 IsSectBattleAttackActor（恒判"是否攻方"）语义不同，供守方局也需要"是否我方"的调用点使用（如宝箱拾取）。

---

### Function `GetFightPawnTeamDiscipleSettlementInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Settlement" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutInfos` | TArray<[FWorldSectBattleDiscipleSettlementInfo](WorldSectBattleManager__FWorldSectBattleDiscipleSettlementInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Settlement") void GetFightPawnTeamDiscipleSettlementInfos(TArray<FWorldSectBattleDiscipleSettlementInfo>& OutInfos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Fight Pawn Team Disciple Settlement Infos.

---

### Function `RecordSectBattleDamage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DamageInfo` | const [FCharacterDeathInformation](../../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RecordSectBattleDamage(const FCharacterDeathInformation& DamageInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Record Sect Battle Damage field.

---

### Function `RegisterFightPawnSettlementRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FightPawn` | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RegisterFightPawnSettlementRecord(AERW_FightPawn* FightPawn);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Register Fight Pawn Settlement Record operation.

---

### Function `IsFightPawnDefender`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Retreat" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Retreat") bool IsFightPawnDefender() const { return GetFightPawnTeamRole() == EWorldBattleRuntimeTeamRole::Defense; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [守城撤退文案] 玩家 FightPawn 是否为防守方（供撤退确认弹窗蓝图 Branch：守城局显示「放弃有概率损失城市」文案，进攻局保持原文案）。

---

### Function `GetCapturedEnemyDiscipleGuids`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| Return type | `const TArray<FGuid>&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") const TArray<FGuid>& GetCapturedEnemyDiscipleGuids() const { return CapturedEnemyDiscipleGuids; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 战后读取本场被俘虏的敌方弟子 GUID（去重）。供战后清理 / 结算逻辑处理（被俘弟子仍照常重生，仅标记）。

---

### Function `RecordFightPawnDownedForSettlement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FightPawn` | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RecordFightPawnDownedForSettlement(AERW_FightPawn* FightPawn);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Record Fight Pawn Downed For Settlement field.

---

### Function `TryTriggerSectBattleEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Event" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TriggerType` | [EWorldSectBattleEventTriggerType](WorldSectBattleManager__EWorldSectBattleEventTriggerType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Event") bool TryTriggerSectBattleEvent(EWorldSectBattleEventTriggerType TriggerType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 尝试触发指定类型的门派战事件：按该类事件当前的触发概率 roll，命中则从对应事件表随机抽取一条事件并执行。

---

### Function `GetFirstBattleGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| Return type | `FGuid` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") FGuid GetFirstBattleGuid();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取第一场战斗的 Guid（用于调试 / 临时入口，按内部存储顺序取首个）。

---

### Function `RetreatFromCurrentSectBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void RetreatFromCurrentSectBattle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [战斗中主动撤退] 玩家战斗中撤退：不结算(不占/掠/毁)，直接按【攻方失败】结束——攻方参战弟子全部原路返回主城。
> 复用失败分支(守方胜)：EndCurrentSectBattle(Defense, PlayerRetreat) → ApplySectBattleAttackerRetreat 建返程行军。

---

### Function `GetSiegeVictoryReward`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Settlement" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutCopperCoin` | `int32&` |
| `OutTrainingPoint` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "WorldSectBattle|Settlement") void GetSiegeVictoryReward(int32& OutCopperCoin, int32& OutTrainingPoint) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [攻城奖励-UI 查询] 供结算 UI 读取本场攻城奖励(铜币/历练点)。
> 仅"玩家攻方占旗胜利"时返回真实数值；其它情况(非玩家攻方胜/无当前战斗/配置缺失)一律返回 0。

---

### Function `GetSectBattlePlayerResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") bool GetSectBattlePlayerResult() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [战斗结果-玩家视角] 本场玩家是否胜(攻方=占领成功/守方=防守成功 → true；反之 false)。玩家阵营未知时返回 false。

---
