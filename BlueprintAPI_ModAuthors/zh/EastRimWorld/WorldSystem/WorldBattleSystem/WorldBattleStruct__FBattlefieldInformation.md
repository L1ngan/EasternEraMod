# `struct` `FBattlefieldInformation`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战场信息

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**说明:**

> 战场的Guid

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattlePlaceGuid;` |

**说明:**

> 战斗地点GUID

---

### 属性 `RelevancyPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RelevancyPlaceGuid;` |

**说明:**

> 战斗关联的地点

---

### 属性 `FromPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**说明:**

> [PR-6]出征发起地点(攻方从哪出发)。默认无效时回退攻方 MainPlace

---

### 属性 `BattleRuleset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleRuleset](WorldBattleStruct__FBattleRuleset.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleRuleset BattleRuleset;` |

**说明:**

> 战斗规则

---

### 属性 `BattleTeamState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,FBattleTeamState> BattleTeamState;` |

**说明:**

> 战斗阵营状态

---

### 属性 `BattlefieldState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattlefieldStateType](WorldBattleStruct__EBattlefieldStateType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldStateType BattlefieldState = EBattlefieldStateType::None;` |

**说明:**

> 战斗状态

---

### 属性 `bPauseBattle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPauseBattle = true;` |

**说明:**

> 是否暂停

---

### 属性 `BattleTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleTime = 0.f;` |

**说明:**

> 战斗时间

---

### 属性 `BattlefieldResult`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattlefieldResult](WorldBattleStruct__FBattlefieldResult.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldResult BattlefieldResult;` |

**说明:**

> 战斗结果

---

### 属性 `BattlefieldAward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattlefieldAward](WorldBattleStruct__FBattlefieldAward.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldAward BattlefieldAward;` |

**说明:**

> 战斗奖励

---

### 属性 `bPlayerJoinBattle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoinBattle = false;` |

**说明:**

> 是否有玩家参与

---
