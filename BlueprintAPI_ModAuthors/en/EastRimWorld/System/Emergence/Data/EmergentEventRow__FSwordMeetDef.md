# `struct` `FSwordMeetDef`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## Functional description (from header comments)

> 论剑大会配置 — 势力前N各出1人(掌门外最强), 玩家可参赛(选n名); 持续后按战力加权出三甲+声望奖励。
> 不观赛只数据结算。(SpecialHandling=SwordMeet 时生效)

## Blueprint-exposed variables

### Property `TriggerCooldownSeconds`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "0")) int32 TriggerCooldownSeconds = 38400;` |

**Notes:**

> 距上次办会的最小间隔(秒)

---

### Property `PlayerRealmThreshold`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "0", ClampMax = "16")) int32 PlayerRealmThreshold = 7;` |

**Notes:**

> 玩家参赛门槛: 弟子最高境界(0-16)

---

### Property `PlayerReputationThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") float PlayerReputationThreshold = 1500.f;` |

**Notes:**

> 玩家参赛门槛: 势力声望

---

### Property `PlayerPickCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 PlayerPickCount = 3;` |

**Notes:**

> 玩家参赛弟子数

---

### Property `DurationSeconds`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 DurationSeconds = 9600;` |

**Notes:**

> 持续(秒)后出结果

---

### Property `TopForceCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet", meta = (ClampMin = "1")) int32 TopForceCount = 15;` |

**Notes:**

> 取势力战力前 N(各出掌门外最强1人; 排除玩家, 玩家仅参赛时入池)

---

### Property `RankRewards`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") TMap<int32, int32> RankRewards;` |

**Notes:**

> 名次 → 势力声望奖励(key: 1=第一名 2=第二名 3=第三名; 未配的名次无奖励)

---

### Property `EnrollLinkText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FText EnrollLinkText;` |

**Notes:**

> 报名超链接显示文字(如: 【选派弟子参赛】)。自动尾随在英雄帖日志末尾, 点击→UI 打开选择参赛弟子界面(带阶段有效性判定, 出结果后失效); 空=不生成链接

---

### Property `JoinRejectText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FText JoinRejectText;` |

**Notes:**

> 参赛门槛不满足时的错误文案(动态填值: {Realm}=境界名 {Reputation}=声望值)。
>  例: 弟子境界需达{Realm}/势力声望需达{Reputation}，才可参赛

---

### Property `JoinSuccessText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText JoinSuccessText;` |

**Notes:**

> 报名成功提示文案(动态填值: {Names}=参赛弟子名单(顿号相连) {Count}=人数)。
>  例: {Names}已启程赴会，共{Count}人

---

### Property `StartText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText StartText;` |

**Notes:**

> 英雄帖

---

### Property `EndText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwordMeet") FEmergenceLogText EndText;` |

**Notes:**

> 占位 {Force1}{Name1}{Force2}{Name2}{Force3}{Name3}

---
