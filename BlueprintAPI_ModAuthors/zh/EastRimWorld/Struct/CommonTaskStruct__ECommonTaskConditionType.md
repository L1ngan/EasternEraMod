# `enum` `ECommonTaskConditionType`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 任务类型

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 默认 |
| `CharacterNumber` |  | 人类角色数量 |
| `UnlockTechnology` |  | 解锁科技（科技ID RequiredID） |
| `CharacterPracticeLevel` |  | 角色修炼等级（要求等级 RequiredID ，要求达到的人数 RequiredValue） |
| `OpenedDantianCharactersNum` |  | 已开启丹田角色人数 |
| `HaveBuilding` |  | 拥有指定建筑（建筑ID RequiredID，要求达到的建筑数量 RequiredValue） |
| `HaveBuildingNumberToTeam` |  | 指定阵营的建筑物数量 (要求达到的建筑数量 RequiredValue ,ExtraParam1 参数为动态赋值阵营) |
| `HaveCombinationBuilding` |  | 拥有组合建筑（建筑ID RequiredID，要求达到的建筑数量 RequiredValue） |
| `ForceReputation` |  | 势力声望 |
| `ForceMasterRealmLevel` |  | 势力堂主境界等级 |
| `OwnedCenterCityNum` |  | 拥有城镇数量 |
| `OwnedStationNum` |  | 拥有驻地数量 |
| `OwnedResourcePointNum` |  | 拥有资源点数量 |
| `CameraTranslate` |  | 视角平移 |
| `CameraScroll` |  | 视角滚动 |
| `CameraRotate` |  | 视角旋转 |
| `TimePause` |  | 暂停游戏 |
| `TimePlay` |  | 继续游戏 |
| `TimeSpeed` |  | 倍速游戏 |
| `CharacterChoose` |  | 选定角色 |
| `CharacterSwitch` |  | 切换角色 |
| `CharacterSwitchTab` |  | 切换角色页签 |
| `ClickCommonButton` |  | 点击通用按钮 |
| `SelectResource` |  | 选择资源 |
| `CollectionDone` |  | 采集资源完成 |
| `OutputWorkloadDone` |  | 输出工作量完成 |
| `ConstructBuilding` |  | 建造建筑 |
| `OpenBuildMenu` |  | 打开建造菜单 |
| `OpenWorkMenu` |  | 打开工作菜单 |
| `OpenScheduleMenu` |  | 打开日程菜单 |
| `OpenTechnologyMenu` |  | 打开科技菜单 |
| `SelectBuilding` |  | 选择建筑 |
| `ClickBuilding` |  | 点击建筑 |
| `ClickBuildCommonButton` |  | 点击建筑通用按钮 |
| `CookSetting` |  | 烹饪设置 |
| `SelectFormula` |  | 选择配方 |
| `Fabricate` |  | 制造 |
| `PlantFarmland` |  | 种植农田 |
| `AdjustWorkPriority` |  | 调整工作优先级 |
| `AdjustCustomWorkPriority` |  | 调整自定义工作优先级 |
| `SwitchWorkPriorityMode` |  | 切换工作优先级模式 |
| `SelectWorkSchedule` |  | 选择工作日程 |
| `ChangeWorkSchedule` |  | 改变工作日程 |
| `AddNewWorkSchedule` |  | 添加新日程 |
| `TransferToWorkSchedule` |  | 转移角色到日程 |
| `ClickWeaponIcon` |  | 点击武器图标 |
| `EquipmentWeapon` |  | 装备武器 |
| `SelectAnimal` |  | 选择动物 |
| `ButcherFinished` |  | 屠宰完成 |
| `PlaceLordRealmLevel` |  | 城主境界等级 |
| `PlaceLordGrowUpAttribute` |  | 城主技能属性等级(属性ID对应DT_CharacterAttributeInfo表 RequiredID;检查GamePlayConfig配置里的SaveAttributes) |
| `ConstructRoom` |  | 建造房屋 |
| `CallupRightMove` |  | 征兆弟子点击右键 |
| `AddWishList` |  | 添加心愿单 |
| `RoleDeadbyId` |  | 指定id角色死亡 |
| `GiveFoodForApprentice` |  | 喂食弟子 |
| `CreatePlayerForce` |  | 创建门派 |
| `SubmitItemToTask` |  | 提交物品(在RequiredID填入任务表ID) |
| `FinishTask` |  | 已提交XX任务(在RequiredID填入任务表ID) |
| `AcceptTask` |  | 已接受XX任务(在RequiredID填入任务表ID) |
| `WealthPoints` |  | 财富点数 |
| `EnemyForceNum` |  | 敌对势力数量 |
| `SpecificForceFavorability` |  | 特定势力好感度(在RequiredID填入势力表ID) |
| `ForceMoney` |  | 势力金钱(在RequiredID填入DT_WorldForceInfoConfig表ID) |
| `ForceLevel` |  | 势力等级(在RequiredID填入DT_WorldForceInfoConfig表ID) |
| `AssignInnerHallMaster` |  | 分配内门堂主 |
| `RescuitNewDisciple` |  | 接受新的弟子加入 |
| `MartialArtsTournamentSetting` |  | 完成比武大会参赛人员设置 |
| `ParticipateMartialArtsTournament` |  | 参加完成一次比武大会 |
| `ActivateBreakthroughRoom` |  | 成功切换并激活突破房间 |
| `DiscipleBreakthroughSuccess` |  | 弟子成功完成突破 |
| `ExchangeMartialArtsWin` |  | 切磋获胜(在RequiredID填入DT_ExchangeMartialArtsConfig表ID) |
| `CompleteTaskTimes` |  | 完成任务次数(在RequiredID填入任务表ID) |
| `ConstructRoom49` |  | 建造房屋49 |
| `ConstructBuilding49` |  | 建造建筑49 |
| `CompleteOrFinishTask` |  | 已满足XX完成任务条件或已提交任务(在RequiredID填入任务表ID) |
| `InWorldPlace` |  | 在指定地点(在RequiredID填入WorldPlace的ID) |
| `FixedCurrentValueCondition` |  | 固定条件(CurrentValue始终会被置为1) |
| `WorldPlaceOccupiedByPlayerTimes` |  | 指定地点被玩家占领的次数(在RequiredID填入WorldPlace的ID) |
