# `class` `AWorldBattleManager`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

## 功能说明（来自头文件注释）

> World Battle Manager Actor 类型。

## 蓝图暴露变量

### 属性 `WorldBattleCharacterInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FWorldBattleCharacterInfo](WorldBattleManager__FWorldBattleCharacterInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<int32,FWorldBattleCharacterInfo> WorldBattleCharacterInfo;` |

**说明:**

> 各阵营战斗的存活（没有重伤）角色信息

---

### 属性 `OnExtractStratagemDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnExtractStratagemDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnExtractStratagemDelegate OnExtractStratagemDelegate;` |

**说明:**

> 抽取战略卡牌

---

### 属性 `OnExtractCharacterCardDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnExtractCharacterCardDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnExtractCharacterCardDelegate OnExtractCharacterCardDelegate;` |

**说明:**

> 抽取角色卡牌

---

### 属性 `OnUpdateExtractStratagemTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateExtractStratagemTimeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateExtractStratagemTimeDelegate OnUpdateExtractStratagemTimeDelegate;` |

**说明:**

> On Update Extract Stratagem Time Delegate 事件或回调。

---

### 属性 `OnUpdateExtractCharacterTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateExtractCharacterTimeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateExtractCharacterTimeDelegate OnUpdateExtractCharacterTimeDelegate;` |

**说明:**

> On Update Extract Character Time Delegate 事件或回调。

---

### 属性 `OnFOnBattleStateChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBattleStateChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBattleStateChange OnFOnBattleStateChangeDelegate;` |

**说明:**

> On F On Battle State Change Delegate 事件或回调。

---

### 属性 `OnCancelBattlefieldDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBattleStateChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBattleStateChange OnCancelBattlefieldDelegate;` |

**说明:**

> On Cancel Battlefield Delegate 事件或回调。

---

### 属性 `OnGenerateDogfaceTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGenerateDogfaceTimeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGenerateDogfaceTimeDelegate OnGenerateDogfaceTimeDelegate;` |

**说明:**

> 小兵的剩余生成时间

---

### 属性 `OnUpdateStrategyPointChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateStrategyPointChangeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateStrategyPointChangeDelegate OnUpdateStrategyPointChangeDelegate;` |

**说明:**

> On Update Strategy Point Change Delegate 事件或回调。

---

### 属性 `OnUpdateResourcePointChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateResourcePointChangeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateResourcePointChangeDelegate OnUpdateResourcePointChangeDelegate;` |

**说明:**

> On Update Resource Point Change Delegate 事件或回调。

---

### 属性 `OnUpdateTeamKillNumberDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateTeamKillNumberDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateTeamKillNumberDelegate OnUpdateTeamKillNumberDelegate;` |

**说明:**

> On Update Team Kill Number Delegate 事件或回调。

---

### 属性 `OnTeamMultiKillDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTeamMultiKillDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTeamMultiKillDelegate OnTeamMultiKillDelegate;` |

**说明:**

> On Team Multi Kill Delegate 事件或回调。

---

### 属性 `MeanTimeToRecovery`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 MeanTimeToRecovery = 3;` |

**说明:**

> 资源量单位的恢复时间

---

### 属性 `CurTimeToRecovery`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float CurTimeToRecovery = 0.f;` |

**说明:**

> 当前恢复时间

---

## 蓝图暴露函数

### 函数 `GetWorldBattleManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldBattleManager](WorldBattleManager__AWorldBattleManager.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) static AWorldBattleManager * GetWorldBattleManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get World Battle Manager。

---

