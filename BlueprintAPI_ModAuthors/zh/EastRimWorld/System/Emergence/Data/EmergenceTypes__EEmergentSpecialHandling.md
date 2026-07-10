# `enum` `EEmergentSpecialHandling`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 事件特殊落地处理 — 某些事件冒出后需 SpawnRow 做额外硬逻辑(非通用通道分发/PlaceQuest)。
> 用枚举区分, 避免按 EventID 硬编码。可扩展: 只在 MAX 前追加。

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` | 无 | 未指定或无效的默认值。 |
| `IronVein` |  | Iron Vein。 |
| `RivalRaid` |  | Rival Raid。 |
| `SwordMeet` |  | Sword Meet。 |
| `PlaceQuest` |  | Place Quest：地点相关数据。 |
| `MAX` |  | 枚举上限哨兵值，仅用于内部边界判断。 |
