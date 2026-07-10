# `class` `AGameplayCueNotifyActor`

**源码头文件:** `EastRimWorld/AbilitySystem/GamplyCue/GameplayCueNotifyActor.h`

---

## 功能说明（来自头文件注释）

> 项目GameplayCue通知Actor基类，可从Cue参数中提取EastRimWorld效果上下文与上下文参数

## 蓝图暴露函数

### 函数 `GetGameplayEffectParameter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Parameters` | `const FGameplayCueParameters&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetGameplayEffectParameter(const FGameplayCueParameters& Parameters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取上下文参数

---
