# `struct` `FRaidEventElementInfo`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 事件队列信息（事件冷却队列，袭击事件执行队列）

## 蓝图暴露变量

### 属性 `ThreatPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FThreatPoolInfo` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FThreatPoolInfo ThreatPool;` |

**源码注释：**

> 袭击信息

---

### 属性 `EventTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float EventTime = 0.f;` |

**源码注释：**

> 事件时间（倒计时时间） 或 袭击执行的剩余时间

---
