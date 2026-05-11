# `class` `AEnergySplineActor`

**源码头文件：** `EastRimWorld/System/Energy/EnergySplineActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `InitSplineActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void InitSplineActor();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `UpdateSplineLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `FVector` |
| `EndPosition` | `FVector` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateSplineLocation(FVector StartPosition,FVector EndPosition);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新联系的位置

---
