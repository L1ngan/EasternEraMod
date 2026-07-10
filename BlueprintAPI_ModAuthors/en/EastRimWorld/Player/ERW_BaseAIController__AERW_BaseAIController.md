# `class` `AERW_BaseAIController`

**Source header:** `EastRimWorld/Player/ERW_BaseAIController.h`

---

## Functional description (from header comments)

> AERW_BaseAIController —— 项目 AI 控制器公共基类
> 继承自 LQuickFrame 的 ALAICtrl。作为 AEastRimWorldAIController（NPC/GOAP 主控制器）
> 与 AERW_FightPawnAIController（门派战 FightPawn 托管控制器）的共同父类，
> 两者共用的逻辑（感知、团队态度、敌对判定、武器切换等）在此收敛。

## Blueprint-exposed variables

### Property `OnWeaponChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWeaponChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWeaponChanged OnWeaponChanged;` |

**Notes:**

> Delegate broadcast when a weapon change completes (OldWeapon to NewWeapon); moved down from AEastRimWorldAIController

---

### Property `SelfPerceiveHostileActors`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<AActor>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TArray<TObjectPtr<AActor>> SelfPerceiveHostileActors;` |

**Notes:**

> 自身感知到的敌对actor

---

### Property `Attackers`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<AActor>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TArray<TObjectPtr<AActor>> Attackers;` |

**Notes:**

> 攻击者 在脱离战斗后清理

---

### Property `InventoryManagerComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Inventory" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory") TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**Notes:**

> 库存组件（角色背包在控制器上；FightPawn 托管时在 OnPossess 指向 Pawn 库存）

---

### Property `AIPerceptionComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UAIPerceptionComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="AIPerception" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AIPerception", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;` |

**Notes:**

> 感知组件：下沉自 AEastRimWorldAIController，构造时创建并 SetPerceptionComponent 注册到框架，
> 两个子控制器共用同一份创建逻辑，子类构造函数不用再单独创建。

---

### Property `Weapons`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") TArray<FCharacterWeapon> Weapons;` |

**Notes:**

> —— 武器数据（子类各自填充 Weapons / 库存来源；外部有代码直接访问，需 public） ——

---

### Property `UseCharacterWeapon`

| Field | Details |
|------|------|
| C++ type | [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") FCharacterWeapon UseCharacterWeapon;` |

**Notes:**

> 当前使用的武器

---

### Property `UseCharacterWeaponInstance`

| Field | Details |
|------|------|
| C++ type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") UInventoryItemInstance* UseCharacterWeaponInstance = nullptr;` |

**Notes:**

> 当前使用的武器实例

---

### Property `NextChangeCharacterWeapon`

| Field | Details |
|------|------|
| C++ type | [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Equipment" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") FCharacterWeapon NextChangeCharacterWeapon;` |

**Notes:**

> 将要切换的武器

---

### Property `Scoffer`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TWeakObjectPtr<AActor> Scoffer;` |

**Notes:**

> 嘲讽者

---

### Property `AbilityReleaseTarget`

| Field | Details |
|------|------|
| C++ type | `AActor*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) AActor* AbilityReleaseTarget = nullptr;` |

**Notes:**

> 当前技能的释放目标

---

### Property `CurSelectAbilitySpec`

| Field | Details |
|------|------|
| C++ type | `FGameplayAbilitySpec` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) FGameplayAbilitySpec CurSelectAbilitySpec;` |

**Notes:**

> 当前选择释放的技能

---

### Property `PreRequisiteAbilitySpec`

| Field | Details |
|------|------|
| C++ type | `FGameplayAbilitySpec` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) FGameplayAbilitySpec PreRequisiteAbilitySpec;` |

**Notes:**

> 当前选择的前置技能 额外移动等

---

### Property `GameModeBase`

| Field | Details |
|------|------|
| C++ type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase = nullptr;` |

**Notes:**

> Cached reference to the game mode (AERW_GameModeBase)

---

## Blueprint-exposed functions

### Function `GetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGenericTeamId` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> ~ 团队态度：转发到被控 Pawn 的 IEastRimWorldTeamAgentInterface（pawn-无关，两个子控制器共用）

---

### Function `HoldWeaponAndSwitchCombatStance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void HoldWeaponAndSwitchCombatStance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 进入战斗时“拿起武器 + 切战斗姿态”：取 Weapons[0] 走 ChangeCharacterWeapon。

---

### Function `ChangeCharacterWeapon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ChangeCharacterWeapon(const FCharacterWeapon& CharacterWeapon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换角色武器（通过卸下当前武器的能力，能力结束回调里再装上新武器）。

---

### Function `IsInAttackTargetList`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsInAttackTargetList(AActor* InActor);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> InActor 是否是有效嘲讽者，或在当前 GetHostilePerceiveActors 结果里。

---
