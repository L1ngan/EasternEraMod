# `enum` `EDialogueTriggerFunctionType`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> 触发额外功能类型

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 未指定或无效的默认值。 |
| `Task` |  | 触发任务(NameParams中的任务ID) |
| `AddPlayerMoney` |  | 加减玩家金钱(加减IntParams第一个参数的数值) |
| `CompleteTask` |  | 完成任务(NameParams中的任务ID) |
| `AddPlayerForceReputation` |  | 加玩家声望(IntParams填声望数值) |
| `Recruit` |  | 招募 |
| `RemoveCompletedTaskRecord` |  | 移除任务完成记录(NameParams中的任务ID) |
| `AddForceFavorability` |  | 加减当前对话势力对玩家势力好感度(IntParams填好感度数值) |
| `StartEventDuel` |  | 发起涌现事件对决(强袭宿敌应战: 按当前对话目标NPC反查事件桥调StartDuel, 无参数) |
