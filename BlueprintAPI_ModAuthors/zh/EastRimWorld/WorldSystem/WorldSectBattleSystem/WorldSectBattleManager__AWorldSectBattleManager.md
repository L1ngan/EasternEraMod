# `class` `AWorldSectBattleManager`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> World Sect Battle Manager Actor 类型。

## 蓝图暴露变量

### 属性 `OnBattleCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldBattleRuntimeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleCreated;` |

**说明:**

> 创建战斗时广播（携带战斗运行时信息）。

---

### 属性 `OnBattleEntered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldBattleRuntimeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleEntered;` |

**说明:**

> 进入战斗时广播（携带战斗运行时信息）。

---

### 属性 `OnSectBattleEnded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleEnded` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleEnded OnSectBattleEnded;` |

**说明:**

> 门派战结束时广播（胜方角色 + 结束原因），供蓝图 / UI 监听。
> 注意：EndCurrentSectBattle 内部不再直接调用此广播，改为广播 OnSectBattleEndedUIRequested 弹出结算 UI，
> 由 UI 弹出后调用 BroadcastSectBattleEnded 转发此委托。

---

### 属性 `OnSectBattleEndedUIRequested`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleEndedUIRequested` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleEndedUIRequested OnSectBattleEndedUIRequested;` |

**说明:**

> 门派战结束、需要弹出结算 UI 时广播（胜方角色 + 结束原因）。UI 监听此委托弹出结算界面，
> 弹出后应调用 BroadcastSectBattleEnded 转发真正的 OnSectBattleEnded 通知。

---

### 属性 `OnSectBattleTimeChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleTimeChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleTimeChanged OnSectBattleTimeChanged;` |

**说明:**

> 门派战剩余时间变化时广播，供 UI 刷新倒计时显示。

---

### 属性 `OnBattleFlagInfosChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleFlagInfosChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Flag") FOnWorldSectBattleFlagInfosChanged OnBattleFlagInfosChanged;` |

**说明:**

> 旗帜运行时信息（占领状态 / 归属）变化时广播，供 UI 刷新旗帜列表。

---

### 属性 `OnBattleMoraleChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleMoraleChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Morale" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Morale") FOnWorldSectBattleMoraleChanged OnBattleMoraleChanged;` |

**说明:**

> 士气值变化时广播：按当前所有旗子归属占比计算，供 UI 刷新进攻/防守士气条。

---

### 属性 `OnSectBattleEventTriggered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleEventTriggered` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Event") FOnWorldSectBattleEventTriggered OnSectBattleEventTriggered;` |

**说明:**

> 门派战隐藏事件触发时广播，供 UI 弹出事件提示（事件名 + 描述）。

---

### 属性 `OnAttackSquadsChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectAttackSquadsChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectAttackSquadsChanged OnAttackSquadsChanged;` |

**说明:**

> 进攻方小队分组变化时广播，供 UI 刷新弟子所在小队。

---

### 属性 `OnSectBattleRespawnCountdown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleRespawnCountdown` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectBattleRespawnCountdown OnSectBattleRespawnCountdown;` |

**说明:**

> 弟子被击倒→安排复活时广播(参数:复活弟子 Guid + 倒计时秒数)。UI 监听此委托显示复活倒计时(与置灰 OnAttackSquadsChanged=-1 同时机)。

---

### 属性 `OnSquadStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectSquadStateChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectSquadStateChanged OnSquadStateChanged;` |

**说明:**

> 进攻方小队作战状态（跟随 / 进攻 / 驻守 Guard 等）变化时广播。

---

### 属性 `OnGuardPickRequested`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectGuardPickRequested` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Runtime") FOnWorldSectGuardPickRequested OnGuardPickRequested;` |

**说明:**

> 请求为某个小队挑选 Guard 驻守目标时广播，由 UI 弹出选点交互后回填给 AI。

---

### 属性 `AttackSquad1State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad1State = ECharacterSectCombatCommandState::FollowPlayer;` |

**说明:**

> 进攻方第 1 小队当前作战指令状态。

---

### 属性 `AttackSquad2State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad2State = ECharacterSectCombatCommandState::FollowPlayer;` |

**说明:**

> 进攻方第 2 小队当前作战指令状态。

---

### 属性 `AttackSquad3State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") ECharacterSectCombatCommandState AttackSquad3State = ECharacterSectCombatCommandState::FollowPlayer;` |

**说明:**

> 进攻方第 3 小队当前作战指令状态。

---

### 属性 `BattleDurationSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Runtime", meta = (ClampMin = "0.0")) float BattleDurationSeconds = 900.f;` |

**说明:**

