# `struct` `FExchangeMartialArtsConfig`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 切磋配置表行（胜负奖励、对话、玩家参战人数、NPC生成配置与双方队伍ID）

## 蓝图暴露变量

### 属性 `Awards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> Awards;` |

**说明:**

> 胜利奖励

---

### 属性 `FailedAwards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> FailedAwards;` |

**说明:**

> 失败奖励

---

### 属性 `WinDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WinDialogueID;` |

**说明:**

> 胜利对话(DT_DialogueGroup表ID)

---

### 属性 `FailedDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName FailedDialogueID;` |

**说明:**

> 失败对话(DT_DialogueGroup表ID)

---

### 属性 `PlayerJoinNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 PlayerJoinNum;` |

**说明:**

> 玩家参战人数限制

---

### 属性 `NPCGenerateIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NPCGenerateIDs;` |

**说明:**

> NPC参战生成配置

---

### 属性 `PlayerTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenericTeamId PlayerTeam;` |

**说明:**

> 队伍ID1

---

### 属性 `NPCTeam`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenericTeamId NPCTeam;` |

**说明:**

> 队伍ID2

---
