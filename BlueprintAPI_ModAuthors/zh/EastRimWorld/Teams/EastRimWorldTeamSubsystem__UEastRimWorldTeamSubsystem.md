# `class` `UEastRimWorldTeamSubsystem`

**源码头文件:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

## 功能说明（来自头文件注释）

> A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## 蓝图暴露变量

### 属性 `OnPerceiveActorDeath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPerceiveActorDeath` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorDeath;` |

---

### 属性 `OnPerceiveActorSeriousInjury`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPerceiveActorDeath` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorSeriousInjury;` |

**源码注释:**

> 重伤(门派战中的死亡)

---

### 属性 `OnPerceiveActorKnockDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPerceiveActorDeath` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorKnockDown;` |

**源码注释:**

> 驻地战斗中被击倒

---

### 属性 `OnTeamBuffChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTeamBuffChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTeamBuffChange OnTeamBuffChange;` |

---

### 属性 `AllTeamActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<AActor*> AllTeamActors;` |

**源码注释:**

> 所有的阵营actor

---

## 蓝图暴露函数

### 函数 `IsPlayerFaction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerFaction(AActor* InActor) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否为玩家阵营（玩家阵营ID固定为1）

---

### 函数 `GetTeamRelation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `ETeamAttitude::Type` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamIdA` | `int32` |
| `TeamIdB` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) ETeamAttitude::Type GetTeamRelation(int32 TeamIdA, int32 TeamIdB);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindShortestDistanceTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OriginPosition` | `const FVector &` |
| `TeamId` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AActor * FindShortestDistanceTarget(const FVector & OriginPosition, int32 TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 寻找距离位置最短的目标

---

### 函数 `GetAllTeamActorByCharacterType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<AActor*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |
| `CharacterType` | `ECharacterType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<AActor*> GetAllTeamActorByCharacterType(int32 TeamId,ECharacterType CharacterType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有阵营actor 根据类型

---

### 函数 `GetAllTeamBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetAllTeamBuff(int32 TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlayBattleMusic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bPlay` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlayBattleMusic(bool bPlay);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 播放战斗音乐

---
