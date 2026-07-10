# `struct` `FAutoReleaseStrategyRule`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 自动释放战略规则

## 蓝图暴露变量

### 属性 `DetectionIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float DetectionIntervalTime = 3.f;` |

**说明:**

> 持有牌时无法使用检测间隔时间

---

### 属性 `WaitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WaitTime = 10.f;` |

**说明:**

> 释放条件不满足时同一张牌等待时间

---

### 属性 `UseIntervalMinTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMinTime = 10.f;` |

**说明:**

> 使用技能的最小间隔时间

---

### 属性 `UseIntervalMaxTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UseIntervalMaxTime = 10.f;` |

**说明:**

> 使用技能的最大间隔时间

---
