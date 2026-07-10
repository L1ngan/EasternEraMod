# `class` `AERW_BaseAIController`

**源码头文件:** `EastRimWorld/Player/ERW_BaseAIController.h`

---

## 功能说明（来自头文件注释）

> AERW_BaseAIController —— 项目 AI 控制器公共基类
> 继承自 LQuickFrame 的 ALAICtrl。作为 AEastRimWorldAIController（NPC/GOAP 主控制器）
> 与 AERW_FightPawnAIController（门派战 FightPawn 托管控制器）的共同父类，
> 两者共用的逻辑（感知、团队态度、敌对判定、武器切换等）在此收敛。

## 蓝图暴露变量

### 属性 `OnWeaponChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWeaponChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWeaponChanged OnWeaponChanged;` |

**说明:**

> 武器切换完成通知委托（旧武器 OldWeapon → 新武器 NewWeapon），下沉自 AEastRimWorldAIController

---

### 属性 `SelfPerceiveHostileActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<AActor>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TArray<TObjectPtr<AActor>> SelfPerceiveHostileActors;` |

**说明:**

> 自身感知到的敌对actor

---

### 属性 `Attackers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<AActor>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TArray<TObjectPtr<AActor>> Attackers;` |

**说明:**

> 攻击者 在脱离战斗后清理

---

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Inventory" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory") TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**说明:**

> 库存组件（角色背包在控制器上；FightPawn 托管时在 OnPossess 指向 Pawn 库存）

---

### 属性 `AIPerceptionComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UAIPerceptionComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="AIPerception" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AIPerception", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;` |

**说明:**

> 感知组件：下沉自 AEastRimWorldAIController，构造时创建并 SetPerceptionComponent 注册到框架，
> 两个子控制器共用同一份创建逻辑，子类构造函数不用再单独创建。

---

### 属性 `Weapons`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") TArray<FCharacterWeapon> Weapons;` |

**说明:**

> —— 武器数据（子类各自填充 Weapons / 库存来源；外部有代码直接访问，需 public） ——

---

### 属性 `UseCharacterWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") FCharacterWeapon UseCharacterWeapon;` |

**说明:**

> 当前使用的武器

---

### 属性 `UseCharacterWeaponInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") UInventoryItemInstance* UseCharacterWeaponInstance = nullptr;` |

**说明:**

> 当前使用的武器实例

---

### 属性 `NextChangeCharacterWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) |
| 反射说明符 | BlueprintReadOnly, Category="Equipment" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Equipment") FCharacterWeapon NextChangeCharacterWeapon;` |

**说明:**

> 将要切换的武器

---

### 属性 `Scoffer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TWeakObjectPtr<AActor> Scoffer;` |

**说明:**

> 嘲讽者

---

### 属性 `AbilityReleaseTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) AActor* AbilityReleaseTarget = nullptr;` |

**说明:**

> 当前技能的释放目标

---

### 属性 `CurSelectAbilitySpec`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAbilitySpec` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) FGameplayAbilitySpec CurSelectAbilitySpec;` |

**说明:**

> 当前选择释放的技能

---

### 属性 `PreRequisiteAbilitySpec`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAbilitySpec` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) FGameplayAbilitySpec PreRequisiteAbilitySpec;` |

**说明:**

> 当前选择的前置技能 额外移动等

---

### 属性 `GameModeBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase = nullptr;` |

**说明:**

> 缓存的游戏模式（AERW_GameModeBase）引用

---

## 蓝图暴露函数

### 函数 `GetGenericTeamId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGenericTeamId` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ~ 团队态度：转发到被控 Pawn 的 IEastRimWorldTeamAgentInterface（pawn-无关，两个子控制器共用）

---

### 函数 `HoldWeaponAndSwitchCombatStance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void HoldWeaponAndSwitchCombatStance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 进入战斗时“拿起武器 + 切战斗姿态”：取 Weapons[0] 走 ChangeCharacterWeapon。

---

### 函数 `ChangeCharacterWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWeapon` | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ChangeCharacterWeapon(const FCharacterWeapon& CharacterWeapon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 切换角色武器（通过卸下当前武器的能力，能力结束回调里再装上新武器）。

---

### 函数 `IsInAttackTargetList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsInAttackTargetList(AActor* InActor);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> InActor 是否是有效嘲讽者，或在当前 GetHostilePerceiveActors 结果里。

---
