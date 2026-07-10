# `class` `UCharacterBreedingComponent`

**源码头文件:** `EastRimWorld/Character/Components/CharacterBreedingComponent.h`

---

## 功能说明（来自头文件注释）

> 动物繁殖组件：管理繁殖需求、附近角色检测、怀孕终止与幼崽生成。

## 蓝图暴露函数

### 函数 `CheckCharacterNeedAddBreedingDemand`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckCharacterNeedAddBreedingDemand();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查角色是否需要添加繁殖需求。

---

### 函数 `CheckAndSetIsHadBreeding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckAndSetIsHadBreeding();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查并设置该动物是否已进行过繁殖，返回检查结果。

---

### 函数 `CheckNearCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckNearCharacter();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查附近的角色（繁殖流程中的定时检测）。

---

### 函数 `CancelBreeding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelBreeding();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消当前的繁殖行为。

---

### 函数 `BreedingFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BreedingFinished();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 处理繁殖完成后的收尾逻辑。

---

### 函数 `SpawnBaby`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SpawnBaby();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成幼崽。

---

### 函数 `CheckNeedAnimalStopPregnant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonBuff` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckNeedAnimalStopPregnant(FCommonBuff CommonBuff);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据传入的Buff检查动物是否需要终止怀孕。

---
