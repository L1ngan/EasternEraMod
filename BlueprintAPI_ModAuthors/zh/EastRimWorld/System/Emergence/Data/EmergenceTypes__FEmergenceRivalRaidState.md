# `struct` `FEmergenceRivalRaidState`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 强袭宿敌(RivalRaid) — 含玩家"驻地致命对决"的活跃实例(Director 持有, 入档)。
> 不含玩家分支为即时结算, 无状态; 含玩家分支对决走驿站切磋系统, 桥只记等待/结果。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FName EventID;` |

**说明:**

> Event ID 字段。

---

### 属性 `AssociatedTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FName AssociatedTaskID;` |

**说明:**

> Associated task row ID. Removed from current tasks on player defeat or NPC timeout.

---

### 属性 `RivalForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalForceGuid;` |

**说明:**

> 对手势力 A(玩家胜则对其好感 -100)

---

### 属性 `RivalNpcGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalNpcGuid;` |

**说明:**

> 生成的对手 NPC 角色 guid(死亡判定/销毁)

---

### 属性 `RivalDiscipleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalDiscipleGuid;` |

**说明:**

> 对手真身弟子 guid(在宿敌势力名册中; 日志超链接/关联演员用真身——分身不入名册, 点击时反查不到所属势力)

---

### 属性 `PlayerDiscipleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid PlayerDiscipleGuid;` |

**说明:**

> 玩家应战弟子 guid(事件发生时筛出; UI 读取以限定选人)

---

### 属性 `bDuelStarted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") bool bDuelStarted = false;` |

**说明:**

> 是否已应战开打(false=NPC 站立等应战; true=切磋对决进行中, 走位/替身/超时全由驿站切磋系统管)

---

### 属性 `ExpireGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") int32 ExpireGameDay = 0;` |

**说明:**

> 未应战时 NPC 撤离的游戏天(到点未应战则销毁 NPC)

---

### 属性 `EndTextAWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FEmergenceLogText EndTextAWin;` |

**说明:**

> 结果文案(占位 {ForceA}{NameA}{ForceB}{NameB}; 含超链接开关)

---

### 属性 `EndTextBWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FEmergenceLogText EndTextBWin;` |

**说明:**

> End Text B Win 字段。

---

### 属性 `ForceAName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText ForceAName;` |

**说明:**

> 结果文案占位实参缓存(势力/弟子名, 死亡回调时无需再查)

---

### 属性 `ForceBName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText ForceBName;` |

**说明:**

> Force B Name 字段。

---

### 属性 `NameA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText NameA;` |

**说明:**

> Name A 字段。

---

### 属性 `NameB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText NameB;` |

**说明:**

> Name B 字段。

---

### 属性 `bClosed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") bool bClosed = false;` |

**说明:**

> 是否 Closed 的布尔标记。

---
