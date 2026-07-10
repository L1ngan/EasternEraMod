# `enum` `EAreaHungerState`

**源码头文件:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## 功能说明（来自头文件注释）

> 饥饿越区状态机当前态（挂 UERW_AreaAssignmentComponent）。

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `Normal` | 正常 | 正常 |
| `Starving` | 饥饿中 | 饥饿=0，累计<160s，区内继续干活 |
| `CrossingForFood` | 越区取食 | 累计≥160s，越区取最近食物 |
| `GlobalFallback` | 全图找食 | 取食失败，全图兜底找食 |