### 函数 `CreateBattlefield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleType` | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| `BattlePlaceGuid` | `const FGuid &` |
| `RelevancyPlaceGuid` | `const FGuid &` |
| `（匿名/仅类型）` | `FGuid FromPlaceGuid = FGuid()` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBattlefieldInformation& CreateBattlefield(EBattleType BattleType,const FGuid & BattlePlaceGuid,const FGuid & RelevancyPlaceGuid,FGuid FromPlaceGuid = FGuid());`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建战场信息（FromPlaceGuid: 出征发起地点，默认无效时内部回退攻方 MainPlace，保旧蓝图/cpp 二进制兼容）

---

### 函数 `ResolvePlaceDisposal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WinnerForce` | [AWorldForce](../WorldForce__AWorldForce.md)* |
| `TargetPlace` | [AWorldPlace](../WorldPlace__AWorldPlace.md)* |
| `AttackerTeam` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md)& |
| `Disposal` | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |
| `true` | `bool bApplyAttackFavorability =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResolvePlaceDisposal(AWorldForce* WinnerForce, AWorldPlace* TargetPlace, const FBattleTeamInfo& AttackerTeam, EPlaceDisposalType Disposal, bool bApplyAttackFavorability = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [PR-11] 统一战利品三选一处置结算入口（占领/劫掠/摧毁 + 必然建筑损毁 + 物资/正邪值数值化）。
> 文档 §7。AttackerTeam 仅作上下文（PR-7 离屏战无真实部队，传入用于校验/PR-8 战报）。
> [迁移说明] 真正实现已整体迁至 AWorldBattleCoreManager::ResolvePlaceDisposal。
> 本函数现仅为「BlueprintCallable 签名冻结兼容 + Core 缺失时的兜底转发壳」(内部转调 Core)。
> 新代码请直接调 AWorldBattleCoreManager::ResolvePlaceDisposal，不要新增对本壳的依赖。

---

### 函数 `CancelBattlefield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CancelBattlefield(const FGuid & InBattlefieldGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消战场不做结算

---

### 函数 `GetBattlefieldInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `OutBattlefieldInformation` | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetBattlefieldInformation(const FGuid & InBattlefieldGuid, FBattlefieldInformation & OutBattlefieldInformation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找战场信息

---

### 函数 `JoinBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldForce` | [AWorldForce](../WorldForce__AWorldForce.md) * |
| `InBattlefieldGuid` | `const FGuid &` |
| `BattleTeamInfo` | const [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool JoinBattle(AWorldForce * WorldForce,const FGuid & InBattlefieldGuid,const FBattleTeamInfo & BattleTeamInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入战斗

---

### 函数 `CheckCanRetreatBattle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldInformation` | const [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md)& |
| `TeamId` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanRetreatBattle(const FBattlefieldInformation& InBattlefieldInformation,int32 TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以撤退

---

### 函数 `RetreatBattleOnStart`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `TeamId` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RetreatBattleOnStart(const FGuid & InBattlefieldGuid,int32 TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 战斗开始前撤退

---

### 函数 `RemoveBattlefieldInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveBattlefieldInformation(const FGuid & InBattlefieldGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [PR-A] 战斗结算 BattleSettlement / EncounterSettlement / 筛选俘虏 FiltrateCaptureCharacter 已迁入 AWorldBattleCoreManager。
> [PR-C] 旧 ForceFavorabilityChange 已删除（零调用的 PR-6 预留入口，详见 .cpp 收口注释）。
> 移除战斗信息

---

### 函数 `BattleSurrender`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |
| `TeamID` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BattleSurrender(const FGuid & InBattlefieldGuid,int32 TeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 战斗投降

---

### 函数 `EnterBattlefield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EnterBattlefield(const FGuid & InBattlefieldGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 进入战场

---

### 函数 `GetCharacterMovePath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FVector>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FVector> GetCharacterMovePath(ACharacter * Character,int32 BranchingIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取角色当前的行进路线

---

### 函数 `GetCurPlaceBattlefieldInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBattlefieldInformation](WorldBattleStruct__FBattlefieldInformation.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBattlefieldInformation GetCurPlaceBattlefieldInformation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前地点的战场信息

---

### 函数 `GetNextPathPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |
| `OutPathIndex` | `int32 &` |
| `（匿名/仅类型）` | `float MinDistance = 100.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector GetNextPathPoint(ACharacter * Character,int32 BranchingIndex,int32 & OutPathIndex,float MinDistance = 100.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取行走的下一个路径点

---

### 函数 `GetNextPathPointByIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `ACharacter *` |
| `BranchingIndex` | `int32` |
| `InPathIndex` | `int32` |
| `OutPathIndex` | `int32 &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector GetNextPathPointByIndex(ACharacter * Character,int32 BranchingIndex,int32 InPathIndex, int32 & OutPathIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前路径点的下一个路径点

---

### 函数 `GetWorldBattleCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | TArray<[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamID` | `int32` |
| `BattlefieldRolesType` | [EBattlefieldRolesType](../../Struct/CommonEnum__EBattlefieldRolesType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<AEastRimWorldCharacter*> GetWorldBattleCharacters(int32 TeamID,EBattlefieldRolesType BattlefieldRolesType);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取战斗中的角色

---

### 函数 `GetCrystalCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamID` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) AEastRimWorldCharacter* GetCrystalCharacter(int32 TeamID);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取存活的水晶

---

### 函数 `ReleaseStrategicAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StratagemAbility` | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| `TeamId` | `int32` |
| `ProjectileHitEventData` | `FProjectileHitEventData` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ReleaseStrategicAbility(FStratagemAbility StratagemAbility,int32 TeamId,FProjectileHitEventData ProjectileHitEventData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放战略技能

---

### 函数 `ReleaseRangeAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `TeamId` | `int32` |
| `ProjectileHitEventData` | `const FProjectileHitEventData &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ReleaseRangeAbility(const FStratagemAbility & StratagemAbility,int32 TeamId,const FProjectileHitEventData & ProjectileHitEventData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放范围技能

---

### 函数 `ReleaseGlobalAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `TeamId` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReleaseGlobalAbility(const FStratagemAbility & StratagemAbility,int32 TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放全局技能

---

### 函数 `CheckCanReleaseStrategic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StratagemAbility` | const [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) & |
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanReleaseStrategic(const FStratagemAbility & StratagemAbility,const FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以释放战略技能

---

### 函数 `ExtractStratagemAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `Number` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExtractStratagemAbility(FBattleTeamState & BattleTeamState,int Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 抽取战略卡牌

---

### 函数 `ExtractCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `Number` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExtractCharacters(FBattleTeamState & BattleTeamState,int Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 抽取角色卡牌

---

### 函数 `ExtractStratagemAbilityByTeamGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamGuid` | `const FGuid &` |
| `Number` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExtractStratagemAbilityByTeamGuid(const FGuid & TeamGuid,int Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过阵营guid抽取战略卡牌

---

### 函数 `ExtractCharactersByTeamGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamGuid` | `const FGuid &` |
| `Number` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExtractCharactersByTeamGuid(const FGuid & TeamGuid,int Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过角色guid抽取角色卡牌

---

### 函数 `GetBattleTeamState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamID` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBattleTeamState GetBattleTeamState(int32 TeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取阵营信息

---

### 函数 `StartExtractionStratagemTiming`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartExtractionStratagemTiming(FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启抽取战略计时

---

### 函数 `CheckCanExtractionStratagem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanExtractionStratagem(const FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以抽取战略

---

### 函数 `StartExtractionCharacterTiming`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartExtractionCharacterTiming(FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启抽取角色计时

---

### 函数 `CheckCanExtractionCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanExtractionCharacter(const FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以抽取角色

---

### 函数 `ClearTimerHandleAndDelegate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearTimerHandleAndDelegate();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清理定时器

---

### 函数 `AddTimerHandleAndDelegate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddTimerHandleAndDelegate();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加定时器

---

### 函数 `GetPlayerBattleTeamState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBattleTeamState GetPlayerBattleTeamState();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取玩家阵营信息

---

### 函数 `GetPlayerBattleTeamStateById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattlefieldGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBattleTeamState GetPlayerBattleTeamStateById(const FGuid & InBattlefieldGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 或者通过战场信息获取玩家阵营信息

---

### 函数 `UseCharacterCard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterSaveData` | const [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool UseCharacterCard(const FCharacterSaveData & CharacterSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放角色卡牌

---

### 函数 `CheckCanUseCharacterCard`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterSaveData` | const [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) & |
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanUseCharacterCard(const FCharacterSaveData & CharacterSaveData,const FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以释放角色卡牌

---

### 函数 `ChangeStrategyPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PointValue` | `int32` |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangeStrategyPoint(int32 PointValue,FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改变战略点数

---

### 函数 `ChangeResourcePoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PointValue` | `int32` |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangeResourcePoint(int32 PointValue,FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 改变资源点数

---

### 函数 `GetMaxStrategyPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetMaxStrategyPoint(const FBattleTeamState& BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取战略点上限

---

### 函数 `GetMaxResourcePoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | const [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetMaxResourcePoint(const FBattleTeamState& BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取资源点上限

---

### 函数 `RecordCombatData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterDeathInformation` | const [FCharacterDeathInformation](../../Struct/CharacterDeathInformation__FCharacterDeathInformation.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RecordCombatData(const FCharacterDeathInformation & CharacterDeathInformation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 统计战斗数据

---

### 函数 `UpdateAutoReleaseStrategyTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `DeltaTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateAutoReleaseStrategyTime(FBattleTeamState & BattleTeamState,float DeltaTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新自动使用战略技能时间

---

### 函数 `AutoReleaseStrategy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StratagemAbility` | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool AutoReleaseStrategy(FStratagemAbility StratagemAbility,FBattleTeamState & BattleTeamState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 自动使用战略技能

---

### 函数 `UpdateAutoUseCharacterTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattleTeamState` | [FBattleTeamState](WorldBattleStruct__FBattleTeamState.md) & |
| `DeltaTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateAutoUseCharacterTime(FBattleTeamState & BattleTeamState,float DeltaTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新自动使用角色技能时间

---

### 函数 `ReturnToBase`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReturnToBase();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返回驻地

---

### 函数 `PlayerSelectDisposalPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `PlaceDisposalType` | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool PlayerSelectDisposalPlace(const FGuid & BattlefieldInformationGuid,EPlaceDisposalType PlaceDisposalType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [PR-A] 结算管线 StartSettleAccounts / EncounterSettleAccountsStart / EncounterSettleAccountsEnd
> CheckHaveSettleAccounts / NextSettleAccounts 已迁入 AWorldBattleCoreManager。
> 玩家胜利处置城市（[PR-A] 蓝图转发壳：实现迁 Core，本壳保 Target=BattleManager 兼容）

---

### 函数 `PlayerDisposalCaptureCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `PostwarCharacterDispose` | const TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlayerDisposalCaptureCharacter(const FGuid & BattlefieldInformationGuid,const TMap<FGuid,ECaptureCharacterDisposalType> & PostwarCharacterDispose);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家胜利处置俘虏的角色（[PR-A] 蓝图转发壳）

---

### 函数 `PlayerSelectGarrisonCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldInformationGuid` | `const FGuid &` |
| `GarrisonCharacter` | `const TArray<FGuid>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PlayerSelectGarrisonCharacter(const FGuid & BattlefieldInformationGuid,const TArray<FGuid> GarrisonCharacter);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择留守的人（[PR-A] 蓝图转发壳）

---

### 函数 `SettleAccountsComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SettleAccountsComplete(const FGuid & BattlefieldGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结算完成（[PR-A] 蓝图转发壳）

---

### 函数 `AttackerStartMove`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BattlefieldGuid` | `const FGuid &` |
| `（匿名/仅类型）` | [ETransportationType](../../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../../ERW_Enumerations__ETransportationType.md)::Walking |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AttackerStartMove(const FGuid & BattlefieldGuid,ETransportationType TransportationType = ETransportationType::Walking);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ============================================================================
> [废弃·移动逻辑已迁出] 大世界出征行军 / 抵达切换 已统一到 AWorldMapManage::UpdateWorldActorMoveState2D。
> 以下移动相关接口均已不再被调用，保留代码不删(便于回溯/潜在复用)。
> 例外：NpcMarchAttackerMovetoBattlePlace 不在此列——它现在是 NPC 围城"结算入口"，仍被 WorldMapManage 调用。
> ============================================================================
> 攻击方开始出发  [废弃] 出征行军改由 WorldForce::RequestAttack → WorldMapManage::CreateOneMove 创建，已无调用方

---

### 函数 `RemoveBattleMoverTip`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttacherMoverGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveBattleMoverTip(const FGuid & AttacherMoverGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 删除战斗移动提示  [废弃] 旧战斗行军提示清理，移动迁出后已无 C++ 调用方

---

### 函数 `UpdateSeriousInjuryCharacterState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `CharacterCureState` | [ECharacterCureState](WorldBattleStruct__ECharacterCureState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateSeriousInjuryCharacterState(AEastRimWorldCharacter * Character,ECharacterCureState CharacterCureState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新重伤人员的状态

---

### 函数 `FindLayDownSeriousInjuryPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuredCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) FCharacterCureInfo FindLayDownSeriousInjuryPoint(AEastRimWorldCharacter * InjuredCharacter);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取一个可以放置伤员的位置

---

### 函数 `GetCharacterCureInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuredCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) FCharacterCureInfo GetCharacterCureInfo(AEastRimWorldCharacter * InjuredCharacter);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取治疗信息

---
