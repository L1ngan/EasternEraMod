# `struct` `FTournamentBattleCharacterInfo`

**源码头文件:** `EastRimWorld/System/Tournament/TournamentBattleManager.h`

---

## 功能说明（来自头文件注释）

> 门派比武战斗角色信息

## 蓝图暴露变量

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**源码注释:**

> TeamID

---

### 属性 `BattleCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<AEastRimWorldCharacter*> BattleCharacters;` |

**源码注释:**

> 正在战斗的角色

---

### 属性 `SeriousInjuryCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<AEastRimWorldCharacter*> SeriousInjuryCharacters;` |

**源码注释:**

> 重伤的弟子

---

### 属性 `CharacterBattleInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterBattleInfo](../../WorldSystem/WorldBattleSystem/WorldBattleStruct__FCharacterBattleInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,FCharacterBattleInfo> CharacterBattleInfos;` |

**源码注释:**

> 伤害统计

---
