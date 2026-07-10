# `enum` `EApprenticeshipState`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 弟子历练状态机 — 7 个状态
> 完全来自 DiscipleApprenticeship_System.md §2

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` | 未历练 | 默认状态, 弟子在本部或被分派到 StationedCharacter |
| `Preparing` | 整装待发 | 玩家配置中 (给盘缠, 选目的地) |
| `Departing` | 启程中 | 在路上, 走向目的地 (大地图可见) |
| `Roaming` | 历练中 | 在目的城市内, 随机触发事件 |
| `Returning` | 归途中 | 回程路上 (大地图可见) |
| `Recalled` | 被召回 | 玩家中途召回, 加速返程 |
