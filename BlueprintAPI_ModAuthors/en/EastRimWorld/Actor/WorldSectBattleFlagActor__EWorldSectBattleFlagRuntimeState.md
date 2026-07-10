# `enum` `EWorldSectBattleFlagRuntimeState`

**Source header:** `EastRimWorld/Actor/WorldSectBattleFlagActor.h`

---

## Functional description (from header comments)

> 旗子当前给 UI 显示用的运行状态，不等同于最终归属。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Idle` |  | 中立且没有占领进度，或者无人争夺且没有归属。 |
| `CapturingAttack` |  | 进攻方正在夺取旗子。 |
| `CapturingDefense` |  | 防守方正在夺取旗子。 |
| `Contested` |  | 双方正在争夺，或一方正在抢对方已经拥有的旗子。 |
| `OccupiedAttack` |  | 当前归属为进攻方。 |
| `OccupiedDefense` |  | 当前归属为防守方。 |
