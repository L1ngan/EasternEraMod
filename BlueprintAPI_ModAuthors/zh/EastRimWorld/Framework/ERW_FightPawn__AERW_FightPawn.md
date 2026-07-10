# `class` `AERW_FightPawn`

**源码头文件:** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## 功能说明（来自头文件注释）

> AERW_FightPawn - 门派战俯视角战斗主角
> 俯视角相机 + WASD 移动 + 交互系统（旧式输入）
> 数据初始化、能力、特性、Buff、伤势、武学、外观等全部通过专用组件承载，
> 不再依赖 AEastRimWorldCharacter 类型链路。

## 蓝图暴露变量

### 属性 `AbilitySystemComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Ability" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Ability") TObjectPtr<UEastRimWorldAbilitySystemComponent> AbilitySystemComponent;` |

**说明:**

> 技能系统组件（ASC），承载该 Pawn 的能力与各属性集

---

### 属性 `SaveDataComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFightPawnSaveDataComponent](FightPawnComponents/FightPawnSaveDataComponent__UFightPawnSaveDataComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnSaveDataComponent> SaveDataComponent;` |

**说明:**

> 存档数据组件（UFightPawnSaveDataComponent）

---

### 属性 `EquipmentComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFightPawnEquipmentComponent](FightPawnComponents/FightPawnEquipmentComponent__UFightPawnEquipmentComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnEquipmentComponent> EquipmentComponent;` |

**说明:**

> 装备组件（UFightPawnEquipmentComponent）

---

### 属性 `CommonBuffComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UCommonBuffComponent](../Character/Components/CommonBuffComponent__UCommonBuffComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UCommonBuffComponent> CommonBuffComponent;` |

**说明:**

> 通用 Buff 组件，管理该 Pawn 身上的 Buff

---

### 属性 `CombatComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldCombatComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UEastRimWorldCombatComponent> CombatComponent;` |

**说明:**

> 战斗组件（UEastRimWorldCombatComponent）

---

### 属性 `HealthComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEastRimWorldHealthComponent](../Character/Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UEastRimWorldHealthComponent> HealthComponent;` |

**说明:**

> 仿弟子（AEastRimWorldCharacter）创建的健康组件。HealthSet 死亡链路 FightPawn 分支需要它来调 StartDeath()。

---

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**说明:**

> 背包管理组件

---

### 属性 `GrowUpComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFightPawnGrowUpComponent](FightPawnComponents/FightPawnGrowUpComponent__UFightPawnGrowUpComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnGrowUpComponent> GrowUpComponent;` |

**说明:**

> 成长组件（UFightPawnGrowUpComponent）

---

### 属性 `InjuryComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFightPawnInjuryComponent](FightPawnComponents/FightPawnInjuryComponent__UFightPawnInjuryComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Components" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnInjuryComponent> InjuryComponent;` |

**说明:**

> 伤势组件（UFightPawnInjuryComponent）

---

### 属性 `FootCircleEffectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|VFX" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|VFX") TObjectPtr<UNiagaraComponent> FootCircleEffectComponent;` |

**说明:**

> 脚底阵营识别光圈组件（常驻）。进入门派战后会按当前阵营替换 Niagara 资源。

---

### 属性 `SectBattleFootCircleEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UNiagaraSystem>>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|VFX" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|VFX") TArray<TObjectPtr<UNiagaraSystem>> SectBattleFootCircleEffects;` |

**说明:**

> 门派战脚底特效数组：0=进攻方，1=防守方。蓝图 BP_FightPawn 中配置两个 Niagara 资源。

---

### 属性 `CameraSpringArm`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USpringArmComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<USpringArmComponent> CameraSpringArm;` |

**说明:**

> =============================================================================
> 相机
> =============================================================================

---

### 属性 `FightCamera`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UCameraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<UCameraComponent> FightCamera;` |

**说明:**

> 战斗俯视角相机组件

---

### 属性 `CameraZoomMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMax = 1400.f;` |

**说明:**

> 相机缩放最大距离（弹簧臂长度上限），默认 1400

---

### 属性 `CameraZoomMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMin = 300.f;` |

**说明:**

> 相机缩放最小距离（弹簧臂长度下限），默认 300

---

### 属性 `CameraPitchFar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchFar = -40.f;` |

**说明:**

> 相机缩放到最远时的俯仰角（度），默认 -40

---

### 属性 `CameraPitchNear`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchNear = -10.f;` |

**说明:**

> 相机缩放到最近时的俯仰角（度），默认 -10

---

