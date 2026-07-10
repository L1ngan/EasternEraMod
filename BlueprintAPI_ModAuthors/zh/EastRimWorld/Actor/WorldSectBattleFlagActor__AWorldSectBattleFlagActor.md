# `class` `AWorldSectBattleFlagActor`

**源码头文件:** `EastRimWorld/Actor/WorldSectBattleFlagActor.h`

---

## 功能说明（来自头文件注释）

> 门派战旗子 Actor。
> 负责：占领范围、进度计算、归属切换、UI 状态广播、蓝图表现扩展点。

## 蓝图暴露变量

### 属性 `SceneRoot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USceneComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USceneComponent> SceneRoot;` |

**说明:**

> 根组件，旗子所有子组件都挂在这里。

---

### 属性 `CaptureSphere`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USphereComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USphereComponent> CaptureSphere;` |

**说明:**

> 占领检测范围。半径来自 FlagConfig.CaptureRadius。

---

### 属性 `FlagMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USkeletalMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USkeletalMeshComponent> FlagMesh;` |

**说明:**

> 旗子主体模型组件，蓝图可以在子类里换 Mesh / 材质。

---

### 属性 `CaptureRangeMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UStaticMeshComponent> CaptureRangeMesh;` |

**说明:**

> 占领范围显示模型，比如地面圆圈。缩放会跟 CaptureRadius 同步。

---

### 属性 `CaptureProgressWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UWidgetComponent> CaptureProgressWidget;` |

**说明:**

> 旗子头顶 UI 组件，通常放占领进度条和文字。

---

### 属性 `FlagTypeMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<USkeletalMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TArray<TObjectPtr<USkeletalMesh>> FlagTypeMeshes;` |

**说明:**

> 旗子类型对应的骨骼网格体：0=特殊旗，1=普通旗。

---

### 属性 `OwnerChangedAnimations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UAnimationAsset>>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TArray<TObjectPtr<UAnimationAsset>> OwnerChangedAnimations;` |

**说明:**

> 归属真正变化时播放一次的动画：0=特殊旗动画，1=普通旗动画。

---

### 属性 `CaptureEffectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UNiagaraComponent> CaptureEffectComponent;` |

**说明:**

> 争夺表现特效：CapturingAttack / CapturingDefense / Contested 状态常驻播放，其它状态关闭。

---

### 属性 `OwnerChangedEffectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UNiagaraComponent> OwnerChangedEffectComponent;` |

**说明:**

> 归属变化表现特效：CurrentOwner 真正变化时播放一次。

---

### 属性 `CaptureRangeMeshBaseRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag", meta = (ClampMin = "1.0")) float CaptureRangeMeshBaseRadius = 50.f;` |

**说明:**

> CaptureRangeMesh 原始模型半径。实际缩放 = CaptureRadius / CaptureRangeMeshBaseRadius。

---

### 属性 `FlagConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldSectBattleFlagConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") FWorldSectBattleFlagConfig FlagConfig;` |

**说明:**

> 旗子基础配置，来自旗子配置表。

---

### 属性 `FlagPointConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldSectBattleFlagPointConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") FWorldSectBattleFlagPointConfig FlagPointConfig;` |

**说明:**

> 旗子点位配置，包含 FlagID 和出生 Transform。

---

### 属性 `bFlagInitialized`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") bool bFlagInitialized = false;` |

**说明:**

> 是否已经通过 InitWorldSectBattleFlag 完成配置初始化。

---

### 属性 `GenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Battle|Generation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Battle|Generation") TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**说明:**

> 旗子周围怪物生成组件，根据 FlagConfig.MonsterGenerationConfigID 在运行时按旗子位置生成怪物。

---

### 属性 `AttackTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Capture") int32 AttackTeamID = INDEX_NONE;` |

**说明:**

> 当前战斗里进攻方 TeamID，用于识别进入圈内的角色是否属于进攻方。

---

### 属性 `DefenseTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Capture") int32 DefenseTeamID = INDEX_NONE;` |

**说明:**

> 当前战斗里防守方 TeamID，用于识别进入圈内的角色是否属于防守方。

---

### 属性 `CachedDefenseForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") FText CachedDefenseForceName;` |

**说明:**

> 守方门派名（如“伏虎门”）。Manager 生成旗子设队伍时一并写入，
> 供旗子刷出的随机弟子改名成“{守方门派名}外门弟子”，避免回调里反查 Manager。

---

### 属性 `CachedDefenseForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") FGuid CachedDefenseForceGuid;` |

**说明:**

> 守方门派 GUID（AWorldForce::SGUID）。Manager 生成旗子时一并写入，
> 用于旗子刷怪时把 MonsterGenerationConfig.ForceGuid 覆盖成真正守方门派，
> 让随机弟子（武学/外观/境界）跟随守方门派，而不是走 ForcePool 兜底随机。

---

### 属性 `CurrentOwner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagOwner](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") EWorldSectBattleFlagOwner CurrentOwner = EWorldSectBattleFlagOwner::Neutral;` |

**说明:**

> 当前旗子的最终归属。它用于材质、Buff、胜负等玩法逻辑。

---

### 属性 `RuntimeState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagRuntimeState](WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") EWorldSectBattleFlagRuntimeState RuntimeState = EWorldSectBattleFlagRuntimeState::Idle;` |

**说明:**

> 当前旗子的 UI 显示状态。它用于文字显示，不直接代表最终归属。

---

### 属性 `AttackCaptureValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") float AttackCaptureValue = 0.f;` |

**说明:**

