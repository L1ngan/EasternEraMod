# `struct` `FIronVeinDef`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## 功能说明（来自头文件注释）

> 玄铁矿脉配置 — 事件落地时向地点注入特产, 以产出周期为节拍连环攻打 + 求助军械,
> 持续 DurationCycles 个周期后移除特产并结束。(SpecialHandling=IronVein 时生效)

## 蓝图暴露变量

### 属性 `SpecialtyId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName SpecialtyId = NAME_None;` |

**说明:**

> 特产物品 ID(每周期产出, 注入 PlaceLevelDistinguishInfo[1])

---

### 属性 `SpecialtyType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") EGroundInventoryType SpecialtyType = EGroundInventoryType::NormalItem;` |

**说明:**

> 特产物品类型(物品/装备/材料等)

---

### 属性 `SpecialtyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 SpecialtyNum = 1;` |

**说明:**

> 特产每周期产出数量

---

### 属性 `DurationCycles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 DurationCycles = 4;` |

**说明:**

> 限次: 持续 n 个产出周期后移除特产并结束

---

### 属性 `TopNForUnowned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 TopNForUnowned = 10;` |

**说明:**

> 无主时攻方候选: 按势力战力前 N 随机取(排除玩家/灭绝)

---

### 属性 `HelpProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "0.0", ClampMax = "1.0")) float HelpProbability = 0.3f;` |

**说明:**

> 求助军械触发几率 [0,1](1=必触发)

---

### 属性 `HelpDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName HelpDialogueID = NAME_None;` |

**说明:**

> 求助对话 ID(记事本超链接点击触发, 接/交寻物任务由对话配置承接; 立绘动态取镇守)

---

### 属性 `AssociatedTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName AssociatedTaskID = NAME_None;` |

**说明:**

> 关联任务 ID(求助接下的寻物任务行 ID)。矿脉城更换势力时移除该任务(经 AWorldDirector::CommonTaskComponent 按 TaskID 匹配删除)

---

### 属性 `HelpItemId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName HelpItemId = NAME_None;` |

**说明:**

> 求助所需物品 ID / 数量(填进求助文案)

---

### 属性 `HelpItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 HelpItemNum = 1;` |

**说明:**

> Help Item Num 字段。

---

### 属性 `HelpItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") EGroundInventoryType HelpItemType = EGroundInventoryType::NormalItem;` |

**说明:**

> 求助所需物品类型(取显示名用)

---

### 属性 `HelpLinkText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FText HelpLinkText;` |

**说明:**

> 求援超链接显示文字(如: 【前往支援】)。自动尾随在求助日志末尾, 点击触发 HelpDialogueID 对话(带阶段有效性判定); 空=不生成链接

---

### 属性 `StartText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText StartText;` |

**说明:**

> 文案(占位地点:{Place} 物品：{ItemName} 角色名称：{Humanname} 请求的物品名称：{HelpItem} 物品数量：{HelpNum}; 可按条配置哪些类型渲染为超链接)

---

### 属性 `HelpText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText HelpText;` |

**说明:**

> Help Text 字段。

---

### 属性 `EndText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadWrite, Category="IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText EndText;` |

**说明:**

> End Text 字段。

---
