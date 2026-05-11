# `class` `ASaveGameDataActor`

**源码头文件：** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TechnologyMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_TechnologyMgr](../Components/ERW_TechnologyMgr__UERW_TechnologyMgr.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TechnologyMgr* TechnologyMgr { nullptr };` |

**源码注释：**

> 科技管理组件

---

### 属性 `CommonTaskComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UCommonTaskComponent](../System/Task/CommonTaskComponent__UCommonTaskComponent.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UCommonTaskComponent* CommonTaskComponent { nullptr };` |

**源码注释：**

> 新手引导任务组件

---

### 属性 `LogComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere,SaveGame) TObjectPtr<UCommonLogComponent> LogComponent;` |

**源码注释：**

> 日志组件

---

### 属性 `OnObserveScheduleChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnObserveScheduleChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveScheduleChange;` |

**源码注释：**

> 当观察进度改变时

---

### 属性 `OnObserveComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnObserveScheduleChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveComplete;` |

**源码注释：**

> 当观察完成时

---

### 属性 `OnGameFunctionChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFunctionChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFunctionChange OnGameFunctionChange;` |

---

### 属性 `OnNewBuildChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildUnlockChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildUnlockChange OnNewBuildChange;` |

**源码注释：**

> 新出现的建筑

---

### 属性 `OnUnlockItemTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUnlockItemTag` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUnlockItemTag OnUnlockItemTag;` |

**源码注释：**

> 当物品解锁时

---

### 属性 `OnPlayerTeamBuffChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayerTeamBuffChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayerTeamBuffChange OnPlayerTeamBuffChange;` |

**源码注释：**

> 当玩家方buff状态改变时

---

### 属性 `OnBuildingConstructionNumChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBuildingConstructionNumChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBuildingConstructionNumChange OnBuildingConstructionNumChange;` |

---

### 属性 `UnlockFormula`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockFormula;` |

**源码注释：**

> 解锁的配方ID

---

### 属性 `UnlockBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockBuilding;` |

**源码注释：**

> 解锁的建筑ID（建造列表中可见）

---

### 属性 `UnlockPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockPlant;` |

**源码注释：**

> 解锁的种植物id

---

### 属性 `UnlockGameFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockGameFunction;` |

**源码注释：**

> 解锁的功能ID

---

### 属性 `EnteredSubLevels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> EnteredSubLevels;` |

**源码注释：**

> 进入过的关卡

---

### 属性 `IsCustomWorkPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) bool IsCustomWorkPriority { false };` |

**源码注释：**

> 工作优先级UI是否是自定义优先级

---

### 属性 `UnlockItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockItem;` |

**源码注释：**

> 已经解锁的物品列表

---

### 属性 `UnlockCollect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockCollect;` |

**源码注释：**

> 已经解锁的采集物

---

### 属性 `UnlockItemTagContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FGameplayTagContainer UnlockItemTagContainer;` |

---

### 属性 `ObservedObjectRecordMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EObserveObjectType,[FObserveObjectsRecordMap](../Struct/ObserveStruct__FObserveObjectsRecordMap.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveObjectsRecordMap> ObservedObjectRecordMap;` |

**源码注释：**

> 已经观察完成的对象记录

---

### 属性 `ObservingObjectProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EObserveObjectType,[FObserveProgressesMap](../Struct/ObserveStruct__FObserveProgressesMap.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveProgressesMap> ObservingObjectProgress;` |

**源码注释：**

> 观察进度

---

### 属性 `TeamInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGenericTeamId,[FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGenericTeamId,FGameplayTeamInfo> TeamInfos;` |

**源码注释：**

> 所有的阵营记录的阵营信息

---

### 属性 `TeamChangeInformationInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTeamChangeInformationInfo](../Struct/CharacterStruct__FTeamChangeInformationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FTeamChangeInformationInfo> TeamChangeInformationInfos;` |

**源码注释：**