> 进攻方当前占领值。UI 百分比 = AttackCaptureValue / GetMaxCaptureValue()。

---

### 属性 `DefenseCaptureValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") float DefenseCaptureValue = 0.f;` |

**说明:**

> 防守方当前占领值。UI 百分比 = DefenseCaptureValue / GetMaxCaptureValue()。

---

### 属性 `OnCaptureTick`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleFlagCaptureTick` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagCaptureTick OnCaptureTick;` |

**说明:**

> UI 进度和文字刷新代理。初始化、进出圈、占领值变化时都会广播。

---

### 属性 `OnCaptureOwnerChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleFlagOwnerChanged` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagOwnerChanged OnCaptureOwnerChanged;` |

**说明:**

> 旗子归属变化代理。蓝图建议用它刷新模型、材质、特效，不要用它刷新进度条。

---

### 属性 `OnFlagOwnerApplied`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorldSectBattleFlagOwnerApplied` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagOwnerApplied OnFlagOwnerApplied;` |

**说明:**

> 旗子归属表现代理：初始化完成时执行一次，后续归属真正改变时再执行。蓝图可用它按归属切换 mesh。

---

## 蓝图暴露函数

### 函数 `InitWorldSectBattleFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFlagConfig` | const [FWorldSectBattleFlagConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig.md)& |
| `InFlagPointConfig` | const [FWorldSectBattleFlagPointConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void InitWorldSectBattleFlag(const FWorldSectBattleFlagConfig& InFlagConfig, const FWorldSectBattleFlagPointConfig& InFlagPointConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据配置表数据初始化旗子。Manager 生成旗子后调用一次。

---

### 函数 `RefreshCaptureRadius`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void RefreshCaptureRadius();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重新应用占领半径，并同步 CaptureSphere 和 CaptureRangeMesh 的大小。

---

### 函数 `GetFlagID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") int32 GetFlagID() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前旗子配置 ID。

---

### 函数 `GetFlagType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | [EWorldSectBattleFlagType](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") EWorldSectBattleFlagType GetFlagType() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前旗子类型：特殊旗 / 普通旗。

---

### 函数 `IsSpecialFlag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") bool IsSpecialFlag() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前旗子是否是特殊旗。特殊旗被进攻方占领会触发战斗结束。

---

### 函数 `GetCaptureCenter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") FVector GetCaptureCenter() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取旗子占领范围中心点，给 AI / 行为树巡逻使用。

---

### 函数 `GetCaptureRadius`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") float GetCaptureRadius() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取旗子占领范围半径，给 AI / 行为树巡逻使用。

---

### 函数 `SetCaptureTeamIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Capture" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAttackTeamID` | `int32` |
| `InDefenseTeamID` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCaptureTeamIDs(int32 InAttackTeamID, int32 InDefenseTeamID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置本场战斗的进攻方和防守方 TeamID。Manager 生成旗子后写入。

---

### 函数 `SetCachedDefenseForceName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Capture" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDefenseForceName` | `FText` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCachedDefenseForceName(FText InDefenseForceName) { CachedDefenseForceName = MoveTemp(InDefenseForceName); }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 缓存守方门派名，供旗子刷出的随机弟子改名。Manager 生成旗子设队伍时一并写入。

---

### 函数 `SetCachedDefenseForceGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Capture" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDefenseForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCachedDefenseForceGuid(FGuid InDefenseForceGuid) { CachedDefenseForceGuid = InDefenseForceGuid; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 缓存守方门派 GUID，供旗子刷怪时覆盖 MonsterGenerationConfig.ForceGuid。Manager 生成旗子时写入。

---

### 函数 `GetAttackCaptureValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetAttackCaptureValue() const { return AttackCaptureValue; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取进攻方当前占领值。

---

### 函数 `GetDefenseCaptureValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetDefenseCaptureValue() const { return DefenseCaptureValue; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取防守方当前占领值。

---

### 函数 `GetMaxCaptureValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetMaxCaptureValue() const { return static_cast<float>(FMath::Max(0, FlagConfig.CaptureValue)); }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取旗子占领总值，来自 FlagConfig.CaptureValue。

---

### 函数 `GetCaptureUISnapshot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAttackCurrentValue` | `float&` |
| `OutDefenseCurrentValue` | `float&` |
| `OutMaxCaptureValue` | `float&` |
| `OutState` | [EWorldSectBattleFlagRuntimeState](WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") void GetCaptureUISnapshot(float& OutAttackCurrentValue, float& OutDefenseCurrentValue, float& OutMaxCaptureValue, EWorldSectBattleFlagRuntimeState& OutState) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 给 UI 初始化用的快照函数。绑定 OnCaptureTick 后先调用一次，避免错过初始化广播。

---

### 函数 `ReceiveOnFlagConfigApplied`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnFlagConfigApplied")) void ReceiveOnFlagConfigApplied();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnFlagConfigApplied」。

**说明:**

> 配置应用完成后的蓝图扩展点。适合在蓝图里根据 FlagType 替换模型。

---

### 函数 `ReceiveOnActorEnterCaptureRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnActorEnterCaptureRange")) void ReceiveOnActorEnterCaptureRange(AActor* OtherActor);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnActorEnterCaptureRange」。

**说明:**

> 有 Actor 进入占领范围时的蓝图扩展点。

---

### 函数 `ReceiveOnActorLeaveCaptureRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnActorLeaveCaptureRange")) void ReceiveOnActorLeaveCaptureRange(AActor* OtherActor);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnActorLeaveCaptureRange」。

**说明:**

> 有 Actor 离开占领范围时的蓝图扩展点。

---
