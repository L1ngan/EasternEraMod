# `struct` `FEmergencePlaceQuestDef`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## 功能说明（来自头文件注释）

> 限时地点事件配置 — 本事件落地时向"从快照选出的 Place"注入一条限时/限次的历练事件。
> 奖励不在此配 —— 由被注入的历练事件行(ApprenticeshipEventIDs)的 RewardPoolID(掉落集)负责。

## 蓝图暴露变量

### 属性 `ApprenticeshipEventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") TArray<FName> ApprenticeshipEventIDs;` |

**说明:**

> 注入到该 Place 的历练事件 ID(DT_ApprenticeshipEvents 行; 其 RewardPoolID=掉落集给秘籍/配方)

---

### 属性 `DurationSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest", meta = (ClampMin = "1")) int32 DurationSeconds = 6720;` |

**说明:**

> 限时(秒)。换算游戏天 = round(秒 / AWorldDirector::GameDaySeconds(默认960=24h*40s))

---

### 属性 `MaxTriggerCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest", meta = (ClampMin = "1")) int32 MaxTriggerCount = 1;` |

**说明:**

> 限次: 被注入事件累计触发 n 次后立即撤销(最小1)

---

### 属性 `StartText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText StartText;` |

**说明:**

> 开始播报文案(占位 {Place}; 可按条配置哪些类型渲染为超链接)

---

### 属性 `EndTextTriggered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText EndTextTriggered;` |

**说明:**

> 结束·已触发文案(占位 {Force}{Name}{Place})

---

### 属性 `EndTextTimeout`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText EndTextTimeout;` |

**说明:**

> 结束·限时结束文案(占位 {Place})

---
