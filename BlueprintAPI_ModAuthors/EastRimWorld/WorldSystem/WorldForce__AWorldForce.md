# `class` `AWorldForce`

**源码头文件：** `EastRimWorld/WorldSystem/WorldForce.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FGuid SGUID;` |

---

### 属性 `ForceAimInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FForceAimInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) FForceAimInfo ForceAimInfo;` |

**源码注释：**

> 势力宗旨

---

### 属性 `ForceFavorability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) TMap<FGuid,float> ForceFavorability;` |

**源码注释：**

> 势力之间的好感度

---

### 属性 `OwnedStationNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedStationNum = 0;` |

**源码注释：**

> 拥有驻地数量

---

### 属性 `OwnedCenterCityNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedCenterCityNum = 0;` |

**源码注释：**

> 拥有城镇数量

---

### 属性 `OwnedResourcePointNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) int32 OwnedResourcePointNum = 0;` |

**源码注释：**

> 拥有资源点数量

---

### 属性 `ForceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EForceState` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) EForceState ForceState = EForceState::Normal;` |

**源码注释：**

> 势力的状态

---

### 属性 `ForceStateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere) float ForceStateTime = 0.f;` |

**源码注释：**

> 状态时间

---

### 属性 `AvoidBattleTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float AvoidBattleTime = 0.f;` |

**源码注释：**

> 避战时间

---

### 属性 `TotalCombat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalCombat = 0.f;` |

**源码注释：**

> 战力总和

---

### 属性 `AttackColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) float AttackColdDown = 999999.f;` |

**源码注释：**

> 攻击间隔时间

---

### 属性 `TotalProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalProsperity = 0.f;` |

**源码注释：**

> 总繁荣度

---

### 属性 `WorldForceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FName WorldForceID;` |

**源码注释：**

> 势力id

---

### 属性 `WorldForceInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldForceInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) FWorldForceInfo WorldForceInfo;` |

**源码注释：**

> 势力信息

---

### 属性 `TotalReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float TotalReputation = 0.f;` |

**源码注释：**

> 总声望值

---

### 属性 `ForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FText ForceName;` |

**源码注释：**

> 当前势力名称

---

### 属性 `ForceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 ForceLevel;` |

**源码注释：**

> 势力等级

---

### 属性 `LevelUpPlaceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 LevelUpPlaceInterval;` |

**源码注释：**

> 势力升级地点间隔

---

### 属性 `ForceCharacterDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> ForceCharacterDataPool;` |

**源码注释：**

> 势力角色随机池

---

### 属性 `OccupiedPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FGuid> OccupiedPlace;` |

**源码注释：**

> 占领过的地点

---

### 属性 `OwnStratagemAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnStratagemAbility;` |

**源码注释：**

> 拥有的战略技能

---

### 属性 `OwnSummonRobot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnSummonRobot;` |

**源码注释：**

> 拥有的机关人

---

### 属性 `OwnTower`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName> OwnTower;` |

**源码注释：**

> 拥有的防御塔

---

### 属性 `PuppetEquipmentData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, FPuppetModificationInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TMap<FName, FPuppetModificationInfo> PuppetEquipmentData;` |

**源码注释：**

> 傀儡装备数据存储（傀儡ID -> 装备数据）

---

### 属性 `OnWorldMapLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FVector OnWorldMapLocation;` |

**源码注释：**

> 当前势力在世界地图的位置

---

### 属性 `LevelUpConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FCommonTaskCondition> LevelUpConditions;` |

**源码注释：**

> 升级条件

---

### 属性 `OnFocreLevelChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFocreLevelChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFocreLevelChange OnFocreLevelChange;` |

**源码注释：**

> 升级通知

---

### 属性 `OnRefleshFocrePeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRefleshFocrePeople` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRefleshFocrePeople OnRefleshFocrePeople;` |

**源码注释：**

> 人员被踢提示

---

### 属性 `OnOwnedWorldPlaceChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOwnedWorldPlaceChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOwnedWorldPlaceChange OnOwnedWorldPlaceChange;` |

---

### 属性 `MainConstructionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FName MainConstructionID;` |

**源码注释：**

> 当前势力ID

---

### 属性 `ForceLevelInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FForceLevelInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FForceLevelInfo ForceLevelInfo;` |

**源码注释：**

> 势力等级信息

---

