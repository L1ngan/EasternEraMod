# `class` `UConsumableComponent`

**源码头文件:** `EastRimWorld/Character/Components/ConsumableComponent.h`

---

## 功能说明（来自头文件注释）

> 耗材组件：行为开始/结束时自动使用角色背包中状态为"角色拥有"的耗材
> 触发入口：AEastRimWorldAIController::BroadCastActionChange（行为切换时旧行为结束/新行为开始）

## 蓝图暴露变量

### 属性 `LastConsumableUseTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float LastConsumableUseTime = -1.f;` |

**说明:**

> 上次使用耗材的时间（AWorldDirector::GameTime 秒）小于0表示从未使用 用于耗材公共CD（CD数值配置在UConsumableConfigAsset）

---

## 蓝图暴露函数

### 函数 `TryTriggerConsumableUse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionID` | `const FName&` |
| `bActionStart` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TryTriggerConsumableUse(const FName& ActionID,bool bActionStart);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 行为开始/结束时尝试触发耗材使用（从背包中满足条件的耗材里随机使用一个 ActionID=GOAP_Action_Data表行名）

---

### 函数 `CheckConsumableConditions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConsumableData` | const [FConsumableData](../../Struct/ConsumableStruct__FConsumableData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckConsumableConditions(const FConsumableData& ConsumableData) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查耗材的使用条件是否全部满足

---

### 函数 `CheckConsumableConditionIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionIDs` | `const TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckConsumableConditionIDs(const TArray<FName>& ConditionIDs) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查一组耗材条件（耗材条件表ID）是否全部满足（配置了ID但表中查不到视为不满足）

---

### 函数 `ApplyConsumableEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EffectID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ApplyConsumableEffect(const FName& EffectID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 应用单个耗材效果（耗材效果表ID）

---
