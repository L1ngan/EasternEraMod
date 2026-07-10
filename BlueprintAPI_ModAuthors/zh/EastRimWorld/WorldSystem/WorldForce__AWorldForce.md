# `class` `AWorldForce`

**源码头文件:** `EastRimWorld/WorldSystem/WorldForce.h`

---

## 功能说明（来自头文件注释）

> World Force Actor 类型。

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid SGUID;` |

**说明:**

> GUID。

---

### 属性 `ForceAimInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FForceAimInfo](WorldStruct__FForceAimInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) FForceAimInfo ForceAimInfo;` |

**说明:**

> 势力宗旨

---

### 属性 `OwnedStationNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedStationNum = 0;` |

**说明:**

> 注: 势力之间的好感度权威源是 AWorldDirector::AllForceFavorability,
> 经 AWorldDirector::GetForceFavorabilityInfo(A,B) 读取。原本势力上的 TMap 从无写入, 已删除。
> 拥有驻地数量

---

### 属性 `OwnedCenterCityNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedCenterCityNum = 0;` |

**说明:**

> 拥有城镇数量

---

### 属性 `OwnedResourcePointNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedResourcePointNum = 0;` |

**说明:**

> 拥有资源点数量

---

### 属性 `ForceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceState](WorldStruct__EForceState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) EForceState ForceState = EForceState::Normal;` |

**说明:**

> 势力的状态

---

### 属性 `ForceStateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere) float ForceStateTime = 0.f;` |

**说明:**

> 状态时间

---

### 属性 `WanderingDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 WanderingDays = 0;` |

**说明:**

> [PR-12] 流窜已持续天数（Wandering态每日+1，复活后归零）

---

### 属性 `bExtinct`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) bool bExtinct = false;` |

**说明:**

> [PR-12] 势力是否已覆灭（覆灭后Actor保留，标记无效）

---

### 属性 `AvoidBattleTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float AvoidBattleTime = 0.f;` |

**说明:**

> 避战时间

---

### 属性 `TotalCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalCombat = 0.f;` |

**说明:**

> 战力总和

---

### 属性 `AttackColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float AttackColdDown = 999999.f;` |

**说明:**

> 攻击间隔时间

---

### 属性 `TotalProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalProsperity = 0.f;` |

**说明:**

> 总繁荣度

---

### 属性 `WorldForceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FName WorldForceID;` |

**说明:**

> 势力id

---

### 属性 `WorldForceInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldForceInfo](WorldStruct__FWorldForceInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FWorldForceInfo WorldForceInfo;` |

**说明:**

> 势力信息

---

### 属性 `TotalReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalReputation = 0.f;` |

**说明:**

> 总声望值

---

### 属性 `ForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FText ForceName;` |

**说明:**

> 当前势力名称

---

### 属性 `ForceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 ForceLevel;` |

**说明:**

> 势力等级

---

### 属性 `LevelUpPlaceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 LevelUpPlaceInterval;` |

**说明:**

> 势力升级地点间隔

---

### 属性 `OccupiedPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FGuid> OccupiedPlace;` |

**说明:**

> 占领过的地点

---

### 属性 `OwnStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnStratagemAbility;` |

**说明:**

> 拥有的战略技能

---

### 属性 `OwnSummonRobot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnSummonRobot;` |

**说明:**

> 拥有的机关人

---

### 属性 `OwnTower`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnTower;` |

**说明:**

> 拥有的防御塔

---

### 属性 `PuppetEquipmentData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FPuppetModificationInfo](../Struct/ItemStruct__FPuppetModificationInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TMap<FName, FPuppetModificationInfo> PuppetEquipmentData;` |

**说明:**

> 傀儡装备数据存储（傀儡ID -> 装备数据）

---

### 属性 `OnWorldMapLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FVector OnWorldMapLocation;` |

**说明:**

> 当前势力在世界地图的位置

---

### 属性 `LevelUpConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FCommonTaskCondition> LevelUpConditions;` |

**说明:**

> 升级条件

---

### 属性 `OnFocreLevelChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFocreLevelChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFocreLevelChange OnFocreLevelChange;` |

**说明:**

> 升级通知

---

### 属性 `OnRefleshFocrePeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRefleshFocrePeople` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRefleshFocrePeople OnRefleshFocrePeople;` |

**说明:**

> 人员被踢提示

---

### 属性 `OnOwnedWorldPlaceChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOwnedWorldPlaceChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOwnedWorldPlaceChange OnOwnedWorldPlaceChange;` |

**说明:**

> On Owned World Place Change 事件或回调。

---

### 属性 `OnForceMainPlaceChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnForceMainPlaceChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnForceMainPlaceChanged OnForceMainPlaceChanged;` |

**说明:**

> [PR-12] 主城变更通知（UI/剧情链挂此事件；nullptr=进入流窜）

---

### 属性 `MainConstructionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FName MainConstructionID;` |

**说明:**

> 当前势力的主城ID

---

### 属性 `ForceLevelInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FForceLevelInfo](WorldStruct__FForceLevelInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FForceLevelInfo ForceLevelInfo;` |

**说明:**

> 势力等级信息

---

### 属性 `WorldCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> WorldCharacterData;` |

**说明:**

> 所在势力的角色信息

---

### 属性 `CacheFixRemovedCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> CacheFixRemovedCharacterData;` |

**说明:**

> ----补丁 4.15 22:03 暂时保留一下修复存档被移除的数据----

---

### 属性 `SubClassArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceSubClassInfo> SubClassArr;` |

**说明:**

> ------------------------------------------------
> 分堂信息(索引从1开始,0为堂主预留)

---

### 属性 `LeaderSubClassInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FForceSubClassInfo LeaderSubClassInfo;` |

**说明:**

> 掌门的堂口信息（目前仅用于门规管理，其中只有堂口Index和门规有效）(仅玩家势力使用)

---

### 属性 `ForceMemberJob`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceMemberJobInfo> ForceMemberJob;` |

**说明:**

> 人员职位信息

---

### 属性 `MasterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) int32 MasterGeneration = 0;` |

**说明:**

> 第N代掌门

---

### 属性 `LeaderGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid LeaderGuid;` |

**说明:**

> 掌门GUID

---

### 属性 `WorldNPCForceConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldNPCForceConfig](WorldStruct__FWorldNPCForceConfig.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FWorldNPCForceConfig WorldNPCForceConfig;` |

**说明:**

> NCP配置信息

---

### 属性 `UnlockForceApparel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName>UnlockForceApparel;` |

**说明:**

> 已经解锁的门派服饰

---

### 属性 `ForceMoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) float ForceMoney=0;` |

**说明:**

> 势力拥有的金钱

---

### 属性 `ActivePurpose`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FFGuidArr](WorldStruct__FFGuidArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FName , FFGuidArr> ActivePurpose;` |

**说明:**

> 当前激活的宗旨ID

---

### 属性 `BefriendedForceGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> BefriendedForceGuids;` |

**说明:**

> 玩家外交：已结交的门派GUID列表

---

### 属性 `LastBreakOffDiplomacyTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastBreakOffDiplomacyTime = -1.f;` |

**说明:**

> 玩家外交：上次断交操作的游戏时间（用于冷却判定，所有门派共享）

---

### 属性 `LastRequireTaskTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastRequireTaskTime = -1.f;` |

**说明:**

> 玩家外交：上次请求任务操作的游戏时间（用于冷却判定，所有门派共享）

---

### 属性 `LastRequireHelpTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastRequireHelpTime = -1.f;` |

**说明:**

> 玩家外交：上次请求援助操作的游戏时间（用于冷却判定，所有门派共享）

---

### 属性 `OnPlayerBefriendWithOther`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayerBefriendWithOther` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayerBefriendWithOther OnPlayerBefriendWithOther;` |

**说明:**

> On Player Befriend With Other 事件或回调。

---

### 属性 `OnPlayerBreakOffWithOther`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPlayerBreakOffWithOther` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPlayerBreakOffWithOther OnPlayerBreakOffWithOther ;` |

**说明:**

> On Player Break Off With Other 事件或回调。

---

### 属性 `ForceRelationLedgers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)> |
| 反射说明符 | BlueprintReadWrite, Category="RelationLedger" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, Category = "RelationLedger") TMap<FName, FRelationLedger> ForceRelationLedgers;` |

**说明:**

> Agent 工作流 PR-003: 势力关系账本 (跟其他势力的恩仇), Key: 另一势力 ID

---

## 蓝图暴露函数

### 函数 `AITimeToAttackOtherWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AITimeToAttackOtherWorldPlace();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> AI势力攻击其他地点

