# `struct` `FEmergencePlaceQuestState`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 限时地点事件 — 活跃实例状态(Director 持有, 入档)。
> 桥据此在"被注入历练事件触发(已触发)"或"临时目的地到期(限时结束)"时播报结果。
> 只含 POD(FName/FGuid/int/bool/数组), Savior 嵌套序列化安全。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FName EventID;` |

**说明:**

> 来源涌现事件 ID(回查事件行取结束文案 Key)

---

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FGuid PlaceGuid;` |

**说明:**

> 注入的地点 Guid

---

### 属性 `ApprEventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") TArray<FName> ApprEventIDs;` |

**说明:**

> 注入的历练事件 ID(用于匹配"已触发"广播)

---

### 属性 `ExpireGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") int32 ExpireGameDay = 0;` |

**说明:**

> 失效游戏天(与历练 TempDestination 同步, 仅作冗余/调试)

---

### 属性 `EndTextTriggered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FEmergenceLogText EndTextTriggered;` |

**说明:**

> 结束·已触发文案(占位 {Force}{Name}{Place}; 含超链接开关)

---

### 属性 `EndTextTimeout`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FEmergenceLogText EndTextTimeout;` |

**说明:**

> 结束·限时结束文案(占位 {Place}; 含超链接开关)

---

### 属性 `bClosed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") bool bClosed = false;` |

**说明:**

> 是否已关闭(已播报过结果, 防重复)

---
