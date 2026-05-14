# `class` `AWorldSectBattleManager`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> 门派战基础管理器。
> 这里只负责战场记录、队伍加入、进入地图状态和 Actor 登记，不写具体玩法。

## 蓝图暴露变量

### 属性 `OnBattleCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldBattleRuntimeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleCreated;` |

---

### 属性 `OnBattleEntered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldBattleRuntimeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorldBattleRuntimeChanged OnBattleEntered;` |

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

---

### 函数 `CreateBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Runtime" |
| 返回类型 | [FWorldBattleRuntimeInfo](WorldBattleRuntimeStruct__FWorldBattleRuntimeInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleType` | `EWorldBattleRuntimeType` |
| `BattlePlaceGuid` | `const FGuid&` |
| `RelevancyPlaceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Runtime") FWorldBattleRuntimeInfo CreateBattle(EWorldBattleRuntimeType BattleType, const FGuid& BattlePlaceGuid, const FGuid& RelevancyPlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 只创建战场数据，不切地图，也不生成角色。

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

**源码注释:**

> 删除战场数据。如果删除的是当前战场，会清空 CurrentBattleGuid。

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

**源码注释:**

> 队伍加入战场。队伍 Guid 和 TeamID 会从 WorldForce 自动读取。

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

**源码注释:**

> 请求进入战场地图，实际切地图走 WorldDirector::MoveToPlaceByGuid。

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

**源码注释:**

> 地图进入/离开后的回调入口。当前没有自动绑定，后续接入地图完成事件时使用。

---
