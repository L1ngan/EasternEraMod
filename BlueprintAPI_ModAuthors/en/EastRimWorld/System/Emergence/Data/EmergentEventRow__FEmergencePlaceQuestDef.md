# `struct` `FEmergencePlaceQuestDef`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## Functional description (from header comments)

> 限时地点事件配置 — 本事件落地时向"从快照选出的 Place"注入一条限时/限次的历练事件。
> 奖励不在此配 —— 由被注入的历练事件行(ApprenticeshipEventIDs)的 RewardPoolID(掉落集)负责。

## Blueprint-exposed variables

### Property `ApprenticeshipEventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") TArray<FName> ApprenticeshipEventIDs;` |

**Notes:**

> 注入到该 Place 的历练事件 ID(DT_ApprenticeshipEvents 行; 其 RewardPoolID=掉落集给秘籍/配方)

---

### Property `DurationSeconds`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest", meta = (ClampMin = "1")) int32 DurationSeconds = 6720;` |

**Notes:**

> 限时(秒)。换算游戏天 = round(秒 / AWorldDirector::GameDaySeconds(默认960=24h*40s))

---

### Property `MaxTriggerCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest", meta = (ClampMin = "1")) int32 MaxTriggerCount = 1;` |

**Notes:**

> 限次: 被注入事件累计触发 n 次后立即撤销(最小1)

---

### Property `StartText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText StartText;` |

**Notes:**

> 开始播报文案(占位 {Place}; 可按条配置哪些类型渲染为超链接)

---

### Property `EndTextTriggered`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText EndTextTriggered;` |

**Notes:**

> 结束·已触发文案(占位 {Force}{Name}{Place})

---

### Property `EndTextTimeout`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlaceQuest") FEmergenceLogText EndTextTimeout;` |

**Notes:**

> 结束·限时结束文案(占位 {Place})

---
