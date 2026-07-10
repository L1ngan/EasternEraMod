# `struct` `FEmergenceIronVeinState`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 玄铁矿脉(IronVein) — 活跃实例状态(Director 持有, 入档)。
> 以据点产出周期为节拍: 每拍发起一次连环攻打 + 求助判定; 持续 RemainingCycles 拍后移除特产并结束。
> 只含 POD/FText/FName, Savior 嵌套序列化安全。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName EventID;` |

**Notes:**

> Event ID field.

---

### Property `PlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid PlaceGuid;` |

**Notes:**

> 矿脉所在据点

---

### Property `SpecialtyId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName SpecialtyId;` |

**Notes:**

> 注入的特产物品 ID(结束时据此移除)

---

### Property `Specialty`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](../../../Struct/CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FItemSimpleData Specialty;` |

**Notes:**

> 注入的特产完整数据(WorldPlaceInfo 非存档, 读档后据此重注入产出)

---

### Property `RemainingCycles`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 RemainingCycles = 0;` |

**Notes:**

> 剩余产出周期(拍)数; 归零即结束

---

### Property `CycleDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 CycleDays = 3;` |

**Notes:**

> 一个产出周期的游戏天数(= 据点 PlaceOutPutInterval, 落地时缓存)

---

### Property `NextTickGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 NextTickGameDay = 0;` |

**Notes:**

> 下次到拍的游戏天

---

### Property `TopNForUnowned`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 TopNForUnowned = 10;` |

**Notes:**

> 无主时攻方候选(按战力前 N, 排除玩家)

---

### Property `HelpProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") float HelpProbability = 0.3f;` |

**Notes:**

> 求助军械触发几率 [0,1]

---

### Property `HelpDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName HelpDialogueID;` |

**Notes:**

> 求助对话 ID(记事本超链接点击触发, 接/交寻物任务由对话配置承接)

---

### Property `HelpItemId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName HelpItemId;` |

**Notes:**

> 求助所需物品 ID / 数量(填进求助文案)

---

### Property `HelpItemNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") int32 HelpItemNum = 1;` |

**Notes:**

> Help Item Num field.

---

### Property `HelpItemType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") EGroundInventoryType HelpItemType = EGroundInventoryType::NormalItem;` |

**Notes:**

> 求助所需物品类型(物品超链接 ShowItemInfo 用)

---

### Property `SpecialtyName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText SpecialtyName;` |

**Notes:**

> 特产显示名(落地时取好缓存; 文案 {ItemName} 用)

---

### Property `HelpItemName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText HelpItemName;` |

**Notes:**

> 求助所需物品显示名(缓存; 文案用)

---

### Property `HelpLinkText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FText HelpLinkText;` |

**Notes:**

> 求援超链接显示文字(作求助动作的 Label, 由 AddLog 自动尾随日志末尾; 空=不生成链接)

---

### Property `HelpText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FEmergenceLogText HelpText;` |

**Notes:**

> 求助/结束文案(占位 {Place}{ItemName}{Humanname}{HelpItem}{HelpNum}; 含超链接开关)

---

### Property `EndText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FEmergenceLogText EndText;` |

**Notes:**

> End Text field.

---

### Property `AssociatedTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FName AssociatedTaskID;` |

**Notes:**

> 关联任务 ID(求助寻物任务行 ID; 矿脉城换势力时按此删任务; 监听其接取/完成推进事件阶段)

---

### Property `bHelpTaskInProgress`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") bool bHelpTaskInProgress = false;` |

**Notes:**

> 关联任务是否进行中(接取→true 暂停求援; 完成/被移除→false 重新可求援)。事件阶段由此推导

---

### Property `ActiveHelpLogGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid ActiveHelpLogGuid;` |

**Notes:**

> 当前有效的求援日志 Guid(每发一轮新求援即覆盖; 完成/移除任务时清空)。
>  与事件阶段组合判定: 只有 guid 匹配的"当前这条"求援日志能点击接取, 过时日志即使阶段相同也失效

---

### Property `PlaceForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") FGuid PlaceForceGuid;` |

**Notes:**

> 落地时缓存的矿脉城归属势力(监听 OnWorldPlaceForceChanged 后据此判定是否真的换了势力)

---

### Property `bClosed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|IronVein" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|IronVein") bool bClosed = false;` |

**Notes:**

> 是否已结束

---