> 存储两个阵营关系变动

---

### 属性 `GlobalBuffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FCommonBuff> GlobalBuffs;` |

**源码注释：**

> 存档的全局buff信息 不区分阵营 不区分地点

---

### 属性 `BuildingConstructionNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int32> BuildingConstructionNum;` |

**源码注释：**

> 修建过的建筑物数量

---

### 属性 `UnlockItemTipArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> UnlockItemTipArr;` |

**源码注释：**

> 刚解锁物品的红点提示提

---

### 属性 `UnlockResourTab`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) TArray<FString> UnlockResourTab;` |

**源码注释：**

> 资源栏已经解锁的标签栏位 用图片资源路径作为标记

---

### 属性 `CharacterLetterMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCharacterLetterData](../System/Letterpaper/BirdLetterSystem__FCharacterLetterData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) TMap<FGuid, FCharacterLetterData> CharacterLetterMap;` |

**源码注释：**

> 信笺数据

---

### 属性 `CurRobotNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 CurRobotNum;` |

**源码注释：**

> 当前已激活的机关人数量

---

### 属性 `Stalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FStallInfo](../Components/TreasureComponent__FStallInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) TMap<int32 , FStallInfo> Stalls;` |

**源码注释：**

> 当前保存的珍宝阁货架信息

---

### 属性 `UnlockStallSlots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 UnlockStallSlots;` |

**源码注释：**

> 当前已解锁的货架槽位

---

### 属性 `DeathNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 DeathNum;` |

**源码注释：**

> 玩家角色死亡计数 用于解锁成就

---

### 属性 `PurpleMakeNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PurpleMakeNum;` |

**源码注释：**

> 玩家紫色装备制造计数 用于解锁成就

---

### 属性 `GoldGeteNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldGeteNum;` |

**源码注释：**

> 玩家金色装备获取计数 用于解锁成就

---

### 属性 `GoldWriteCopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldWriteCopyNum;` |

**源码注释：**

> 玩家金色书籍抄录计数 用于解锁成就

---

### 属性 `AnimalTame`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FName,int32> AnimalTame;` |

**源码注释：**

> 玩家驯服动物类型数组 用于解锁成就

---

### 属性 `MartialArtsWinNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsWinNum = 0;` |

**源码注释：**

> 玩家累计切磋胜利计数 用于解锁成就

---

### 属性 `MartialArtsFaileNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsFaileNum = 0;` |

**源码注释：**

> 玩家累计切磋失败计数 用于解锁成就

---

### 属性 `continuityWin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityWin;` |

**源码注释：**

> 玩家连续切磋失败数组 用于解锁成就

---

### 属性 `continuityFaile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityFaile;` |

**源码注释：**

> 玩家连续切磋成功数组 用于解锁成就

---

### 属性 `TradeGetGoodNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetGoodNum = 0;` |

**源码注释：**

> 玩家交易累计获得商品数量 用于解锁成就

---

### 属性 `TradeSaleGoodNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeSaleGoodNum = 0;` |

**源码注释：**

> 玩家交易累计出售商品数量 用于解锁成就

---

### 属性 `TradeGetmoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetmoney = 0;` |

**源码注释：**

> 玩家交易累计获得铜币数量 用于解锁成就

---

### 属性 `TameAnimal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TameAnimal = 0;` |

**源码注释：**

> 玩家交易累计驯服动物数量 用于解锁成就

---

### 属性 `Version`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FString Version = TEXT("0.1");` |

**源码注释：**

> 版本号

---

### 属性 `ManageResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , int32> ManageResource;` |

**源码注释：**

> 资源管理界面资源及其数量

---

### 属性 `BuildingNumData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FBuildingNumData](../System/Letterpaper/BirdLetterSystem__FBuildingNumData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , FBuildingNumData> BuildingNumData;` |

**源码注释：**

> 资源管理界面资源及其数量

---

