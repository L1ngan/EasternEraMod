# `enum` `ETriggerFunctionType`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 触发额外功能类型

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 未指定或无效的默认值。 |
| `Task` |  | 触发任务(NameParams填任务ID) |
| `GenerateMonsters` |  | 生成怪物(NameParams填怪物生成表ID) |
| `AddForceFavorability` |  | 增加其他势力对玩家势力的好感度(NameParams填势力ID,IntParams填好感度数值，一个NameParams对应一个IntParams) |
| `AddPlayerForceReputation` |  | 增加玩家势力声望(IntParams填声望数值) |
| `TransportToTaskPlaceUI` |  | 选择传送到任务地点的弟子UI(IntParams填人数上限,传送地点取任务配置的WorldPlaceIDs的第一个参数) |
| `ReturnToPlayerMainPlace` |  | 将当前地点玩家角色传送回玩家主城 |
| `Dialogue` |  | 触发对话(NameParams填DT_DialogueGroup ID) |
| `TriggerRequireTaskColdDown` |  | 触发玩家向其他势力请求任务冷却 |
| `TriggerRequireHelpColdDown` |  | 触发玩家向其他势力请求援助冷却 |
| `AddPublisherForceFavorability` |  | 增加发布任务的势力对玩家势力的好感度(IntParams填好感度数值) |
