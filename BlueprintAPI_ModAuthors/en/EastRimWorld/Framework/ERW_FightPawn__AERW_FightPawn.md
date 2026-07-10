# `class` `AERW_FightPawn`

**Source header:** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## Functional description (from header comments)

> AERW_FightPawn - 门派战俯视角战斗主角
> 俯视角相机 + WASD 移动 + 交互系统（旧式输入）
> 数据初始化、能力、特性、Buff、伤势、武学、外观等全部通过专用组件承载，
> 不再依赖 AEastRimWorldCharacter 类型链路。

## Blueprint-exposed variables

### Property `AbilitySystemComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldAbilitySystemComponent](../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Ability" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Ability") TObjectPtr<UEastRimWorldAbilitySystemComponent> AbilitySystemComponent;` |

**Notes:**

> Ability system component (ASC) hosting this pawn's abilities and attribute sets

---

### Property `SaveDataComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFightPawnSaveDataComponent](FightPawnComponents/FightPawnSaveDataComponent__UFightPawnSaveDataComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnSaveDataComponent> SaveDataComponent;` |

**Notes:**

> Save data component (UFightPawnSaveDataComponent)

---

### Property `EquipmentComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFightPawnEquipmentComponent](FightPawnComponents/FightPawnEquipmentComponent__UFightPawnEquipmentComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnEquipmentComponent> EquipmentComponent;` |

**Notes:**

> Equipment component (UFightPawnEquipmentComponent)

---

### Property `CommonBuffComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonBuffComponent](../Character/Components/CommonBuffComponent__UCommonBuffComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UCommonBuffComponent> CommonBuffComponent;` |

**Notes:**

> Common buff component managing buffs on this pawn

---

### Property `CombatComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldCombatComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UEastRimWorldCombatComponent> CombatComponent;` |

**Notes:**

> Combat component (UEastRimWorldCombatComponent)

---

### Property `HealthComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldHealthComponent](../Character/Components/EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UEastRimWorldHealthComponent> HealthComponent;` |

**Notes:**

> 仿弟子（AEastRimWorldCharacter）创建的健康组件。HealthSet 死亡链路 FightPawn 分支需要它来调 StartDeath()。

---

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**Notes:**

> Inventory manager component

---

### Property `GrowUpComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFightPawnGrowUpComponent](FightPawnComponents/FightPawnGrowUpComponent__UFightPawnGrowUpComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnGrowUpComponent> GrowUpComponent;` |

**Notes:**

> Grow-up (progression) component (UFightPawnGrowUpComponent)

---

### Property `InjuryComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFightPawnInjuryComponent](FightPawnComponents/FightPawnInjuryComponent__UFightPawnInjuryComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Components" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Components") TObjectPtr<UFightPawnInjuryComponent> InjuryComponent;` |

**Notes:**

> Injury component (UFightPawnInjuryComponent)

---

### Property `FootCircleEffectComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|VFX" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|VFX") TObjectPtr<UNiagaraComponent> FootCircleEffectComponent;` |

**Notes:**

> 脚底阵营识别光圈组件（常驻）。进入门派战后会按当前阵营替换 Niagara 资源。

---

### Property `SectBattleFootCircleEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UNiagaraSystem>>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|VFX" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|VFX") TArray<TObjectPtr<UNiagaraSystem>> SectBattleFootCircleEffects;` |

**Notes:**

> 门派战脚底特效数组：0=进攻方，1=防守方。蓝图 BP_FightPawn 中配置两个 Niagara 资源。

---

### Property `CameraSpringArm`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USpringArmComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Camera" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<USpringArmComponent> CameraSpringArm;` |

**Notes:**

> =============================================================================
> 相机
> =============================================================================

---

### Property `FightCamera`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCameraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Camera" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Camera") TObjectPtr<UCameraComponent> FightCamera;` |

**Notes:**

> Top-down combat camera component

---

