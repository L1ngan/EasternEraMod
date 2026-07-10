# `struct` `FGameplayTeamBehaviorTree`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 阵营行为树配置：指定关卡类型与战斗类型下阵营使用的行为树

## 蓝图暴露变量

### 属性 `WorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldPlaceType](CommonEnum__EWorldPlaceType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**说明:**

> 关卡类型

---

### 属性 `BattleType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattleType](CommonEnum__EBattleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EBattleType BattleType = EBattleType::None;` |

**说明:**

> 战斗类型

---

### 属性 `BehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UBehaviorTree>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBehaviorTree> BehaviorTree;` |

**说明:**

> 阵营对应的行为树

---
