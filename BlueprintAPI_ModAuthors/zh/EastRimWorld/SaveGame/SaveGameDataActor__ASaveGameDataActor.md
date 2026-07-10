# `class` `ASaveGameDataActor`

**源码头文件:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## 功能说明（来自头文件注释）

> 全局存档数据Actor，集中保存解锁记录、观察进度、阵营信息、成就计数、参悟点数、难度系数与势力日志等全局数据

## 蓝图暴露变量

### 属性 `TechnologyMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_TechnologyMgr](../Components/ERW_TechnologyMgr__UERW_TechnologyMgr.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TechnologyMgr* TechnologyMgr { nullptr };` |

**说明:**

> 科技管理组件

---

### 属性 `CommonTaskComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UCommonTaskComponent](../System/Task/CommonTaskComponent__UCommonTaskComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UCommonTaskComponent* CommonTaskComponent { nullptr };` |

**说明:**

> 新手引导任务组件

---

### 属性 `LogComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere,SaveGame) TObjectPtr<UCommonLogComponent> LogComponent;` |

**说明:**

> 日志组件

---

### 属性 `EmergenceLogComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEmergenceLogComponent](../System/Emergence/Log/EmergenceLogComponent__UEmergenceLogComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere,SaveGame) TObjectPtr<UEmergenceLogComponent> EmergenceLogComponent;` |

**说明:**

> 涌现系统专有日志组件(时间/来源事件反查/关联演员/玩家相关性)

---

### 属性 `OnObserveScheduleChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnObserveScheduleChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveScheduleChange;` |

**说明:**

> 当观察进度改变时

---

### 属性 `OnObserveComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnObserveScheduleChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveComplete;` |

**说明:**

> 当观察完成时

---

### 属性 `OnGameFunctionChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFunctionChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFunctionChange OnGameFunctionChange;` |

**说明:**

> 游戏功能解锁状态变化时广播（功能ID、是否解锁）

---

### 属性 `OnNewBuildChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildUnlockChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildUnlockChange OnNewBuildChange;` |

**说明:**

> 新出现的建筑

---

### 属性 `OnUnlockItemTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUnlockItemTag` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUnlockItemTag OnUnlockItemTag;` |

**说明:**

> 当物品解锁时

---

### 属性 `OnPlayerTeamBuffChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayerTeamBuffChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayerTeamBuffChange OnPlayerTeamBuffChange;` |

**说明:**

> 当玩家方buff状态改变时

---

### 属性 `OnBuildingConstructionNumChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildingConstructionNumChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildingConstructionNumChange OnBuildingConstructionNumChange;` |

**说明:**

> 已建造建筑数量变化时广播（建筑ID、新数量、旧数量）

---

### 属性 `OnComprehendPointsChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnComprehendPointsChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnComprehendPointsChanged OnComprehendPointsChanged;` |

**说明:**

> 参悟历练/回溯点数变化（全局）

---

### 属性 `OnMartialFragmentChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMartialFragmentChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMartialFragmentChanged OnMartialFragmentChanged;` |

**说明:**

> 武学残卷数量变化（全局，参数为变化的品质与该品质当前数量）

---

### 属性 `UnlockFormula`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockFormula;` |

**说明:**

> 解锁的配方ID

---

### 属性 `UnlockBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockBuilding;` |

**说明:**

> 解锁的建筑ID（建造列表中可见）

---

### 属性 `UnlockPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockPlant;` |

**说明:**

> 解锁的种植物id

---

### 属性 `UnlockGameFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockGameFunction;` |

**说明:**

> 解锁的功能ID

---

### 属性 `EnteredSubLevels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> EnteredSubLevels;` |

**说明:**

> 进入过的关卡

---

### 属性 `EnabledModRecords`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModSaveRecord](../Mod/ModInfo__FModSaveRecord.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FModSaveRecord> EnabledModRecords;` |

**说明:**

> 本存档启用的 Mod 及版本（OnPrepareToSave 同步；读档时用于 Mod 兼容检查）

---

### 属性 `IsCustomWorkPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) bool IsCustomWorkPriority { false };` |

**说明:**

