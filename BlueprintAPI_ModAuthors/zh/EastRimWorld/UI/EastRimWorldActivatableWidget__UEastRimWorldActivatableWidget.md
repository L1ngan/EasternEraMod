# `class` `UEastRimWorldActivatableWidget`

**源码头文件:** `EastRimWorld/UI/EastRimWorldActivatableWidget.h`

---

## 功能说明（来自头文件注释）

> An activatable widget that automatically drives the desired input config when activated

## 蓝图暴露函数

### 函数 `GetPopupPanelInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Position` | `FVector2D&` |
| `Size` | `FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void GetPopupPanelInfo(FVector2D& Position , FVector2D& Size);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 获得信息窗口的位置和尺寸

---

### 函数 `GetPopupPanelButtonInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Position` | `FVector2D&` |
| `Size` | `FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void GetPopupPanelButtonInfo(const FName& ID , FVector2D& Position , FVector2D& Size);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 获得信息窗口按钮的位置和尺寸

---