> 战斗总时长（秒），到时未攻破特殊旗则判防守方获胜，可在编辑器中配置。

---

### 属性 `BattleRemainingSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") float BattleRemainingSeconds = 0.f;` |

**说明:**

> 战斗剩余时间（秒），由倒计时逻辑实时更新。

---

### 属性 `bCurrentBattleEnded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bCurrentBattleEnded = false;` |

**说明:**

> 当前战斗是否已结束（用于阻止结束后重复结算并供 UI 显示）。

---

### 属性 `CurrentBattleWinnerRole`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") EWorldBattleRuntimeTeamRole CurrentBattleWinnerRole = EWorldBattleRuntimeTeamRole::None;` |

**说明:**

> 当前战斗的胜方角色（进攻方 / 防守方）。

---

### 属性 `bLastSectBattlePlayerVictory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bLastSectBattlePlayerVictory = false;` |

**说明:**

> [波3·结算UI用] 本场(最近一场)玩家是否真正获胜。由 EndCurrentSectBattle 用权威身份(GetFightPawnTeamRole 比对 WinnerRole)收敛得出，
> 结算 UI 应读 IsLastSectBattlePlayerVictory() 判胜负，而不再自行判 WinnerRole==Attack(守方局会判反)。

---

### 属性 `bPendingPlayerVictoryTownDisposal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bPendingPlayerVictoryTownDisposal = false;` |

**说明:**

> [玩家占旗胜利-城镇处理] 标记本场占旗战玩家是否获胜，待回基地后弹出城镇处理界面。
> 胜利判定 = 玩家参与(TODO 暂未接入) && WinnerRole==Attack && EndReason==SpecialFlagCaptured。
> 回基地后由 AWorldForce::ReturnMainConstructionBase / Station 处理界面读取，处理完调用 ClearPendingPlayerVictoryTownDisposal 清除。

---

### 属性 `bPendingOpenWorldMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") bool bPendingOpenWorldMap = false;` |

**说明:**

> [回基地-弹大地图] 标记门派战结束回到主基地后需要弹出大世界地图，由蓝图在大地图打开后清除。
> 回基地由 AWorldSectBattleManager::ReturnToBase 置位，大地图打开后由蓝图调用 ClearPendingOpenWorldMap 清除。

---

### 属性 `EventGenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Event") TObjectPtr<UEventGenerateCharacterComponent> EventGenerateCharacterComponent;` |

**说明:**

> 门派战隐藏事件用的角色生成组件，负责按事件配置在战场 WorldPlace 内生成角色。

---

### 属性 `ChestActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AWorldSectBattleChestActor](../../Actor/WorldSectBattleChestActor__AWorldSectBattleChestActor.md)> |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TSubclassOf<AWorldSectBattleChestActor> ChestActorClass;` |

**说明:**

> Chest Actor Class 字段。

---

### 属性 `OpeningChestSpawnChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest", meta = (ClampMin = "0.0", ClampMax = "1.0")) float OpeningChestSpawnChance = 0.5f;` |

**说明:**

> 执行 Opening Chest Spawn Chance 操作。

---

### 属性 `FlagActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AWorldSectBattleFlagActor](../../Actor/WorldSectBattleFlagActor__AWorldSectBattleFlagActor.md)> |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TSubclassOf<AWorldSectBattleFlagActor> FlagActorClass;` |

**说明:**

> 旗帜 Actor 蓝图类，用于生成战场旗帜。

---

### 属性 `CarriageActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Carriage" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Carriage") TSubclassOf<AActor> CarriageActorClass;` |

**说明:**

> 马车 Actor 蓝图类（一辆，所有门派战统一在此设一次）；生成 Transform 在布局表 FWorldSectBattleSectConfig.CarriageSpawnTransform。

---

### 属性 `FlagConfigTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TObjectPtr<UDataTable> FlagConfigTable;` |

**说明:**

> 旗帜配置数据表，按 FlagID 查询单面旗帜的配置。

---

### 属性 `SectFlagLayoutTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TObjectPtr<UDataTable> SectFlagLayoutTable;` |

**说明:**

> 门派旗帜布局数据表，按布局行配置各旗帜的摆放点。

---

### 属性 `NormalChestDropTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TObjectPtr<UDataTable> NormalChestDropTable;` |

**说明:**

> Normal Chest Drop Table 字段。

---

### 属性 `SpecialChestDropTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") TObjectPtr<UDataTable> SpecialChestDropTable;` |

**说明:**

> Special Chest Drop Table 字段。

---

### 属性 `CityProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") int32 CityProsperity = 1;` |

**说明:**

> Current city prosperity. Set by Blueprint at battle start; Normal chest matches NormalChestDropTable.CityProsperity by this.