> 工作优先级UI是否是自定义优先级

---

### 属性 `UnlockItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockItem;` |

**说明:**

> 已经解锁的物品列表

---

### 属性 `UnlockCollect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockCollect;` |

**说明:**

> 已经解锁的采集物

---

### 属性 `UnlockItemTagContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGameplayTagContainer UnlockItemTagContainer;` |

**说明:**

> 已解锁物品类型Tag的容器（随存档保存）

---

### 属性 `ObservedObjectRecordMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EObserveObjectType](../Struct/ObserveStruct__EObserveObjectType.md),[FObserveObjectsRecordMap](../Struct/ObserveStruct__FObserveObjectsRecordMap.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveObjectsRecordMap> ObservedObjectRecordMap;` |

**说明:**

> 已经观察完成的对象记录

---

### 属性 `ObservingObjectProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EObserveObjectType](../Struct/ObserveStruct__EObserveObjectType.md),[FObserveProgressesMap](../Struct/ObserveStruct__FObserveProgressesMap.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveProgressesMap> ObservingObjectProgress;` |

**说明:**

> 观察进度

---

### 属性 `TeamInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGenericTeamId,[FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGenericTeamId,FGameplayTeamInfo> TeamInfos;` |

**说明:**

> 所有的阵营记录的阵营信息

---

### 属性 `TeamChangeInformationInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTeamChangeInformationInfo](../Struct/CharacterStruct__FTeamChangeInformationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FTeamChangeInformationInfo> TeamChangeInformationInfos;` |

**说明:**

> 存储两个阵营关系变动

---

### 属性 `GlobalBuffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FCommonBuff> GlobalBuffs;` |

**说明:**

> 存档的全局buff信息 不区分阵营 不区分地点

---

### 属性 `BuildingConstructionNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int32> BuildingConstructionNum;` |

**说明:**

> 修建过的建筑物数量

---

### 属性 `UnlockItemTipArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> UnlockItemTipArr;` |

**说明:**

> 刚解锁物品的红点提示提

---

### 属性 `UnlockResourTab`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) TArray<FString> UnlockResourTab;` |

**说明:**

> 资源栏已经解锁的标签栏位 用图片资源路径作为标记

---

### 属性 `CharacterLetterMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCharacterLetterData](../System/Letterpaper/BirdLetterSystem__FCharacterLetterData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) TMap<FGuid, FCharacterLetterData> CharacterLetterMap;` |

**说明:**

> 信笺数据

---

### 属性 `CurRobotNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 CurRobotNum;` |

**说明:**

> 当前已激活的机关人数量

---

### 属性 `Stalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FStallInfo](../Components/TreasureComponent__FStallInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) TMap<int32 , FStallInfo> Stalls;` |

**说明:**

> 当前保存的珍宝阁货架信息

---

### 属性 `UnlockStallSlots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 UnlockStallSlots;` |

**说明:**

> 当前已解锁的货架槽位

---

### 属性 `DeathNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 DeathNum;` |

**说明:**

> 玩家角色死亡计数 用于解锁成就

---

### 属性 `PurpleMakeNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PurpleMakeNum;` |

**说明:**

> 玩家紫色装备制造计数 用于解锁成就

---

### 属性 `GoldGeteNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldGeteNum;` |

**说明:**

> 玩家金色装备获取计数 用于解锁成就

---

### 属性 `GoldWriteCopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldWriteCopyNum;` |

**说明:**

> 玩家金色书籍抄录计数 用于解锁成就

---

### 属性 `AnimalTame`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FName,int32> AnimalTame;` |

**说明:**

> 玩家驯服动物类型数组 用于解锁成就

---

### 属性 `MartialArtsWinNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsWinNum = 0;` |

**说明:**

> 玩家累计切磋胜利计数 用于解锁成就

---

### 属性 `MartialArtsFaileNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsFaileNum = 0;` |

**说明:**

> 玩家累计切磋失败计数 用于解锁成就

---

### 属性 `continuityWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityWin;` |

**说明:**

> 玩家连续切磋失败数组 用于解锁成就

---

### 属性 `continuityFaile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityFaile;` |

**说明:**

> 玩家连续切磋成功数组 用于解锁成就

---

