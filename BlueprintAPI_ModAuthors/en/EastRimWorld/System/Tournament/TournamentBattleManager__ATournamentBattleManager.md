# `class` `ATournamentBattleManager`

**Source header:** `EastRimWorld/System/Tournament/TournamentBattleManager.h`

---

## Functional description (from header comments)

> 门派比武战斗管理器
> 专门用于管理门派比武的战斗场景

## Blueprint-exposed variables

### Property `TournamentBattleCharacterInfo`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FTournamentBattleCharacterInfo](TournamentBattleManager__FTournamentBattleCharacterInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid, FTournamentBattleCharacterInfo> TournamentBattleCharacterInfo;` |

**Notes:**

> 各门派战斗的存活角色信息（按门派Guid索引）

---

### Property `BattleSpeed`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 BattleSpeed = 1;` |

**Notes:**

> Battle Speed field.

---

### Property `OnTournamentBattleStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnTournamentBattleStateChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTournamentBattleStateChanged OnTournamentBattleStateChanged;` |

**Notes:**

> 战斗状态变化委托

---

### Property `OnCharacterSeriousInjury`

| Field | Details |
|------|------|
| C++ type | `FOnCharacterSeriousInjury` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCharacterSeriousInjury OnCharacterSeriousInjury;` |

**Notes:**

> 弟子重伤广播

---

### Property `OnPlayLevelSequenceFinished`

| Field | Details |
|------|------|
| C++ type | `FOnPlayLevelSequenceFinished` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPlayLevelSequenceFinished OnPlayLevelSequenceFinished;` |

**Notes:**

> 关卡动画播放完成

---

## Blueprint-exposed functions

### Function `GetTournamentBattleManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ATournamentBattleManager](TournamentBattleManager__ATournamentBattleManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static ATournamentBattleManager* GetTournamentBattleManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Tournament Battle Manager.

---

### Function `CreateBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TournamentBattleInfo` | const [FTournamentBattleInfo](TournamentStruct__FTournamentBattleInfo.md) & |
| `TournamentType` | [ETournamentType](TournamentStruct__ETournamentType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateBattle(const FTournamentBattleInfo & TournamentBattleInfo,ETournamentType TournamentType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建战斗信息

---

### Function `StartBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartBattle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始战斗

---

### Function `EndBattleAndSettle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bTimeout` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndBattleAndSettle(bool bTimeout);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束战斗并结算

---

### Function `CheckBattleComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckBattleComplete();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查战斗是否结束

---

### Function `GetCurrentBattleInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FTournamentBattleInfo](TournamentStruct__FTournamentBattleInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTournamentBattleInfo GetCurrentBattleInfo() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前战斗信息

---

### Function `GetSectBattleCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SectGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AEastRimWorldCharacter*> GetSectBattleCharacters(const FGuid& SectGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取门派战斗角色

---

### Function `CheckCanStartBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanStartBattle() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否可以开始战斗

---

### Function `ClearAllBattleInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearAllBattleInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清理所有战斗信息

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

> 跳过当前这场战斗

---

### Function `ClearTimerHandleAndDelegate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearTimerHandleAndDelegate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

**Notes:**

> 添加定时器

---

### Function `ContinueBattle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TournamentType` | [ETournamentType](TournamentStruct__ETournamentType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ContinueBattle(ETournamentType TournamentType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 继续之前的战斗

---

### Function `GetCurBattleTimeRemaining`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurBattleTimeRemaining();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前战斗剩余时间

---

### Function `GetAllBattleCharactersByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllBattleCharactersByGuid(FGuid WorldForceGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前战斗对应势力的所有弟子

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

**Notes:**

> 统计战斗数据

---
