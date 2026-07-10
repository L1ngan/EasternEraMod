# `class` `UERW_AreaAssignmentComponent`

**源码头文件:** `EastRimWorld/System/AreaControl/ERW_AreaAssignmentComponent.h`

---

## 功能说明（来自头文件注释）

> RW Area Assignment Component UObject 类型。

## 蓝图暴露变量

### 属性 `CurrentAreaId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="ERW|Area" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "ERW|Area") FGuid CurrentAreaId;` |

**说明:**

> —— 持久字段（值随 FCharacterSaveData 采集/复原，C2 接入）——

---

### 属性 `bHungerCrossEnabled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="ERW|Area" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ERW|Area") bool bHungerCrossEnabled = true;` |

**说明:**

> 饥饿越区开关（默认开，R3）

---

## 蓝图暴露函数

### 函数 `AssignToArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AreaId` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") void AssignToArea(const FGuid& AreaId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> —— 归属（单弟子单区硬约束）——

---

### 函数 `ClearAssignment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|Area" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|Area") void ClearAssignment();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear Assignment 操作。

---

### 函数 `GetCurrentAreaId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | `FGuid` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") FGuid GetCurrentAreaId() const { return CurrentAreaId; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Current Area Id。

---

### 函数 `GetHungerState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | [EAreaHungerState](AreaControlTypes__EAreaHungerState.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") EAreaHungerState GetHungerState() const { return HungerState; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Hunger State。

---

### 函数 `GetCurrentAreaDisplayText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|Area" |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|Area") FText GetCurrentAreaDisplayText() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> UI：当前活动区显示名（通用 / 旗丢失 → "通用"）

---
