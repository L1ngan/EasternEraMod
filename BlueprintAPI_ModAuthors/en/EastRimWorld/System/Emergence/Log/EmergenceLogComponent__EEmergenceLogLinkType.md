# `enum` `EEmergenceLogLinkType`

**Source header:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## Functional description (from header comments)

> 日志超链接点击动作类型(由 wid 前缀在 C++ 内转换后直接广播; 可扩展: 只可在末尾追加)

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` | 无 | Unspecified or invalid default value. |
| `JumpToCity` | 跳转到指定城市 | TargetGuids[0] = 城市 Guid |
| `OpenDiscipleSelect` | 打开选择弟子界面 | 报名/选派类尾随动作链接(如论剑参赛; LogGuid+ActionIndex 有效, UI 先 IsLogActionValid 再开界面) |
| `TriggerDialogue` | 触发对话 | LogGuid + ActionIndex → ExecuteLogAction(带阶段有效性判定) |
| `ShowItemInfo` | 显示物品信息 | ItemID + ItemType = 物品配置 |
| `ShowDiscipleInfo` | 打开弟子信息界面 | 点角色名(TargetGuids[0]=角色); 只可末尾追加 |
