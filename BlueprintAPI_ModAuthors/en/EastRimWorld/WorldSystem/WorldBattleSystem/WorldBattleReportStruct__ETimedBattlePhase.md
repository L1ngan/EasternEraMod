# `enum` `ETimedBattlePhase`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## Functional description (from header comments)

> 周期化抽象战的 4 阶段（文档 §10）。按 PhaseElapsed/TotalDuration 推进。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Muster` | 集结期 | 集结期（10-15%）：双方布阵，BattleAdvantage 不变，仅播战报钩子 |
| `Engagement` | 交战期 | 交战期（50-60%）：主要交战，正常 Tick |
| `Stalemate` | 僵持期 | 僵持期（10-20%）：Gain ×0.5，关键事件几率 ×2 |
| `Decisive` | 决战期 | 决战期（BattleAdvantage 接近 ±80 时）：Gain ×1.5，加速终结 |
