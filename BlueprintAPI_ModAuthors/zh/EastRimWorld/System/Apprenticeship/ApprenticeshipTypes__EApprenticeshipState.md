# `enum` `EApprenticeshipState`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 弟子历练状态机 — 7 个状态
> 完全来自 DiscipleApprenticeship_System.md §2

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` | 未历练 | 默认状态, 弟子在本部或被分派到 StationedCharacter |
| `Preparing` | 整装待发 | 玩家配置中 (给盘缠, 选目的地) |
| `Departing` | 启程中 | 在路上, 走向目的地 (大地图可见) |
| `Roaming` | 历练中 | 在目的城市内, 随机触发事件 |
| `Returning` | 归途中 | 回程路上 (大地图可见) |
| `Recalled` | 被召回 | 玩家中途召回, 加速返程 |
