# `struct` `FEmergenceLogEntry`

**源码头文件:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## 功能说明（来自头文件注释）

> 涌现事件日志条目 —— 一条江湖事件记录。随 ASaveGameDataActor 经 Savior 入档。

## 蓝图暴露变量

### 属性 `LogGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FGuid LogGuid;` |

**说明:**

> 本条日志唯一 id

---

### 属性 `Content`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FString Content;` |

**说明:**

> 日志文案(已格式化的最终显示串; 存 FString 而非 FText —— 日志是冻结的历史记录, 且 FText::Format 结果存档不能干净往返)

---

### 属性 `Time`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") float Time = 0.f;` |

**说明:**

> [需求1] 记录时的游戏时间(秒; 取 AWorldDirector::GameTime)

---

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FName EventID;` |

**说明:**

> [需求2] 来源事件行 ID(反查事件配置: AEmergenceDirector::FindEventRow)

---

### 属性 `EventInstanceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FGuid EventInstanceGuid;` |

**说明:**

> [需求2] 来源事件实例 Guid(反查活跃事件桥: AEmergenceDirector::FindBridgeByGuid; 事件已结束则桥不在但日志仍可读)

---

### 属性 `EventStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") int32 EventStage = 0;` |

**说明:**

> 记录时事件所处阶段(写入瞬间由来源桥 GetCurrentStage() 采样)。日志的交互(如超链接)仅在事件仍处该阶段时有效 —— 见 IsLogActionValid

---

### 属性 `ActorGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FGuid> ActorGuids;` |

**说明:**

> [需求4] 本条日志关联的所有演员(势力/地点/角色等世界对象 Guid)

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)> |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FEmergenceLogAction> Actions;` |

**说明:**

> 本条日志可触发的点击动作(随事件/阶段不同; 如触发对话)。UI 据此渲染超链接, 点击经 ExecuteLogAction(阶段有效才生效)

---

### 属性 `bPlayerRelated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") bool bPlayerRelated = false;` |

**说明:**

> [需求5] 是否与玩家势力相关(关联演员里含 玩家城市 / 玩家势力 / 玩家弟子)

---
