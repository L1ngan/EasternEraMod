# `enum` `EWorldMapMoveType`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 世界地图移动类型

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | Unspecified or invalid default value. |
| `Move` |  | 移动 |
| `Explore` |  | 探索 |
| `DeliveryWagon` |  | 送货马车 |
| `TeamReturnToBase` |  | 战斗结束或取消返回基地 |
| `SingleReturnToBase` |  | 探索取消返回基地 |
| `DeliveryWagonReturnToBase` |  | 送货取消返回基地 |
| `Wander` |  | 游荡 |
| `GoOutToBattle` |  | 出战 |
| `Travel` |  | 游历 |
| `SettleIn` |  | 入驻 |
| `Apprenticeship` |  | 弟子历练 (2D 出行循环, 详见 Apprenticeship 模块) |
| `Besieging` |  | 围城 (NPC行军攻伐: 行军抵达目标城后进入围城等待, 倒计时结束结算) |
| `ToSwordMeet` |  | 前往比武大会 (涌现论剑大会: 玩家参赛弟子移出场景, 位置暂不处理, 不在大地图显示) |
| `ForceWander` |  | 势力流浪 (势力失去所有据点进入流窜时上图的流浪势力队伍条目, ParameterGuid=势力SGUID, 散兵经会合机制并入) |
