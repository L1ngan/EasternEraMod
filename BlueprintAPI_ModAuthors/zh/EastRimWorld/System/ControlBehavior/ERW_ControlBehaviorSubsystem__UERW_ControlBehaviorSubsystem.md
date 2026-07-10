# `class` `UERW_ControlBehaviorSubsystem`

**源码头文件:** `EastRimWorld/System/ControlBehavior/ERW_ControlBehaviorSubsystem.h`

---

## 功能说明（来自头文件注释）

> RW Control Behavior Subsystem UObject 类型。

## 蓝图暴露函数

### 函数 `GetControlBehaviorSubsystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ControlBehaviorSubsystem" |
| 返回类型 | [UERW_ControlBehaviorSubsystem](ERW_ControlBehaviorSubsystem__UERW_ControlBehaviorSubsystem.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") static UERW_ControlBehaviorSubsystem* GetControlBehaviorSubsystem();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Control Behavior Subsystem。

---

### 函数 `GetTargetBehaviorList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ControlBehaviorSubsystem" |
| 返回类型 | TArray<[FTargetBehaviorInfo](ERW_ControlBehaviorTypes__FTargetBehaviorInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ControlBehaviorSubsystem") TArray<FTargetBehaviorInfo> GetTargetBehaviorList(UObject* TargetObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取行为列表

---

### 函数 `ExecuteControlBehavior`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ControlBehaviorSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetObject` | `UObject*` |
| `ActionType` | const [FControlBehaviorActionType](ERW_ControlBehaviorTypes__FControlBehaviorActionType.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ControlBehaviorSubsystem") bool ExecuteControlBehavior(UObject* TargetObject, const FControlBehaviorActionType& ActionType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Execute Control Behavior 字段。

---

### 函数 `CheckHumanCanExecute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ControlBehaviorSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Human` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") bool CheckHumanCanExecute(AEastRimWorldCharacter_Human* Human);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 弟子是否可执行行为；失败时在函数内弹出提示

---

### 函数 `GetSelectedHuman`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ControlBehaviorSubsystem" |
| 返回类型 | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ControlBehaviorSubsystem") AEastRimWorldCharacter_Human* GetSelectedHuman();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前选中角色(只能选择一个)

---
