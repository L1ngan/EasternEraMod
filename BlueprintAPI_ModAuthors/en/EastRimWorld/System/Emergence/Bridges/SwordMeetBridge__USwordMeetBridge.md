# `class` `USwordMeetBridge`

**Source header:** `EastRimWorld/System/Emergence/Bridges/SwordMeetBridge.h`

---

## Functional description (from header comments)

> Sword Meet Bridge UObject type.

## Blueprint-exposed functions

### Function `IsSwordMeetOpen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") bool IsSwordMeetOpen() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> ── UI ──

---

### Function `GetSwordMeetPickCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") int32 GetSwordMeetPickCount() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get Sword Meet Pick Count.

---

### Function `CheckPlayerCanJoinSwordMeet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutRejectReason` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") bool CheckPlayerCanJoinSwordMeet(FText& OutRejectReason) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 玩家可否参赛(弟子最高境界 + 势力声望门槛)。不满足时 OutRejectReason 返回动态组合的错误文案
>  (配置 JoinRejectText, 占位 {Realm}=门槛境界名 {Reputation}=门槛声望值)

---

### Function `PlayerJoinSwordMeet`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence|SwordMeet" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DiscipleGuids` | `const TArray<FGuid>&` |
| `OutMessage` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence|SwordMeet") bool PlayerJoinSwordMeet(const TArray<FGuid>& DiscipleGuids, FText& OutMessage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 报名参赛。成功: OutMessage=报名成功提示(JoinSuccessText, 占位 {Names}{Count});
>  失败: OutMessage=门槛错误文案(JoinRejectText)或空(已报名/已出结果/无有效弟子)。UI 直接弹 OutMessage

---
