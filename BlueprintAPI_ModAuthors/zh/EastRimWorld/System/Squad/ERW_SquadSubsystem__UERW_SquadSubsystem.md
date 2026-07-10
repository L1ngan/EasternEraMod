# `class` `UERW_SquadSubsystem`

**源码头文件:** `EastRimWorld/System/Squad/ERW_SquadSubsystem.h`

---

## 功能说明（来自头文件注释）

> 编组子系统：统一管理所有纵队编组。
> - 场景里可有多条样条路径，入队角色先选离自己最近的样条。
> - 同一样条上：未满编组优先就近加入；都满则在该样条上开新编组，
>   新编组头点设到角色在该样条上的最近点。
> - 每帧驱动所有编组的 Tick。

## 蓝图暴露变量

### 属性 `MinSquadGap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Squad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squad") float MinSquadGap = 1000.f;` |

**说明:**

> 同一样条上相邻编组的最小间距(cm)。新组头点设到角色最近点后，若与已有编组过近则沿路径后让。
> 建议 ≥ Capacity*Spacing（满员纵队长度）再加余量，否则两列仍会交叠。

---

## 蓝图暴露函数

### 函数 `GetSquadSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Squad" |
| 返回类型 | [UERW_SquadSubsystem](ERW_SquadSubsystem__UERW_SquadSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Squad", meta = (WorldContext = "WorldContextObject")) static UERW_SquadSubsystem* GetSquadSubsystem(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 静态获取本子系统（传入任意带 World 的对象作上下文）

---

### 函数 `RegisterPathFromLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Squad" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Squad") void RegisterPathFromLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 扫描关卡里所有样条路径 Actor 并缓存（手动调用，仅一次）

---

### 函数 `JoinSquad`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Squad" |
| 返回类型 | [UERW_SquadFormation](ERW_SquadFormation__UERW_SquadFormation.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AI` | [AEastRimWorldAIController](../../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Squad") UERW_SquadFormation* JoinSquad(AEastRimWorldAIController* AI);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 入队：先选离 AI 最近的样条；该样条上未满编组就近加入，都满则新建（头点设到角色最近点）

---

### 函数 `LeaveSquad`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Squad" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AI` | [AEastRimWorldAIController](../../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Squad") void LeaveSquad(AEastRimWorldAIController* AI);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 让某 AI 离开其所在编组

---
