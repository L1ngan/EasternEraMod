# `enum` `EBattleCriticalEffectType`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## Functional description (from header comments)

> 关键事件对 BattleAdvantage 的效果类型。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `FixedDelta` | 固定增量 | 对 Advantage 施加固定增量（正数利攻方，负数利守方）。KM_LeaderDuel / KM_TraitorReveal / KM_Ambush 用。 |
| `InvertRatio` | 翻转比例 | 翻转 CurrentAdvantage × -InvertRatio，弱势方触发后向强势方方向反推。KM_HeritageScroll 用。 |
| `GainMultiplier` |  | 将双方 Gain 系数乘以 GainMultiplierOverride，持续时间由上层 Tick 次数控制（本 PR 忽略，返回 0）。KM_HeavyRain 用。 |