### Property `CameraZoomMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMax = 1400.f;` |

**Notes:**

> Maximum camera zoom distance (spring arm length upper limit), default 1400

---

### Property `CameraZoomMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraZoomMin = 300.f;` |

**Notes:**

> Minimum camera zoom distance (spring arm length lower limit), default 300

---

### Property `CameraPitchFar`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchFar = -40.f;` |

**Notes:**

> Camera pitch angle in degrees at maximum zoom distance, default -40

---

### Property `CameraPitchNear`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraPitchNear = -10.f;` |

**Notes:**

> Camera pitch angle in degrees at minimum zoom distance, default -10

---

### Property `CameraLagSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Camera" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Camera") float CameraLagSpeed = 18.f;` |

**Notes:**

> Camera spring arm lag (follow) speed, default 18

---

### Property `CurrentInteractableTarget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Interaction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") TObjectPtr<AActor> CurrentInteractableTarget;` |

**Notes:**

> Currently registered interactable target actor

---

### Property `bIsInteracting`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Interaction" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawn|Interaction") bool bIsInteracting = false;` |

**Notes:**

> Whether an interaction is currently in progress

---

### Property `NormalAttackConfig`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UFightPawnNormalAttackConfig](FightPawnComponents/FightPawnNormalAttackConfig__UFightPawnNormalAttackConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Skill" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Skill") TObjectPtr<UFightPawnNormalAttackConfig> NormalAttackConfig;` |

**Notes:**

> 普攻配置 DA：武器类型 → 普攻技能ID。BP_FightPawn 里指派。

---

### Property `HitPauseDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|HitPause" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|HitPause") float HitPauseDuration = 0.05f;` |

**Notes:**

> 普攻命中卡肉：只影响 FightPawn 自己当前动画，不改别人/不动大世界。策划可调时间和倍率。

---

### Property `HitPauseAnimRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|HitPause" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|HitPause") float HitPauseAnimRate = 0.2f;` |

**Notes:**

> Animation play-rate multiplier applied to the FightPawn's own current animation during the hit-pause window (default 0.2).

---

### Property `OnSkillCooldownStarted`

| Field | Details |
|------|------|
| C++ type | `FOnFightPawnSkillCooldownStarted` |
| Reflection specifiers | BlueprintAssignable, Category="FightPawn|UI" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|UI") FOnFightPawnSkillCooldownStarted OnSkillCooldownStarted;` |

**Notes:**

> 技能 CD 开始广播（GA Commit 时触发）。
> UI 收到 (SlotIndex, AbilityID, Duration) → 启动本地倒计时（Timeline）。
> 注：仅 FightPawn 关心的 GA（普攻 + 技能槽 GA）会广播；其他 GA 静默。

---

### Property `OnSkillCooldownCleared`

| Field | Details |
|------|------|
| C++ type | `FOnFightPawnSkillCooldownCleared` |
| Reflection specifiers | BlueprintAssignable, Category="FightPawn|UI" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|UI") FOnFightPawnSkillCooldownCleared OnSkillCooldownCleared;` |

**Notes:**

> 技能 CD 被整体清空。UI 绑定后清掉所有技能格的 CD 显示。

---

### Property `OnAITakeoverChanged`

| Field | Details |
|------|------|
| C++ type | `FOnFightPawnAITakeoverChanged` |
| Reflection specifiers | BlueprintAssignable, Category="FightPawn|AI" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|AI") FOnFightPawnAITakeoverChanged OnAITakeoverChanged;` |

**Notes:**

> AI 托管状态变化广播（参数=是否托管中）。SetAITakeover 实际切换后触发。

---

### Property `AITakeoverControllerClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<AController>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|AI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|AI") TSubclassOf<AController> AITakeoverControllerClass;` |

**Notes:**

> AI 接管使用的控制器类（默认 AERW_FightPawnAIController，可在 BP 指定其 BP 子类）。

---

