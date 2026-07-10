# `class` `URivalRaidBridge`

**Source header:** `EastRimWorld/System/Emergence/Bridges/RivalRaidBridge.h`

---

## Functional description (from header comments)

> Rival Raid Bridge UObject type.

## Blueprint-exposed functions

### Function `GetPendingRivalDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|RivalRaid" |
| Return type | `FGuid` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|RivalRaid") FGuid GetPendingRivalDisciple() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> UI: 当前玩家迎战弟子 Guid。预选弟子不可迎战(已离开主基地)时回退当前最强可迎战弟子; 已结束/已开打/无可迎战弟子返回无效 Guid

---

### Function `IsDiscipleAbleToFight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|RivalRaid" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|RivalRaid") bool IsDiscipleAbleToFight(FGuid DiscipleGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 弟子能否迎战: 属玩家势力 且 当前在玩家主基地场景中有 actor(外出历练/出征/攻打的弟子无场景 actor, 不能迎战)。UI 选人过滤 + StartDuel 校验共用

---

### Function `StartDuel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence|RivalRaid" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence|RivalRaid") bool StartDuel(FGuid DiscipleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 应战入口(对话/UI 玩家确认后调): 以 DiscipleGuid 弟子对宿敌发起一场驿站切磋。返回是否成功发起(已有切磋进行中会失败, 可稍后再点)

---
