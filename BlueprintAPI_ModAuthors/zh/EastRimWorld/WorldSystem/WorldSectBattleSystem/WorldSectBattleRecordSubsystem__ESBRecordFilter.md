# `enum` `ESBRecordFilter`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## 功能说明（来自头文件注释）

> GetRecordItems 的查询过滤维度。刻意与 ESBRecordType 分开：后者是「每条记录固有分类」
> （不存在 All），本枚举仅用于查询筛选，故独立定义并额外提供 All。

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `All` | 全部 | All。 |
| `BattleEvent` | 战场记录 | Battle Event：战斗相关数据。 |
| `HiddenEvent` | 隐藏事件 | Hidden Event。 |
