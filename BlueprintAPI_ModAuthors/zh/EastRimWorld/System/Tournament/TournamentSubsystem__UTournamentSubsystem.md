# `class` `UTournamentSubsystem`

**源码头文件:** `EastRimWorld/System/Tournament/TournamentSubsystem.h`

---

## 功能说明（来自头文件注释）

> 门派比武系统子系统

## 蓝图暴露变量

### 属性 `OnSnedRewardTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSnedRewardTips` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnSnedRewardTips OnSnedRewardTips;` |

**源码注释:**

> 发送奖励完成

---

## 蓝图暴露函数

### 函数 `GetTournamentSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [UTournamentSubsystem](TournamentSubsystem__UTournamentSubsystem.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) static UTournamentSubsystem* GetTournamentSubsystem();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获取子系统实例

---

### 函数 `GetAllSectReputationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FSectReputationInfo](TournamentStruct__FSectReputationInfo.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FSectReputationInfo> GetAllSectReputationInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有门派声望信息

---

### 函数 `GetSectReputationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `OutReputationInfo` | [FSectReputationInfo](TournamentStruct__FSectReputationInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetSectReputationInfo(const FGuid& SectGuid, FSectReputationInfo& OutReputationInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取门派声望信息

---

### 函数 `AddSectReputation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |
| `ReputationDelta` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddSectReputation(const FGuid& SectGuid, float ReputationDelta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 增加门派声望

---

### 函数 `SendAnnualRewards`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SendAnnualRewards();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 发放年度奖励

---

### 函数 `UpdateReputationRanking`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateReputationRanking();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新声望排名

---

### 函数 `GetSectRank`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SectGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetSectRank(const FGuid& SectGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取门派排名

---

### 函数 `SetNeedUpdateSectReputation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetNeedUpdateSectReputation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置需要更新门派排名

---