### 属性 `TradeGetGoodNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetGoodNum = 0;` |

**说明:**

> 玩家交易累计获得商品数量 用于解锁成就

---

### 属性 `TradeSaleGoodNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeSaleGoodNum = 0;` |

**说明:**

> 玩家交易累计出售商品数量 用于解锁成就

---

### 属性 `TradeGetmoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetmoney = 0;` |

**说明:**

> 玩家交易累计获得铜币数量 用于解锁成就

---

### 属性 `TameAnimal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TameAnimal = 0;` |

**说明:**

> 玩家交易累计驯服动物数量 用于解锁成就

---

### 属性 `TrainingPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 TrainingPoints = 0;` |

**说明:**

> 参悟·历练点数（全局，参悟消耗，通过行为/任务获得）

---

### 属性 `RetracePoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 RetracePoints = 0;` |

**说明:**

> 参悟·回溯点数（全局，参悟回溯词条消耗，通过行为/任务获得）

---

### 属性 `CharacterPracticePointCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FPracticePointCD](SaveGameDataActor__FPracticePointCD.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FPracticePointCD> CharacterPracticePointCD;` |

**说明:**

> 参悟·角色获得历练点数\回溯点数CD

---

### 属性 `MartialFragments`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EItemQuality,int32> MartialFragments;` |

**说明:**

> 武学残卷（全局，纯数值道具，按品质分别计数：品质→数量）

---

### 属性 `Version`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FString Version = TEXT("0.1");` |

**说明:**

> 版本号

---

### 属性 `ManageResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , int32> ManageResource;` |

**说明:**

> 资源管理界面资源及其数量

---

### 属性 `BuildingNumData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FBuildingNumData](../System/Letterpaper/BirdLetterSystem__FBuildingNumData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , FBuildingNumData> BuildingNumData;` |

**说明:**

> 资源管理界面资源及其数量

---

### 属性 `CurGameDifficultyOption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDifficultyOption](../Struct/CommonEnum__EDifficultyOption.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) EDifficultyOption CurGameDifficultyOption = EDifficultyOption::Normal;` |

**说明:**

> 当前难度类型

---

### 属性 `CurGameDifficultyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurGameDifficultyCoefficient = 1.f;` |

**说明:**

> 当前难度系数

---

### 属性 `CurEnemyRaidFrequencyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurEnemyRaidFrequencyCoefficient = 1.f;` |

**说明:**

> 敌人进攻频率系数

---

### 属性 `CurRaidRulesetId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) FName CurRaidRulesetId;` |

**说明:**

> 袭击规则配置

---

### 属性 `SelectDifficultyId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FName SelectDifficultyId;` |

**说明:**

> 选择的难度对应的配置表ID

---

### 属性 `IsEnableBeginnerGuide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsEnableBeginnerGuide { true };` |

**说明:**

> 是否开启新手引导

---

### 属性 `DifficultyData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FDifficultyRuntimeSaveData](SaveGameDataActor__FDifficultyRuntimeSaveData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FDifficultyRuntimeSaveData DifficultyData;` |

**说明:**

> 当前难度运行时系数（存档）

---

### 属性 `ProtagonistData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FEastRimWorldHumanData ProtagonistData;` |

**说明:**

> 主角的角色信息

---

### 属性 `PlayerInitialPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FSoftObjectPath PlayerInitialPlace;` |

**说明:**

> 玩家的初始地点

---

## 蓝图暴露函数

### 函数 `GetDifficultyData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | const [FDifficultyRuntimeSaveData](SaveGameDataActor__FDifficultyRuntimeSaveData.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , BlueprintPure) static const FDifficultyRuntimeSaveData& GetDifficultyData();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前难度运行时系数（静态访问，实例为空时返回默认值并警告）

---

### 函数 `GetSaveGameDataActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ASaveGameDataActor](SaveGameDataActor__ASaveGameDataActor.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) static ASaveGameDataActor * GetSaveGameDataActor();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取全局唯一的存档数据Actor实例

---

### 函数 `InitSaveGameDataActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitSaveGameDataActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化存档数据Actor（新游戏时写入难度运行时系数等初始数据）

---

### 函数 `UnlockNewFormula`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewFormulaID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewFormula(FName InNewFormulaID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新配方

