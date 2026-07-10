# `enum` `ESBBattleEventType`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## 功能说明（来自头文件注释）

> 战场记录细分类型（仅 RecordType==BattleEvent 时有意义）。
> 文案直接挂在每个枚举值的 UMETA(Content=...) 上，占位符用有序参数 【0】/【1】（富文本标签透传给 RichTextBlock）：
> 【0】= 主体（击杀者 / 占领方 / 复活者 / 开箱者 / 我方阵营名）
> 【1】= 客体（被杀者 / 旗帜名 / 旗帜数量）

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` | 无 | 未指定或无效的默认值。 |
