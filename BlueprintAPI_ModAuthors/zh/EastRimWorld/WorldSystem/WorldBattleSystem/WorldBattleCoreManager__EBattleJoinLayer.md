# `enum` `EBattleJoinLayer`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleCoreManager.h`

---

## 功能说明（来自头文件注释）

> [PR-B] 入伍分发的"目标层"——一场战斗可能同时有两层运行时，按层(而非 EBattleType)区分入伍去向。
>   单凭 EBattleType 区分不开：一场 SectBattle 同时要入【占旗层】(SectMng)和【行军层】(BattleMng)，类型都是 SectBattle。

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `SectRuntime` |  | 占旗实战运行时层：AWorldSectBattleManager::Battles，入伍用 FWorldBattleRuntimeJoinTeamInfo(TeamRole + CharacterGuids)。 |
| `Battlefield` |  | 行军/遭遇载体层：AWorldBattleManager::BattlefieldInformation，入伍用 FBattleTeamInfo。 |
