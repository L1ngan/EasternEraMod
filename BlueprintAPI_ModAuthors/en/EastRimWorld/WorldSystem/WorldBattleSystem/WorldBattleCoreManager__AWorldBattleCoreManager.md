# `class` `AWorldBattleCoreManager`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleCoreManager.h`

---

## Functional description (from header comments)

> 战场核心编排器（重构 PR-A）。
>   - 关卡放置 Actor + static Instance 单例（与 AWorldBattleManager 同构，非 GameMode 持有）。
>   - 本类只做"总指挥/结算编排"，【不持有任何运行时战场容器】
>     （BattlefieldInformation 留 AWorldBattleManager / Battles 留 AWorldSectBattleManager / 周期化队列留 TickManager）。
>   - PR-A 仅迁入完整结算 ResolvePlaceDisposal；CreateBattlefieldUnified / DispatchBattle 为后续 PR-B/PR-C。

## Blueprint-exposed variables

### Property `CommonLogComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonLogComponent](../../Components/CommonLogComponent__UCommonLogComponent.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UCommonLogComponent> CommonLogComponent;` |

**Notes:**

> Common Log Component field.

---

### Property `OnNotificationDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnNotificationDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnNotificationDelegate OnNotificationDelegate;` |

**Notes:**

> 日志通知（迁自 AWorldBattleManager，仅蓝图监听，需重绑）

---

## Blueprint-exposed functions

### Function `GetWorldBattleCoreManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldBattleCoreManager](WorldBattleCoreManager__AWorldBattleCoreManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static AWorldBattleCoreManager* GetWorldBattleCoreManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get World Battle Core Manager.

---

