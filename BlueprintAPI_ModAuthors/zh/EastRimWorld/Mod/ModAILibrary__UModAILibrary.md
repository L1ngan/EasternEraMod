# `class` `UModAILibrary`

**源码头文件:** `EastRimWorld/Mod/ModAILibrary.h`

---

## 功能说明（来自头文件注释）

> Mod 的 AI 接口：本门弟子的工作优先级、重置卡住的计划。
> Lua：UE.UModAILibrary.SetCharacterWorkPriority(...)、UE.UModAILibrary.ResetCharacterPlan(...)
> 失败时返回 false，原因写进调用方 Mod 的日志（Mod.Status 与 -ModConsole 可见）。
> 被困事件 OnCharacterTrapped 见 ModEventBus.h，Mod 可以在回调里调 ResetCharacterPlan。

## 蓝图暴露函数

### 函数 `SetCharacterWorkPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `GoalId` | `FName` |
| `Priority` | `int32` |
| `false` | `bool bCreateIfMissing =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool SetCharacterWorkPriority(AEastRimWorldCharacter_Human* Character, FName GoalId, int32 Priority, bool bCreateIfMissing = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置本门弟子某项工作的优先级，与工作优先级界面同口径：0 = 不做这项工作（禁用该目标），其余取值是游戏配置里的优先级档位。
> 只接受工作类目标，且该弟子拥有这项工作（在启用或已禁用的目标里）；优先级表缺这一项时，bCreateIfMissing 为真才新建。
> 只有存档开了"自定义工作优先级"时优先级才参与派活评分（见 IsCustomWorkPriorityEnabled）。

---

### 函数 `GetCharacterWorkPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `GoalId` | `FName` |
| `OutPriority` | `int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool GetCharacterWorkPriority(AEastRimWorldCharacter_Human* Character, FName GoalId, int32& OutPriority);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取本门弟子某项工作的优先级；优先级表里没有这一项时返回 false

---

### 函数 `IsCustomWorkPriorityEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System|AI" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System|AI") static bool IsCustomWorkPriorityEnabled();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前存档是否开了"自定义工作优先级"（没开时所有工作按默认优先级评分）

---

### 函数 `ResetCharacterPlan`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System|AI" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `true` | `bool bForgetUnreachable =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System|AI") static bool ResetCharacterPlan(AEastRimWorldCharacter_Human* Character, bool bForgetUnreachable = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置本门弟子当前的计划：中止正在做的事（释放预约与占用，搬运中的东西放在脚下），之后按正常规则重新找活；不瞬移。
> bForgetUnreachable 为真时同时清掉被困状态、被困提示和"暂时到不了"的目标记录（窄走廊卡住时用）。
> 世界未初始化完、读档恢复计划期间、行为技能已在中断或收尾时拒绝（返回 false）；没有计划也没在做事时返回 true。

---
