# `enum` `EAreaHungerState`

**Source header:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## Functional description (from header comments)

> 饥饿越区状态机当前态（挂 UERW_AreaAssignmentComponent）。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Normal` | 正常 | 正常 |
| `Starving` | 饥饿中 | 饥饿=0，累计<160s，区内继续干活 |
| `CrossingForFood` | 越区取食 | 累计≥160s，越区取最近食物 |
| `GlobalFallback` | 全图找食 | 取食失败，全图兜底找食 |
