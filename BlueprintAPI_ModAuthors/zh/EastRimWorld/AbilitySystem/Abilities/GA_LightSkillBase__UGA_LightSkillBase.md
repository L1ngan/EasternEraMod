# `class` `UGA_LightSkillBase`

**源码头文件:** `EastRimWorld/AbilitySystem/Abilities/GA_LightSkillBase.h`

---

## 功能说明（来自头文件注释）

> 轻功（位移类）GameplayAbility 基类。位移通过「计算」确定，不依赖动画根运动；动画仅作表现。
> 流程（仅 AbilityAttackType == LightSkill 生效）：
>   1) 解算参数：FGameAbilityStruct 的 LightSkill 字段 + ChangeLightSkillParam 词条 → 距离/速度/瞬移/生成物/施法Tag+GE。
>   2) 按使用场景（GameAbilityStruct.AbilityUsageScenario）决定方向与距离：
>      - OffensiveDisplacementAbility（接近）：朝目标；移动距离≥到目标距离则停在目标面前，否则按移动距离。
>      - KeepAwayFromAbility（远离）：背离目标，按最大移动距离。
>      - 瞬移（bTeleportToFront/Back）：UseDistance（释放距离）< 到目标距离（或无目标）则不可释放（取消，不消耗）；否则瞬移到目标前/后。
>   3) bLightSkillCheckCollision 为真时，沿路径用 SweepMultiByObjectType 贴地扫描（跳过可行走面，仅在墙体/敌人/释放目标处提前停）。
>   4) 位移：非瞬移用「定时器分步沿地面推进」（MOVE_None 接管移动 + 每步贴地；向上仅允许最大台阶高度，避免被凸起物顶到空中；向下放宽以跟随下坡）。瞬移用 SetActorLocation。
>   5) 表现：一张蒙太奇切 Start/Loop/End 三段，由 K2_OnActionBegin/Loop/End 驱动蓝图播放（循环段建议关根运动）。
>      正常到达播收招（End 段）；被打断（Cancel）不播收招，并停掉当前蒙太奇。
> 用法：将轻功蓝图 reparent 到本类；在蓝图 OnActionBegin/Loop/End 中按 LightSkillStart/Loop/EndSection 播放蒙太奇切片。

## 蓝图暴露变量

### 属性 `Resolved`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FLightSkillResolvedParams](../../MartialArts/MartialArtsSkillEntryChangeLightSkill__FLightSkillResolvedParams.md) |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(Transient, BlueprintReadOnly, Category="LightSkill") FLightSkillResolvedParams Resolved;` |

**说明:**

> 运行时解算结果

---

### 属性 `LightSkillTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(Transient, BlueprintReadOnly, Category="LightSkill") TObjectPtr<AActor> LightSkillTarget = nullptr;` |

**说明:**

> 本次释放的目标

---

### 属性 `bTeleport`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(Transient, BlueprintReadOnly, Category="LightSkill") bool bTeleport = false;` |

**说明:**

> 本次是否为瞬移

---

### 属性 `bBlocked`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(Transient, BlueprintReadOnly, Category="LightSkill") bool bBlocked = false;` |

**说明:**

> 本次是否撞到障碍

---
