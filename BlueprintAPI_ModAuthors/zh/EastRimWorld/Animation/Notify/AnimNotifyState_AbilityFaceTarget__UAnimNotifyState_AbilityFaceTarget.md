# `class` `UAnimNotifyState_AbilityFaceTarget`

**源码头文件:** `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget.h`

---

## 功能说明（来自头文件注释）

> 动画通知状态：技能播放期间使角色持续朝向目标旋转并限制向目标移动的最大距离。

## 蓝图暴露变量

### 属性 `MoveMaxDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float MoveMaxDistance = 0.f;` |

**说明:**

> 向目标移动的最大距离（厘米），默认0。

---

### 属性 `RotationSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float RotationSpeed = 0.f;` |

**说明:**

> 朝向目标的旋转速度，默认0。

---
