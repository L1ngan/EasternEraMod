# `class` `AWorldSectBattleManager`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## Functional description (from header comments)

> 门派战基础管理器。
> 这里只负责战场记录、队伍加入、进入地图状态和 Actor 登记，不写具体玩法。

## Blueprint-exposed variables

### Property `OnBattleCreated`

| Field | Details |
|------|------|
| C++ type | `FOnWorldBattleRuntimeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleCreated;` |

---

### Property `OnBattleEntered`

| Field | Details |
|------|------|
| C++ type | `FOnWorldBattleRuntimeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleEntered;` |

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

---

### Function `CreateBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| Return type | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleType` | `EWorldBattleRuntimeType` |
| `BattlePlaceGuid` | `const FGuid&` |
| `RelevancyPlaceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") FWorldBattleRuntimeInfo CreateBattle(EWorldBattleRuntimeType BattleType, const FGuid& BattlePlaceGuid, const FGuid& RelevancyPlaceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 只创建战场数据，不切地图，也不生成角色。

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

**Source comments:**

> 删除战场数据。如果删除的是当前战场，会清空 CurrentBattleGuid。

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

**Source comments:**

> 队伍加入战场。队伍 Guid 和 TeamID 会从 WorldForce 自动读取。

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

**Source comments:**

> 请求进入战场地图，实际切地图走 WorldDirector::MoveToPlaceByGuid。

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

**Source comments:**

> 地图进入/离开后的回调入口。当前没有自动绑定，后续接入地图完成事件时使用。

---
