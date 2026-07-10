# `struct` `FSwordMeetDef`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## 功能说明（来自头文件注释）

> 论剑大会配置 — 势力前N各出1人(掌门外最强), 玩家可参赛(选n名); 持续后按战力加权出三甲+声望奖励。
> 不观赛只数据结算。(SpecialHandling=SwordMeet 时生效)

## 蓝图暴露变量

### 属性 `TriggerCooldownSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "0")) int32 TriggerCooldownSeconds = 38400;` |

**说明:**

> 距上次办会的最小间隔(秒)

---

### 属性 `PlayerRealmThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "0", ClampMax = "16")) int32 PlayerRealmThreshold = 7;` |

**说明:**

> 玩家参赛门槛: 弟子最高境界(0-16)

---

### 属性 `PlayerReputationThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") float PlayerReputationThreshold = 1500.f;` |

**说明:**

> 玩家参赛门槛: 势力声望

---

### 属性 `PlayerPickCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 PlayerPickCount = 3;` |

**说明:**

> 玩家参赛弟子数

---

### 属性 `DurationSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 DurationSeconds = 9600;` |

**说明:**

> 持续(秒)后出结果

---

### 属性 `TopForceCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 TopForceCount = 15;` |

**说明:**

> 取势力战力前 N(各出掌门外最强1人; 排除玩家, 玩家仅参赛时入池)

---

### 属性 `RankRewards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, int32>` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") TMap<int32, int32> RankRewards;` |

**说明:**

> 名次 → 势力声望奖励(key: 1=第一名 2=第二名 3=第三名; 未配的名次无奖励)

---

### 属性 `EnrollLinkText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FText EnrollLinkText;` |

**说明:**

> 报名超链接显示文字(如: 【选派弟子参赛】)。自动尾随在英雄帖日志末尾, 点击→UI 打开选择参赛弟子界面(带阶段有效性判定, 出结果后失效); 空=不生成链接

---

### 属性 `JoinRejectText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FText JoinRejectText;` |

**说明:**

> 参赛门槛不满足时的错误文案(动态填值: {Realm}=境界名 {Reputation}=声望值)。
>  例: 弟子境界需达{Realm}/势力声望需达{Reputation}，才可参赛

---

### 属性 `JoinSuccessText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText JoinSuccessText;` |

**说明:**

> 报名成功提示文案(动态填值: {Names}=参赛弟子名单(顿号相连) {Count}=人数)。
>  例: {Names}已启程赴会，共{Count}人

---

### 属性 `StartText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText StartText;` |

**说明:**

> 英雄帖

---

### 属性 `EndText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText EndText;` |

**说明:**

> 占位 {Force1}{Name1}{Force2}{Name2}{Force3}{Name3}

---
