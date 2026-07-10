# `struct` `FRivalRaidDef`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## Functional description (from header comments)

> 强袭宿敌配置 — 最仇对各出最强弟子决斗。不含玩家=即时数据定胜负; 含玩家=驻地致命对决。
> (SpecialHandling=RivalRaid 时生效)

## Blueprint-exposed variables

### Property `FavorLossOnDefeat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") float FavorLossOnDefeat = -100.f;` |

**Notes:**

> 败方对胜方好感变更

---

### Property `bCombatWeightedWinner`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") bool bCombatWeightedWinner = true;` |

**Notes:**

> true=按战力权重 P=CA/(CA+CB) 定胜负; false=纯随机

---

### Property `SpawnSocketName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName SpawnSocketName = NAME_None;` |

**Notes:**

> 生成插槽名(PostStation GetSocketTransform)

---

### Property `NPCLifetimeSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid", meta = (ClampMin = "1")) float NPCLifetimeSeconds = 9600.f;` |

**Notes:**

> 访客存活上限(秒; 未应战则超时撤离销毁)

---

### Property `SparDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName SparDialogueID = NAME_None;` |

**Notes:**

> 上门挑战对话组ID(对话组表行ID)。落地时动态挂到宿敌 NPC 的 DialogueGroupID, 玩家点击 NPC 对话触发; 应战选项配 TriggerFunctions=StartEventDuel

---

### Property `ExchangeMartialArtsID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName ExchangeMartialArtsID = NAME_None;` |

**Notes:**

> 切磋配置ID(FExchangeMartialArtsConfig 表行, 定替身队伍/奖励/胜负对话)。落地时动态挂到宿敌 NPC 的 ExchangeMartialArtsID, 应战即以此发起驿站切磋

---

### Property `NPCInformationWidgetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName NPCInformationWidgetID = NAME_None;` |

**Notes:**

> 角色信息界面ID(替换 NPC 运行期数据的 NPCInformationWidget): 点击宿敌 NPC 时显示的 UI 界面。空=保留弟子模板默认界面

---

### Property `AssociatedTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FName AssociatedTaskID = NAME_None;` |

**Notes:**

> Associated task row ID. Auto accepted when rival NPC arrives, removed on player defeat or NPC timeout.

---

### Property `StartText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText StartText;` |

**Notes:**

> 开场(不含玩家的即时结算分支; 紧跟胜负结果, 措辞按"双方决斗"写)

---

### Property `StartTextPlayer`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText StartTextPlayer;` |

**Notes:**

> 开场(含玩家分支; 宿敌上门站立等应战, 胜负未定, 措辞按"寻仇叫阵"写)。空=回退 StartText

---

### Property `EndTextAWin`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText EndTextAWin;` |

**Notes:**

> End Text A Win field.

---

### Property `EndTextBWin`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RivalRaid") FEmergenceLogText EndTextBWin;` |

**Notes:**

> End Text B Win field.

---
