# `struct` `FCharacterTeamInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色阵营信息：阵营ID及各地点/战斗类型对应的行为树列表

## 蓝图暴露变量

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TeamId = 255;` |

**说明:**

> 阵营ID

---

### 属性 `GameplayTeamBehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGameplayTeamBehaviorTree](CharacterStruct__FGameplayTeamBehaviorTree.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTeamBehaviorTree> GameplayTeamBehaviorTree;` |

**说明:**

> 各地点的行为树

---
