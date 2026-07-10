# `enum` `EGenerationActorType`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 生成的类型

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 未指定或无效的默认值。 |
| `Recruit` |  | 招募 招募模式固定在招募后会去重 |
| `SpawnMonster` |  | 刷新怪物 |
| `SpawnMonsterNest` |  | 刷新营地怪物 |
| `SpawnPostStationChivalrous` |  | 刷新驿站江湖人士 |
| `SpawnPostStationPeddler` |  | 刷新驿站商人 |
| `SpawnPostStationChivalrousByPresetID` |  | 通过DT_CharacterPresetConfig表ID刷新驿站江湖人士 |
| `SpawnRandomDisciple` |  | 通过 FRandomDiscipleConfig 随机组装一个全新弟子（不依赖预设表行） |
