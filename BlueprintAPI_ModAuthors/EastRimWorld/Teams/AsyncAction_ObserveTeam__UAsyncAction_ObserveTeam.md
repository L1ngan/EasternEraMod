# `class` `UAsyncAction_ObserveTeam`

**源码头文件：** `EastRimWorld/Teams/AsyncAction_ObserveTeam.h`

---

## 功能说明（来自头文件注释）

> Watches for team changes in the specified object

## 蓝图暴露变量

### 属性 `OnTeamChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTeamObservedAsyncDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FTeamObservedAsyncDelegate OnTeamChanged;` |

**源码注释：**

> Called when the team is set or changed

---

## 蓝图暴露函数

### 函数 `ObserveTeam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UAsyncAction_ObserveTeam*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamAgent` | `UObject*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Keywords="Watch")) static UAsyncAction_ObserveTeam* ObserveTeam(UObject* TeamAgent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Watches for team changes on the specified team agent
> - It will will fire once immediately to give the current team assignment
> - For anything that can ever belong to a team (implements IEastRimWorldTeamAgentInterface),
> it will also listen for team assignment changes in the future

---
