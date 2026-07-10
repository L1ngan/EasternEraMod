# `struct` `FIronVeinDef`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## Functional description (from header comments)

> 玄铁矿脉配置 — 事件落地时向地点注入特产, 以产出周期为节拍连环攻打 + 求助军械,
> 持续 DurationCycles 个周期后移除特产并结束。(SpecialHandling=IronVein 时生效)

## Blueprint-exposed variables

### Property `SpecialtyId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName SpecialtyId = NAME_None;` |

**Notes:**

> 特产物品 ID(每周期产出, 注入 PlaceLevelDistinguishInfo[1])

---

### Property `SpecialtyType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") EGroundInventoryType SpecialtyType = EGroundInventoryType::NormalItem;` |

**Notes:**

> 特产物品类型(物品/装备/材料等)

---

### Property `SpecialtyNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 SpecialtyNum = 1;` |

**Notes:**

> 特产每周期产出数量

---

### Property `DurationCycles`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 DurationCycles = 4;` |

**Notes:**

> 限次: 持续 n 个产出周期后移除特产并结束

---

### Property `TopNForUnowned`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 TopNForUnowned = 10;` |

**Notes:**

> 无主时攻方候选: 按势力战力前 N 随机取(排除玩家/灭绝)

---

### Property `HelpProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "0.0", ClampMax = "1.0")) float HelpProbability = 0.3f;` |

**Notes:**

> 求助军械触发几率 [0,1](1=必触发)

---

### Property `HelpDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName HelpDialogueID = NAME_None;` |

**Notes:**

> 求助对话 ID(记事本超链接点击触发, 接/交寻物任务由对话配置承接; 立绘动态取镇守)

---

### Property `AssociatedTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName AssociatedTaskID = NAME_None;` |

**Notes:**

> 关联任务 ID(求助接下的寻物任务行 ID)。矿脉城更换势力时移除该任务(经 AWorldDirector::CommonTaskComponent 按 TaskID 匹配删除)

---

### Property `HelpItemId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FName HelpItemId = NAME_None;` |

**Notes:**

> 求助所需物品 ID / 数量(填进求助文案)

---

### Property `HelpItemNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein", meta = (ClampMin = "1")) int32 HelpItemNum = 1;` |

**Notes:**

> Help Item Num field.

---

### Property `HelpItemType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") EGroundInventoryType HelpItemType = EGroundInventoryType::NormalItem;` |

**Notes:**

> 求助所需物品类型(取显示名用)

---

### Property `HelpLinkText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FText HelpLinkText;` |

**Notes:**

> 求援超链接显示文字(如: 【前往支援】)。自动尾随在求助日志末尾, 点击触发 HelpDialogueID 对话(带阶段有效性判定); 空=不生成链接

---

### Property `StartText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText StartText;` |

**Notes:**

> 文案(占位地点:{Place} 物品：{ItemName} 角色名称：{Humanname} 请求的物品名称：{HelpItem} 物品数量：{HelpNum}; 可按条配置哪些类型渲染为超链接)

---

### Property `HelpText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText HelpText;` |

**Notes:**

> Help Text field.

---

### Property `EndText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IronVein") FEmergenceLogText EndText;` |

**Notes:**

> End Text field.

---
