# `class` `UEastRimWorldButtonBase`

**源码头文件：** `EastRimWorld/UI/Foundation/EastRimWorldButtonBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetButtonText(const FText& InText);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonText(const FText& InText);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `UpdateButtonStyle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateButtonStyle();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `UpdateButtonState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void UpdateButtonState();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新按钮的状态

---
