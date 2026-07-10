# `class` `URivalRaidBridge`

**源码头文件:** `EastRimWorld/System/Emergence/Bridges/RivalRaidBridge.h`

---

## 功能说明（来自头文件注释）

> Rival Raid Bridge UObject 类型。

## 蓝图暴露函数

### 函数 `GetPendingRivalDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|RivalRaid" |
| 返回类型 | `FGuid` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|RivalRaid") FGuid GetPendingRivalDisciple() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> UI: 当前玩家迎战弟子 Guid。预选弟子不可迎战(已离开主基地)时回退当前最强可迎战弟子; 已结束/已开打/无可迎战弟子返回无效 Guid

---

### 函数 `IsDiscipleAbleToFight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|RivalRaid" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|RivalRaid") bool IsDiscipleAbleToFight(FGuid DiscipleGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 弟子能否迎战: 属玩家势力 且 当前在玩家主基地场景中有 actor(外出历练/出征/攻打的弟子无场景 actor, 不能迎战)。UI 选人过滤 + StartDuel 校验共用

---

### 函数 `StartDuel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence|RivalRaid" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence|RivalRaid") bool StartDuel(FGuid DiscipleGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 应战入口(对话/UI 玩家确认后调): 以 DiscipleGuid 弟子对宿敌发起一场驿站切磋。返回是否成功发起(已有切磋进行中会失败, 可稍后再点)

---
