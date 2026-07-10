# `enum` `EDialogueTriggerFunctionType`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> 触发额外功能类型

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | Unspecified or invalid default value. |
| `Task` |  | 触发任务(NameParams中的任务ID) |
| `AddPlayerMoney` |  | 加减玩家金钱(加减IntParams第一个参数的数值) |
| `CompleteTask` |  | 完成任务(NameParams中的任务ID) |
| `AddPlayerForceReputation` |  | 加玩家声望(IntParams填声望数值) |
| `Recruit` |  | 招募 |
| `RemoveCompletedTaskRecord` |  | 移除任务完成记录(NameParams中的任务ID) |
| `AddForceFavorability` |  | 加减当前对话势力对玩家势力好感度(IntParams填好感度数值) |
| `StartEventDuel` |  | 发起涌现事件对决(强袭宿敌应战: 按当前对话目标NPC反查事件桥调StartDuel, 无参数) |