### Function `ResolvePlaceDisposal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WinnerForce` | [AWorldForce](../WorldForce__AWorldForce.md)* |
| `TargetPlace` | [AWorldPlace](../WorldPlace__AWorldPlace.md)* |
| `AttackerTeam` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md)& |
| `Disposal` | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |
| `true` | `bool bApplyAttackFavorability =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResolvePlaceDisposal(AWorldForce* WinnerForce, AWorldPlace* TargetPlace, const FBattleTeamInfo& AttackerTeam, EPlaceDisposalType Disposal, bool bApplyAttackFavorability = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [PR-A] 完整战利品三选一处置结算入口（占领/劫掠/摧毁 + 必然建筑损毁 + 物资/正邪值数值化）。
> 从 AWorldBattleManager::ResolvePlaceDisposal 整体迁入。
> 好感度叠加 AttackCityFavorabilityChange 必须在 OccupyPlace 改归属【之前】，顺序不可乱。
> bApplyAttackFavorability=false 时跳过攻城好感度叠加(用于占旗玩家路径——好感度已在战斗结束的胜利结算里提前施加，避免重复)。

---

### Function `CreateBattlefieldUnified`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleType` | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| `BattlePlaceGuid` | `const FGuid&` |
| `RelevancyPlaceGuid` | `const FGuid&` |
| `(unnamed / type only)` | `FGuid FromPlaceGuid = FGuid()` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGuid CreateBattlefieldUnified(EBattleType BattleType, const FGuid& BattlePlaceGuid, const FGuid& RelevancyPlaceGuid, FGuid FromPlaceGuid = FGuid());`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [PR-B] 统一战场创建入口：按 EBattleType 编排底层 Manager 的 Create，底层 Create 签名/行为不动。
> 一场战斗只有一种玩法，故只建一层、返回该层的单个 Guid（无效 Guid 表示创建失败）：
> - SectBattle：建占旗实战运行时 Battles，返回 FWorldBattleRuntimeInfo.BattleGuid（出征行军交给 WorldMapManage 抽象处理，不建行军载体层）。
> - Encounter（及其它默认）：建行军/遭遇载体 BattlefieldInformation，返回 FBattlefieldInformation.Guid。

---

### Function `JoinBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `JoinLayer` | [EBattleJoinLayer](WorldBattleCoreManager__EBattleJoinLayer.md) |
| `WorldForce` | [AWorldForce](../WorldForce__AWorldForce.md)* |
| `BattleGuid` | `const FGuid&` |
| `SectJoinTeamInfo` | const [FWorldBattleRuntimeJoinTeamInfo](../WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldBattleRuntimeJoinTeamInfo.md)& |
| `BattleTeamInfo` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool JoinBattle(EBattleJoinLayer JoinLayer, AWorldForce* WorldForce, const FGuid& BattleGuid, const FWorldBattleRuntimeJoinTeamInfo& SectJoinTeamInfo, const FBattleTeamInfo& BattleTeamInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [PR-B] 统一入伍分发入口：按【目标层 EBattleJoinLayer】转发到对应底层 Manager 的 JoinBattle，本身不持有运行时容器。
> - SectRuntime：转发 AWorldSectBattleManager::JoinBattle（占旗实战入伍，用 SectJoinTeamInfo 的 TeamRole + CharacterGuids）。
> - Battlefield：转发 AWorldBattleManager::JoinBattle（行军/遭遇载体入伍，用 BattleTeamInfo）。
> 按"层"而非 EBattleType 区分：一场 SectBattle 同时要入占旗层+行军层，两层类型都是 SectBattle，单凭类型分不开。
> 调用方按当前要入的层显式指定 JoinLayer，未用到的那个结构体参数传默认构造即可。

---

### Function `EnterBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool EnterBattle(const FGuid& BattleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [进入战斗] 统一进场分发：按容器判定玩法 —— SectMng.Battles 命中 → AWorldSectBattleManager::EnterBattle；
> BattleMng.BattlefieldInformation 命中 → AWorldBattleManager::EnterBattlefield。返回 true 表示已成功分发进场。
> [波A · A2 弹窗] 确认按钮直接调用本函数(BlueprintCallable)进场；取消按钮改调 TriggerSectBattleAutoResolve。

---

### Function `TriggerSectBattleAutoResolve`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectBattleGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TriggerSectBattleAutoResolve(const FGuid& SectBattleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [波A · A3] 门派战占旗围城 —— 玩家选择"不进场/取消弹窗" → 自动结算(城易主)。
> 供 A2 到达弹窗的【取消】按钮直接调用；内部复用 SectBattleAttackerMovetoBattlePlace 的无驻守 auto-resolve 分支：
> 组最小 FBattlefieldInformation(攻方 NPC 队 + 本场 BattleRuleset) → BattleSettlement/StartSettleAccounts 出结果，
> 随后清理去程围城 move 条目 + 撤围 + RemoveBattle。返回 true 表示已受理并结算。

---

### Function `RetreatBattleOnStart`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleGuid` | `const FGuid&` |
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RetreatBattleOnStart(const FGuid& BattleGuid, int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [战前撤退] 统一撤退分发：与 AttackerMovetoBattlePlace / EnterBattle 同款"按哪个容器持有该 Guid 判定玩法"：
> - 占旗玩法（SectMng.Battles 命中）：占旗战暂无撤退规则 → 一律不可撤退，记日志后返回（待后续 PR 实现真撤退）。
> - 遭遇/行军玩法（BattleMng.BattlefieldInformation 命中）：转发 AWorldBattleManager::RetreatBattleOnStart，
> 其内 CheckCanRetreatBattle（仅 InPreparation、玩家不能从自家主城撤退）+ EncounterRetreatBattle 实现仍归 BattleMng，本类只分发。

---

### Function `GetPlayerBattleTeamStateById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBattlefieldGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattleTeamState GetPlayerBattleTeamStateById(const FGuid& InBattlefieldGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [统一查询] 通过战斗 Guid 取玩家所属队伍状态，与 EnterBattle/AttackerMovetoBattlePlace 同款双容器判定：
> 占旗玩法（SectMng.Battles 命中）→ AWorldSectBattleManager::GetPlayerBattleTeamStateById（从占旗运行时队伍组装）；
> 遭遇/行军玩法（BattleMng.BattlefieldInformation）→ AWorldBattleManager::GetPlayerBattleTeamStateById（原实现）。

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

**Notes:**

> 结算完成（BP 转发目标：BattleMng 同名壳转发到此）

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
| `PlaceDisposalType` | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool PlayerSelectDisposalPlace(const FGuid & BattlefieldInformationGuid,EPlaceDisposalType PlaceDisposalType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [D 组] 玩家处置
> 玩家胜利处置城市（BP 转发目标）

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
| `PostwarCharacterDispose` | const TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayerDisposalCaptureCharacter(const FGuid & BattlefieldInformationGuid,const TMap<FGuid,ECaptureCharacterDisposalType> & PostwarCharacterDispose);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家胜利处置俘虏的角色（BP 转发目标）

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

**Notes:**

> 选择留守的人（BP 转发目标）

---
