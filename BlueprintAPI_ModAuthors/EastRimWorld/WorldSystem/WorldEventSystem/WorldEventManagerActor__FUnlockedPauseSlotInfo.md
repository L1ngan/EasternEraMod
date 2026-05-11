# `struct` `FUnlockedPauseSlotInfo`

**源码头文件：** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## 功能说明（来自头文件注释）

> 解锁暂停插槽的信息

## 蓝图暴露变量

### 属性 `SlotIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int SlotIndex;` |

**源码注释：**

> 槽位的下标 0 开始

---

### 属性 `UnlockConditionArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockConditionArray;` |

**源码注释：**

> 解锁条件id 通用任务条件

---

### 属性 `ConsumeStone`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int ConsumeStone = 0;` |

**源码注释：**

> 消耗灵石的数量

---

### 属性 `UnlockedDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText UnlockedDescribe;` |

**源码注释：**

> 解锁的描述

---
