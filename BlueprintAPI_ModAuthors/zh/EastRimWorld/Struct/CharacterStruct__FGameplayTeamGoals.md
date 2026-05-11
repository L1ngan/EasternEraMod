# `struct` `FGameplayTeamGoals`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 阵营的goals

## 蓝图暴露变量

### 属性 `WorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**源码注释:**

> 关卡类型

---

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBattleType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") EBattleType BattleType = EBattleType::None;` |

**源码注释:**

> 战斗类型

---

### 属性 `GOAPGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> GOAPGoals;` |

**源码注释:**

> 初始GOAP目标

---

### 属性 `InnerSectGOAPGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> InnerSectGOAPGoals;` |

**源码注释:**

> 内门初始GOAP目标

---

### 属性 `SummonInitGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ERobotType , [FGoals](CharacterStruct__FGoals.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TMap<ERobotType , FGoals> SummonInitGoal;` |

**源码注释:**

> 召唤物根据类型初始GOAP目标

---

### 属性 `AnimalInitGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "GOAP") TArray<FName> AnimalInitGoal;` |

**源码注释:**

> 动物初始GOAP目标

---
