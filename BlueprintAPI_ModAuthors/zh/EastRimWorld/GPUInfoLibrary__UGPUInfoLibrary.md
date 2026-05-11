# `class` `UGPUInfoLibrary`

**源码头文件:** `EastRimWorld/GPUInfoLibrary.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `GetGPUInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="System|GPU" |
| 返回类型 | [FGPUInfo](GPUInfoLibrary__FGPUInfo.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="System|GPU") static FGPUInfo GetGPUInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取显卡信息

---

### 函数 `IsNVIDIA`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="System|GPU" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsNVIDIA();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否 NVIDIA 显卡

---

### 函数 `IsAMD`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="System|GPU" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsAMD();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否 AMD 显卡

---

### 函数 `IsIntel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="System|GPU" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category="System|GPU") static bool IsIntel();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否 Intel 显卡

---
