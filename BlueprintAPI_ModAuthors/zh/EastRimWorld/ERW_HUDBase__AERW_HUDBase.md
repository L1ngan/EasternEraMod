# `class` `AERW_HUDBase`

**源码头文件:** `EastRimWorld/ERW_HUDBase.h`

---

## 功能说明（来自头文件注释）

> HUD基类

## 蓝图暴露函数

### 函数 `AddMouseMoveBoxWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void AddMouseMoveBoxWidget();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 添加鼠标框选控件（蓝图实现事件）

---

### 函数 `UpdateMouseSelectBox`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InStartPoint` | `const FVector2D &` |
| `InEndStartPoint` | `const FVector2D &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void UpdateMouseSelectBox(const FVector2D & InStartPoint,const FVector2D & InEndStartPoint);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新鼠标选中框

---
