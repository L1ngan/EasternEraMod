# `struct` `FWorldBattleRuntimeInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 一场门派战的最小运行数据。

## 蓝图暴露变量

### 属性 `BattleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattleGuid;` |

**说明:**

> Battle Guid 字段。

---

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**说明:**

> Battle Type 字段。

---

### 属性 `BattleState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldBattleRuntimeState](WorldBattleRuntimeStruct__EWorldBattleRuntimeState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldBattleRuntimeState BattleState = EWorldBattleRuntimeState::None;` |

**说明:**

> Battle State 字段。

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattlePlaceGuid;` |

**说明:**

> 调用 EnterBattle 时要进入的地点。

---

### 属性 `RelevancyPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RelevancyPlaceGuid;` |

**说明:**

> 关联地点，后续玩法需要时再使用。

---

### 属性 `FromPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere) FGuid FromPlaceGuid;` |

**说明:**

> [PR-6]出征发起地点(攻方从哪出发)。默认无效时回退攻方 MainPlace。

---

### 属性 `Teams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FWorldBattleRuntimeTeam](WorldBattleRuntimeStruct__FWorldBattleRuntimeTeam.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid, FWorldBattleRuntimeTeam> Teams;` |

**说明:**

> Teams 字段。

---

### 属性 `BattlefieldAward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattlefieldAward](../WorldBattleSystem/WorldBattleStruct__FBattlefieldAward.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattlefieldAward BattlefieldAward;` |

**说明:**

> 门派战战后结算奖励/处置。与遭遇战 FBattlefieldInformation::BattlefieldAward 同结构，
> 占旗分胜负后由 AWorldSectBattleManager 结算流程填充，供返程/UI 读取。

---

### 属性 `BattleRuleset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleRuleset](../WorldBattleSystem/WorldBattleStruct__FBattleRuleset.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleRuleset BattleRuleset;` |

**说明:**

> 战斗规则。与遭遇战 FBattlefieldInformation::BattleRuleset 同结构，
> CreateBattle 时按 BattleType 从 GameMode 配置取一份，供结算口径(攻城正邪/俘虏处置概率等)读取。

---
