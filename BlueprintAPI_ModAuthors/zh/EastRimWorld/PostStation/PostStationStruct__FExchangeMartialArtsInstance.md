# `struct` `FExchangeMartialArtsInstance`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 一场切磋的运行时实例数据（双方角色、签到、替身、限时与结果）

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**说明:**

> 本场切磋的唯一标识

---

### 属性 `ConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ConfigID;` |

**说明:**

> 所用切磋配置ID（FExchangeMartialArtsConfig 表行ID）

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EExchangeMartialArtsState](PostStationStruct__EExchangeMartialArtsState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EExchangeMartialArtsState State;` |

**说明:**

> 当前切磋状态（等待/进行中）

---

### 属性 `PlayerTeamGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamGuids;` |

**说明:**

> 队伍1角色GUID

---

### 属性 `NPCTeamGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamGuids;` |

**说明:**

> 队伍2角色GUID

---

### 属性 `PlayerTeamSignInGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamSignInGuids;` |

**说明:**

> 队伍1角色签到GUID

---

### 属性 `NPCTeamSignInGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamSignInGuids;` |

**说明:**

> 队伍2角色签到GUID

---

### 属性 `PlayerTeamCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TMap<FGuid,AEastRimWorldCharacter*> PlayerTeamCharacters;` |

**说明:**

> 玩家参加的角色（运行时缓存；读档时按 PlayerTeamGuids 重建，标 Transient 避免序列化悬空指针致崩）

---

### 属性 `NPCTeamCharacters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TMap<FGuid,AEastRimWorldCharacter*> NPCTeamCharacters;` |

**说明:**

> NPC角色(不包含开始之后生成的)（运行时缓存；读档时按 NPCTeamGuids 重建，标 Transient）

---

### 属性 `PlayerTeamSubstitutes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> PlayerTeamSubstitutes;` |

**说明:**

> 玩家角色创建的替身GUID

---

### 属性 `NPCTeamSubstitutes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCTeamSubstitutes;` |

**说明:**

> NPC创建的替身GUID

---

### 属性 `NPCGenerationGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCGenerationGuids;` |

**说明:**

> NPC开场生成信息的GUID

---

### 属性 `NPCGenerationCharacterGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> NPCGenerationCharacterGuids;` |

**说明:**

> NPC开场生成的角色GUID

---

### 属性 `NPCGenerationCharacterDeathCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 NPCGenerationCharacterDeathCount;` |

**说明:**

> NPC开场生成角色的死亡计数

---

### 属性 `TimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit;` |

**说明:**

> 切磋限时

---

### 属性 `StartTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StartTimeLimit;` |

**说明:**

> 切磋创建到开始限时

---

### 属性 `Result`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EExchangeMartialArtsResult](PostStationStruct__EExchangeMartialArtsResult.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EExchangeMartialArtsResult Result = EExchangeMartialArtsResult::None;` |

**说明:**

> 结束结果(End 前由胜/负/取消路径写入, 随 OnExchangeMartialArtsEnd 广播带出, 供订阅方区分)

---