### 属性 `WorldCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,FCharacterSaveData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> WorldCharacterData;` |

**源码注释：**

> 所在势力的角色信息

---

### 属性 `CacheFixRemovedCharacterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,FCharacterSaveData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FGuid,FCharacterSaveData> CacheFixRemovedCharacterData;` |

**源码注释：**

> ----补丁 4.15 22:03 暂时保留一下修复存档被移除的数据----

---

### 属性 `SubClassArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FForceSubClassInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceSubClassInfo> SubClassArr;` |

**源码注释：**

> ------------------------------------------------
> 分堂信息(索引从1开始,0为堂主预留)

---

### 属性 `LeaderSubClassInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FForceSubClassInfo` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FForceSubClassInfo LeaderSubClassInfo;` |

**源码注释：**

> 掌门的堂口信息（目前仅用于门规管理，其中只有堂口Index和门规有效）(仅玩家势力使用)

---

### 属性 `ForceMemberJob`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FForceMemberJobInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FForceMemberJobInfo> ForceMemberJob;` |

**源码注释：**

> 人员职位信息

---

### 属性 `MasterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) int32 MasterGeneration = 0;` |

**源码注释：**

> 第N代掌门

---

### 属性 `LeaderGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) FGuid LeaderGuid;` |

**源码注释：**

> 掌门GUID

---

### 属性 `WorldNPCForceConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldNPCForceConfig` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FWorldNPCForceConfig WorldNPCForceConfig;` |

**源码注释：**

> NCP配置信息

---

### 属性 `UnlockForceApparel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,SaveGame) TArray<FName>UnlockForceApparel;` |

**源码注释：**

> 已经解锁的门派服饰

---

### 属性 `ForceMoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) float ForceMoney=0;` |

**源码注释：**

> 势力拥有的金钱

---

### 属性 `ActivePurpose`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FFGuidArr>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame) TMap<FName , FFGuidArr> ActivePurpose;` |

**源码注释：**

> 当前激活的宗旨ID

---

### 属性 `BefriendedForceGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> BefriendedForceGuids;` |

**源码注释：**

> 玩家外交：已结交的门派GUID列表

---

### 属性 `LastBreakOffDiplomacyTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float LastBreakOffDiplomacyTime = 0.f;` |

**源码注释：**

> 玩家外交：上次断交操作的游戏时间（用于冷却判定，所有门派共享）

---

## 蓝图暴露函数

### 函数 `CheckCanAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanAttack();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否可以攻击

---

### 函数 `PreAttackWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlaceGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PreAttackWorldPlace(const FGuid & PlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 战前准备

---

### 函数 `CalculateTotalDefense`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalculateTotalDefense();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `WorldPlace` | `class AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceSuccess(class AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `WorldPlace` | `class AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AttackWorldPlaceFail(class AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `WorldPlace` | `const AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float WorldPlaceWithSelfDistance(const AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `TargetPoint` | `const FVector &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float PointWithSelfDistance(const FVector & TargetPoint);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 我距离点最近的城市的距离

---

### 函数 `CalculateTotalCombat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalculateTotalCombat();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算总战力

---

### 函数 `CalculateTotalProsperity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalculateTotalProsperity();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算总繁荣

---

### 函数 `CheckCanLevelUpForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckCanLevelUpForce() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查能否升级势力

---

