# `enum` `EBattleType`

**源码头文件:** `EastRimWorld/Struct/CommonEnum.h`

---

## 功能说明（来自头文件注释）

> 战斗类型

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 无战斗类型 |
| `Encounter` |  | 遭遇战 |
| `SectBattle` |  | 门派战 |
| `NpcMarchBattle` |  | [NPC行军攻伐] 纯 NPC 真实行军围城战(取代周期化离屏推演): 部队真上地图行军到目标城 → 围城计时 → 到期一次性结算。
尾部追加, 不破坏既有序列/SaveGame; GetBattleRuleset 按 BattleType 字段值匹配(非枚举索引), 无对应行时返回空 ruleset, 安全。 |
