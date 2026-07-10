# `struct` `FSectBattleEventEntry`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## Functional description (from header comments)

> 单条门派战记录。

## Blueprint-exposed variables

### Property `RecordType`

| Field | Details |
|------|------|
| C++ type | [ESBRecordType](WorldSectBattleRecordSubsystem__ESBRecordType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ESBRecordType RecordType = ESBRecordType::BattleEvent;` |

**Notes:**

> 顶层分类：BattleEvent（战场击杀 / 占旗等）或 HiddenEvent（隐藏事件）。

---

### Property `EventSubType`

| Field | Details |
|------|------|
| C++ type | [ESBBattleEventType](WorldSectBattleRecordSubsystem__ESBBattleEventType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ESBBattleEventType EventSubType = ESBBattleEventType::None;` |

**Notes:**

> 战场记录细分类型，仅 RecordType==BattleEvent 时有效；HiddenEvent 时为 None。

---

### Property `Content`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FText Content;` |

**Notes:**

> 已格式化好的展示文本（含富文本样式标签），UI 用 RichTextBlock 直接显示这条。

---

### Property `TimeSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float TimeSeconds = 0.f;` |

**Notes:**

> 相对本场战斗开始的秒数，供 UI 排序 / 展示时间戳。

---