### 函数 `LevelUpForceLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void LevelUpForceLevel();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `JobType` | `const EForceJobType` |
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetMemberJob(const FGuid& MemberId, const EForceJobType JobType, const int32 SubClassIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置成员的职位

---

### 函数 `GetMembersJobInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FForceMemberJobInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobInfo(const int32 SubClassIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询分堂的成员的职位

---

### 函数 `GetMembersJobByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FForceMemberJobInfo>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `JobType` | `EForceJobType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FForceMemberJobInfo> GetMembersJobByType(EForceJobType JobType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `OutForceMemberJobInfo` | `FForceMemberJobInfo&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="FindMemberJobInfo") bool K2_FindMemberJobInfo(const FGuid& MemberId,FForceMemberJobInfo& OutForceMemberJobInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsInnerSect(const FGuid& MemberId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckMemberIsMaster(const FGuid& MemberId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查某人是否掌门

---

### 函数 `CheckCanRecruitMember`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckCanRecruitMember();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateSubClassSetting(int32 SubClassIndex, FText NewSubClassName, TArray<FName> NewSubClassFeatures);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新分堂设置

---

### 函数 `GetForceSubClassInfoByIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FForceSubClassInfo&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FForceSubClassInfo& GetForceSubClassInfoByIndex(int32 SubClassIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSubClassApparel(const int32 SubClassIndex,bool bUseSubClassApparel , bool bIsLeader = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSubClassApparelByCharacterGuid(FGuid CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 给角色应用他所在该分堂的服饰（如果分堂为设置使用统一服装，就还是使用）

---

### 函数 `GetForceSubClassApparelConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<EArmorType,FNameIDArray>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FNameIDArray> GetForceSubClassApparelConfig(const int32 SubClassIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int32 GetUnlockForceLevelByApparelId(FName ApparelId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询势力服装对应的解锁势力等级

---

### 函数 `GetSubClassApparelData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<EArmorType,FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |
| `ChaSex` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<EArmorType,FName> GetSubClassApparelData(const int32 SubClassIndex,bool ChaSex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取分堂服饰数据

---

### 函数 `GetSubClassApparelData2`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<bool,FCustomApparelsSkin>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SubClassIndex` | `const int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<bool,FCustomApparelsSkin> GetSubClassApparelData2(const int32 SubClassIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetItemUseState(const int32& SubClassIndex , const FGameplayTag& Tag , bool State , bool bIsLeader);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool State , bool bIsLeader);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool State , bool bIsLeader);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置货柜可使用状态

---

### 函数 `InitForceRuleStates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitForceRuleStates();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool GetActionState(const int32& SubClassIndex , const FName& ManageGoal , bool bIsLeader) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool GetTreasureStallState(const int32& SubClassIndex , const int32& StallIndex , bool bIsLeader) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetActiveTagNum(const int32& SubClassIndex , const FGameplayTag& Tag) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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
| `NewForceApparels` | `TMap<EArmorType,FName>` |
| `CharSex` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SaveSubClassApparel(const int32 SubClassIndex,TMap<EArmorType,FName> NewForceApparels,bool CharSex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddForceReputation(float AddReputation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ActiveForcePurpose(FName PurposeID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void DeActiveForcePurpose(FName PurposeID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `WorldPlaceType` | `const EWorldPlaceType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckCanOccupyPlace(const FGuid & PlaceGuid,const EWorldPlaceType& WorldPlaceType) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetOwnedWorldPlaceArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const TArray<FGuid>&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) const TArray<FGuid>& GetOwnedWorldPlaceArray();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GiveUpWorldPlace(FGuid PlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 放弃城市

---

### 函数 `GetCharacterDataByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FEastRimWorldCharacterData` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FEastRimWorldCharacterData GetCharacterDataByGuid(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `CharacterData` | `FEastRimWorldCharacterData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetCharacterDataByGuidPtr(const FGuid& CharacterGuid,FEastRimWorldCharacterData& CharacterData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacterSaveData` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterSaveData FindCharacterData(const FGuid & CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色信息

---

### 函数 `GetAllForceCharacterData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `const TMap<FGuid,FCharacterSaveData>&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) const TMap<FGuid,FCharacterSaveData>& GetAllForceCharacterData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindCharacterDataRef`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FCharacterSaveData &` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FCharacterSaveData & FindCharacterDataRef(const FGuid & CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void KickOutCharacter(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateCharacterData(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `NewWorldPlace` | `AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCharacterInPlace(FGuid CharacterGuid,AWorldPlace* NewWorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetStationCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetStationCeiling() const{return ForceLevelInfo.NumberOfStations+ExtraStationCeiling;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取驻地上限

---

### 函数 `GetResourcePointCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetResourcePointCeiling() const{return ForceLevelInfo.NumberOfResourcePoints+ExtraResourcePointCeiling;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取资源点上限

---

### 函数 `GetCenterCityCeiling`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FORCEINLINE int32 GetCenterCityCeiling() const{return ForceLevelInfo.NumberOfTowns+ExtraCenterCityCeiling;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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
| `InAgreement` | `const FWorldAgreement&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TrySignAgreementWith(const FWorldAgreement& InAgreement){return false;}`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 尝试签署协议

---

### 函数 `IsJusticeForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FORCEINLINE bool IsJusticeForce(){return ForceJusticeValue>=0;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 是否是正派

---

### 函数 `GetJusticeForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FORCEINLINE float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FORCEINLINE float GetJusticeForce() const {return ForceJusticeValue;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddJusticeValue(const float& AddValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddNPCGrowScore(const float& AddValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加NPC势力成长积分

---

### 函数 `GetCurrentGrowScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetCurrentGrowScore() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckPlaceOccupied(FGuid PlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `CharacterData` | `const FCharacterSaveData &` |
| `BelongToPlaceGuid` | `const FGuid &` |
| `BeInPlaceGuid` | `FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void JoinForce(const FCharacterSaveData & CharacterData,const FGuid & BelongToPlaceGuid,FGuid & BeInPlaceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void LeaveForce(const FGuid & CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 离开势力

---

### 函数 `GetWorldForceMainConstruction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AWorldPlace*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AWorldPlace* GetWorldForceMainConstruction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `BattlefieldInformation` | `const FBattlefieldInformation &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int GetBattleCanRecruitNumber(const FBattlefieldInformation & BattlefieldInformation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取战斗可招募的数量

---

### 函数 `GetAllCanUseSummonRobot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseSummonRobot();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有可用的小兵

---

### 函数 `GetAllCanUseStratagemAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseStratagemAbility();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有可使用的战略技能

---

### 函数 `GetAllCanUseTower`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanUseTower();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有可使用的防御塔

---

### 函数 `GetAllCanBattlePuppet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllCanBattlePuppet();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有可上阵的傀儡

---

### 函数 `GetBattleBuffGroups`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FBattleBuffGroup>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FBattleBuffGroup> GetBattleBuffGroups();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `EquipmentType` | `EEquipmentType` |
| `（匿名/仅类型）` | `EArmorType ArmorType = EArmorType::None` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CanPuppetEquipEquipmentType(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查傀儡是否可以装备指定类型的装备

---

### 函数 `GetPuppetEquippedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FUseItemSaveData` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |
| `EquipmentType` | `EEquipmentType` |
| `（匿名/仅类型）` | `EArmorType ArmorType = EArmorType::None` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FUseItemSaveData GetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `EquipmentType` | `EEquipmentType` |
| `ItemData` | `const FUseItemSaveData&` |
| `（匿名/仅类型）` | `EArmorType ArmorType = EArmorType::None` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SetPuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, const FUseItemSaveData& ItemData, EArmorType ArmorType = EArmorType::None);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `EquipmentType` | `EEquipmentType` |
| `（匿名/仅类型）` | `EArmorType ArmorType = EArmorType::None` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool RemovePuppetEquippedItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `EquipmentType` | `EEquipmentType` |
| `（匿名/仅类型）` | `EArmorType ArmorType = EArmorType::None` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsPuppetEquippedWithItem(const FName& PuppetID, EEquipmentType EquipmentType, EArmorType ArmorType = EArmorType::None);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查傀儡是否已装备指定类型的装备

---

### 函数 `GetPuppetModificationInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FPuppetModificationInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FPuppetModificationInfo GetPuppetModificationInfo(const FName& PuppetID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BuildingAddPuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BuildingRemovePuppet(const FName& PuppetID,const FGuid & BuildingGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddForceMoney(float AddValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加或减少势力金钱

---

### 函数 `GameYearChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GameYearChange();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 年份更新

---

### 函数 `ForcePayRollTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ForcePayRollTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 势力添加发放例银定时器

---

### 函数 `ForceStartPayRoll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ForceStartPayRoll();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddCurYearReputationFromTreasureHouse(int32 AddReputation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加从珍宝阁获得的声望

---

### 函数 `ResetCurYearReputationFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResetCurYearReputationFromTreasureHouse();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重置每年从珍宝阁获得的声望

---

### 函数 `CheckCanBefriendForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanBefriendForce(const FGuid& TargetForceGuid) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool BefriendForce(const FGuid& TargetForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 结交其他门派：执行结交，成功后增加好感度并扣除金钱

---

### 函数 `CheckCanBreakOffForce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanBreakOffForce(const FGuid& TargetForceGuid) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool BreakOffForce(const FGuid& TargetForceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 断交：执行断交，扣除好感度

---

### 函数 `GetBefriendedForceCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetBefriendedForceCount() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsBefriendedWithForce(const FGuid& TargetForceGuid) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查是否已与某门派结交

---
