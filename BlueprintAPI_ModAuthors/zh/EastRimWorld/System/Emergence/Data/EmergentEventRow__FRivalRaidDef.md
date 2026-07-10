# `struct` `FRivalRaidDef`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## 功能说明（来自头文件注释）

> 强袭宿敌配置 — 最仇对各出最强弟子决斗。不含玩家=即时数据定胜负; 含玩家=驻地致命对决。
> (SpecialHandling=RivalRaid 时生效)

## 蓝图暴露变量

### 属性 `FavorLossOnDefeat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") float FavorLossOnDefeat = -100.f;` |

**说明:**

> 败方对胜方好感变更

---

### 属性 `bCombatWeightedWinner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") bool bCombatWeightedWinner = true;` |

**说明:**

> true=按战力权重 P=CA/(CA+CB) 定胜负; false=纯随机

---

### 属性 `SpawnSocketName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName SpawnSocketName = NAME_None;` |

**说明:**

> 生成插槽名(PostStation GetSocketTransform)

---

### 属性 `NPCLifetimeSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid", meta = (ClampMin = "1")) float NPCLifetimeSeconds = 9600.f;` |

**说明:**

> 访客存活上限(秒; 未应战则超时撤离销毁)

---

### 属性 `SparDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName SparDialogueID = NAME_None;` |

**说明:**

> 上门挑战对话组ID(对话组表行ID)。落地时动态挂到宿敌 NPC 的 DialogueGroupID, 玩家点击 NPC 对话触发; 应战选项配 TriggerFunctions=StartEventDuel

---

### 属性 `ExchangeMartialArtsID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName ExchangeMartialArtsID = NAME_None;` |

**说明:**

> 切磋配置ID(FExchangeMartialArtsConfig 表行, 定替身队伍/奖励/胜负对话)。落地时动态挂到宿敌 NPC 的 ExchangeMartialArtsID, 应战即以此发起驿站切磋

---

### 属性 `NPCInformationWidgetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName NPCInformationWidgetID = NAME_None;` |

**说明:**

> 角色信息界面ID(替换 NPC 运行期数据的 NPCInformationWidget): 点击宿敌 NPC 时显示的 UI 界面。空=保留弟子模板默认界面

---

### 属性 `AssociatedTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName AssociatedTaskID = NAME_None;` |

**说明:**

> Associated task row ID. Auto accepted when rival NPC arrives, removed on player defeat or NPC timeout.

---

### 属性 `StartText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText StartText;` |

**说明:**

> 开场(不含玩家的即时结算分支; 紧跟胜负结果, 措辞按"双方决斗"写)

---

### 属性 `StartTextPlayer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText StartTextPlayer;` |

**说明:**

> 开场(含玩家分支; 宿敌上门站立等应战, 胜负未定, 措辞按"寻仇叫阵"写)。空=回退 StartText

---

### 属性 `EndTextAWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText EndTextAWin;` |

**说明:**

> End Text A Win 字段。

---

### 属性 `EndTextBWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText EndTextBWin;` |

**说明:**

> End Text B Win 字段。

---
