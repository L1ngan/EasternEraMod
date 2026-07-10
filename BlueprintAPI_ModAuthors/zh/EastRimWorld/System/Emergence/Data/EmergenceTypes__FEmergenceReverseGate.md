# `struct` `FEmergenceReverseGate`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 反向闸门(防刷屏) — 策划案 §2 "反向闸门"。
> 与 10 个正向压力语义相反, 不管题材只管节流: 玩家正经历危机时压低/关闭冒事。
> Throttle ∈ [0,1]: 1=完全放行, 0=完全关闭。

## 蓝图暴露变量

### 属性 `Throttle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Gate" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") float Throttle = 1.f;` |

**说明:**

> 节流系数 [0,1], 乘到冒事概率上。1=放行, 0=关闭

---

### 属性 `CitiesUnderAttack`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Gate" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 CitiesUnderAttack = 0;` |

**说明:**

> 当前被攻城的城数(收紧闸门的主因之一)

---

### 属性 `RecentCriticalCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Gate" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 RecentCriticalCount = 0;` |

**说明:**

> 过去一段时间写入事件日志的高优先级条目数(刚刷过屏则收紧)

---

### 属性 `UrgentLetterCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Gate" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Gate") int32 UrgentLetterCount = 0;` |

**说明:**

> 未读紧急信件数

---
