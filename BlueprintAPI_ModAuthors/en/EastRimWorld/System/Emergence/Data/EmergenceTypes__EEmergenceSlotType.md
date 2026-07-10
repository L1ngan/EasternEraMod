# `enum` `EEmergenceSlotType`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 压力对象类型 — 该维压力指向的世界对象是什么(事件从快照取对象时判断进哪个候选池语义)。

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` | 无 | Unspecified or invalid default value. |
| `Force` | 势力/门派 | AWorldForce |
| `Place` | 地点/据点 | AWorldPlace |
| `Character` | 角色/弟子 | FCharacterSaveData |
| `Item` | 物品/战利品 | 具名合成产物 |
| `Disaster` | 灾种 | 瘟疫/冻灾/旱涝... |
| `Region` | 区域 | AWorldArea |
