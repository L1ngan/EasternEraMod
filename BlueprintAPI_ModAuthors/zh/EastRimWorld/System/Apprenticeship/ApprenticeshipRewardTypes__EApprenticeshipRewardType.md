# `enum` `EApprenticeshipRewardType`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 奖励类型(列举旧硬编码全部类型 + 新增装备/历练点/回溯点)
> ─────────────────────────────────────────────────────────────

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 随机集合里占"概率不给"的权重位 |
| `Experience` | 武学经验 | 用 MartialClass 指定子类; Min/Max = 经验值 |
| `Item` | 普通物品 | TargetID = 普通物品 ID(只读 DT_InventoryItem); Min/Max = 数量 |
| `Equipment` | 装备 | TargetID = 装备 ID; Min/Max = 数量; bRandomAttribute 控制随机属性 |
| `MartialBook` | 整本武学书 | TargetID = 武学书 ItemID; Min/Max = 数量; 直接发整本(入驿站 Book) |
| `MartialFragment` | 武学残卷 | 纯数值道具, ItemQuality = 残卷品质; Min/Max = 数量; TargetID 留空(归来汇入全局 ASaveGameDataActor.MartialFragments) |
| `Relationship` | 门派关系 | TargetID = 门派 ForceID(DT_WorldForceInfoConfig RowName); Min/Max = 好感增减(可负) |
| `Budget` | 盘缠 | Min/Max = 铜币(直接进剩余盘缠, 影响续航) |
| `TrainingPoints` | 历练点数 | Min/Max = 点数(归来汇入全局 ASaveGameDataActor) |
| `RetracePoints` | 回溯点数 | Min/Max = 点数(归来汇入全局 ASaveGameDataActor) |
| `Buff` | 增益Buff | TargetID = buff ID(DT_CommonBuff); 归来挂到弟子(spawn 时生效) |
| `Injury` | 伤势 | TargetID = 伤势 InjuryID; OrganType = 部位; 归来挂到弟子 |
