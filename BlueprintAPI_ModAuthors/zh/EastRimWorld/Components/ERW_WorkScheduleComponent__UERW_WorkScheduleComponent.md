# `class` `UERW_WorkScheduleComponent`

**源码头文件:** `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

---

## 功能说明（来自头文件注释）

> 工作日程管理组件

## 蓝图暴露变量

### 属性 `WorkSchedules`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FString , [FWorkScheduleData](ERW_WorkScheduleComponent__FWorkScheduleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FString , FWorkScheduleData> WorkSchedules;` |

**源码注释:**

> 工作日程
> TMap<日程名称 , 工作日程数据>

---

### 属性 `DefaultScheduleName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FText DefaultScheduleName;` |

**源码注释:**

> 工作日程默认名称

---

### 属性 `OnWorkScheduleChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkScheduleChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorkScheduleChanged OnWorkScheduleChanged;` |

**源码注释:**

> 当工作日程变化时

---

### 属性 `OnWorkScheduleRemoved`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkScheduleRemoved` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorkScheduleRemoved OnWorkScheduleRemoved;` |

**源码注释:**

> 当工作日程移除时

---

### 属性 `OnRemoveDeadCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnRemoveDeadCharacter` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnRemoveDeadCharacter OnRemoveDeadCharacter;` |

**源码注释:**

> 移除死亡角色

---

## 蓝图暴露函数

### 函数 `AddWorkSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleName` | `FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddWorkSchedule(FString& ScheduleName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入工作日程

---

### 函数 `RemoveWorkSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveWorkSchedule(const FString& ScheduleName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除工作日程

---

### 函数 `UpdateWorkSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleName` | `const FString&` |
| `Hour` | `int32` |
| `ID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWorkSchedule(const FString& ScheduleName , int32 Hour , const FName& ID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新工作日程

---

### 函数 `ChangeWorkScheduleName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OldName` | `const FString&` |
| `NewName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ChangeWorkScheduleName(const FString& OldName , const FString& NewName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 改变工作日程名称

---

### 函数 `GetOtherScheduleCharacters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleName` | `const FString&` |
| `OtherCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetOtherScheduleCharacters(const FString& ScheduleName , TArray<AEastRimWorldCharacter*>& OtherCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获得其他工作日程的角色

---

### 函数 `TransferAgent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `ToScheduleName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TransferAgent(AEastRimWorldCharacter* Agent , const FString& ToScheduleName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 转移角色到指定工作日程

---
