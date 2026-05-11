# `struct` `FSkillPoolConfig`

**源码头文件：** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## 功能说明（来自头文件注释）

> 技能池配置

## 蓝图暴露变量

### 属性 `SkillIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> SkillIDs;` |

**源码注释：**

> 技能ID列表

---

### 属性 `RandomSkillNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RandomSkillNumber = 2;` |

**源码注释：**

> 随机的技能数量

---

### 属性 `RequiredBreakThroughPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RequiredBreakThroughPoints = 100;` |

**源码注释：**

> 所需突破点数（大于）

---

### 属性 `BehaviorLoopSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BehaviorLoopSections;` |

**源码注释：**

> 突破循环动画蒙太奇片段名称

---
