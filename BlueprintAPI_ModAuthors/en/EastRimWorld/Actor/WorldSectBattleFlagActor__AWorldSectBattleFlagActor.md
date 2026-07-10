# `class` `AWorldSectBattleFlagActor`

**Source header:** `EastRimWorld/Actor/WorldSectBattleFlagActor.h`

---

## Functional description (from header comments)

> 门派战旗子 Actor。
> 负责：占领范围、进度计算、归属切换、UI 状态广播、蓝图表现扩展点。

## Blueprint-exposed variables

### Property `SceneRoot`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USceneComponent> SceneRoot;` |

**Notes:**

> 根组件，旗子所有子组件都挂在这里。

---

### Property `CaptureSphere`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USphereComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USphereComponent> CaptureSphere;` |

**Notes:**

> 占领检测范围。半径来自 FlagConfig.CaptureRadius。

---

### Property `FlagMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USkeletalMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<USkeletalMeshComponent> FlagMesh;` |

**Notes:**

> 旗子主体模型组件，蓝图可以在子类里换 Mesh / 材质。

---

### Property `CaptureRangeMesh`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UStaticMeshComponent> CaptureRangeMesh;` |

**Notes:**

> 占领范围显示模型，比如地面圆圈。缩放会跟 CaptureRadius 同步。

---

### Property `CaptureProgressWidget`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UWidgetComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UWidgetComponent> CaptureProgressWidget;` |

**Notes:**

> 旗子头顶 UI 组件，通常放占领进度条和文字。

---

### Property `FlagTypeMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<USkeletalMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TArray<TObjectPtr<USkeletalMesh>> FlagTypeMeshes;` |

**Notes:**

> 旗子类型对应的骨骼网格体：0=特殊旗，1=普通旗。

---

### Property `OwnerChangedAnimations`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UAnimationAsset>>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag") TArray<TObjectPtr<UAnimationAsset>> OwnerChangedAnimations;` |

**Notes:**

> 归属真正变化时播放一次的动画：0=特殊旗动画，1=普通旗动画。

---

### Property `CaptureEffectComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UNiagaraComponent> CaptureEffectComponent;` |

**Notes:**

> 争夺表现特效：CapturingAttack / CapturingDefense / Contested 状态常驻播放，其它状态关闭。

---

### Property `OwnerChangedEffectComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UNiagaraComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Flag") TObjectPtr<UNiagaraComponent> OwnerChangedEffectComponent;` |

**Notes:**

> 归属变化表现特效：CurrentOwner 真正变化时播放一次。

---

### Property `CaptureRangeMeshBaseRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Flag" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Flag", meta = (ClampMin = "1.0")) float CaptureRangeMeshBaseRadius = 50.f;` |

**Notes:**

> CaptureRangeMesh 原始模型半径。实际缩放 = CaptureRadius / CaptureRangeMeshBaseRadius。

---

### Property `FlagConfig`

