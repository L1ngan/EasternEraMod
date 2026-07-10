# `struct` `FWorldBattleCharacterInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

## 功能说明（来自头文件注释）

> World Battle Character Info 数据结构。

## 蓝图暴露变量

### 属性 `BattlefieldCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EBattlefieldRolesType](../../Struct/CommonEnum__EBattlefieldRolesType.md),[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> BattlefieldCharacters;` |

**说明:**

> 正在战斗的角色

---

### 属性 `SeriousInjuryCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EBattlefieldRolesType](../../Struct/CommonEnum__EBattlefieldRolesType.md),[FCharacterTypes](WorldBattleManager__FCharacterTypes.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBattlefieldRolesType,FCharacterTypes> SeriousInjuryCharacters;` |

**说明:**

> 重伤的弟子

---
