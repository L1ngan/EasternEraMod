# `struct` `FBattleSettlementRequest`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> [PR-A 阶段1] 统一战后结算输入结构（本阶段仅定义；Make 适配函数后续 PR 再补）。

## 蓝图暴露变量

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EBattleType BattleType = EBattleType::None; UPROPERTY(BlueprintReadWrite) EBattleSettlementSource Source = EBattleSettlementSource::Encounter;` |

**说明:**

> Battle Type 字段。

---

### 属性 `BattlefieldGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FGuid BattlefieldGuid; UPROPERTY(BlueprintReadWrite) FGuid RelevancyPlaceGuid;` |

**说明:**

> Battlefield Guid 字段。

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FGuid BattlePlaceGuid; UPROPERTY(BlueprintReadWrite) FGuid FromPlaceGuid;` |

**说明:**

> Battle Place Guid 字段。

---

### 属性 `WinnerForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FGuid WinnerForceGuid; UPROPERTY(BlueprintReadWrite) int32 WinnerTeamID = 255;` |

**说明:**

> Winner Force Guid 字段。

---

### 属性 `PlayerResult`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlayerBattleResult](WorldBattleStruct__EPlayerBattleResult.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EPlayerBattleResult PlayerResult = EPlayerBattleResult::None; UPROPERTY(BlueprintReadWrite) bool bPlayerInvolved = false;` |

**说明:**

> 执行 Player Result 操作。

---

### 属性 `AttackerTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FBattleTeamInfo AttackerTeam;` |

**说明:**

> Attacker Team 字段。

---
