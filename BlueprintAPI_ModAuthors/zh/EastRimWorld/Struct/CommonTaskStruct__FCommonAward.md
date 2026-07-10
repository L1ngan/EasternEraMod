# `struct` `FCommonAward`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 达成任务的条件

## 蓝图暴露变量

### 属性 `AwardType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAwardType](CommonTaskStruct__EAwardType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAwardType AwardType = EAwardType::None;` |

**说明:**

> 奖励的类型

---

### 属性 `AwardID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName AwardID;` |

**说明:**

> 奖励的ID

---

### 属性 `Number`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int Number = 0;` |

**说明:**

> 奖励奖励的数量

---

### 属性 `GameplayTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGameplayTag GameplayTag;` |

**说明:**

> 奖励tag

---
