# `struct` `FEmergenceLogAction`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 日志的一个可点击动作 — 随事件/阶段不同(如触发一段对话)。随日志条目入档。
> 点击执行走 UEmergenceLogComponent::ExecuteLogAction(会先做阶段有效性判定)。

## Blueprint-exposed variables

### Property `Type`

| Field | Details |
|------|------|
| C++ type | [EEmergenceLogActionType](EmergenceTypes__EEmergenceLogActionType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|LogAction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") EEmergenceLogActionType Type = EEmergenceLogActionType::None;` |

**Notes:**

> 动作类型

---

### Property `ActionId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|LogAction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FName ActionId;` |

**Notes:**

> 动作参数 ID(按 Type 解释: Dialogue=对话组 ID; 其它类型自定义)

---

### Property `Label`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|LogAction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FText Label;` |

**Notes:**

> 超链接显示文案(如【前往支援】)。非空则 AddLog 自动把本动作尾随成日志末尾超链接(可多个动作=多个链接); 空=不生成尾随链接(仅作 UI chips)

---

### Property `TargetActorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|LogAction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|LogAction") FGuid TargetActorGuid;` |

**Notes:**

> 目标演员 Guid(可空; Dialogue 用作发起方立绘来源, 其它类型自定义)

---
