# `struct` `FEmergenceLogLinkPayload`

**Source header:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## Functional description (from header comments)

> 日志超链接点击载荷 — 广播用结构体(便于扩展; wid 载荷支持多 Guid: "类型:Guid1,Guid2,...")。
> 新链接类型加字段/枚举即可, 不动委托签名。

## Blueprint-exposed variables

### Property `LinkType`

| Field | Details |
|------|------|
| C++ type | [EEmergenceLogLinkType](EmergenceLogComponent__EEmergenceLogLinkType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") EEmergenceLogLinkType LinkType = EEmergenceLogLinkType::None;` |

**Notes:**

> 动作类型(UI 按此分支)

---

### Property `TargetGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") TArray<FGuid> TargetGuids;` |

**Notes:**

> 目标对象 Guid(可多个; 单目标动作取 [0])

---

### Property `ForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FGuid ForceGuid;` |

**Notes:**

> 弟子所属势力 Guid(ShowDiscipleInfo 用: 解析时按角色 Guid 反查各势力名册填入; 查不到为无效 Guid, 如宿敌分身这类不入名册的 NPC)

---

### Property `LogGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FGuid LogGuid;` |

**Notes:**

> 所属日志条目 Guid(TriggerDialogue 用: 配合 ActionIndex 调 ExecuteLogAction 触发, 自带阶段有效性判定)

---

### Property `ActionIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") int32 ActionIndex = 0;` |

**Notes:**

> 日志动作序号(TriggerDialogue 用: Entry.Actions 的下标)

---

### Property `ItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") FName ItemID;` |

**Notes:**

> 物品配置 ID(ShowItemInfo 用)

---

### Property `ItemType`

| Field | Details |
|------|------|
| C++ type | [EGroundInventoryType](../../../Struct/CommonEnum__EGroundInventoryType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "EmergenceLog") EGroundInventoryType ItemType = EGroundInventoryType::NormalItem;` |

**Notes:**

> 物品类型(ShowItemInfo 用; 与 ItemID 一起定位物品配置)

---
