# `enum` `EModCommonButtonType`

**源码头文件:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## 功能说明（来自头文件注释）

> 通用按钮类型枚举，标识建筑/角色/世界地点等交互界面上各类操作按钮的功能

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `None` |  | 无（默认按钮类型） |
| `AddResource` |  | 添加材料按钮 |
| `CloseFacility` |  | 关闭设备按钮 |
| `OpenFacility` |  | 开启设备按钮 |
| `CopyList` |  | 复制列表 |
| `MakeMenu` |  | 制造菜单 |
| `PasteList` |  | 粘贴列表 |
| `AllotmentOwner` |  | 分配拥有者 |
| `Fell` |  | 砍伐 |
| `CutOff` |  | 割除 |
| `Harvest` |  | 收割 |
| `Pick` |  | 采摘 |
| `Explore` |  | 搜刮 |
| `MoveBuilding` |  | 移动建筑 |
| `DestoryBuilding` |  | 拆除建筑 |
| `RebuildBuilding` |  | 重建建筑 |
| `CancelBuild` |  | 取消建造 |
| `KeepClear` |  | 保持清空 |
| `AllSelect` |  | 全选 |
| `CancelAllSelect` |  | 取消全选 |
| `CopyLimit` |  | 复制限制 |
| `PasteLimit` |  | 粘贴限制 |
| `BackButton` |  | 返回按钮 |
| `CancelChoose` |  | 取消选择按钮 |
| `ConfirmButton` |  | 确定按钮 |
| `Digging` |  | 挖掘 |
| `CatchAndHunt` |  | 捕猎 |
| `HuntTogether` |  | 共同捕猎 |
| `ButcherBody` |  | 屠宰 |
| `SearchBody` |  | 搜刮（尸体） |
| `ProhibitUsage` |  | 禁止使用 |
| `Disassemble` |  | 拆解 |
| `Extinguish` |  | 熄灭 |
| `Mining` |  | 开采 |
| `CookSimpleFood` |  | 烹饪简易食物 |
| `CookHomemadeFood` |  | 烹饪家常食物 |
| `CookExquisiteFood` |  | 烹饪精致食物 |
| `ChoppingWood` |  | 劈柴 |
| `Grinding` |  | 磨面 |
| `Brewing` |  | 酿酒 |
| `Smelting` |  | 熔炼 |
| `Refining` |  | 精炼 |
| `MakeWeapons` |  | 制作武器 |
| `Handcrafting` |  | 手工制作 |
| `SewHat` |  | 缝制帽子 |
| `SewBracers` |  | 缝制腕甲 |
| `SewShirt` |  | 缝制上衣 |
| `SewPants` |  | 缝制裤子 |
| `SewShoes` |  | 缝制鞋子 |
| `ResearchTechnology` |  | 研究科技 |
| `Pharmaceuticals` |  | 制药 |
| `Weaving` |  | 织布 |
| `AssignAnimals` |  | 分配动物 |
| `ProhibitPlanting` |  | 禁止种植 |
| `CancelOrder` |  | 取消命令 |
| `ReadBook` |  | 阅读书籍 |
| `ExpandFarmland` |  | 扩展农田 |
| `ReduceFarmland` |  | 缩小农田 |
| `RemoveFarmland` |  | 移除农田 |
| `ChangePlant` |  | 变更作物 |
| `HarvestFarmland` |  | 收割农田 |
| `PracticeMartialArts` |  | 修炼武学 |
| `Observe` |  | 观察 |
| `MakeTea` |  | 煮茶 |
| `ProhibitTreatSelf` |  | 禁止自我治疗 |
| `BeControlled` |  | 被控制 |
| `BuildingAutoAddFuel` |  | 建筑是否自动添加燃料 |
| `SwitchRoomType` |  | 切换房间类型 |
| `SetBuildTimedSwitch` |  | 自动化控件设置定时开关 |
| `SetBuildTemperatureSwitch` |  | 自动化控件设置温度范围 |
| `SetBuildEnergySwitch` |  | 自动化控件设置能量储量范围 |
| `SetBuildPipelineGroup` |  | 设置设备管道分配 |
| `SetBuildWhenOpenedControlPipelineGroup` |  | 设置开启时控制的管道分组 |
| `SetBuildWhenClosedControlPipelineGroup` |  | 设置关闭时控制的管道分组 |
| `ChooseConsumeBuildings` |  | 选择能量网中所有耗能建筑 |
| `ChooseGenerateEnergyBuildings` |  | 选择能量网中所有产能建筑 |
| `ChooseControlBuildings` |  | 选择能量网中所有控制建筑 |
| `ActivateMachine` |  | 激活机关 |
| `ChangeRobotWork` |  | 切换机关角色工作类型 |
| `ChangeRobotState` |  | 改变机关角色运行状态 |
| `WriteCopy` |  | 抄录 |
| `RobotChoosePatrolPoint` |  | 机器人选择巡逻点 |
| `SetRobotProtectTarget` |  | 设置机器人保护对象 |
| `ApplyCeremony` |  | 申请仪式 |
| `ToEatFood` |  | 指定角色去吃指定食物 |
| `Exchange` |  | 交流 |
| `Travel` |  | 游历 |
| `SettleIn` |  | 入驻 |
| `Enter` |  | 进入 |
| `GiveUp` |  | 放弃 |
| `WorldPlaceExploration` |  | 地点探索 |
| `WorldPlaceManagement` |  | 管理（世界地点） |
| `WorldPlaceAttack` |  | 进攻（世界地点） |
| `AddPuppet` |  | 添加傀儡 |
| `ConfirmAddPuppet` |  | 确认添加傀儡 |
| `GetOutOfTheJam` |  | 脱离卡死 |
| `Tame` |  | 驯服动物 |
| `Letter` |  | 信笺 |
| `ButcherTamedAnimal` |  | 屠宰（已驯服动物） |
| `WaitingButcher` |  | 等待被屠宰 |
| `Dialogue` |  | 对话 |
| `Trade` |  | 交易 |
| `ImmediatelyExecute` |  | 立即执行 |
| `Kill` |  | 击杀 |
| `Imprison` |  | 关押 |
| `ReleasePrisoner` |  | 释放囚犯 |
| `ExecutePrisoner` |  | 处决囚犯 |
| `TorturePrisoner` |  | 拷打囚犯 |
| `RecruitPrisoner` |  | 招募囚犯 |
| `ImprisonBack` |  | 关押囚犯回监狱 |
| `OpenTreasureList` |  | 打开珍宝阁 |
| `ProhibitionUse` |  | 禁止取出 |
| `OpenBackPack` |  | 打开背包 |
| `CopySetting` |  | 复制（设置） |
| `PasteSetting` |  | 粘贴（设置） |
| `ReplicateBuild` |  | 建筑复制 |
| `DestroyResources` |  | 摧毁资源 |
| `BatchAllSelect` |  | 批量全选 |
| `BatchCancelAllSelect` |  | 批量取消全选 |
