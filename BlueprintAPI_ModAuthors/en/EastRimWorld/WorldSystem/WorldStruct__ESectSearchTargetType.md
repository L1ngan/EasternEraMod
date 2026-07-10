# `enum` `ESectSearchTargetType`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 搜索攻击目标（优先级 12+1 级，PR-4）

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | Unspecified or invalid default value. |
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
