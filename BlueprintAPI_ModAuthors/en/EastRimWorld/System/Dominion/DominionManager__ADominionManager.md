# `class` `ADominionManager`

**Source header:** `EastRimWorld/System/Dominion/DominionManager.h`

---

## Functional description (from header comments)

> 世界势力割据管理器 — 单一 Actor 管理器(纯数据驱动,参考 AApprenticeshipManager)
> 职责:
>   1. 城市门派容量:每城按城市等级有附属门派容量上限,满员不可加入(只有 CenterCity 可承载附属门派)
>   2. 依附与纳税:附属门派(必为 NPC,玩家不会成为附属门派)周期向城主纳税(NPC 城主得积分,玩家城主 1:1 得铜币)
>   3. 周期积分加成:附属门派定期积分按所在城市等级/繁荣度百分比加成(钩在 AWorldForce::OnGameDayChanged)
>   4. NPC 城主治理:按性格(激进/中立/保守)周期自动 驱逐/加税/批准迁入
>   5. 城市易主:城内门派转依附新城主(钩在 AWorldPlace::OccupyPlace → OnCityOwnerChanged)
>   6. 玩家操作:攻打城内门派(城主态度许可/强攻代价/胜负结算)、攻打流浪门派(灭门)、交流(送礼/情报/协助/安抚)
>   7. NPC 附属门派周期迁移(优先更繁荣且有空位的城市,需城主批准)
>   8. NPC 附属门派攻打资源点/其他城市/门派驻地,成功转为占领门派并按等级转移主城
> 驱动:绑定 AWorldDirector::OnGameDayChanged → OnGameDayChangedHandler(无 Tick)
> 配置:UDominionConfigAsset(经 GameMode 获取,未配置回退 CDO)

## Blueprint-exposed variables

### Property `CityStates`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FCityDominionState](DominionTypes__FCityDominionState.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Dominion|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") TMap<FGuid, FCityDominionState> CityStates;` |

**Notes:**

> 每座城市的割据状态(key=城市Guid;只有 CenterCity 会产生条目)

---

### Property `SectInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FSectDominionInfo](DominionTypes__FSectDominionInfo.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Dominion|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") TMap<FGuid, FSectDominionInfo> SectInfos;` |

**Notes:**

> 每个门派的割据全局记录(驱逐记录/流浪标记;key=势力Guid)

---

### Property `LastMigrationGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Dominion|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") int32 LastMigrationGameDay = 0;` |

**Notes:**

> 上次迁移检测的游戏天数

---

### Property `LastResidentAttackGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Dominion|Runtime" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") int32 LastResidentAttackGameDay = 0;` |

**Notes:**

> 上次附属门派攻打检测的游戏天数

---

### Property `OnSectJoinedCity`

| Field | Details |
|------|------|
| C++ type | `FOnSectJoinedCity` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectJoinedCity OnSectJoinedCity;` |

**Notes:**

> ── 委托 ──

---

### Property `OnSectLeftCity`

| Field | Details |
|------|------|
| C++ type | `FOnSectLeftCity` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectLeftCity OnSectLeftCity;` |

**Notes:**

> On Sect Left City event or callback.

---

### Property `OnSectMoveInRequested`

| Field | Details |
|------|------|
| C++ type | `FOnSectMoveInRequested` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectMoveInRequested OnSectMoveInRequested;` |

**Notes:**

> On Sect Move In Requested event or callback.

---

### Property `OnSectBecameWandering`

| Field | Details |
|------|------|
| C++ type | `FOnSectBecameWandering` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectBecameWandering OnSectBecameWandering;` |

**Notes:**

> On Sect Became Wandering event or callback.

---

### Property `OnSectExterminated`

| Field | Details |
|------|------|
| C++ type | `FOnSectExterminated` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectExterminated OnSectExterminated;` |

**Notes:**

> On Sect Exterminated event or callback.

---

### Property `OnSectTaxRaised`

| Field | Details |
|------|------|
| C++ type | `FOnSectTaxRaised` |
| Reflection specifiers | BlueprintAssignable, Category="Dominion|Events" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectTaxRaised OnSectTaxRaised;` |