---

### 函数 `IsCanUseFormula`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewFormulaID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsCanUseFormula(FName InNewFormulaID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否是可以使用的配方

---

### 函数 `UnlockNewBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewBuildingID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewBuilding(FName InNewBuildingID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新的建筑（在建造列表中可见，但不一定能建造）

---

### 函数 `AddStall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StallName` | `FText` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddStall(FText StallName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 科技添加添加货架

---

### 函数 `AddStallSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddSlots` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddStallSlot(int32 AddSlots);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 科技增加货架槽位

---

### 函数 `IsCanBuildBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewBuildingID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuilding(FName InNewBuildingID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 判断是否是可以建造的建筑（满足初次解锁的条件）

---

### 函数 `IsCanBuildBuildingTab`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewBuildingTabID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuildingTab(FName InNewBuildingTabID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 判断是否是可以建造的建筑分类

---

### 函数 `GetAllBuildingTip`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsUnlockBuilding` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FName> GetAllBuildingTip(bool IsUnlockBuilding);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回解锁的建筑或植物提示的ID数组

---

### 函数 `UnlockNewPlant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewPlantID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewPlant(FName InNewPlantID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新的种植物

---

### 函数 `UnlockNewFunction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FunctionId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewFunction(FName FunctionId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新的功能

---

### 函数 `HaveEnteredSubLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HaveEnteredSubLevel(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否进入过

---

### 函数 `EnterSubLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EnterSubLevel(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加进入过的子关卡

---

### 函数 `RemoveEnteredSubLevelRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveEnteredSubLevelRecord(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除进入记录

---

### 函数 `UnlockNewItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewItemID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewItem(FName InNewItemID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新物品

---

### 函数 `UnlockNewCollect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewCollectID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockNewCollect(FName InNewCollectID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁新的采集物

---

### 函数 `HaveUnlockedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItem(FName InItemID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否解锁对应的物品

---

### 函数 `HaveUnlockedCollect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCollectID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HaveUnlockedCollect(FName InCollectID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否解锁对应的采集物

---

### 函数 `UnlockItemTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayTag` | `const FGameplayTag &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnlockItemTag(const FGameplayTag & GameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解锁物品类型tag

---

### 函数 `HaveUnlockedItemTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayTag` | `const FGameplayTag &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTag(const FGameplayTag & GameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否已经解锁了对应的Tag

---

### 函数 `HaveUnlockedItemTagContainer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayTags` | `const FGameplayTagContainer &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTagContainer(const FGameplayTagContainer & GameplayTags);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否已经解锁了对应的Tag

---

### 函数 `AddObserveSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ObserveType` | const [EObserveObjectType](../Struct/ObserveStruct__EObserveObjectType.md)& |
| `ObjectId` | `const FName&` |
| `ObserveDurability` | `const int32&` |
| `InWorkload` | `const float&` |
| `CharacterId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float AddObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId,const int32& ObserveDurability,const float& InWorkload,const FGuid& CharacterId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加观察进度(需要注意采集物输入的id应该是其GamePlayTag的Name)

---

### 函数 `CheckIsObserved`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ObserveType` | const [EObserveObjectType](../Struct/ObserveStruct__EObserveObjectType.md)& |
| `ObjectId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckIsObserved(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否已经完成观察(需要注意采集物输入的id应该是其GamePlayTag的Name)

---

### 函数 `GetCurObserveSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ObserveType` | const [EObserveObjectType](../Struct/ObserveStruct__EObserveObjectType.md)& |
| `ObjectId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前观察进度量(如果已经完成了观察返回-1)

---

### 函数 `GetGameplayTeamInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `FGenericTeamId` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGameplayTeamInfo GetGameplayTeamInfo(FGenericTeamId TeamId) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找对应的阵营信息

---

### 函数 `GetGameplayTeamBuffs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamId` | `FGenericTeamId` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetGameplayTeamBuffs(FGenericTeamId TeamId) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取对应的存档TeamBuff

---

