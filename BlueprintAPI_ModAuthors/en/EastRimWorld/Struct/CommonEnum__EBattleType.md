# `enum` `EBattleType`

**Source header:** `EastRimWorld/Struct/CommonEnum.h`

---

## Functional description (from header comments)

> 战斗类型

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | No battle type |
| `Encounter` |  | 遭遇战 |
| `SectBattle` |  | 门派战 |
| `NpcMarchBattle` |  | [NPC行军攻伐] 纯 NPC 真实行军围城战(取代周期化离屏推演): 部队真上地图行军到目标城 → 围城计时 → 到期一次性结算。
尾部追加, 不破坏既有序列/SaveGame; GetBattleRuleset 按 BattleType 字段值匹配(非枚举索引), 无对应行时返回空 ruleset, 安全。 |
