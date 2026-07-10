# `class` `UEastRimWorldButtonBase`

**源码头文件:** `EastRimWorld/UI/Foundation/EastRimWorldButtonBase.h`

---

## 功能说明（来自头文件注释）

> East Rim World Button Base UObject 类型。

## 蓝图暴露函数

### 函数 `SetButtonText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetButtonText(const FText& InText);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Set Button Text 操作。

---

### 函数 `UpdateButtonText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonText(const FText& InText);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 执行 Update Button Text 操作。

---

### 函数 `UpdateButtonStyle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonStyle();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 执行 Update Button Style 操作。

---

### 函数 `UpdateButtonState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void UpdateButtonState();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新按钮的状态

---