### 函数 `ChangeTeamRelationship`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SourceTeamId` | `FGenericTeamId` |
| `TargetTeamId` | `FGenericTeamId` |
| `TeamRelationship` | `ETeamAttitude::Type` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangeTeamRelationship(FGenericTeamId SourceTeamId,FGenericTeamId TargetTeamId,ETeamAttitude::Type TeamRelationship);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改变阵营关系

---

### 函数 `GetProtagonistData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetProtagonistData() const {return ProtagonistData;}`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取主角信息

---

### 函数 `AddBuildingConstructionNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuildingID` | `const FName&` |
| `InAddNum` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddBuildingConstructionNum(const FName& InBuildingID,const int32& InAddNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加已建造建筑数量

---

### 函数 `AddTrainingPointsByPractice`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `Delta` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddTrainingPointsByPractice(const FGuid& InCharacterGuid,int32 Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过修炼行为增加的历练点数

---

### 函数 `AddTrainingPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delta` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddTrainingPoints(int32 Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增减历练点数（参悟消耗，结果钳制>=0，广播 OnComprehendPointsChanged；供任务/行为系统发放）

---

### 函数 `AddRetracePointsByPractice`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `Delta` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddRetracePointsByPractice(const FGuid& InCharacterGuid,int32 Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过修炼行为增加的回溯点数

---

### 函数 `AddRetracePoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Delta` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddRetracePoints(int32 Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增减回溯点数（参悟回溯消耗，结果钳制>=0，广播 OnComprehendPointsChanged；供任务/行为系统发放）

---

### 函数 `AddMartialFragment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Quality` | `EItemQuality` |
| `Num` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddMartialFragment(EItemQuality Quality, int32 Num);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加指定品质的武学残卷（Num<=0 或品质为 None 忽略，广播 OnMartialFragmentChanged）

---

### 函数 `ConsumeMartialFragment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Quality` | `EItemQuality` |
| `Num` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ConsumeMartialFragment(EItemQuality Quality, int32 Num);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 扣除指定品质的武学残卷（数量不足则不扣并返回 false，成功扣除广播 OnMartialFragmentChanged）

---

### 函数 `GetMartialFragmentNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Quality` | `EItemQuality` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) int32 GetMartialFragmentNum(EItemQuality Quality) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取指定品质的武学残卷数量

---

### 函数 `GetAllForceLogByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InForceGuid` | `const FGuid&` |
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllForceLogByGuid(const FGuid& InForceGuid,TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 通过势力guid获取对应的所有日志

---

### 函数 `GetAllForceLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllForceLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取对所有势力日志

---

### 函数 `GetAllNotPlayerForceLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllNotPlayerForceLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有非玩家势力日志

---

### 函数 `GetAllForceNewLogNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetAllForceNewLogNum() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有势力新日志的数量

---

### 函数 `GetAllBigMapLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllBigMapLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有大地图日志

---

### 函数 `IsAnyForceHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsAnyForceHaveNewLog() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 任意势力是否有新日志

---

### 函数 `IsForceHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsForceHaveNewLog(const FGuid& InForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 指定势力是否有新日志

---

### 函数 `IsNotPlayerForceHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsNotPlayerForceHaveNewLog() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 非玩家势力是否有新日志

---

### 函数 `SaveInitProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void SaveInitProtagonistAppearance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 存储主角的初始外观

---

### 函数 `EnsureProtagonistHair`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void EnsureProtagonistHair();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> [老存档头发迁移] 读档时兜底：若主角捏脸 profile 的 Hairstyle 发型槽为空(老存档建号早于捏脸存发功能→掌门 3D 秃)，
> 按性别塞一个默认发型资产并写回全局 ProtagonistCustomizationProfile，再刷新活体掌门外观。
> 纯蓝图实现(FCustomizationProfile_V10/Hairstyle 是蓝图 struct，C++ 建不了)。幂等：非空则 no-op，新存档无副作用。

---

### 函数 `GenerateForceAttackLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceName` | `const FString&` |
| `EnemyForceName` | `const FString&` |
| `PlaceName` | `const FString&` |
| `ForceGuid` | `const FGuid&` |
| `TeamId` | `const int&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateForceAttackLog(const FString& ForceName,const FString& EnemyForceName,const FString& PlaceName,const FGuid& ForceGuid,const int& TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 势力进攻日志

---