---

### 属性 `SectName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Chest") FName SectName = NAME_None;` |

**说明:**

> Current defender sect name. Set by Blueprint at battle start; Special chest matches SpecialChestDropTable.SectName by this.

---

### 属性 `MoraleEventTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> MoraleEventTable;` |

**说明:**

> 士气事件数据表：占旗等触发士气事件时从此表随机抽取一条事件配置。

---

### 属性 `KillEventTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> KillEventTable;` |

**说明:**

> 击杀事件数据表：击杀防守方等触发击杀事件时从此表随机抽取一条事件配置。

---

### 属性 `WealthEventTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> WealthEventTable;` |

**说明:**

> 财富事件数据表：开启宝箱等触发财富事件时从此表随机抽取一条事件配置。

---

### 属性 `CountdownEventTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Event") TObjectPtr<UDataTable> CountdownEventTable;` |

**说明:**

> 倒计时事件数据表：临近结束时按间隔触发倒计时事件，从此表随机抽取一条事件配置。

---

### 属性 `OnPlayerTeamBuffChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattlePlayerTeamBuffChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Buff") FOnSectBattlePlayerTeamBuffChanged OnPlayerTeamBuffChanged;` |

**说明:**

> ★【主界面 / 头像 UI —— 绑这一个就够】队伍统一 buff 一变化（加 / 事件到期移除 / 士气切档）就广播最新全队 buff 数组。

---

### 属性 `SectBattlePickedItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)> |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Loot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Loot") TArray<FSectBattleLootItem> SectBattlePickedItems;` |

**说明:**

> 本场拾取的战利品列表（队伍共享）。

---

### 属性 `OnSectBattleLootChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleLootChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Loot" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Loot") FOnSectBattleLootChanged OnSectBattleLootChanged;` |

**说明:**

> 战利品变化时广播（新增 / 累加 / 清空），UI 据此刷新背包列表。

---

### 属性 `CurrentAttackMoraleValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Morale" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Morale", meta = (AllowPrivateAccess = "true")) float CurrentAttackMoraleValue = 0.f;` |

**说明:**

> Current Attack Morale Value 字段。

---

### 属性 `CurrentDefenseMoraleValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Morale" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Morale", meta = (AllowPrivateAccess = "true")) float CurrentDefenseMoraleValue = 0.f;` |

**说明:**

> Current Defense Morale Value 字段。

---

### 属性 `CapturedEnemyDiscipleGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture", meta = (AllowPrivateAccess = "true")) TArray<FGuid> CapturedEnemyDiscipleGuids;` |

**说明:**

> 已俘虏的敌方弟子 GUID（去重）。打死≥3次后按概率命中即记；被俘弟子仍照常重生、仅标记，战后由清理函数统一处理。每场开局重置。

---

### 属性 `SelectedDiscipleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|FightPawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|FightPawn") FGuid SelectedDiscipleGuid;` |

**说明:**

> Leader disciple whose SaveData initializes FightPawn. Falls back to first attacker if invalid or not in this battle.
> Set by the future choose-leader UI; this disciple is NOT spawned as an AI clone.

---

### 属性 `PlayerJoinedTeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldBattleRuntimeJoinTeamInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Team" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Team") FWorldBattleRuntimeJoinTeamInfo PlayerJoinedTeamInfo;` |

**说明:**

> Player team's join data (the team joined with bIsPlayer=true). Stored separately so chest drop / UI can read it directly without scanning Teams.

---

### 属性 `BaseRespawnDelaySeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float BaseRespawnDelaySeconds = 2.f;` |

**说明:**

> 每个角色单独复活时间：基础秒数 / 每次死亡递增 / 最大秒数（双方带入弟子 + FightPawn 共用）。

---

### 属性 `RespawnDelayIncreasePerDeath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float RespawnDelayIncreasePerDeath = 1.f;` |

**说明:**

> Respawn Delay Increase Per Death 字段。

---

### 属性 `MaxRespawnDelaySeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, AllowPrivateAccess, Category="WorldSectBattle|Respawn" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Respawn", meta = (AllowPrivateAccess = "true")) float MaxRespawnDelaySeconds = 10.f;` |

**说明:**

> Max Respawn Delay Seconds 字段。

---

## 蓝图暴露函数

### 函数 `GetWorldSectBattleManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | [AWorldSectBattleManager](WorldSectBattleManager__AWorldSectBattleManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") static AWorldSectBattleManager* GetWorldSectBattleManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前世界门派战管理器单例（蓝图可直接调用）。

---

