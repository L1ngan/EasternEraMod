# `struct` `FEmergenceIronVeinState`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 玄铁矿脉(IronVein) — 活跃实例状态(Director 持有, 入档)。
> 以据点产出周期为节拍: 每拍发起一次连环攻打 + 求助判定; 持续 RemainingCycles 拍后移除特产并结束。
> 只含 POD/FText/FName, Savior 嵌套序列化安全。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName EventID;` |

**说明:**

> Event ID 字段。

---

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid PlaceGuid;` |

**说明:**

> 矿脉所在据点

---

### 属性 `SpecialtyId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName SpecialtyId;` |

**说明:**

> 注入的特产物品 ID(结束时据此移除)

---

### 属性 `Specialty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FItemSimpleData](../../../Struct/CommonStruct__FItemSimpleData.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FItemSimpleData Specialty;` |

**说明:**

> 注入的特产完整数据(WorldPlaceInfo 非存档, 读档后据此重注入产出)

---

### 属性 `RemainingCycles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 RemainingCycles = 0;` |

**说明:**

> 剩余产出周期(拍)数; 归零即结束

---

### 属性 `CycleDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 CycleDays = 3;` |

**说明:**

> 一个产出周期的游戏天数(= 据点 PlaceOutPutInterval, 落地时缓存)

---

### 属性 `NextTickGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 NextTickGameDay = 0;` |

**说明:**

> 下次到拍的游戏天

---

### 属性 `TopNForUnowned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 TopNForUnowned = 10;` |

**说明:**

> 无主时攻方候选(按战力前 N, 排除玩家)

---

### 属性 `HelpProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") float HelpProbability = 0.3f;` |

**说明:**

> 求助军械触发几率 [0,1]

---

### 属性 `HelpDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName HelpDialogueID;` |

**说明:**

> 求助对话 ID(记事本超链接点击触发, 接/交寻物任务由对话配置承接)

---

### 属性 `HelpItemId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName HelpItemId;` |

**说明:**

> 求助所需物品 ID / 数量(填进求助文案)

---

### 属性 `HelpItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 HelpItemNum = 1;` |

**说明:**

> Help Item Num 字段。

---

### 属性 `HelpItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") EGroundInventoryType HelpItemType = EGroundInventoryType::NormalItem;` |

**说明:**

> 求助所需物品类型(物品超链接 ShowItemInfo 用)

---

### 属性 `SpecialtyName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText SpecialtyName;` |

**说明:**

> 特产显示名(落地时取好缓存; 文案 {ItemName} 用)

---

### 属性 `HelpItemName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText HelpItemName;` |

**说明:**

> 求助所需物品显示名(缓存; 文案用)

---

### 属性 `HelpLinkText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText HelpLinkText;` |

**说明:**

> 求援超链接显示文字(作求助动作的 Label, 由 AddLog 自动尾随日志末尾; 空=不生成链接)

---

### 属性 `HelpText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FEmergenceLogText HelpText;` |

**说明:**

> 求助/结束文案(占位 {Place}{ItemName}{Humanname}{HelpItem}{HelpNum}; 含超链接开关)

---

### 属性 `EndText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FEmergenceLogText EndText;` |

**说明:**

> End Text 字段。

---

### 属性 `AssociatedTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName AssociatedTaskID;` |

**说明:**

> 关联任务 ID(求助寻物任务行 ID; 矿脉城换势力时按此删任务; 监听其接取/完成推进事件阶段)

---

### 属性 `bHelpTaskInProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") bool bHelpTaskInProgress = false;` |

**说明:**

> 关联任务是否进行中(接取→true 暂停求援; 完成/被移除→false 重新可求援)。事件阶段由此推导

---

### 属性 `ActiveHelpLogGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid ActiveHelpLogGuid;` |

**说明:**

> 当前有效的求援日志 Guid(每发一轮新求援即覆盖; 完成/移除任务时清空)。
>  与事件阶段组合判定: 只有 guid 匹配的"当前这条"求援日志能点击接取, 过时日志即使阶段相同也失效

---

### 属性 `PlaceForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid PlaceForceGuid;` |

**说明:**

> 落地时缓存的矿脉城归属势力(监听 OnWorldPlaceForceChanged 后据此判定是否真的换了势力)

---

### 属性 `bClosed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|IronVein" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") bool bClosed = false;` |

**说明:**

> 是否已结束

---
