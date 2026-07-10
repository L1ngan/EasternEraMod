# `class` `UTournamentSubsystem`

**Source header:** `EastRimWorld/System/Tournament/TournamentSubsystem.h`

---

## Functional description (from header comments)

> 门派比武系统子系统

## Blueprint-exposed variables

### Property `OnSnedRewardTips`

| Field | Details |
|------|------|
| C++ type | `FOnSnedRewardTips` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnSnedRewardTips OnSnedRewardTips;` |

**Notes:**

> 发送奖励完成

---

## Blueprint-exposed functions

### Function `GetTournamentSubsystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [UTournamentSubsystem](TournamentSubsystem__UTournamentSubsystem.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static UTournamentSubsystem* GetTournamentSubsystem();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取子系统实例

---

### Function `GetAllSectReputationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FSectReputationInfo](TournamentStruct__FSectReputationInfo.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FSectReputationInfo> GetAllSectReputationInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有门派声望信息

---

### Function `GetSectReputationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `OutReputationInfo` | [FSectReputationInfo](TournamentStruct__FSectReputationInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetSectReputationInfo(const FGuid& SectGuid, FSectReputationInfo& OutReputationInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取门派声望信息

---

### Function `AddSectReputation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `ReputationDelta` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddSectReputation(const FGuid& SectGuid, float ReputationDelta);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 增加门派声望

---

### Function `SendAnnualRewards`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SendAnnualRewards();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 发放年度奖励

---

### Function `UpdateReputationRanking`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateReputationRanking();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新声望排名

---

### Function `GetSectRank`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetSectRank(const FGuid& SectGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取门派排名

---

### Function `SetNeedUpdateSectReputation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNeedUpdateSectReputation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置需要更新门派排名

---