### 函数 `GetCurrentBattleMorale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Morale" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAttackMorale` | `float&` |
| `OutDefenseMorale` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Morale") void GetCurrentBattleMorale(float& OutAttackMorale, float& OutDefenseMorale) const { OutAttackMorale = CurrentAttackMoraleValue; OutDefenseMorale = CurrentDefenseMoraleValue; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Current Battle Morale。

---

### 函数 `IsLastSectBattlePlayerVictory`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Runtime") bool IsLastSectBattlePlayerVictory() const { return bLastSectBattlePlayerVictory; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [波3·结算UI查询] 返回最近一场门派战玩家是否获胜(权威口径)。供结算 UI 蓝图读取显示胜/败，替代 UI 自判 WinnerRole==Attack。

---

### 函数 `CreateBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleType` | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| `BattlePlaceGuid` | `const FGuid&` |
| `RelevancyPlaceGuid` | `const FGuid&` |
| `（匿名/仅类型）` | `FGuid FromPlaceGuid = FGuid()` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") FWorldBattleRuntimeInfo CreateBattle(EBattleType BattleType, const FGuid& BattlePlaceGuid, const FGuid& RelevancyPlaceGuid, FGuid FromPlaceGuid = FGuid());`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建一场门派战，返回新建的战斗运行时信息（同时广播创建事件）。
> FromPlaceGuid: 进入战斗前所在的来源地点（如从主基地 MainPlace 出征），用于战斗结束后返回。

---

### 函数 `RemoveBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool RemoveBattle(const FGuid& BattleGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定的战斗。

---

### 函数 `GetBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleGuid` | `const FGuid&` |
| `OutBattleInfo` | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetBattle(const FGuid& BattleGuid, FWorldBattleRuntimeInfo& OutBattleInfo) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按 Guid 获取战斗运行时信息。

---

### 函数 `GetCurrentBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutBattleInfo` | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetCurrentBattle(FWorldBattleRuntimeInfo& OutBattleInfo) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前正在进行的战斗运行时信息。

---

### 函数 `GetCurrentFightPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") AERW_FightPawn* GetCurrentFightPawn() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前作为玩家替身的 FightPawn（主控战斗角色）。
> UI 可据此获取 血量组件 → GetHealthComponent → 绑定 OnHealthChanged / OnDamageShieldChanged 监听血量/护盾变化。
> 未 Possess FightPawn 时返回 nullptr。

---

### 函数 `GetAttackForceName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutForceName` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackForceName(FText& OutForceName) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前战斗进攻方的势力名称。

---

### 函数 `GetDefenseForceName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutForceName` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetDefenseForceName(FText& OutForceName) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前战斗防守方的势力名称。

---

### 函数 `GetDefenseForceGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutForceGuid` | `FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetDefenseForceGuid(FGuid& OutForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前战斗防守方的势力 GUID（AWorldForce::SGUID）。供旗子刷怪覆盖 ForceGuid，让随机弟子跟随守方门派。

---

