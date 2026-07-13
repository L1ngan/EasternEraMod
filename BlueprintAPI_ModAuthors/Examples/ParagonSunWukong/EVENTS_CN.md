# Mod Lua 游戏事件全表

事件来自 `ModGameEvents` 命名空间，截至 2026-07-13 共 12 个。注册方式：

```lua
local listenerId = UE.UModEventBus.RegisterModEvent("OnDayChanged", function(EventName, Payload, Params)
    -- Params 中的值是字符串
end)
UE.UModEventBus.UnregisterModEvent(listenerId)
```

| # | 事件 | 触发时机 | Payload | Params |
|---:|---|---|---|---|
| 1 | `OnNewGameStarted` | 新游戏世界初始化完成 | `ASaveGameDataActor` | 无 |
| 2 | `OnLoadGameComplete` | 读档世界初始化完成 | `ASaveGameDataActor` | 无 |
| 3 | `OnDayChanged` | 游戏日变更 | `AWorldDirector` | `GameDay`, `GameYear` |
| 4 | `OnSeasonChanged` | 季节变更 | `AWorldDirector` | `Season`（int 的字符串）, `GameYear` |
| 5 | `OnWeatherChanged` | 天气效果实际生效 | `AWorldDirector` | `Weather`（int 的字符串） |
| 6 | `OnEnterPlace` | 进入地点且子关卡加载成功 | `AWorldPlace` | `PlaceID`, `LevelName` |
| 7 | `OnExitPlace` | 离开地点 | `AWorldPlace` | `PlaceID`, `LevelName` |
| 8 | `OnEnterPlaceComplete` | 进入地点后所有初始化完成 | `AWorldPlace` | `PlaceID` |
| 9 | `OnBuildingComplete` | 建筑建造完成 | `nil` | `ConfigId`, `BuildGuid` |
| 10 | `OnCharacterDeath` | 统一角色死亡点 | `AEastRimWorldCharacter` | `DeathOrgan` |
| 11 | `OnBreakThroughCompleted` | 角色突破境界成功 | 角色 Actor | `CharacterGuid`, `RealmLevel` |
| 12 | `OnEmergentEventSpawned` | 涌现事件生成并落地 | `UEmergenceDirectorSubsystem` | `EventID`, `InstanceGuid` |

## 行为与安全性

- `RegisterModEvent` 成功返回大于 0 的 ListenerId，失败返回 0。
- Payload 可能为 `nil`，回调不应无条件解引用。
- 回调连续失败达限制后，引擎会移除监听器并记录错误。
- Mod 卸载时引擎会清理该 ModId 所有监听器；手动反注册是可选的。
- 如需计算，先用 `tonumber` 转换 `GameDay` / `Season` / `Weather` / `RealmLevel` 等 Params。

可直接运行的 12 个处理器见 [Main.lua](Main.lua)。
