# `struct` `FEmergenceSwordMeetState`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 论剑大会(SwordMeet) — 活跃实例(Director 持有, 入档; 单实例)。
> 英雄帖发出后, 持续 DurationSeconds 再出三甲; 期间玩家可参赛(记录所选弟子)。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FName EventID;` |

**说明:**

> Event ID 字段。

---

### 属性 `ExpireGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 ExpireGameDay = 0;` |

**说明:**

> 到点出结果的游戏天

---

### 属性 `bPlayerJoined`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") bool bPlayerJoined = false;` |

**说明:**

> 是否 Player Joined 的布尔标记。

---

### 属性 `PlayerDiscipleGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") TArray<FGuid> PlayerDiscipleGuids;` |

**说明:**

> 玩家参赛弟子(UI 选定后记录; 用于参赛池 + 赛后返回)

---

### 属性 `PlayerMoveInfoGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FGuid PlayerMoveInfoGuid;` |

**说明:**

> 玩家参赛弟子的大地图移动 Guid(赛后据此返回主基地+移除大地图数据)

---

### 属性 `PlayerPickCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 PlayerPickCount = 3;` |

**说明:**

> 配置快照(出结果时用, 免回查事件表)

---

### 属性 `TopForceCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 TopForceCount = 15;` |

**说明:**

> Top Force Count 字段。

---

### 属性 `RankRewards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, int32>` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") TMap<int32, int32> RankRewards;` |

**说明:**

> 名次 → 势力声望奖励(key: 1/2/3 = 第一/二/三名)

---

### 属性 `PlayerRealmThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 PlayerRealmThreshold = 7;` |

**说明:**

> 执行 Player Realm Threshold 操作。

---

### 属性 `PlayerReputationThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") float PlayerReputationThreshold = 1500.f;` |

**说明:**

> 执行 Player Reputation Threshold 操作。

---

### 属性 `JoinRejectText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FText JoinRejectText;` |

**说明:**

> 参赛门槛不满足时的错误文案(占位 {Realm}{Reputation})

---

### 属性 `JoinSuccessText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FEmergenceLogText JoinSuccessText;` |

**说明:**

> 报名成功提示文案(占位 {Names}{Count})

---

### 属性 `EndText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FEmergenceLogText EndText;` |

**说明:**

> End Text 字段。

---

### 属性 `bResolved`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") bool bResolved = false;` |

**说明:**

> 是否已结算/关闭

---