### 函数 `JoinBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForce` | [AWorldForce](../WorldForce__AWorldForce.md)* |
| `BattleGuid` | `const FGuid&` |
| `JoinTeamInfo` | const [FWorldBattleRuntimeJoinTeamInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool JoinBattle(AWorldForce* WorldForce, const FGuid& BattleGuid, const FWorldBattleRuntimeJoinTeamInfo& JoinTeamInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入战斗：以传入 WorldForce 的 TeamID / TeamGuid 注册一支 WorldForce 队伍。

---

### 函数 `LeaveBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleGuid` | `const FGuid&` |
| `TeamGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool LeaveBattle(const FGuid& BattleGuid, const FGuid& TeamGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 让指定队伍离开指定战斗。

---

### 函数 `EnterBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool EnterBattle(const FGuid& BattleGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 进入指定战斗：请求切到战场地点，并由 WorldDirector 处理切图。

---

### 函数 `ReturnToBase`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void ReturnToBase();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前门派战并返回来源地点（镜像 AWorldBattleManager::ReturnToBase）。
> 供战斗结算 UI 上的"返回"按钮调用。

---

### 函数 `BroadcastSectBattleEnded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WinnerRole` | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| `EndReason` | [EWorldSectBattleEndReason](WorldSectBattleManager__EWorldSectBattleEndReason.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void BroadcastSectBattleEnded(EWorldBattleRuntimeTeamRole WinnerRole, EWorldSectBattleEndReason EndReason) { OnSectBattleEnded.Broadcast(WinnerRole, EndReason); }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [结算 UI 弹出后转发] 供监听 OnSectBattleEndedUIRequested 弹出的结算 UI 调用：
> 转发广播真正的 OnSectBattleEnded(WinnerRole, EndReason)，供其余监听方（记录/存档等）响应战斗结束。

---

### 函数 `FindBattleGuidByPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RelevancyPlaceGuid` | `const FGuid&` |
| `OutBattleGuid` | `FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool FindBattleGuidByPlace(const FGuid& RelevancyPlaceGuid, FGuid& OutBattleGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [蓝图入口-据点反查] 按关联地点（据点 Guid）查找对应的门派战 BattleGuid。
> 用关联地点 RelevancyPlaceGuid 匹配创建态的 SectBattle 战斗，便于后续 EnterBattle。
> 若该 SectBattle 尚未进入则返回其 BattleGuid，用于由据点界面直接进入对应的门派战。

---

### 函数 `ChangeWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceGuid` | `const FGuid&` |
| `bEnter` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool ChangeWorldPlace(const FGuid& WorldPlaceGuid, bool bEnter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 切换战场地点：进入或离开指定 WorldPlace，bEnter 控制进入还是离开。

---

### 函数 `SpawnCurrentBattleOpeningCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool SpawnCurrentBattleOpeningCharacters();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 触发当前门派战开局：生成旗子、攻防与中立角色并启动倒计时等整套开局流程。

---

### 函数 `SpawnCurrentBattleFlags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Flag" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") bool SpawnCurrentBattleFlags();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成当前战斗的旗子 Actor。

---

### 函数 `ClearSpawnedBattleFlags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void ClearSpawnedBattleFlags();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清理已生成的战斗旗子 Actor。

---

### 函数 `GetSpawnedBattleFlagRuntimeInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutFlagInfos` | TArray<[FWorldSectBattleFlagRuntimeInfo](WorldSectBattleManager__FWorldSectBattleFlagRuntimeInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") void GetSpawnedBattleFlagRuntimeInfos(TArray<FWorldSectBattleFlagRuntimeInfo>& OutFlagInfos) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前已生成旗帜的运行时信息列表，供 UI 显示旗帜状态。

---

### 函数 `GetNearestEnemyFlagLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `OutLocation` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure=false, Category = "WorldSectBattle|Flag") bool GetNearestEnemyFlagLocation(AActor* Actor, FVector& OutLocation) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [占旗] 根据角色/FightPawn 取【最近的敌方旗帜】位置：阵营由其 TeamId 比对开局攻/守 TeamID 得出，
> 敌方旗帜=当前归属(CurrentOwner)为对方阵营的旗子。找到则 OutLocation 回填其位置并返回 true；Actor 无效/非攻守方/无敌方旗则返回 false。

---

### 函数 `GetSectBattleMoraleValues`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Morale" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAttackMorale` | `float&` |
| `OutDefenseMorale` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Morale") void GetSectBattleMoraleValues(float& OutAttackMorale, float& OutDefenseMorale) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前士气值：按所有旗子归属占比计算，范围 0~100。

---

### 函数 `GetPlayerTeamBuffs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Buff" |
| 返回类型 | TArray<[FSectBattleBuffDisplayItem](WorldSectBattleManager__FSectBattleBuffDisplayItem.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") TArray<FSectBattleBuffDisplayItem> GetPlayerTeamBuffs() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ★【主界面 / 头像 UI】获取玩家这队"统一的" buff 列表（士气 + 事件，已过滤不显示项）。初次填充调一次；之后靠上面委托自动更新。无需角色实例。

---

### 函数 `GetSectBattleCharacterBuffDisplay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Buff" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AActor*` |
| `OutDisplay` | [FSectBattleCharacterBuffDisplay](WorldSectBattleManager__FSectBattleCharacterBuffDisplay.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") bool GetSectBattleCharacterBuffDisplay(AActor* Character, FSectBattleCharacterBuffDisplay& OutDisplay) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 【头顶 UI 用】传入头顶 widget 绑定的那个角色：判断它是否「带进战场的弟子 / FightPawn」并返回其 buff 显示数据。
> 返回 false = 不是（事件怪 / 中立 / 非战斗角色）→ 头顶 UI 应隐藏 buff 容器；
> 返回 true = 是，OutDisplay 为其 buff 显示数据（含士气/事件分类 + 档位）。

---

### 函数 `GetCharacterHeadBuffIcons`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Buff" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AActor*` |
| `bHasMorale` | `bool&` |
| `OutMorale` | [FHeadBuffDisplay](WorldSectBattleManager__FHeadBuffDisplay.md)& |
| `OutEvents` | TArray<[FHeadBuffDisplay](WorldSectBattleManager__FHeadBuffDisplay.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Buff") bool GetCharacterHeadBuffIcons(AActor* Character, bool& bHasMorale, FHeadBuffDisplay& OutMorale, TArray<FHeadBuffDisplay>& OutEvents) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 【头顶 buff 图标 UI 专用】传角色 → 返回它该显示的 buff 图标数据（已分好士气/事件 + 算好转圈%+剩余秒）。
> 返回 false = 不显示（非门派战 / 事件怪 / 中立 / 大世界角色）→ UI 把整个 Buff 框 Collapsed（不影响大世界）。
> bHasMorale + OutMorale = 第1个士气槽；OutEvents = 后续事件槽（已按序，UI 从左往右紧凑填、多余 Collapsed 即自动补位）。

---

### 函数 `GetSpawnedAttackBattleCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void GetSpawnedAttackBattleCharacters(TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前已生成的进攻方战斗角色列表。

---

### 函数 `GetSpawnedDefenseBattleCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void GetSpawnedDefenseBattleCharacters(TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前已生成的防守方战斗角色列表。

---

### 函数 `GetSectBattleTeamCharacterCounts`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAttackCount` | `int32&` |
| `OutDefenseCount` | `int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") void GetSectBattleTeamCharacterCounts(int32& OutAttackCount, int32& OutDefenseCount) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取 UI 显示用攻防编制人数：加入战斗时带入的弟子数量 + 玩家所在阵营的 FightPawn。

---

### 函数 `GetSectBattleTeamComposition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | [FSectBattleTeamCompositionInfo](WorldSectBattleManager__FSectBattleTeamCompositionInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bAttackSide` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "WorldSectBattle|Runtime") FSectBattleTeamCompositionInfo GetSectBattleTeamComposition(bool bAttackSide) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按阵营获取按门派层级细分的编制构成（内门弟子 / 外门弟子 / 支援）。bAttackSide=true 取进攻方，false 取防守方。
> 内外门按各弟子所属势力 AWorldForce::CheckMemberIsInnerSect 判定；支援暂留位(恒 0)，后续接入。

---

### 函数 `HasPendingPlayerVictoryTownDisposal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool HasPendingPlayerVictoryTownDisposal() const { return bPendingPlayerVictoryTownDisposal; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [玩家占旗胜利-城镇处理] 查询当前是否有待处理的"玩家占旗胜利城镇处理"。

---

### 函数 `HasPendingOpenWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool HasPendingOpenWorldMap() const { return bPendingOpenWorldMap; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [回基地-弹大地图] 查询当前是否有待处理的"回基地后弹大地图"。

---

### 函数 `ClearPendingOpenWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void ClearPendingOpenWorldMap() { bPendingOpenWorldMap = false; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [回基地-弹大地图] 大地图打开后由蓝图调用，清除"回基地后弹大地图"标记。

---

### 函数 `GetAttackSquadCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SquadIndex` | `int32` |
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackSquadCharacters(int32 SquadIndex, TArray<AEastRimWorldCharacter*>& OutCharacters) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前进攻方指定小队的角色列表（SquadIndex 取 1 / 2 / 3）。

---

### 函数 `GetAttackSquadCharacterGuids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SquadIndex` | `int32` |
| `OutCharacterGuids` | `TArray<FGuid>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") bool GetAttackSquadCharacterGuids(int32 SquadIndex, TArray<FGuid>& OutCharacterGuids) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前进攻方指定小队的角色 Guid 列表（即便角色 Actor 不在场也能返回 Guid）。

---

### 函数 `MoveAttackCharacterToSquad`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `TargetSquadIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool MoveAttackCharacterToSquad(const FGuid& CharacterGuid, int32 TargetSquadIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把指定 CharacterGuid 的进攻方角色移动到目标小队（TargetSquadIndex 取 1 / 2 / 3）。

---

### 函数 `SetSquadState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SquadIndex` | `int32` |
| `NewState` | [ECharacterSectCombatCommandState](../../Struct/CommonEnum__ECharacterSectCombatCommandState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool SetSquadState(int32 SquadIndex, ECharacterSectCombatCommandState NewState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置指定小队的作战指令状态；若为 Guard 驻守状态则改为请求选点交互，由 UI 回填。

---

### 函数 `ConfirmSquadGuardState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SquadIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") bool ConfirmSquadGuardState(int32 SquadIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 确认指定小队的 Guard 驻守状态（选点交互完成后调用，正式置为 Guard 并下发给 AI）。

---

### 函数 `GetDefenseCharacterAssignedFlagArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `OutCenter` | `FVector&` |
| `OutRadius` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") bool GetDefenseCharacterAssignedFlagArea(AEastRimWorldCharacter* Character, FVector& OutCenter, float& OutRadius) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 供 AI 查询：取防守方角色被分配驻守的旗帜区域中心点与半径。

---

### 函数 `GetCurrentAttackTargetLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") FVector GetCurrentAttackTargetLocation() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 供 AI 查询：获取当前进攻方的进攻目标位置。

---

### 函数 `SetCurrentGuardTargetLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|AI" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|AI") void SetCurrentGuardTargetLocation(const FVector& NewLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> UI/玩家设置当前 Guard 驻守目标位置。

---

### 函数 `SetFightPawnInputPaused`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bPaused` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void SetFightPawnInputPaused(bool bPaused);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> UI 只需拿 manager：转发给当前 FightPawn 暂停/恢复本地输入（WASD/滚轮/交互/技能/驻守点选）。true=暂停，false=恢复。

---

### 函数 `GetCurrentGuardTargetLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") FVector GetCurrentGuardTargetLocation() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 供 AI 查询：获取当前 Guard 驻守目标位置。

---

### 函数 `GetNearestContestedFlagLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SearchLocation` | `const FVector&` |
| `OutFlagLocation` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|AI") bool GetNearestContestedFlagLocation(const FVector& SearchLocation, FVector& OutFlagLocation) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 供 AI 查询：从指定位置出发查找最近的争夺中（Contested）旗帜位置，找不到返回 false。

---

### 函数 `HandleWorldSectBattleFlagOwnerChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FlagActor` | [AWorldSectBattleFlagActor](../../Actor/WorldSectBattleFlagActor__AWorldSectBattleFlagActor.md)* |
| `NewOwner` | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void HandleWorldSectBattleFlagOwnerChanged(AWorldSectBattleFlagActor* FlagActor, EWorldSectBattleFlagOwner NewOwner);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 旗帜归属变化时调用：刷新进攻目标、判定战斗结果、为对应阵营施加占旗 Buff 等。

---

### 函数 `GetBattleRemainingSeconds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") float GetBattleRemainingSeconds() const { return BattleRemainingSeconds; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前战斗剩余时间（秒），供 UI 显示倒计时。

---

### 函数 `GetBattleDurationSeconds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") float GetBattleDurationSeconds() const { return BattleDurationSeconds; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Battle Duration Seconds。

---

### 函数 `GetActorByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") AEastRimWorldCharacter* GetActorByGuid(FGuid CharacterGuid);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按 Guid 获取已生成的角色 Actor。

---

### 函数 `NotifySectBattleChestOpened`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChestActor` | [AWorldSectBattleChestActor](../../Actor/WorldSectBattleChestActor__AWorldSectBattleChestActor.md)* |
| `ChestType` | [EWorldSectBattleChestType](../../Actor/WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| `nullptr` | `AActor* OpenerActor =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void NotifySectBattleChestOpened(AWorldSectBattleChestActor* ChestActor, EWorldSectBattleChestType ChestType, AActor* OpenerActor = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Notify Sect Battle Chest Opened 操作。

---

### 函数 `GetSectBattleChestDropItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ChestType` | [EWorldSectBattleChestType](../../Actor/WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| `OutItems` | TMap<FName, [FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)>& |
| `NAME_None` | `FName OverrideDropConfigKey =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void GetSectBattleChestDropItems(EWorldSectBattleChestType ChestType, TMap<FName, FItemSimpleData>& OutItems, FName OverrideDropConfigKey = NAME_None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取本箱掉落物品：按宝箱类型选表——普通箱用城市繁荣度 CityProsperity 匹配 NormalChestDropTable，特殊箱用守方门派名 SectName 匹配 SpecialChestDropTable。
> 拿到 DropItemConfigID 后从 DT_DropItemConfig(FDropSetConfig) 按权重 roll DropCount 次合并（CityProsperity/SectName 为 manager 蓝图可读写成员，由 UI 设置）。

---

### 函数 `AddSectBattleLootItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Loot" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LootItem` | const [FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Loot") void AddSectBattleLootItem(const FSectBattleLootItem& LootItem);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 掉落物被我方（FightPawn 或同队弟子）拾取时调用：并入共享战利品数组（同 id 累加数量）并广播。

---

### 函数 `GetSectBattlePickedItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Loot" |
| 返回类型 | const TArray<[FSectBattleLootItem](WorldBattleRuntimeStruct__FSectBattleLootItem.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Loot") const TArray<FSectBattleLootItem>& GetSectBattlePickedItems() const { return SectBattlePickedItems; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> UI 获取本场全部战利品。

---

### 函数 `GetSectBattlePickedItemsSimple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Loot" |
| 返回类型 | TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Loot") TArray<FItemSimpleData> GetSectBattlePickedItemsSimple() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> UI 获取本场全部战利品，转换为 FItemSimpleData 列表（id / 类型 / 数量），供通用物品 UI 复用。

---

### 函数 `IsSectBattleAttackActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsSectBattleAttackActor(AActor* Actor) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Is Sect Battle Attack Actor。

---

### 函数 `IsSectBattlePlayerCampActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsSectBattlePlayerCampActor(AActor* Actor) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 判定 Actor 是否属于「玩家当前所在阵营」（按 GetFightPawnTeamRole() 结果取 Attack/Defense 对应 TeamID 比对，玩家 FightPawn 恒 true）。
> 与 IsSectBattleAttackActor（恒判"是否攻方"）语义不同，供守方局也需要"是否我方"的调用点使用（如宝箱拾取）。

---

### 函数 `GetFightPawnTeamDiscipleSettlementInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Settlement" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutInfos` | TArray<[FWorldSectBattleDiscipleSettlementInfo](WorldSectBattleManager__FWorldSectBattleDiscipleSettlementInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Settlement") void GetFightPawnTeamDiscipleSettlementInfos(TArray<FWorldSectBattleDiscipleSettlementInfo>& OutInfos) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Fight Pawn Team Disciple Settlement Infos。

---

### 函数 `RecordSectBattleDamage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DamageInfo` | const [FCharacterDeathInformation](../../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RecordSectBattleDamage(const FCharacterDeathInformation& DamageInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Record Sect Battle Damage 字段。

---

### 函数 `RegisterFightPawnSettlementRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FightPawn` | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RegisterFightPawnSettlementRecord(AERW_FightPawn* FightPawn);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Register Fight Pawn Settlement Record 操作。

---

### 函数 `IsFightPawnDefender`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Retreat" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Retreat") bool IsFightPawnDefender() const { return GetFightPawnTeamRole() == EWorldBattleRuntimeTeamRole::Defense; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [守城撤退文案] 玩家 FightPawn 是否为防守方（供撤退确认弹窗蓝图 Branch：守城局显示「放弃有概率损失城市」文案，进攻局保持原文案）。

---

### 函数 `GetCapturedEnemyDiscipleGuids`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| 返回类型 | `const TArray<FGuid>&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") const TArray<FGuid>& GetCapturedEnemyDiscipleGuids() const { return CapturedEnemyDiscipleGuids; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 战后读取本场被俘虏的敌方弟子 GUID（去重）。供战后清理 / 结算逻辑处理（被俘弟子仍照常重生，仅标记）。

---

### 函数 `RecordFightPawnDownedForSettlement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FightPawn` | [AERW_FightPawn](../../Framework/ERW_FightPawn__AERW_FightPawn.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") void RecordFightPawnDownedForSettlement(AERW_FightPawn* FightPawn);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Record Fight Pawn Downed For Settlement 字段。

---

### 函数 `TryTriggerSectBattleEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Event" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TriggerType` | [EWorldSectBattleEventTriggerType](WorldSectBattleManager__EWorldSectBattleEventTriggerType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Event") bool TryTriggerSectBattleEvent(EWorldSectBattleEventTriggerType TriggerType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试触发指定类型的门派战事件：按该类事件当前的触发概率 roll，命中则从对应事件表随机抽取一条事件并执行。

---

### 函数 `GetFirstBattleGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Runtime" |
| 返回类型 | `FGuid` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Runtime") FGuid GetFirstBattleGuid();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取第一场战斗的 Guid（用于调试 / 临时入口，按内部存储顺序取首个）。

---

### 函数 `RetreatFromCurrentSectBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") void RetreatFromCurrentSectBattle();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [战斗中主动撤退] 玩家战斗中撤退：不结算(不占/掠/毁)，直接按【攻方失败】结束——攻方参战弟子全部原路返回主城。
> 复用失败分支(守方胜)：EndCurrentSectBattle(Defense, PlayerRetreat) → ApplySectBattleAttackerRetreat 建返程行军。

---

### 函数 `GetSiegeVictoryReward`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Settlement" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCopperCoin` | `int32&` |
| `OutTrainingPoint` | `int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "WorldSectBattle|Settlement") void GetSiegeVictoryReward(int32& OutCopperCoin, int32& OutTrainingPoint) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [攻城奖励-UI 查询] 供结算 UI 读取本场攻城奖励(铜币/历练点)。
> 仅"玩家攻方占旗胜利"时返回真实数值；其它情况(非玩家攻方胜/无当前战斗/配置缺失)一律返回 0。

---

### 函数 `GetSectBattlePlayerResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Settlement" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Settlement") bool GetSectBattlePlayerResult() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [战斗结果-玩家视角] 本场玩家是否胜(攻方=占领成功/守方=防守成功 → true；反之 false)。玩家阵营未知时返回 false。

---
