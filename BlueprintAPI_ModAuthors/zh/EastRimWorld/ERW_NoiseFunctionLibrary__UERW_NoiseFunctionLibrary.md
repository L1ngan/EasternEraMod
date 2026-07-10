# `class` `UERW_NoiseFunctionLibrary`

**源码头文件:** `EastRimWorld/ERW_NoiseFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> 噪声相关功能函数库

## 蓝图暴露函数

### 函数 `Noise`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Fx` | `float` |
| `Fy` | `float` |
| `Octaves` | `int32` |
| `Persistence` | `float` |
| `Seed` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) static float Noise(float Fx , float Fy , int32 Octaves , float Persistence , int32 Seed);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 生成噪声值

---
