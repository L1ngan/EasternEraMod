# `class` `AERW_FightPawnAIController`

**源码头文件:** `EastRimWorld/Player/ERW_FightPawnAIController.h`

---

## 功能说明（来自头文件注释）

> AERW_FightPawnAIController —— 门派战 FightPawn 专用的轻量 AI 控制器
> 设计意图：FightPawn 平时由 APlayerController 控制；开启"AI 接管/托管"时，
> 由本控制器 Possess 并运行行为树。刻意不复用 AEastRimWorldAIController
> （那套硬绑 AEastRimWorldCharacter，且带 GOAP/存档，接过来会空指针崩），
> 只把其中 pawn-无关的战斗核心（团队态度、感知选敌）搬过来精简使用。
> - 不接 GOAP、不接存档（ISAVIOR_*）
> - 感知（Sight）+ 敌对列表维护 + 团队态度转发（走 FightPawn 的 IEastRimWorldTeamAgentInterface）
> - 行为状态：仅 InStroll / InBattle / Death 三种，随感知敌对列表变化自动切换战斗/闲逛
> - 行为树由 FightPawn::SetAITakeover 时传入并 RunBehaviorTree（BT 未指派则只挂感知，不崩）

## 蓝图暴露变量

### 属性 `CharacterBehaviorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |
| 反射说明符 | BlueprintReadOnly, Category="FightPawnAI" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FightPawnAI") ECharacterBehaviorState CharacterBehaviorState = ECharacterBehaviorState::None;` |

**说明:**

> 当前行为状态（存在控制器上，FightPawn 经 IEastRimWorldCommonInterface 转发查询）。
>  默认 None：SetAITakeover 里 RunBehaviorTree 之后 SetCharacterBehaviorState(InStroll) 才能真正触发切换并写黑板
>  （同状态守卫会挡掉 InStroll→InStroll）。

---

## 蓝图暴露函数

### 函数 `GetControlledFightPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="FightPawnAI" |
| 返回类型 | [AERW_FightPawn](../Framework/ERW_FightPawn__AERW_FightPawn.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "FightPawnAI") AERW_FightPawn* GetControlledFightPawn() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> FindAttackTarget_Implementation / SelectCanActivateBattleAbility_Implementation 已在基类 AERW_BaseAIController 实现，直接继承

---
