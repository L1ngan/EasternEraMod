# `class` `ATournamentManager`

**源码头文件：** `EastRimWorld/System/Tournament/TournamentManager.h`

---

## 功能说明（来自头文件注释）

> 武林大会管理器

## 蓝图暴露变量

### 属性 `LastSoloTournamentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float LastSoloTournamentTime = 0.0f;` |

**源码注释：**

> 上次单人比赛的时间

---

### 属性 `LastTeamTournamentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float LastTeamTournamentTime = 0.0f;` |

**源码注释：**

> 上次多人比赛的时间

---

### 属性 `CurrentTournamentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurrentTournamentTime = 0.0f;` |

**源码注释：**

> //当前比赛时间（以进入场景时间为准 场景外使用倒计时计算）

---

### 属性 `TournamentConfigurationAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<UTournamentConfigurationAsset>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TWeakObjectPtr<UTournamentConfigurationAsset> TournamentConfigurationAsset;` |

---

### 属性 `OnTournamentStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTournamentStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTournamentStateChanged OnTournamentStateChanged;` |

**源码注释：**

> 委托：比赛状态变化

---

### 属性 `OnSingleBattlePrepare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTournamentBattleInfo` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattlePrepare;` |

**源码注释：**

> 单场比赛预备(连线动画)

---

### 属性 `OnSingleBattleStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTournamentBattleInfo` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleStart;` |

**源码注释：**

> 单场比赛开始(战斗开始动画)

---

### 属性 `OnSingleBattleInProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTournamentBattleInfo` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleInProgress;` |

**源码注释：**

> 单场比赛开始(战斗开始动画)

---

### 属性 `OnSingleBattleEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTournamentBattleInfo` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleEnd;` |

**源码注释：**

> 单场比赛结束(显示战斗结果)

---

### 属性 `OnSingleBattleSettle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTournamentBattleInfo` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTournamentBattleInfo OnSingleBattleSettle;` |

**源码注释：**

> 单场比赛结算(结果连线)

---

### 属性 `OnTournamentNextRound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTournamentNextRound` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTournamentNextRound OnTournamentNextRound;` |

**源码注释：**

> 下一回合

---

### 属性 `OnTournamentEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTournamentEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTournamentEnd OnTournamentEnd;` |

---

### 属性 `OnSkipCurRoundSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSkipCurRoundSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnSkipCurRoundSucceed OnSkipCurRoundSucceed;` |

**源码注释：**

> 跳过当前回合成功

---

### 属性 `OnRegistrationChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRegistrationChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRegistrationChange OnRegistrationChange;` |

**源码注释：**

> 报名状态切换

---

## 蓝图暴露函数

### 函数 `GetTournamentManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `ATournamentManager*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) static ATournamentManager* GetTournamentManager();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetCurrentTournamentInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutTournamentInfo` | `FTournamentInstance&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetCurrentTournamentInfo(FTournamentInstance& OutTournamentInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前比赛信息

---

### 函数 `GetLastTournamentInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutTournamentInfo` | `FTournamentInstance&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetLastTournamentInfo(FTournamentInstance& OutTournamentInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取上一次比赛信息

---

### 函数 `IsInRegistrationPeriod`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsInRegistrationPeriod() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否在报名期间

---

### 函数 `IsRegistered`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsRegistered(const FGuid& SectGuid) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否已报名

---

### 函数 `PlayerRegisterTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool PlayerRegisterTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 报名比赛

---

### 函数 `AssignCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuids` | `const TArray<FGuid> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AssignCharacter(const TArray<FGuid> & CharacterGuids);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 指派角色

---

### 函数 `CancelCharacterJoinTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CancelCharacterJoinTournament(const FGuid & CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消角色参加比赛

---

### 函数 `PlayerSitOutTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PlayerSitOutTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 玩家不参加比赛

---

### 函数 `PlayerUnregisterTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PlayerUnregisterTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 玩家取消报名

---

### 函数 `GetRegistrationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `OutSectInfo` | `FTournamentSectInfo&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetRegistrationInfo(const FGuid& SectGuid,FTournamentSectInfo& OutSectInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取报名信息

---

### 函数 `ExecuteOffFieldOperation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SourceSectGuid` | `const FGuid&` |
| `TargetSectGuid` | `const FGuid&` |
| `OperationID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool ExecuteOffFieldOperation(const FGuid& SourceSectGuid, const FGuid& TargetSectGuid, const FName& OperationID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 执行场外操作

---

### 函数 `CancelOffFieldOperation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SourceSectGuid` | `const FGuid&` |
| `TargetSectGuid` | `const FGuid&` |
| `OperationID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CancelOffFieldOperation(const FGuid& SourceSectGuid, const FGuid& TargetSectGuid, const FName& OperationID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 执行场外操作

---

### 函数 `PlayerStartTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PlayerStartTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 玩家所在分组开始比赛

---

### 函数 `ProcessPlayerGroupBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ProcessPlayerGroupBattle();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 处理玩家分组比赛

---

### 函数 `AboutToStartTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AboutToStartTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通知比赛即将开始 除玩家阵营所在分组外直接计算结果

---

### 函数 `TournamentEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TournamentEnd();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 结束比赛并结算

---

### 函数 `TournamentSettle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TournamentSettle();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UpdateTournamentCycle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameTime` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateTournamentCycle(float GameTime);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新比赛周期

---

### 函数 `GetLastTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int32 GetLastTime();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取倒计时

---

### 函数 `CheckCanCreateTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanCreateTournament() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否需要创建新比赛

---

### 函数 `CreateNewTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TournamentType` | `ETournamentType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateNewTournament(ETournamentType TournamentType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建新比赛

---

### 函数 `CalculateTournamentGroups`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CalculateTournamentGroups();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算比赛分组信息

---

### 函数 `CalculateSectCombatPower`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CalculateSectCombatPower();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算各门派战力

---

### 函数 `SkipAndCalculateBattleResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleInfo` | `FTournamentBattleInfo &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SkipAndCalculateBattleResult(FTournamentBattleInfo & BattleInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 跳过战斗（自动计算结果）

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

> 跳过当前战斗

---

### 函数 `EnterTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool EnterTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 进入门派比武

---

### 函数 `ExitTournament`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ExitTournament();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 离开门派比武

---

### 函数 `SetSkipPlayerBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSkip` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSkipPlayerBattle(bool bSkip);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置跳过玩家战斗

---

### 函数 `SetSkipNpcBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSkip` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSkipNpcBattle(bool bSkip);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置跳过NPC战斗

---

### 函数 `GetSkipPlayerBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetSkipPlayerBattle() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取跳过玩家战斗状态

---

### 函数 `GetSkipNpcBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetSkipNpcBattle() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取跳过NPC战斗状态

---

### 函数 `SkipAllCurRound`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SkipAllCurRound();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 跳过当前轮所有的比赛 并直接计算结果

---

### 函数 `SetRankResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RankList` | `TArray<FGuid>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetRankResult(TArray<FGuid> RankList);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 比武结束时设置排名信息

---