### 属性 `CameraLagSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Camera" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraLagSpeed = 18.f;` |

**说明:**

> 相机弹簧臂跟随延迟速度，默认 18

---

### 属性 `CurrentInteractableTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Interaction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") TObjectPtr<AActor> CurrentInteractableTarget;` |

**说明:**

> 当前的可交互目标 Actor

---

### 属性 `bIsInteracting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|Interaction" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") bool bIsInteracting = false;` |

**说明:**

> 是否正在进行交互

---

### 属性 `NormalAttackConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UFightPawnNormalAttackConfig](FightPawnComponents/FightPawnNormalAttackConfig__UFightPawnNormalAttackConfig.md)> |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Skill") TObjectPtr<UFightPawnNormalAttackConfig> NormalAttackConfig;` |

**说明:**

> 普攻配置 DA：武器类型 → 普攻技能ID。BP_FightPawn 里指派。

---

### 属性 `HitPauseDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|HitPause" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|HitPause") float HitPauseDuration = 0.05f;` |

**说明:**

> 普攻命中卡肉：只影响 FightPawn 自己当前动画，不改别人/不动大世界。策划可调时间和倍率。

---

### 属性 `HitPauseAnimRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|HitPause" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|HitPause") float HitPauseAnimRate = 0.2f;` |

**说明:**

> 普攻命中卡肉期间自身动画的播放速率倍率（仅影响 FightPawn 自己的当前动画，默认 0.2）。

---

### 属性 `OnSkillCooldownStarted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFightPawnSkillCooldownStarted` |
| 反射说明符 | BlueprintAssignable, Category="FightPawn|UI" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|UI") FOnFightPawnSkillCooldownStarted OnSkillCooldownStarted;` |

**说明:**

> 技能 CD 开始广播（GA Commit 时触发）。
> UI 收到 (SlotIndex, AbilityID, Duration) → 启动本地倒计时（Timeline）。
> 注：仅 FightPawn 关心的 GA（普攻 + 技能槽 GA）会广播；其他 GA 静默。

---

### 属性 `OnSkillCooldownCleared`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFightPawnSkillCooldownCleared` |
| 反射说明符 | BlueprintAssignable, Category="FightPawn|UI" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|UI") FOnFightPawnSkillCooldownCleared OnSkillCooldownCleared;` |

**说明:**

> 技能 CD 被整体清空。UI 绑定后清掉所有技能格的 CD 显示。

---

### 属性 `OnAITakeoverChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFightPawnAITakeoverChanged` |
| 反射说明符 | BlueprintAssignable, Category="FightPawn|AI" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|AI") FOnFightPawnAITakeoverChanged OnAITakeoverChanged;` |

**说明:**

> AI 托管状态变化广播（参数=是否托管中）。SetAITakeover 实际切换后触发。

---

### 属性 `AITakeoverControllerClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<AController>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|AI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|AI") TSubclassOf<AController> AITakeoverControllerClass;` |

**说明:**

> AI 接管使用的控制器类（默认 AERW_FightPawnAIController，可在 BP 指定其 BP 子类）。

---

### 属性 `AICombatBehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UBehaviorTree>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|AI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|AI") TObjectPtr<UBehaviorTree> AICombatBehaviorTree;` |

**说明:**

> AI 接管时运行的战斗行为树（BT 做好后在此指派；为空则只挂感知不跑树）。

---

### 属性 `bAITakeover`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="FightPawn|AI" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|AI") bool bAITakeover = false;` |

**说明:**

> 当前是否处于 AI 接管状态。

---

### 属性 `RollAbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Skill" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Skill") FName RollAbilityID = TEXT("QingGong_FuBenUsed_01");` |

**说明:**

> 空格翻滚（副本轻功）使用的 GA ID。FightPawn 初始化后会确保授予到 ASC，按空格触发。

---

### 属性 `MoveForwardAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveForwardAction;` |

**说明:**

