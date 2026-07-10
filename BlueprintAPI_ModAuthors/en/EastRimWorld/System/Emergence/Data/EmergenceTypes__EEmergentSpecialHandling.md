# `enum` `EEmergentSpecialHandling`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 事件特殊落地处理 — 某些事件冒出后需 SpawnRow 做额外硬逻辑(非通用通道分发/PlaceQuest)。
> 用枚举区分, 避免按 EventID 硬编码。可扩展: 只在 MAX 前追加。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` | 无 | Unspecified or invalid default value. |
| `IronVein` |  | Iron Vein. |
| `RivalRaid` |  | Rival Raid. |
| `SwordMeet` |  | Sword Meet. |
| `PlaceQuest` |  | Place Quest: World-place-related data. |
| `MAX` |  | Sentinel value for enum bounds; intended for internal range checks. |
