# `enum` `EGenerationActorType`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 生成的类型

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | Unspecified or invalid default value. |
| `Recruit` |  | 招募 招募模式固定在招募后会去重 |
| `SpawnMonster` |  | 刷新怪物 |
| `SpawnMonsterNest` |  | 刷新营地怪物 |
| `SpawnPostStationChivalrous` |  | 刷新驿站江湖人士 |
| `SpawnPostStationPeddler` |  | 刷新驿站商人 |
| `SpawnPostStationChivalrousByPresetID` |  | 通过DT_CharacterPresetConfig表ID刷新驿站江湖人士 |
| `SpawnRandomDisciple` |  | 通过 FRandomDiscipleConfig 随机组装一个全新弟子（不依赖预设表行） |