> 前进 IA（W）。触发即 MoveForward(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveForward。

---

### 属性 `MoveBackwardAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveBackwardAction;` |

**说明:**

> 后退 IA（S）。触发即 MoveForward(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveBackward。

---

### 属性 `MoveLeftAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveLeftAction;` |

**说明:**

> 左移 IA（A）。触发即 MoveRight(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveLeft。

---

### 属性 `MoveRightAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveRightAction;` |

**说明:**

> 右移 IA（D）。触发即 MoveRight(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveRight。

---

### 属性 `ZoomInAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> ZoomInAction;` |

**说明:**

> 拉近 IA（滚轮上）。触发即 OnMouseWheel(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraZoomIn。

---

### 属性 `ZoomOutAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputAction>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> ZoomOutAction;` |

**说明:**

> 拉远 IA（滚轮下）。触发即 OnMouseWheel(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraZoomOut。

---

### 属性 `FightInputMappingContext`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInputMappingContext>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputMappingContext> FightInputMappingContext;` |

**说明:**

> 战斗移动/缩放的 InputMappingContext（W/S/A/D → 4 方向 IA；滚轮 → 缩放 IA）。possess 时 AddMappingContext。在 BP_FightPawn 指派。

---

### 属性 `FightInputMappingPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Input" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") int32 FightInputMappingPriority = 100;` |

**说明:**

> 战斗 IMC 的优先级。需高于 UI 导航 IMC，避免移动/缩放被吞。

---

### 属性 `GuardCursorWidgetClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UUserWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TSubclassOf<UUserWidget> GuardCursorWidgetClass;` |

**说明:**

> 驻守选点模式下的鼠标光标 Widget。美术后续指派。

---

### 属性 `GuardMarkVFX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraSystem>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TObjectPtr<UNiagaraSystem> GuardMarkVFX;` |

**说明:**

> 驻守标记 Niagara 特效。右键确认驻守点后在该点常驻显示（每队各一个，挂战斗子关卡）。

---

### 属性 `GuardPickTraceChannel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<ECollisionChannel>` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TEnumAsByte<ECollisionChannel> GuardPickTraceChannel = ECC_Visibility;` |

**说明:**

> 选取地面的 LineTrace 通道。默认 Visibility。

---

### 属性 `RespawnDelaySeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Death" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Death", meta = (ClampMin = "0.0")) float RespawnDelaySeconds = 5.f;` |

**说明:**

> 死亡复活倒计时秒数。

---

### 属性 `DeathFreeCameraMoveSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Death" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Death", meta = (ClampMin = "0.0")) float DeathFreeCameraMoveSpeed = 2000.f;` |

**说明:**

> 死亡自由相机的平移速度（WASD）。

---

### 属性 `OnFightPawnRespawnCountdown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFightPawnRespawnCountdown` |
| 反射说明符 | BlueprintAssignable, Category="FightPawn|Death" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|Death") FOnFightPawnRespawnCountdown OnFightPawnRespawnCountdown;` |

**说明:**

> 复活倒计时每秒广播剩余秒数。UI 读秒。

---

## 蓝图暴露函数

### 函数 `InitializeCharacterBySaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|SaveData" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterSaveData` | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void InitializeCharacterBySaveData(const FCharacterSaveData& InCharacterSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过角色存档数据初始化玩家 Pawn

---

### 函数 `UpdateCharacterSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|SaveData" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void UpdateCharacterSaveData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把当前 Pawn 上的运行时状态回写到存档

---

### 函数 `GetCharacterSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|SaveData" |
| 返回类型 | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|SaveData") const FCharacterSaveData& GetCharacterSaveData() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前角色存档数据（只读引用）

---

### 函数 `GiveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool GiveAbilityByAbilityID(FName GameplayAbilityID, int Level = 1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按能力 ID 授予 GameplayAbility（可指定等级），成功返回 true

---

### 函数 `RemoveAbilityByAbilityID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Ability" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayAbilityID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按能力 ID 移除已授予的 GameplayAbility，成功返回 true

---

### 函数 `AddNewCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Characteristic" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void AddNewCharacteristic(const FName& NewCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 为该 Pawn 添加指定 ID 的新特性

---

### 函数 `RemoveCharacteristic`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Characteristic" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RemoveCharacteristicID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void RemoveCharacteristic(const FName& RemoveCharacteristicID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定 ID 的特性

---

### 函数 `OpenDanTian`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Cultivation" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Cultivation") void OpenDanTian();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启角色丹田（修炼功能入口）

---

### 函数 `ApplyCustomApparels`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Appearance" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bUseApparel` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Appearance") void ApplyCustomApparels(bool bUseApparel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 应用或取消自定义服饰外观，bUseApparel 控制是否使用

---

### 函数 `ChangeApparelById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="FightPawn|Equipment" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `FName` |
| `Type` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "FightPawn|Equipment") void ChangeApparelById(FName Id, EArmorType Type);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 切换外观 —— 由 BP 子类实现，BP 里把请求路由到 BP_CharacterCustomization 等外观组件。
> 由 UFightPawnEquipmentComponent 在装备变更时调用。
> @param Id   防具/服饰 ID，传 NAME_None 表示卸下该部位外观
> @param Type 防具部位

---

### 函数 `LoadProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent, Category="FightPawn|Appearance" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "FightPawn|Appearance") void LoadProtagonistAppearance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 加载主角外观（捏脸 profile）—— 主角 / bUseProtagonistAppearance 时调用，BP 子类实现。
>  仿 AEastRimWorldCharacter_Human::LoadProtagonistAppearance。

---

### 函数 `InitCharacterAppearanceById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent, Category="FightPawn|Appearance" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "FightPawn|Appearance") void InitCharacterAppearanceById(const FString& Id);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 按 CustomizationId 初始化角色外观 —— 普通弟子 NPC 时调用，BP 子类实现。
>  仿 AEastRimWorldCharacter_Human::InitCharacterAppearanceById。

---

### 函数 `ShowTipsInCharacterHead`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Tips" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TipsText` | `const FText&` |
| `（匿名/仅类型）` | [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md) TipType = [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md)::Type1 |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Tips") void ShowTipsInCharacterHead(const FText& TipsText, ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 头顶飘文字。C++ 入口：做世界类型判断后转 BP 实现的 k2_ShowTipsInCharacterHead。
>  与弟子一致：非 Station 地图只允许 MovesName（招式名）飘字。

---

### 函数 `k2_ShowTipsInCharacterHead`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TipsText` | `const FText&` |
| `（匿名/仅类型）` | [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md) TipType = [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md)::Type1 |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, DisplayName = "ShowTipsInCharacterHead") void k2_ShowTipsInCharacterHead(const FText& TipsText, ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 飘字 UI 本体由 BP 子类实现（仿弟子 BP_EastRimWorldCharacter_Human 的同名事件）。

---

### 函数 `GetSaveDataComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UFightPawnSaveDataComponent](FightPawnComponents/FightPawnSaveDataComponent__UFightPawnSaveDataComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnSaveDataComponent* GetSaveDataComponent() const { return SaveDataComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取存档数据组件

---

### 函数 `GetEquipmentComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UFightPawnEquipmentComponent](FightPawnComponents/FightPawnEquipmentComponent__UFightPawnEquipmentComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnEquipmentComponent* GetEquipmentComponent() const { return EquipmentComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取装备组件

---

### 函数 `GetCommonBuffComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UCommonBuffComponent](../Character/Components/CommonBuffComponent__UCommonBuffComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UCommonBuffComponent* GetCommonBuffComponent() const { return CommonBuffComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取通用 Buff 组件

---

### 函数 `GetCombatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | `UEastRimWorldCombatComponent*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UEastRimWorldCombatComponent* GetCombatComponent() const { return CombatComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取战斗组件

---

### 函数 `GetInventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UInventoryManagerComponent* GetInventoryManagerComponent() const { return InventoryManagerComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取背包管理组件

---

### 函数 `GetGrowUpComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UFightPawnGrowUpComponent](FightPawnComponents/FightPawnGrowUpComponent__UFightPawnGrowUpComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnGrowUpComponent* GetGrowUpComponent() const { return GrowUpComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取成长组件

---

### 函数 `GetInjuryComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | [UFightPawnInjuryComponent](FightPawnComponents/FightPawnInjuryComponent__UFightPawnInjuryComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnInjuryComponent* GetInjuryComponent() const { return InjuryComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取伤势组件

---

### 函数 `GetFootCircleEffectComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Components" |
| 返回类型 | `UNiagaraComponent*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UNiagaraComponent* GetFootCircleEffectComponent() const { return FootCircleEffectComponent; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取脚底阵营识别光圈的 Niagara 组件

---

### 函数 `RegisterInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewTarget` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RegisterInteractable(AActor* NewTarget);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注册一个可交互目标 Actor

---

### 函数 `UnregisterInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Target` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnregisterInteractable(AActor* Target);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注销指定的可交互目标 Actor

---

### 函数 `GetCurrentInteractable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `AActor*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) AActor* GetCurrentInteractable() const { return CurrentInteractableTarget; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前的可交互目标 Actor

---

### 函数 `FinishInteraction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FinishInteraction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前正在进行的交互

---

### 函数 `ActivateNormalAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Skill" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") bool ActivateNormalAttack();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放普通攻击（当前武器的 EquipWeaponAbility）

---

### 函数 `ActivateMoveSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Skill" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") bool ActivateMoveSlot(int32 SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放招式槽（SlotIndex: 0/1/2/3 对应 CarryingMoves[0/1/2/3]）

---

### 函数 `RefreshNormalAttackAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Skill" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") void RefreshNormalAttackAbility();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按当前主武器类型刷新普攻技能：从 NormalAttackConfig 查 EWeaponType→普攻ID，
> Grant 到 ASC 并缓存到 CurrentNormalAttackAbilityID。
> 在装备加载后（InitializeCharacterBySaveData 末尾）自动调用；换装后也可手动调。
> 查不到 / 无 DA / 无武器 时清空缓存，ActivateNormalAttack 会回退到武器 EquipmentAbility。

---

### 函数 `GetAllSkillInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="FightPawn|UI" |
| 返回类型 | TArray<[FFightPawnSkillSlotInfo](ERW_FightPawn__FFightPawnSkillSlotInfo.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|UI") TArray<FFightPawnSkillSlotInfo> GetAllSkillInfos() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 一次性返回所有技能槽信息（普攻 + 所有 CarryingMoves 槽位）。
> UI 在 Construct 时调一次，画图标 / 名字 / 缓存 SlotIndex<->Widget 映射。
> - 数组第 0 个：普攻（SlotIndex=-1）
> - 后续：1234... 技能槽（SlotIndex=0/1/2/...）
> - 仅返回 BookID 非空的槽位（空槽位不出现在数组里）

---

### 函数 `SetAITakeover`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|AI" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bEnable` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|AI") void SetAITakeover(bool bEnable);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开/关 AI 接管。
> - 开启：缓存当前玩家控制器 → 生成 AI 控制器 Possess 本 Pawn → 运行 AICombatBehaviorTree。
> - 关闭：AI 控制器 UnPossess → 切回缓存的玩家控制器 → 销毁临时 AI 控制器。

---

### 函数 `IsAITakeover`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|AI" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|AI") bool IsAITakeover() const { return bAITakeover; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回当前是否处于 AI 接管状态

---

### 函数 `StopAITakeoverBehaviorTree`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|AI" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|AI") void StopAITakeoverBehaviorTree();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 托管中时停止 AI 控制器的行为树(不解除托管/不切回玩家)。战斗结束时调用，让 AI 立即停手。非托管为空操作。

---

### 函数 `SetLastDamageInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Damage" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Information` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Damage") void SetLastDamageInformation(const FCharacterDeathInformation& Information) { LastDamageInformation = Information; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置最近一次受到伤害的信息

---

### 函数 `GetLastDamageInformation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Damage" |
| 返回类型 | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Damage") const FCharacterDeathInformation& GetLastDamageInformation() const { return LastDamageInformation; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取最近一次受到伤害的信息

---

### 函数 `IsDeadWaitingRespawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Death" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") bool IsDeadWaitingRespawn() const { return bIsDeadWaitingRespawn; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否处于死亡（待复活）状态。死亡期间禁普攻/技能/交互，输入转为自由相机。

---

### 函数 `GetRespawnDelaySeconds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Death" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") float GetRespawnDelaySeconds() const { return RespawnDelaySeconds; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取配置的复活倒计时总秒数。

---

### 函数 `GetRespawnRemainingSeconds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawn|Death" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") float GetRespawnRemainingSeconds() const { return RespawnRemainingSeconds; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前复活倒计时剩余秒数。未死亡时为 0。

---

### 函数 `K2_OnFightPawnDeath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="FightPawn|Death" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "FightPawn|Death", meta = (DisplayName = "OnFightPawnDeath")) void K2_OnFightPawnDeath();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnFightPawnDeath」。

**说明:**

> 死亡瞬间可选播放的倒地表现。蓝图实现就播，不实现也不影响逻辑（角色就停在原地）。

---

### 函数 `RestoreAliveStateForBattleEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Death" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Death") void RestoreAliveStateForBattleEnd();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [战斗结束-主控存活修复] 若主控在战场阵亡态（bIsDeadWaitingRespawn）时战斗结束（如占旗被队友占满），
>  正常的 5s 复活会被打断 → 写回弟子存档时会把 Health=0/致死伤势持久化成大世界"已死亡"。
>  本接口把主控就地恢复为进场满状态：停复活定时器 + 清死亡态 + 清战斗新增 GE/伤势 + 还原血量快照。
>  与 RespawnAtSpawnPoint 的区别：不传送、不记一条"复活"（战斗记录会话此时已结束）。非死亡态调用为空操作。
>  由 AWorldSectBattleManager::CommitFightPawnSaveDataToDisciple 在写回存档前调用。

---

### 函数 `GetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGenericTeamId` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取该 Pawn 的通用队伍 ID

---

### 函数 `GetTeamInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGameplayTeamInfo GetTeamInfo() override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取该 Pawn 的队伍信息（FGameplayTeamInfo）

---