---

### 函数 `CheckCanAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanAttack();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以攻击

---

### 函数 `CalculateTotalDefense`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateTotalDefense() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算城防

---

### 函数 `AttackWorldPlaceSuccess`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceSuccess(class AWorldPlace* WorldPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 攻击地点成功(战斗结束后调用)

---

### 函数 `AttackWorldPlaceFail`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceFail(class AWorldPlace* WorldPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 攻击地点失败(战斗结束后调用)

---

### 函数 `WorldPlaceWithSelfDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | const [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float WorldPlaceWithSelfDistance(const AWorldPlace* WorldPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 地点距离我的城市最短距离

---

### 函数 `PointWithSelfDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetPoint` | `const FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float PointWithSelfDistance(const FVector2D& TargetPoint);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 我距离点最近的城市的距离

---

### 函数 `CalculateTotalCombat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateTotalCombat();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算总战力

---

### 函数 `CalculateTotalProsperity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateTotalProsperity();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算总繁荣

---

### 函数 `CheckCanLevelUpForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanLevelUpForce() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查能否升级势力

---

### 函数 `LevelUpForceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LevelUpForceLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 升级势力(先调用CheckCanLevelUpForce检查升级条件)

---

### 函数 `SetMemberJob`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MemberId` | `const FGuid&` |
| `JobType` | const [EForceJobType](WorldStruct__EForceJobType.md) |
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetMemberJob(const FGuid& MemberId, const EForceJobType JobType, const int32 SubClassIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置成员的职位

---

### 函数 `GetMembersJobInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobInfo(const int32 SubClassIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询分堂的成员的职位

---

### 函数 `GetMembersJobByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `JobType` | [EForceJobType](WorldStruct__EForceJobType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobByType(EForceJobType JobType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询某个职位的成员

---

### 函数 `K2_FindMemberJobInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MemberId` | `const FGuid&` |
| `OutForceMemberJobInfo` | [FForceMemberJobInfo](WorldStruct__FForceMemberJobInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="FindMemberJobInfo") bool K2_FindMemberJobInfo(const FGuid& MemberId,FForceMemberJobInfo& OutForceMemberJobInfo);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> Find Member Job Info 字段。

---

### 函数 `CheckMemberIsInnerSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MemberId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsInnerSect(const FGuid& MemberId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查某人是否内门

---

### 函数 `CheckMemberIsMaster`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MemberId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsMaster(const FGuid& MemberId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查某人是否掌门

---

### 函数 `CheckCanRecruitMember`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckCanRecruitMember();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查能否招募到主城

---

### 函数 `UpdateSubClassSetting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `int32` |
| `NewSubClassName` | `FText` |
| `NewSubClassFeatures` | `TArray<FName>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateSubClassSetting(int32 SubClassIndex, FText NewSubClassName, TArray<FName> NewSubClassFeatures);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新分堂设置

---

### 函数 `GetForceSubClassInfoByIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FForceSubClassInfo](WorldStruct__FForceSubClassInfo.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FForceSubClassInfo& GetForceSubClassInfoByIndex(int32 SubClassIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取分堂信息

---

### 函数 `SetSubClassApparel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |
| `bUseSubClassApparel` | `bool` |
| `false` | `bool bIsLeader =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetSubClassApparel(const int32 SubClassIndex,bool bUseSubClassApparel , bool bIsLeader = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置分堂所有成员使用统一的服装

---

### 函数 `SetSubClassApparelByCharacterGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetSubClassApparelByCharacterGuid(FGuid CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 给角色应用他所在该分堂的服饰（如果分堂为设置使用统一服装，就还是使用）

---

### 函数 `GetForceSubClassApparelConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FNameIDArray> GetForceSubClassApparelConfig(const int32 SubClassIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询分堂可以使用的服饰列表

---

### 函数 `GetUnlockForceLevelByApparelId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ApparelId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetUnlockForceLevelByApparelId(FName ApparelId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询势力服装对应的解锁势力等级

---

### 函数 `GetSubClassApparelData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |
| `ChaSex` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FName> GetSubClassApparelData(const int32 SubClassIndex,bool ChaSex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取分堂服饰数据

---

### 函数 `GetSubClassApparelData2`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<bool,[FCustomApparelsSkin](WorldStruct__FCustomApparelsSkin.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<bool,FCustomApparelsSkin> GetSubClassApparelData2(const int32 SubClassIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Sub Class Apparel Data 2。

---

### 函数 `SetItemUseState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `Tag` | `const FGameplayTag&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetItemUseState(const int32& SubClassIndex , const FGameplayTag& Tag , bool State , bool bIsLeader);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置物品使用状态

---

### 函数 `SetActionState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `ManageGoal` | `const FName&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool State , bool bIsLeader);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置行为可执行状态

---

### 函数 `SetTreasureStallState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `StallIndex` | `const int32&` |
| `State` | `bool` |
| `bIsLeader` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool State , bool bIsLeader);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置货柜可使用状态

---

### 函数 `InitForceRuleStates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitForceRuleStates();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化门规管理状态

---

### 函数 `GetActionState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `ManageGoal` | `const FName&` |
| `bIsLeader` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool GetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool bIsLeader) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取行为可执行状态

---

### 函数 `GetTreasureStallState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `StallIndex` | `const int32&` |
| `bIsLeader` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool GetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool bIsLeader) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取可购买的货柜

---

### 函数 `GetActiveTagNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32&` |
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetActiveTagNum(const int32& SubClassIndex , const FGameplayTag& Tag) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得可用Tag数量

---

### 函数 `SaveSubClassApparel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |
| `NewForceApparels` | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| `CharSex` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SaveSubClassApparel(const int32 SubClassIndex,TMap<EArmorType,FName> NewForceApparels,bool CharSex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 保存势力服饰配置

---

### 函数 `AddForceReputation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddReputation` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddForceReputation(float AddReputation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加势力声望

---

### 函数 `ActiveForcePurpose`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PurposeID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ActiveForcePurpose(FName PurposeID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 激活门派宗旨

---

### 函数 `DeActiveForcePurpose`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PurposeID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DeActiveForcePurpose(FName PurposeID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消门派宗旨

---

### 函数 `CheckCanOccupyPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `const FGuid &` |
| `WorldPlaceType` | const [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CheckCanOccupyPlace(const FGuid & PlaceGuid,const EWorldPlaceType& WorldPlaceType) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Check Can Occupy Place。

---

### 函数 `GetOwnedWorldPlaceArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const TArray<FGuid>&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const TArray<FGuid>& GetOwnedWorldPlaceArray();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取拥有的所有地点GUID

---

### 函数 `GiveUpWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GiveUpWorldPlace(FGuid PlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 放弃城市

---

### 函数 `GetCharacterDataByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FEastRimWorldCharacterData GetCharacterDataByGuid(const FGuid& CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找角色信息

---

### 函数 `GetCharacterDataByGuidPtr`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `CharacterData` | [FEastRimWorldCharacterData](../Struct/CharacterStruct__FEastRimWorldCharacterData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetCharacterDataByGuidPtr(const FGuid& CharacterGuid,FEastRimWorldCharacterData& CharacterData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Character Data By Guid Ptr。

---

### 函数 `FindCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FCharacterSaveData FindCharacterData(const FGuid & CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取角色信息

---

### 函数 `GetAllForceCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const TMap<FGuid,[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const TMap<FGuid,FCharacterSaveData>& GetAllForceCharacterData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get All Force Character Data。

---

### 函数 `FindCharacterDataRef`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FCharacterSaveData & FindCharacterDataRef(const FGuid & CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取角色信息的引用

---

### 函数 `KickOutCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void KickOutCharacter(const FGuid& CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将弟子从势力中踢出

---

### 函数 `UpdateCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateCharacterData(AEastRimWorldCharacter* Character);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新世界中角色信息

---

### 函数 `SetCharacterInPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |
| `NewWorldPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCharacterInPlace(FGuid CharacterGuid,AWorldPlace* NewWorldPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Character In Place 操作。

---

### 函数 `GetStationCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetStationCeiling() const{return ForceLevelInfo.NumberOfStations+ExtraStationCeiling;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取驻地上限

---

### 函数 `GetResourcePointCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetResourcePointCeiling() const{return ForceLevelInfo.NumberOfResourcePoints+ExtraResourcePointCeiling;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取资源点上限

---

### 函数 `GetCenterCityCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetCenterCityCeiling() const{return ForceLevelInfo.NumberOfTowns+ExtraCenterCityCeiling;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取城镇上限

---

### 函数 `TrySignAgreementWith`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAgreement` | const [FWorldAgreement](WorldStruct__FWorldAgreement.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TrySignAgreementWith(const FWorldAgreement& InAgreement){return false;}`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试签署协议

---

### 函数 `IsJusticeForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FORCEINLINE bool IsJusticeForce(){return ForceJusticeValue>=0;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否是正派

---

### 函数 `GetJusticeForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FORCEINLINE float GetJusticeForce() const {return ForceJusticeValue;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Justice Force。

---

### 函数 `AddJusticeValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddValue` | `const float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddJusticeValue(const float& AddValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加正邪值

---

### 函数 `AddNPCGrowScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddValue` | `const float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddNPCGrowScore(const float& AddValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加NPC势力成长积分

---

### 函数 `GetCurrentGrowScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetCurrentGrowScore() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前成长积分

---

### 函数 `CheckPlaceOccupied`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckPlaceOccupied(FGuid PlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否占领过这个地点

---

### 函数 `JoinForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |
| `BelongToPlaceGuid` | `const FGuid &` |
| `BeInPlaceGuid` | `FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void JoinForce(const FCharacterSaveData & CharacterData,const FGuid & BelongToPlaceGuid,FGuid & BeInPlaceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入势力

---

### 函数 `LeaveForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LeaveForce(const FGuid & CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 离开势力

---

### 函数 `GetWorldForceMainConstruction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AWorldPlace* GetWorldForceMainConstruction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取势力主城

---

### 函数 `GetBattleCanRecruitNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldInformation` | const [FBattlefieldInformation](WorldBattleSystem/WorldBattleStruct__FBattlefieldInformation.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetBattleCanRecruitNumber(const FBattlefieldInformation & BattlefieldInformation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取战斗可招募的数量

---

### 函数 `GetAllCanUseSummonRobot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseSummonRobot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有可用的小兵

---

### 函数 `GetAllCanUseStratagemAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseStratagemAbility();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有可使用的战略技能

---

### 函数 `GetAllCanUseTower`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseTower();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有可使用的防御塔

---

### 函数 `GetAllCanBattlePuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanBattlePuppet();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有可上阵的傀儡

---

### 函数 `GetBattleBuffGroups`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FBattleBuffGroup](WorldStruct__FBattleBuffGroup.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FBattleBuffGroup> GetBattleBuffGroups();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取战斗中的buff组

---

### 函数 `CanPuppetEquipEquipmentType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CanPuppetEquipEquipmentType(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查傀儡是否可以装备指定类型的装备

---

### 函数 `GetPuppetEquippedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FUseItemSaveData GetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取傀儡的装备数据（使用现有装备系统）

---

### 函数 `SetPuppetEquippedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ItemData` | const [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)& |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, const FUseItemSaveData& ItemData, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置傀儡的装备数据

---

### 函数 `RemovePuppetEquippedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemovePuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除傀儡的装备数据

---

### 函数 `IsPuppetEquippedWithItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `（匿名/仅类型）` | [EArmorType](../Struct/CommonEnum__EArmorType.md) ArmorType = [EArmorType](../Struct/CommonEnum__EArmorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool IsPuppetEquippedWithItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查傀儡是否已装备指定类型的装备

---

### 函数 `GetPuppetModificationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FPuppetModificationInfo](../Struct/ItemStruct__FPuppetModificationInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FPuppetModificationInfo GetPuppetModificationInfo(const FName& PuppetID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取傀儡的完整装备信息

---

### 函数 `BuildingAddPuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `BuildingGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BuildingAddPuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 建筑物添加傀儡

---

### 函数 `BuildingRemovePuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `BuildingGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BuildingRemovePuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 建筑物移除傀儡

---

### 函数 `AddForceMoney`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddValue` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddForceMoney(float AddValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加或减少势力金钱

---

### 函数 `GameYearChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GameYearChange();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 年份更新

---

### 函数 `CanLaunchActiveAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CanLaunchActiveAttack();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否允许主动发起进攻（驻地有效驻防≥1即可，NPC/玩家统一口径）供UI灰显及AI决策使用

---

### 函数 `CanPlayerLaunchActiveAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") bool CanPlayerLaunchActiveAttack();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [玩家占旗-C1] 玩家是否可发起主动攻城（薄封装 CanLaunchActiveAttack）。
> 供 W_BattlePrepare 的 Button_Start 灰显 / OpenPlaceAttack 入口拦截。

---

### 函数 `GetPlayerEligibleAttackPool`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutPool` | TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") void GetPlayerEligibleAttackPool(TArray<FCharacterSaveData>& OutPool);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [玩家占旗-C2] 返回玩家主城 D9 可选出征弟子池（复用 BuildEligiblePool 的排除：
> 非物理驻留主城/游荡流亡/闭关突破）。供 W_BattlePrepare 选人列表作数据源。
> 返回值数组拷贝(FCharacterSaveData 为 BlueprintType)，BP 直接绑列表。

---

### 函数 `RequestPlayerAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldForce|PlayerAttack" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetPlaceGuid` | `const FGuid&` |
| `PlayerSelected` | const [FBattleTeamInfo](WorldBattleSystem/WorldBattleStruct__FBattleTeamInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldForce|PlayerAttack") bool RequestPlayerAttack(const FGuid& TargetPlaceGuid, const FBattleTeamInfo& PlayerSelected);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [玩家占旗-C3] 玩家主动攻城入口：用玩家手选弟子组队，走占旗实战分流(RequestAttack 玩家相关路径)。
> 内部先 CanLaunchActiveAttack 拦截；PlayerSelected.Characters 应来自 GetPlayerEligibleAttackPool。
> 返回是否成功发起(拦截/目标无效则 false)。供 W_BattlePrepare 的 Button_Start 调用。

---

### 函数 `EnterWandering`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `nullptr` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* LastLostPlace = |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EnterWandering(class AWorldPlace* LastLostPlace = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [PR-12] 进入流窜态：状态机切换 + 委托广播 + [流浪势力]用最后失去的据点作起点在地图上创建流浪队伍条目

---

### 函数 `ReviveFromWandering`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewBase` | class [AWorldPlace](WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReviveFromWandering(class AWorldPlace* NewBase);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [PR-12] 从流窜态复活：设新主城 + 状态还原

---

### 函数 `HasWanderingMembers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool HasWanderingMembers() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [流窜求存] 本势力是否有处于世界地图流浪态(OnWorldMapWander)的弟子——供攻城胜利时"无城/有流浪弟子则强制占领"判断

---

### 函数 `ForcePayRollTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ForcePayRollTimer();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 势力添加发放例银定时器

---

### 函数 `ForceStartPayRoll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ForceStartPayRoll();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否开始发放例银

---

### 函数 `AddCurYearReputationFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddReputation` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddCurYearReputationFromTreasureHouse(int32 AddReputation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加从珍宝阁获得的声望

---

### 函数 `ResetCurYearReputationFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResetCurYearReputationFromTreasureHouse();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置每年从珍宝阁获得的声望

---

### 函数 `CheckCanBefriendForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanBefriendForce(const FGuid& TargetForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 结交其他门派：检查是否可结交（数量限制、金钱、目标关系等）

---

### 函数 `BefriendForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool BefriendForce(const FGuid& TargetForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结交其他门派：执行结交，成功后增加好感度并扣除金钱

---

### 函数 `CheckCanBreakOffForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanBreakOffForce(const FGuid& TargetForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 断交：检查是否可断交（冷却时间、当前是否已结交等）

---

### 函数 `BreakOffForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool BreakOffForce(const FGuid& TargetForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 断交：执行断交，扣除好感度

---

### 函数 `GetBefriendedForceCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetBefriendedForceCount() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前结交的门派数量

---

### 函数 `IsBefriendedWithForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsBefriendedWithForce(const FGuid& TargetForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查是否已与某门派结交

---

### 函数 `TriggerRequireTaskDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerRequireTaskDialogue(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 发起向其他门派请求任务的对话

---

### 函数 `TriggerRequireHelpDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerRequireHelpDialogue(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 发起向其他门派请求援助的对话

---

### 函数 `CheckCanRequireTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanRequireTask(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Check Can Require Task。

---

### 函数 `CheckCanRequireHelp`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCanRequireHelp(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Check Can Require Help。

---

### 函数 `TriggerGivePresentsDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerGivePresentsDialogue(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 发起向其他门派上供的对话

---

### 函数 `TriggerTauntDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForce` | [AWorldForce](WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerTauntDialogue(AWorldForce* TargetForce);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 发起嘲讽其他门派的对话

---
