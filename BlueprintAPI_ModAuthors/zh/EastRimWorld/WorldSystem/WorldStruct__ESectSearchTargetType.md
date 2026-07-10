# `enum` `ESectSearchTargetType`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 搜索攻击目标（优先级 12+1 级，PR-4）

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 未指定或无效的默认值。 |
| `NoOccupied` |  | 无主 |
| `Hateful` |  | 仇恨（死敌） |
| `Dissatisfaction` |  | 不满（仇视） |
| `Bland` |  | 漠视（冷淡） |
| `Neutrality` |  | 中立 |
| `JusticeEvil` |  | 正邪对立 |
| `HatefulAnyDistance` |  | ---- 以下为 PR-4 新增值（存档兼容：不改名/不插序）----
死敌宗门据点（无视距离） |
| `DissatisfactionAnyDistance` |  | 仇视宗门据点（无视距离） |
| `NoOccupiedAnyDistance` |  | 无主据点（无视距离） |
| `Friendly` |  | 友善宗门据点（SearchDistance内） |
| `Trusted` |  | 信赖宗门据点（SearchDistance内） |
| `Confidant` |  | 至交宗门据点（SearchDistance内） |
| `Abandon` |  | 放弃进攻（进入休战） |