### 属性 `CurGameDifficultyOption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EDifficultyOption` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) EDifficultyOption CurGameDifficultyOption = EDifficultyOption::Normal;` |

**源码注释：**

> 当前难度类型

---

### 属性 `CurGameDifficultyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurGameDifficultyCoefficient = 1.f;` |

**源码注释：**

> 当前难度系数

---

### 属性 `CurEnemyRaidFrequencyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurEnemyRaidFrequencyCoefficient = 1.f;` |

**源码注释：**

> 敌人进攻频率系数

---

### 属性 `CurRaidRulesetId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) FName CurRaidRulesetId;` |

**源码注释：**

> 袭击规则配置

---

### 属性 `ProtagonistData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FEastRimWorldHumanData ProtagonistData;` |

**源码注释：**

> 主角的角色信息

---

### 属性 `PlayerInitialPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FSoftObjectPath PlayerInitialPlace;` |

**源码注释：**

> 玩家的初始地点

---

## 蓝图暴露函数

### 函数 `GetSaveGameDataActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ASaveGameDataActor](SaveGameDataActor__ASaveGameDataActor.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static ASaveGameDataActor * GetSaveGameDataActor();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `InitSaveGameDataActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitSaveGameDataActor();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewFormula(FName InNewFormulaID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsCanUseFormula(FName InNewFormulaID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewBuilding(FName InNewBuildingID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddStall(FText StallName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddStallSlot(int32 AddSlots);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuilding(FName InNewBuildingID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuildingTab(FName InNewBuildingTabID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FName> GetAllBuildingTip(bool IsUnlockBuilding);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewPlant(FName InNewPlantID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewFunction(FName FunctionId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveEnteredSubLevel(FName LevelName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EnterSubLevel(FName LevelName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveEnteredSubLevelRecord(FName LevelName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewItem(FName InNewItemID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockNewCollect(FName InNewCollectID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItem(FName InItemID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveUnlockedCollect(FName InCollectID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnlockItemTag(const FGameplayTag & GameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTag(const FGameplayTag & GameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTagContainer(const FGameplayTagContainer & GameplayTags);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |
| `ObserveDurability` | `const int32&` |
| `InWorkload` | `const float&` |
| `CharacterId` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float AddObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId,const int32& ObserveDurability,const float& InWorkload,const FGuid& CharacterId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckIsObserved(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGameplayTeamInfo GetGameplayTeamInfo(FGenericTeamId TeamId) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetGameplayTeamBuffs(FGenericTeamId TeamId) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ChangeTeamRelationship(FGenericTeamId SourceTeamId,FGenericTeamId TargetTeamId,ETeamAttitude::Type TeamRelationship);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 改变阵营关系

---

### 函数 `GetProtagonistData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetProtagonistData() const {return ProtagonistData;}`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddBuildingConstructionNum(const FName& InBuildingID,const int32& InAddNum);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加已建造建筑数量

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetAllForceLogByGuid(const FGuid& InForceGuid,TArray<FCommonLogData>& OutLogs) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetAllForceLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetAllNotPlayerForceLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取所有非玩家势力日志

---

### 函数 `GetAllForceNewLogNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetAllForceNewLogNum() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetAllBigMapLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取所有大地图日志

---

### 函数 `GetAllPlayerLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetAllPlayerLog(TArray<FCommonLogData>& OutLogs) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取所有玩家日志

---

### 函数 `IsAnyForceHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsAnyForceHaveNewLog() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsForceHaveNewLog(const FGuid& InForceGuid) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 指定势力是否有新日志

---

### 函数 `IsNotPlayerForceHaveNewLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsNotPlayerForceHaveNewLog() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 非玩家势力是否有新日志

---

### 函数 `SaveInitProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void SaveInitProtagonistAppearance();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 存储主角的初始外观

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GenerateForceAttackLog(const FString& ForceName,const FString& EnemyForceName,const FString& PlaceName,const FGuid& ForceGuid,const int& TeamId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 势力进攻日志

---
