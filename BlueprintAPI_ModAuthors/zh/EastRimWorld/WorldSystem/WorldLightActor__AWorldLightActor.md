# `class` `AWorldLightActor`

**源码头文件:** `EastRimWorld/WorldSystem/WorldLightActor.h`

---

## 功能说明（来自头文件注释）

> World Light Actor Actor 类型。

## 蓝图暴露变量

### 属性 `WorldLightType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldLightType](WorldLightActor__EWorldLightType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldLightType WorldLightType = EWorldLightType::None;` |

**说明:**

> 世界光照类型

---

## 蓝图暴露函数

### 函数 `SetWorldLightEnable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bEnable` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetWorldLightEnable(bool bEnable);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置光照开关

---
