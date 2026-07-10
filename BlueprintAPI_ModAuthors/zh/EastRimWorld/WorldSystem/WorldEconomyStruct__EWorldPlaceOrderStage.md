# `enum` `EWorldPlaceOrderStage`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## 功能说明（来自头文件注释）

> 治安阶段(0-100 分四段:动荡 / 混乱 / 纷扰 / 安宁)
> 区间划分(与 GetOrderStage 实现一致;策划文档原文 40-49 与 50-79 段有重叠,
>           本实现以"50 为界把 50-79 归 纷扰,40-49 归 混乱"作为最终规则):
>   - Turbulence(动荡):0-19
>   - Chaos      (混乱):20-49
>   - Disturb    (纷扰):50-79
>   - Peace      (安宁):80-100

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `Turbulence` | 动荡 | 0-19 |
| `Chaos` | 混乱 | 20-49 |
| `Disturb` | 纷扰 | 50-79 |
| `Peace` | 安宁 | 80-100 |