**Notes:**

> On Sect Tax Raised event or callback.

---

## Blueprint-exposed functions

### Function `GetDominionManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ADominionManager](DominionManager__ADominionManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static ADominionManager* GetDominionManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> ── 单例 ──

---

### Function `GetCitySectCapacity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") int32 GetCitySectCapacity(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 城市的门派容量上限(按城市等级查配置)

---

### Function `GetResidentSectCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") int32 GetResidentSectCount(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 城内附属门派数量

---

### Function `HasCityFreeCapacity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool HasCityFreeCapacity(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 城内是否还有空位

---

### Function `GetCityResidentSects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | TArray<[FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FSectResidencyInfo> GetCityResidentSects(FGuid CityGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 城内附属门派列表

---

### Function `GetCityPendingMoveIns`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetCityPendingMoveIns(FGuid CityGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 城市待批准的迁入申请

---

### Function `IsResidentSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool IsResidentSect(FGuid ForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 某门派是否是附属门派(依附于某城)

---

### Function `FindSectResidentCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") FGuid FindSectResidentCity(FGuid ForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 某门派当前依附的城市Guid(无则返回无效Guid)

---

### Function `GetSectResidencyInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |
| `OutInfo` | [FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") bool GetSectResidencyInfo(FGuid ForceGuid, FSectResidencyInfo& OutInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取某门派在城内的进驻信息(忠诚/税率等);查不到返回 false

---

### Function `IsWanderingSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool IsWanderingSect(FGuid ForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 某门派是否是流浪门派

---

### Function `GetWanderingSects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | `TArray<FGuid>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetWanderingSects() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 所有流浪门派Guid

---

### Function `GetSectExpelRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetSectExpelRecord(FGuid ForceGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 某门派的驱逐记录(被哪些城驱逐过)

---

### Function `GetResidentScoreMultiplier`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetResidentScoreMultiplier(FGuid ForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 附属门派周期积分倍率(1+城市等级加成+繁荣度加成;非附属返回1;供 AWorldForce 定期积分调用)

---

### Function `GetResidentSectsCombat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetResidentSectsCombat(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 城内附属门派的守备贡献战力(战力×归属感%×系数;供攻防结算扩展用)

---

### Function `GetWanderingSectCombat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetWanderingSectCombat(FGuid ForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 流浪门派的削弱后战力

---

### Function `GetAssistPledgedSects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Query" |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetAssistPledgedSects(FGuid CityGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 已承诺攻城协助的城内门派(玩家攻城时由战斗系统查询消费)

---

### Function `JoinCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Residency" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |
| `false` | `bool bForced =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool JoinCity(FGuid CityGuid, FGuid ForceGuid, bool bForced = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 门派进驻城市(bForced=true 为驱逐安置等强制迁入,跳过申请流程但仍受容量/类型/驱逐记录限制)
> 限制:目标必须是 CenterCity;门派必须是无自有据点的 NPC 势力(玩家不会成为附属门派);不能是城主自己;未被该城驱逐过;有空位

---

### Function `LeaveCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Residency" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceGuid` | `FGuid` |
| `Reason` | [ESectLeaveCityReason](DominionTypes__ESectLeaveCityReason.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool LeaveCity(FGuid ForceGuid, ESectLeaveCityReason Reason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 门派离城(内部/外部通用)

---

### Function `RequestMoveIn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Residency" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool RequestMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 门派申请迁入某城(进待批列表;NPC 城主在治理周期决策,玩家城主走 Approve/Reject)

---

### Function `ApproveMoveIn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Residency" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool ApproveMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 批准迁入(玩家城主 UI 调;满员时返回 false 无法批准)

---

### Function `RejectMoveIn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Residency" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool RejectMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拒绝迁入

---

### Function `ExpelSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Governance" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Governance") bool ExpelSect(FGuid CityGuid, FGuid ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 驱逐:逐出本城并记录驱逐;被迫迁往未驱逐过它的城市,无处可去转为流浪门派;降低同城其他门派忠诚

---

### Function `RaiseTaxOnSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Governance" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Governance") bool RaiseTaxOnSect(FGuid CityGuid, FGuid ForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加税:提高该门派缴税比例;不产生驱逐记录,但降低忠诚/提升反水风险

---

### Function `QueryLordAttackPermission`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|PlayerAttack" |
| Return type | [ELordAttackPermission](DominionTypes__ELordAttackPermission.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|PlayerAttack") ELordAttackPermission QueryLordAttackPermission(FGuid CityGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 查询城主对玩家攻打城内门派的态度(默许/勉强同意/拒绝;按城主与玩家关系档位)

---

### Function `CanPlayerAttackResidentSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Dominion|PlayerAttack" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|PlayerAttack") bool CanPlayerAttackResidentSect(FGuid CityGuid, FGuid TargetForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 玩家是否可攻打该城内门派(玩家为本城城主时不可攻打,仅能驱逐)

---

### Function `PlayerRequestAttackResidentSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|PlayerAttack" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `bForceWhenRefused` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") bool PlayerRequestAttackResidentSect(FGuid CityGuid, FGuid TargetForceGuid, bool bForceWhenRefused);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家发起攻打城内门派:按城主态度结算关系代价并放行
> @param bForceWhenRefused 城主拒绝时是否强行攻打(代价:与城主关系大幅恶化;城主门派不参战,玩家与目标单挑)
> @return 是否放行(false=被拒且未强攻);实际战斗由调用方发起,结束后调 NotifyPlayerAttackResidentSectResult

---

### Function `NotifyPlayerAttackResidentSectResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|PlayerAttack" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `bPlayerWon` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") void NotifyPlayerAttackResidentSectResult(FGuid CityGuid, FGuid TargetForceGuid, bool bPlayerWon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家攻打城内门派的胜负结算:胜=吞并逐出+夺取部分资源;败=目标士气/忠诚提升

---

### Function `NotifyPlayerAttackWanderingSectResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|PlayerAttack" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetForceGuid` | `FGuid` |
| `bPlayerWon` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") void NotifyPlayerAttackWanderingSectResult(FGuid TargetForceGuid, bool bPlayerWon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家攻打流浪门派的胜负结算(无关系限制):胜=灭门;败=继续流窜

---

### Function `GiveGiftToResidentSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Diplomacy" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool GiveGiftToResidentSect(FGuid CityGuid, FGuid TargetForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 送礼:消耗玩家门派资金,提升与该门派好感

---

### Function `RequestIntelFromSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Diplomacy" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `OutIntel` | [FDominionIntelInfo](DominionTypes__FDominionIntelInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool RequestIntelFromSect(FGuid CityGuid, FGuid TargetForceGuid, FDominionIntelInfo& OutIntel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 索取情报:关系达标返回所在城市的情报快照

---

### Function `RequestSiegeAssistFromSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Diplomacy" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool RequestSiegeAssistFromSect(FGuid CityGuid, FGuid TargetForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 请求其在玩家攻城时协助(关系达标后挂承诺标记,战斗系统经 GetAssistPledgedSects 消费)

---

### Function `AppeaseResidentSect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion|Diplomacy" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool AppeaseResidentSect(FGuid CityGuid, FGuid TargetForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 安抚:消耗资金提升该门派忠诚度(主要供玩家城主稳定城内门派)

---

### Function `SetCityTributeRatio`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `FGuid` |
| `NewRatio` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion") void SetCityTributeRatio(FGuid CityGuid, float NewRatio);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置城镇的税率

---

### Function `ResidentSectPayTaxationInCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Dominion" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `City` | [AWorldPlace](../../WorldSystem/WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Dominion") float ResidentSectPayTaxationInCity(AWorldPlace* City);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Resident Sect Pay Taxation In City field.

---
