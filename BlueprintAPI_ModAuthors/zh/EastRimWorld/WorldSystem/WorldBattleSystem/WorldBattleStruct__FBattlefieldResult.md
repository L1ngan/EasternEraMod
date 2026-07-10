# `struct` `FBattlefieldResult`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战场结果

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**说明:**

> 胜利方势力

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**说明:**

> 胜利方势力

---

### 属性 `PlayerBattleResult`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlayerBattleResult](WorldBattleStruct__EPlayerBattleResult.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlayerBattleResult PlayerBattleResult = EPlayerBattleResult::None;` |

**说明:**

> 玩家方战斗结果

---

### 属性 `MVPCharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid MVPCharacterGuid;` |

**说明:**

> MVP角色GUID

---
