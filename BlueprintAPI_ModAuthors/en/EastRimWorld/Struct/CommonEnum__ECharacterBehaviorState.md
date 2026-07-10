# `enum` `ECharacterBehaviorState`

**Source header:** `EastRimWorld/Struct/CommonEnum.h`

---

## Functional description (from header comments)

> Character behavior state: covers combat, sleeping, eating, various work jobs, medical care, taming, prisoner handling and more

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `None` |  | 普通状态 |
| `InBattle` |  | 战斗中 |
| `InAction` |  | 执行动作中 |
| `InStroll` |  | 闲逛状态 |
| `InRide` |  | 骑乘状态 |
| `Death` |  | 死亡状态 |
| `Assault` |  | 进攻 |
| `InControlled` |  | 被控制状态 |
| `Construct` |  | 搬运资源建造 |
| `Sleep_Ground` |  | 在地上睡觉 |
| `Sleep_Bed` |  | 在床上睡 |
| `Sleep_Mat` |  | 在地铺睡 |
| `Eat_Sit` |  | 坐着进食 |
| `Eat_Stand` |  | 站着进食 |
| `GetItem` |  | 获取物品 |
| `TransItem` |  | 搬运物品 |
| `Logging` |  | 砍伐 |
| `CutOff` |  | 割除 |
| `Quarrying` |  | 采石 |
| `Excavate` |  | 采矿 |
| `SearchBox` |  | 搜刮 |
| `Transport` |  | 存储物资 |
| `Happy_MasterChair` |  | 放松坐 |
| `CollectPlant` |  | 采集 |
| `Havest_Wheat` |  | 收割 |
| `PlantCrops` |  | 种植作物 |
| `Work_Weaving` |  | 织布 |
| `Work_Forge` |  | 打铁 |
| `Work_SewingTable` |  | 缝纫 |
| `Work_CookSimple` |  | 制作简餐 |
| `Work_Cook` |  | 下厨 |
| `Research` |  | 研究 |
| `Work_Make` |  | 手工 |
| `ChopFirewood` |  | 劈柴 |
| `MakeWine` |  | 酿酒 |
| `GrindTheMill` |  | 推磨 |
| `MakeMedicine` |  | 制药 |
| `Animal_Sleep` |  | 动物睡觉 |
| `AnimalEat_Vege` |  | 动物吃素食 |
| `AnimalCultivation` |  | 动物修炼 |
| `SimpleMelting` |  | 初级熔炼 |
| `DelicateMelting` |  | 高级熔炼 |
| `Practice_WoodenDummy` |  | 练功 |
| `Meditation` |  | 沐冰 |
| `MedicatedBath` |  | 药浴 |
| `DepressionIdle` |  | 抑郁闲逛（崩溃） |
| `EquipEquipment` |  | 穿装备 |
| `Reading` |  | 读书 |
| `Read_Sit` |  | 坐着读书 |
| `Write_Copy` |  | 抄录 |
| `BuildStruct` |  | 正在建造 |
| `Observe` |  | 观察 |
| `Explore` |  | 探索 |
| `Work_Doctor` |  | 治疗 |
| `WaitBeTreat` |  | 等待治疗 |
| `SearchBody` |  | 搜刮尸体 |
| `ButcherBody` |  | 屠宰 |
| `Recuperate_Ground` |  | 在地上疗养 |
| `Recuperate_Bed` |  | 在床上疗养 |
| `Recuperate_Mat` |  | 在地铺疗养 |
| `Hunting` |  | 狩猎 |
| `DestoryBuilding` |  | 拆除建筑 |
| `ManageBuildings` |  | 管理xx建筑 |
| `SocializeChat` |  | 社交聊天 |
| `JoinCeremony` |  | 参加仪式 |
| `Write_Self` |  | 写作 |
| `Standby` |  | 待机恢复状态 |
| `InBuildingRecovery` |  | 在维修建筑恢复状态 |
| `Stop` |  | 停止状态 |
| `RepaiRobot` |  | 维修机器人 |
| `ActiveRobot` |  | 激活机关人 |
| `RefitPuppet` |  | 改装傀儡 |
| `PhysicianCarry` |  | 医疗搬运 |
| `ReturnMedicalPoint` |  | 返回医疗点 |
| `SeriousInjury` |  | 重伤 |
| `RecoverInspiration` |  | 感悟 |
| `OpenFabricateWork` |  | 启动设备工作 |
| `CollectTheProducts` |  | 获取产物 |
| `Taming` |  | 驯服中 |
| `BeTamed` |  | 被驯服中 |
| `PreBattleDisplay` |  | 战斗前展示 |
| `OnPatrol` |  | 巡逻中 |
| `Following` |  | 跟随中 |
| `VictoryDisplay` |  | 战斗胜利展示 |
| `DefeatedDisplay` |  | 战斗失败展示 |
| `WaitingButcher` |  | 等待被屠宰 |
| `Breakthrough` |  | 突破 |
| `Breeding` |  | 繁育 |
| `WaitingBreeding` |  | 等待繁育 |
| `SpawnBaby` |  | 动物生产中 |
| `ExchangeMartialArts` |  | 驿站切磋 |
| `KnockDown` |  | 被击倒 |
| `ForceRetreat` |  | 强制撤退到目标点 |
| `ArrestPrisoner` |  | 逮捕囚犯 |
| `ArrestKnockDownPrisoner` |  | Arresting a knocked-down prisoner |
| `ReleasePrisoner` |  | 释放囚犯 |
| `ImprisonPrisoner` |  | 关押囚犯 |
| `Arrested` |  | 被逮捕 |
| `PrisonerFree` |  | 囚犯被释放 |
| `ExecutePrisoner` |  | 处决囚犯 |
| `PrisonerExecuted` |  | 囚犯被处决 |
| `TorturePrisoner` |  | 拷打囚犯 |
| `PrisonerTortured` |  | 囚犯被拷打 |
| `RecruitPrisoner` |  | 招募囚犯 |
| `PrisonerRecruited` |  | 囚犯被招募 |
| `SendPrisonerFood` |  | 给囚犯送饭 |
| `PrisonerEscape` |  | 囚犯逃跑 |
| `Shopping` |  | 购物 |
| `ToPuppetPlatform` |  | 去傀儡台 |
| `PuppetPlatformIdle` |  | 傀儡台站岗 |
| `RescueHuman` |  | 援救 |
| `ResettleHuman` |  | 安置 |
| `TransBuilding` |  | 移动建筑 |