| Field | Details |
|------|------|
| C++ type | [FWorldSectBattleFlagConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") FWorldSectBattleFlagConfig FlagConfig;` |

**Notes:**

> 旗子基础配置，来自旗子配置表。

---

### Property `FlagPointConfig`

| Field | Details |
|------|------|
| C++ type | [FWorldSectBattleFlagPointConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") FWorldSectBattleFlagPointConfig FlagPointConfig;` |

**Notes:**

> 旗子点位配置，包含 FlagID 和出生 Transform。

---

### Property `bFlagInitialized`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Flag" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Flag") bool bFlagInitialized = false;` |

**Notes:**

> 是否已经通过 InitWorldSectBattleFlag 完成配置初始化。

---

### Property `GenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Battle|Generation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Battle|Generation") TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**Notes:**

> 旗子周围怪物生成组件，根据 FlagConfig.MonsterGenerationConfigID 在运行时按旗子位置生成怪物。

---

### Property `AttackTeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Capture" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Capture") int32 AttackTeamID = INDEX_NONE;` |

**Notes:**

> 当前战斗里进攻方 TeamID，用于识别进入圈内的角色是否属于进攻方。

---

### Property `DefenseTeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|Capture" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WorldSectBattle|Capture") int32 DefenseTeamID = INDEX_NONE;` |

**Notes:**

> 当前战斗里防守方 TeamID，用于识别进入圈内的角色是否属于防守方。

---

### Property `CachedDefenseForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") FText CachedDefenseForceName;` |

**Notes:**

> 守方门派名（如“伏虎门”）。Manager 生成旗子设队伍时一并写入，
> 供旗子刷出的随机弟子改名成“{守方门派名}外门弟子”，避免回调里反查 Manager。

---

### Property `CachedDefenseForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") FGuid CachedDefenseForceGuid;` |

**Notes:**

> 守方门派 GUID（AWorldForce::SGUID）。Manager 生成旗子时一并写入，
> 用于旗子刷怪时把 MonsterGenerationConfig.ForceGuid 覆盖成真正守方门派，
> 让随机弟子（武学/外观/境界）跟随守方门派，而不是走 ForcePool 兜底随机。

---

### Property `CurrentOwner`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagOwner](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") EWorldSectBattleFlagOwner CurrentOwner = EWorldSectBattleFlagOwner::Neutral;` |

**Notes:**

> 当前旗子的最终归属。它用于材质、Buff、胜负等玩法逻辑。

---

### Property `RuntimeState`

| Field | Details |
|------|------|
| C++ type | [EWorldSectBattleFlagRuntimeState](WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") EWorldSectBattleFlagRuntimeState RuntimeState = EWorldSectBattleFlagRuntimeState::Idle;` |

**Notes:**

> 当前旗子的 UI 显示状态。它用于文字显示，不直接代表最终归属。

---

### Property `AttackCaptureValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") float AttackCaptureValue = 0.f;` |

**Notes:**

> 进攻方当前占领值。UI 百分比 = AttackCaptureValue / GetMaxCaptureValue()。

---

### Property `DefenseCaptureValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Capture") float DefenseCaptureValue = 0.f;` |

**Notes:**

> 防守方当前占领值。UI 百分比 = DefenseCaptureValue / GetMaxCaptureValue()。

---

### Property `OnCaptureTick`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleFlagCaptureTick` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagCaptureTick OnCaptureTick;` |

**Notes:**

> UI 进度和文字刷新代理。初始化、进出圈、占领值变化时都会广播。

---

### Property `OnCaptureOwnerChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleFlagOwnerChanged` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagOwnerChanged OnCaptureOwnerChanged;` |

**Notes:**

> 旗子归属变化代理。蓝图建议用它刷新模型、材质、特效，不要用它刷新进度条。

---

### Property `OnFlagOwnerApplied`

| Field | Details |
|------|------|
| C++ type | `FOnWorldSectBattleFlagOwnerApplied` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Capture" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Capture") FOnWorldSectBattleFlagOwnerApplied OnFlagOwnerApplied;` |

**Notes:**

> 旗子归属表现代理：初始化完成时执行一次，后续归属真正改变时再执行。蓝图可用它按归属切换 mesh。

---

## Blueprint-exposed functions

### Function `InitWorldSectBattleFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFlagConfig` | const [FWorldSectBattleFlagConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagConfig.md)& |
| `InFlagPointConfig` | const [FWorldSectBattleFlagPointConfig](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__FWorldSectBattleFlagPointConfig.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void InitWorldSectBattleFlag(const FWorldSectBattleFlagConfig& InFlagConfig, const FWorldSectBattleFlagPointConfig& InFlagPointConfig);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据配置表数据初始化旗子。Manager 生成旗子后调用一次。

---

### Function `RefreshCaptureRadius`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Flag") void RefreshCaptureRadius();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重新应用占领半径，并同步 CaptureSphere 和 CaptureRangeMesh 的大小。

---

### Function `GetFlagID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") int32 GetFlagID() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前旗子配置 ID。

---

### Function `GetFlagType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | [EWorldSectBattleFlagType](../WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") EWorldSectBattleFlagType GetFlagType() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前旗子类型：特殊旗 / 普通旗。

---

### Function `IsSpecialFlag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") bool IsSpecialFlag() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前旗子是否是特殊旗。特殊旗被进攻方占领会触发战斗结束。

---

### Function `GetCaptureCenter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `FVector` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") FVector GetCaptureCenter() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取旗子占领范围中心点，给 AI / 行为树巡逻使用。

---

### Function `GetCaptureRadius`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Flag" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Flag") float GetCaptureRadius() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取旗子占领范围半径，给 AI / 行为树巡逻使用。

---

### Function `SetCaptureTeamIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Capture" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAttackTeamID` | `int32` |
| `InDefenseTeamID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCaptureTeamIDs(int32 InAttackTeamID, int32 InDefenseTeamID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置本场战斗的进攻方和防守方 TeamID。Manager 生成旗子后写入。

---

### Function `SetCachedDefenseForceName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Capture" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDefenseForceName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCachedDefenseForceName(FText InDefenseForceName) { CachedDefenseForceName = MoveTemp(InDefenseForceName); }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 缓存守方门派名，供旗子刷出的随机弟子改名。Manager 生成旗子设队伍时一并写入。

---

### Function `SetCachedDefenseForceGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Capture" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDefenseForceGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Capture") void SetCachedDefenseForceGuid(FGuid InDefenseForceGuid) { CachedDefenseForceGuid = InDefenseForceGuid; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 缓存守方门派 GUID，供旗子刷怪时覆盖 MonsterGenerationConfig.ForceGuid。Manager 生成旗子时写入。

---

### Function `GetAttackCaptureValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetAttackCaptureValue() const { return AttackCaptureValue; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取进攻方当前占领值。

---

### Function `GetDefenseCaptureValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetDefenseCaptureValue() const { return DefenseCaptureValue; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取防守方当前占领值。

---

### Function `GetMaxCaptureValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") float GetMaxCaptureValue() const { return static_cast<float>(FMath::Max(0, FlagConfig.CaptureValue)); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取旗子占领总值，来自 FlagConfig.CaptureValue。

---

### Function `GetCaptureUISnapshot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Capture" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAttackCurrentValue` | `float&` |
| `OutDefenseCurrentValue` | `float&` |
| `OutMaxCaptureValue` | `float&` |
| `OutState` | [EWorldSectBattleFlagRuntimeState](WorldSectBattleFlagActor__EWorldSectBattleFlagRuntimeState.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Capture") void GetCaptureUISnapshot(float& OutAttackCurrentValue, float& OutDefenseCurrentValue, float& OutMaxCaptureValue, EWorldSectBattleFlagRuntimeState& OutState) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 给 UI 初始化用的快照函数。绑定 OnCaptureTick 后先调用一次，避免错过初始化广播。

---

### Function `ReceiveOnFlagConfigApplied`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnFlagConfigApplied")) void ReceiveOnFlagConfigApplied();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnFlagConfigApplied".

**Notes:**

> 配置应用完成后的蓝图扩展点。适合在蓝图里根据 FlagType 替换模型。

---

### Function `ReceiveOnActorEnterCaptureRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnActorEnterCaptureRange")) void ReceiveOnActorEnterCaptureRange(AActor* OtherActor);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnActorEnterCaptureRange".

**Notes:**

> 有 Actor 进入占领范围时的蓝图扩展点。

---

### Function `ReceiveOnActorLeaveCaptureRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|Flag" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Flag", meta = (DisplayName = "OnActorLeaveCaptureRange")) void ReceiveOnActorLeaveCaptureRange(AActor* OtherActor);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnActorLeaveCaptureRange".

**Notes:**

> 有 Actor 离开占领范围时的蓝图扩展点。

---
