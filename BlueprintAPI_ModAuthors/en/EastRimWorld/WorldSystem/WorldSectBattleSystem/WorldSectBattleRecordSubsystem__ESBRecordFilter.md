# `enum` `ESBRecordFilter`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## Functional description (from header comments)

> GetRecordItems 的查询过滤维度。刻意与 ESBRecordType 分开：后者是「每条记录固有分类」
> （不存在 All），本枚举仅用于查询筛选，故独立定义并额外提供 All。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `All` | 全部 | All. |
| `BattleEvent` | 战场记录 | Battle Event: Battle-related data. |
| `HiddenEvent` | 隐藏事件 | Hidden Event. |