### Property `AICombatBehaviorTree`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UBehaviorTree>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|AI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|AI") TObjectPtr<UBehaviorTree> AICombatBehaviorTree;` |

**Notes:**

> AI 接管时运行的战斗行为树（BT 做好后在此指派；为空则只挂感知不跑树）。

---

### Property `bAITakeover`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|AI" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "FightPawn|AI") bool bAITakeover = false;` |

**Notes:**

> 当前是否处于 AI 接管状态。

---

### Property `RollAbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Skill" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Skill") FName RollAbilityID = TEXT("QingGong_FuBenUsed_01");` |

**Notes:**

> 空格翻滚（副本轻功）使用的 GA ID。FightPawn 初始化后会确保授予到 ASC，按空格触发。

---

### Property `MoveForwardAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveForwardAction;` |

**Notes:**

> 前进 IA（W）。触发即 MoveForward(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveForward。

---

### Property `MoveBackwardAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveBackwardAction;` |

**Notes:**

> 后退 IA（S）。触发即 MoveForward(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveBackward。

---

### Property `MoveLeftAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveLeftAction;` |

**Notes:**

> 左移 IA（A）。触发即 MoveRight(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveLeft。

---

### Property `MoveRightAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> MoveRightAction;` |

**Notes:**

> 右移 IA（D）。触发即 MoveRight(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraMoveRight。

---

### Property `ZoomInAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> ZoomInAction;` |

**Notes:**

> 拉近 IA（滚轮上）。触发即 OnMouseWheel(+1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraZoomIn。

---

### Property `ZoomOutAction`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputAction>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputAction> ZoomOutAction;` |

**Notes:**

> 拉远 IA（滚轮下）。触发即 OnMouseWheel(-1)。在 BP_FightPawn 指派 /Game/Blueprints/Input/Action/IA_CameraZoomOut。

---

### Property `FightInputMappingContext`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UInputMappingContext>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") TObjectPtr<UInputMappingContext> FightInputMappingContext;` |

**Notes:**

> 战斗移动/缩放的 InputMappingContext（W/S/A/D → 4 方向 IA；滚轮 → 缩放 IA）。possess 时 AddMappingContext。在 BP_FightPawn 指派。

---

### Property `FightInputMappingPriority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Input" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|Input") int32 FightInputMappingPriority = 100;` |

**Notes:**

> 战斗 IMC 的优先级。需高于 UI 导航 IMC，避免移动/缩放被吞。

---

### Property `GuardCursorWidgetClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UUserWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TSubclassOf<UUserWidget> GuardCursorWidgetClass;` |

**Notes:**

> 驻守选点模式下的鼠标光标 Widget。美术后续指派。

---

### Property `GuardMarkVFX`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraSystem>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TObjectPtr<UNiagaraSystem> GuardMarkVFX;` |

**Notes:**

> 驻守标记 Niagara 特效。右键确认驻守点后在该点常驻显示（每队各一个，挂战斗子关卡）。

---

### Property `GuardPickTraceChannel`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ECollisionChannel>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|GuardPick" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "FightPawn|GuardPick") TEnumAsByte<ECollisionChannel> GuardPickTraceChannel = ECC_Visibility;` |

**Notes:**

> 选取地面的 LineTrace 通道。默认 Visibility。

---

### Property `RespawnDelaySeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Death" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Death", meta = (ClampMin = "0.0")) float RespawnDelaySeconds = 5.f;` |

**Notes:**

> 死亡复活倒计时秒数。

---

### Property `DeathFreeCameraMoveSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|Death" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Death", meta = (ClampMin = "0.0")) float DeathFreeCameraMoveSpeed = 2000.f;` |

**Notes:**

> 死亡自由相机的平移速度（WASD）。

---

### Property `OnFightPawnRespawnCountdown`

| Field | Details |
|------|------|
| C++ type | `FOnFightPawnRespawnCountdown` |
| Reflection specifiers | BlueprintAssignable, Category="FightPawn|Death" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "FightPawn|Death") FOnFightPawnRespawnCountdown OnFightPawnRespawnCountdown;` |

**Notes:**

> 复活倒计时每秒广播剩余秒数。UI 读秒。

---

## Blueprint-exposed functions

### Function `InitializeCharacterBySaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|SaveData" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterSaveData` | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void InitializeCharacterBySaveData(const FCharacterSaveData& InCharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过角色存档数据初始化玩家 Pawn

---

### Function `UpdateCharacterSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|SaveData" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|SaveData") void UpdateCharacterSaveData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把当前 Pawn 上的运行时状态回写到存档

---

### Function `GetCharacterSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|SaveData" |
| Return type | const [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|SaveData") const FCharacterSaveData& GetCharacterSaveData() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the current character save data (const reference)

---

### Function `GiveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |
| `1` | `int Level =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool GiveAbilityByAbilityID(FName GameplayAbilityID, int Level = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Grants a gameplay ability by ability ID at the given level; returns true on success

---

### Function `RemoveAbilityByAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Ability" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAbilityID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Ability") bool RemoveAbilityByAbilityID(FName GameplayAbilityID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes a granted gameplay ability by ability ID; returns true on success

---

### Function `AddNewCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Characteristic" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewCharacteristicID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void AddNewCharacteristic(const FName& NewCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds a new characteristic with the given ID to this pawn

---

### Function `RemoveCharacteristic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Characteristic" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RemoveCharacteristicID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Characteristic") void RemoveCharacteristic(const FName& RemoveCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the characteristic with the given ID

---

### Function `OpenDanTian`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Cultivation" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Cultivation") void OpenDanTian();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Opens the character's DanTian (cultivation feature entry)

---

### Function `ApplyCustomApparels`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Appearance" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bUseApparel` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Appearance") void ApplyCustomApparels(bool bUseApparel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies or removes custom apparel appearance, controlled by bUseApparel

---

### Function `ChangeApparelById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="FightPawn|Equipment" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `FName` |
| `Type` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "FightPawn|Equipment") void ChangeApparelById(FName Id, EArmorType Type);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 切换外观 —— 由 BP 子类实现，BP 里把请求路由到 BP_CharacterCustomization 等外观组件。
> 由 UFightPawnEquipmentComponent 在装备变更时调用。
> @param Id   防具/服饰 ID，传 NAME_None 表示卸下该部位外观
> @param Type 防具部位

---

### Function `LoadProtagonistAppearance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent, Category="FightPawn|Appearance" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "FightPawn|Appearance") void LoadProtagonistAppearance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 加载主角外观（捏脸 profile）—— 主角 / bUseProtagonistAppearance 时调用，BP 子类实现。
>  仿 AEastRimWorldCharacter_Human::LoadProtagonistAppearance。

---

### Function `InitCharacterAppearanceById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent, Category="FightPawn|Appearance" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "FightPawn|Appearance") void InitCharacterAppearanceById(const FString& Id);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 按 CustomizationId 初始化角色外观 —— 普通弟子 NPC 时调用，BP 子类实现。
>  仿 AEastRimWorldCharacter_Human::InitCharacterAppearanceById。

---

### Function `ShowTipsInCharacterHead`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Tips" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TipsText` | `const FText&` |
| `(unnamed / type only)` | [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md) TipType = [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md)::Type1 |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Tips") void ShowTipsInCharacterHead(const FText& TipsText, ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 头顶飘文字。C++ 入口：做世界类型判断后转 BP 实现的 k2_ShowTipsInCharacterHead。
>  与弟子一致：非 Station 地图只允许 MovesName（招式名）飘字。

---

### Function `k2_ShowTipsInCharacterHead`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TipsText` | `const FText&` |
| `(unnamed / type only)` | [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md) TipType = [ECharacterHeadTipType](../ERW_Enumerations__ECharacterHeadTipType.md)::Type1 |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, DisplayName = "ShowTipsInCharacterHead") void k2_ShowTipsInCharacterHead(const FText& TipsText, ECharacterHeadTipType TipType = ECharacterHeadTipType::Type1);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 飘字 UI 本体由 BP 子类实现（仿弟子 BP_EastRimWorldCharacter_Human 的同名事件）。

---

### Function `GetSaveDataComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UFightPawnSaveDataComponent](FightPawnComponents/FightPawnSaveDataComponent__UFightPawnSaveDataComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnSaveDataComponent* GetSaveDataComponent() const { return SaveDataComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the save data component

---

### Function `GetEquipmentComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UFightPawnEquipmentComponent](FightPawnComponents/FightPawnEquipmentComponent__UFightPawnEquipmentComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnEquipmentComponent* GetEquipmentComponent() const { return EquipmentComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the equipment component

---

### Function `GetCommonBuffComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UCommonBuffComponent](../Character/Components/CommonBuffComponent__UCommonBuffComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UCommonBuffComponent* GetCommonBuffComponent() const { return CommonBuffComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the common buff component

---

### Function `GetCombatComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | `UEastRimWorldCombatComponent*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UEastRimWorldCombatComponent* GetCombatComponent() const { return CombatComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the combat component

---

### Function `GetInventoryManagerComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UInventoryManagerComponent* GetInventoryManagerComponent() const { return InventoryManagerComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the inventory manager component

---

### Function `GetGrowUpComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UFightPawnGrowUpComponent](FightPawnComponents/FightPawnGrowUpComponent__UFightPawnGrowUpComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnGrowUpComponent* GetGrowUpComponent() const { return GrowUpComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the grow-up (progression) component

---

### Function `GetInjuryComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | [UFightPawnInjuryComponent](FightPawnComponents/FightPawnInjuryComponent__UFightPawnInjuryComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UFightPawnInjuryComponent* GetInjuryComponent() const { return InjuryComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the injury component

---

### Function `GetFootCircleEffectComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Components" |
| Return type | `UNiagaraComponent*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Components") UNiagaraComponent* GetFootCircleEffectComponent() const { return FootCircleEffectComponent; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the Niagara component for the team-identifying foot circle effect

---

### Function `RegisterInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTarget` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterInteractable(AActor* NewTarget);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Registers an actor as an interactable target

---

### Function `UnregisterInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Target` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterInteractable(AActor* Target);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unregisters the given interactable target actor

---

### Function `GetCurrentInteractable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `AActor*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) AActor* GetCurrentInteractable() const { return CurrentInteractableTarget; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the current interactable target actor

---

### Function `FinishInteraction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FinishInteraction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Finishes the interaction currently in progress

---

### Function `ActivateNormalAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Skill" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") bool ActivateNormalAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 释放普通攻击（当前武器的 EquipWeaponAbility）

---

### Function `ActivateMoveSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Skill" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") bool ActivateMoveSlot(int32 SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 释放招式槽（SlotIndex: 0/1/2/3 对应 CarryingMoves[0/1/2/3]）

---

### Function `RefreshNormalAttackAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Skill" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Skill") void RefreshNormalAttackAbility();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按当前主武器类型刷新普攻技能：从 NormalAttackConfig 查 EWeaponType→普攻ID，
> Grant 到 ASC 并缓存到 CurrentNormalAttackAbilityID。
> 在装备加载后（InitializeCharacterBySaveData 末尾）自动调用；换装后也可手动调。
> 查不到 / 无 DA / 无武器 时清空缓存，ActivateNormalAttack 会回退到武器 EquipmentAbility。

---

### Function `GetAllSkillInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="FightPawn|UI" |
| Return type | TArray<[FFightPawnSkillSlotInfo](ERW_FightPawn__FFightPawnSkillSlotInfo.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|UI") TArray<FFightPawnSkillSlotInfo> GetAllSkillInfos() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 一次性返回所有技能槽信息（普攻 + 所有 CarryingMoves 槽位）。
> UI 在 Construct 时调一次，画图标 / 名字 / 缓存 SlotIndex<->Widget 映射。
> - 数组第 0 个：普攻（SlotIndex=-1）
> - 后续：1234... 技能槽（SlotIndex=0/1/2/...）
> - 仅返回 BookID 非空的槽位（空槽位不出现在数组里）

---

### Function `SetAITakeover`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|AI" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bEnable` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|AI") void SetAITakeover(bool bEnable);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开/关 AI 接管。
> - 开启：缓存当前玩家控制器 → 生成 AI 控制器 Possess 本 Pawn → 运行 AICombatBehaviorTree。
> - 关闭：AI 控制器 UnPossess → 切回缓存的玩家控制器 → 销毁临时 AI 控制器。

---

### Function `IsAITakeover`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|AI" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|AI") bool IsAITakeover() const { return bAITakeover; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns whether the pawn is currently under AI takeover

---

### Function `StopAITakeoverBehaviorTree`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|AI" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|AI") void StopAITakeoverBehaviorTree();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 托管中时停止 AI 控制器的行为树(不解除托管/不切回玩家)。战斗结束时调用，让 AI 立即停手。非托管为空操作。

---

### Function `SetLastDamageInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Damage" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Information` | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Damage") void SetLastDamageInformation(const FCharacterDeathInformation& Information) { LastDamageInformation = Information; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the information of the last damage received

---

### Function `GetLastDamageInformation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Damage" |
| Return type | const [FCharacterDeathInformation](../Struct/CharacterDeathInformation__FCharacterDeathInformation.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Damage") const FCharacterDeathInformation& GetLastDamageInformation() const { return LastDamageInformation; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the information of the last damage received

---

### Function `IsDeadWaitingRespawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Death" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") bool IsDeadWaitingRespawn() const { return bIsDeadWaitingRespawn; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否处于死亡（待复活）状态。死亡期间禁普攻/技能/交互，输入转为自由相机。

---

### Function `GetRespawnDelaySeconds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Death" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") float GetRespawnDelaySeconds() const { return RespawnDelaySeconds; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取配置的复活倒计时总秒数。

---

### Function `GetRespawnRemainingSeconds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="FightPawn|Death" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "FightPawn|Death") float GetRespawnRemainingSeconds() const { return RespawnRemainingSeconds; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前复活倒计时剩余秒数。未死亡时为 0。

---

### Function `K2_OnFightPawnDeath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="FightPawn|Death" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "FightPawn|Death", meta = (DisplayName = "OnFightPawnDeath")) void K2_OnFightPawnDeath();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnFightPawnDeath".

**Notes:**

> 死亡瞬间可选播放的倒地表现。蓝图实现就播，不实现也不影响逻辑（角色就停在原地）。

---

### Function `RestoreAliveStateForBattleEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="FightPawn|Death" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Death") void RestoreAliveStateForBattleEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [战斗结束-主控存活修复] 若主控在战场阵亡态（bIsDeadWaitingRespawn）时战斗结束（如占旗被队友占满），
>  正常的 5s 复活会被打断 → 写回弟子存档时会把 Health=0/致死伤势持久化成大世界"已死亡"。
>  本接口把主控就地恢复为进场满状态：停复活定时器 + 清死亡态 + 清战斗新增 GE/伤势 + 还原血量快照。
>  与 RespawnAtSpawnPoint 的区别：不传送、不记一条"复活"（战斗记录会话此时已结束）。非死亡态调用为空操作。
>  由 AWorldSectBattleManager::CommitFightPawnSaveDataToDisciple 在写回存档前调用。

---

### Function `GetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGenericTeamId` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns this pawn's generic team ID

---

### Function `GetTeamInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGameplayTeamInfo GetTeamInfo() override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns this pawn's team info (FGameplayTeamInfo)

---
