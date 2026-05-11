# `class` `ATournamentBattleManager`

**源码头文件：** `EastRimWorld/System/Tournament/TournamentBattleManager.h`

---

## 功能说明（来自头文件注释）

> 门派比武战斗管理器
> 专门用于管理门派比武的战斗场景

## 蓝图暴露变量

### 属性 `TournamentBattleCharacterInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FTournamentBattleCharacterInfo](TournamentBattleManager__FTournamentBattleCharacterInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid, FTournamentBattleCharacterInfo> TournamentBattleCharacterInfo;` |

**源码注释：**

> 各门派战斗的存活角色信息（按门派Guid索引）

---

### 属性 `BattleSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 BattleSpeed = 1;` |

---

### 属性 `OnTournamentBattleStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTournamentBattleStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTournamentBattleStateChanged OnTournamentBattleStateChanged;` |

**源码注释：**

> 战斗状态变化委托

---

### 属性 `OnCharacterSeriousInjury`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCharacterSeriousInjury` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCharacterSeriousInjury OnCharacterSeriousInjury;` |

**源码注释：**

> 弟子重伤广播

---

### 属性 `OnPlayLevelSequenceFinished`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayLevelSequenceFinished` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayLevelSequenceFinished OnPlayLevelSequenceFinished;` |

**源码注释：**

> 关卡动画播放完成

---

## 蓝图暴露函数

### 函数 `GetTournamentBattleManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ATournamentBattleManager](TournamentBattleManager__ATournamentBattleManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) static ATournamentBattleManager* GetTournamentBattleManager();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CreateBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TournamentBattleInfo` | const [FTournamentBattleInfo](TournamentStruct__FTournamentBattleInfo.md) & |
| `TournamentType` | `ETournamentType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateBattle(const FTournamentBattleInfo & TournamentBattleInfo,ETournamentType TournamentType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建战斗信息

---

### 函数 `StartBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartBattle();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始战斗

---

### 函数 `EndBattleAndSettle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bTimeout` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndBattleAndSettle(bool bTimeout);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 结束战斗并结算

---

### 函数 `CheckBattleComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckBattleComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查战斗是否结束

---

### 函数 `GetCurrentBattleInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FTournamentBattleInfo](TournamentStruct__FTournamentBattleInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FTournamentBattleInfo GetCurrentBattleInfo() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前战斗信息

---

### 函数 `GetSectBattleCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AEastRimWorldCharacter*> GetSectBattleCharacters(const FGuid& SectGuid) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取门派战斗角色

---

### 函数 `CheckCanStartBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanStartBattle() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否可以开始战斗

---

### 函数 `ClearAllBattleInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearAllBattleInfo();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清理所有战斗信息

---

### 函数 `SkipBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SkipBattle();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 跳过当前这场战斗

---

### 函数 `ClearTimerHandleAndDelegate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearTimerHandleAndDelegate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清理定时器

---

### 函数 `AddTimerHandleAndDelegate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddTimerHandleAndDelegate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加定时器

---

### 函数 `ContinueBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TournamentType` | `ETournamentType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ContinueBattle(ETournamentType TournamentType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 继续之前的战斗

---

### 函数 `GetCurBattleTimeRemaining`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetCurBattleTimeRemaining();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前战斗剩余时间

---

### 函数 `GetAllBattleCharactersByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForceGuid` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllBattleCharactersByGuid(FGuid WorldForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前战斗对应势力的所有弟子

---

### 函数 `RecordCombatData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterDeathInformation` | const [FCharacterDeathInformation](../../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecordCombatData(const FCharacterDeathInformation & CharacterDeathInformation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 统计战斗数据

---
