# `enum` `ESBMessageType`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

---

## Functional description (from header comments)

> 门派战弹窗消息类型。UI 据此分支：Text 显示 Description；Item 显示 ItemName/ItemIcon（入队时由调用方给好，本系统不查表）。
> 后续要加新类型（如公告/成就等）直接加枚举值 + 在 MessageDisplaySecondsByType 配一条间隔即可，
> 队列/定时器/派发逻辑按类型通用，不用改代码。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Text` | 文本消息 | Text. |
| `Item` | 物品消息 | Item-related data. |
