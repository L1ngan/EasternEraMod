# `enum` `EModContainerChangeReason`

**源码头文件:** `EastRimWorld/Mod/ModStorageEventSubsystem.h`

---

## 功能说明（来自头文件注释）

> 容器物品增减的原因（Mod 事件 OnContainerItemAdded/Removed 的 Reason 参数）

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `Other` |  | 没有入口标记的其他路径（玩家界面挪动、蓝图里的增减等） |
| `Haul` |  | 搬运入库 |
| `Pickup` |  | 取货出库（制造、施工、吃饭、装备、读书等） |
| `Consume` |  | 经玩家总表直接消耗 |
| `Spoil` |  | 腐烂变质 |
| `Demolish` |  | 拆除时倒出 |
| `Mod` |  | Mod 接口（UModStorageLibrary）转移 |
| `Mixed` |  | 同一帧同一容器同一物品有多种原因 |
