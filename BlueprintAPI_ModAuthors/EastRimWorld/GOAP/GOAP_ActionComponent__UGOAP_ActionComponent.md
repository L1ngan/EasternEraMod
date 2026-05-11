# `class` `UGOAP_ActionComponent`

**源码头文件：** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP行动组件

## 蓝图暴露变量

### 属性 `GOAP_Users`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGOAP_Users>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Users> GOAP_Users = {};` |

**源码注释：**

> GOAP的用户
> TMap<GOAP Action的ID , 用户的数组>

---

### 属性 `GOAP_Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGOAP_Action>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> GOAP_Actions = {};` |

**源码注释：**

> 已注册的GOAP Action
> TMap<GOAP Action的ID , GOAP Action>

---

### 属性 `ActionForbiddenStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , bool> ActionForbiddenStates;` |

**源码注释：**

> GOAP Action的禁用状态
> TMap<GOAP Action的ID , 是否禁用>

---

### 属性 `ReservedList`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> ReservedList = {};` |

**源码注释：**

> 预留物品列表
> TMap<物品ID , 数量>

---

## 蓝图暴露函数

### 函数 `RegisterUser`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |
| `Agent` | `AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void RegisterUser(const FGOAP_Action& Action , AEastRimWorldAIController* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 注册GOAP用户

---

### 函数 `UnregisterUser`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |
| `Agent` | `AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void UnregisterUser(const FGOAP_Action& Action , AEastRimWorldAIController* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 注销GOAP用户

---

### 函数 `RegisterGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) bool RegisterGOAPAction(const FGOAP_Action& Action);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 注册GOAP Action

---

### 函数 `UnregisterGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |
| `AbortUsers` | `TArray<AEastRimWorldAIController*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void UnregisterGOAPAction(const FGOAP_Action& Action , TArray<AEastRimWorldAIController*>& AbortUsers);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 注销GOAP Action

---

### 函数 `GetActionUsers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |
| `Users` | `TArray<AEastRimWorldAIController*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetActionUsers(const FGOAP_Action& Action , TArray<AEastRimWorldAIController*>& Users);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得Action的用户

---

### 函数 `CheckActionState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ManagerComponent` | `UGOAP_ManagerComponent*` |
| `Action` | `const FGOAP_Action&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckActionState(UGOAP_ManagerComponent* ManagerComponent , const FGOAP_Action& Action);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查并更新Action的状态(是否活跃)

---

### 函数 `CheckUserNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ManagerComponent` | `UGOAP_ManagerComponent*` |
| `ID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckUserNum(UGOAP_ManagerComponent* ManagerComponent , const FName& ID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查执行人数以设置Action是否活跃

---

### 函数 `AddReservedUser`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `User` | `AEastRimWorldAIController*` |
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddReservedUser(AEastRimWorldAIController* User , const FName& ItemID , int32 Num);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入预留物品的用户

---

### 函数 `RemoveReservedUser`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `User` | `AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveReservedUser(AEastRimWorldAIController* User);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除预留物品的用户

---

### 函数 `AddReservedList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddReservedList(const FName& ItemID , int32 Num);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入物品预留列表

---

### 函数 `RemoveReservedList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveReservedList(const FName& ItemID , int32 Num);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除物品预留列表

---

### 函数 `ReservedCorrection`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameMode` | `AERW_GameModeBase*` |
| `Condition` | `const FGOAP_Condition&` |
| `GOAPValue` | `UPARAM(ref) FGOAP_Value&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ReservedCorrection(AERW_GameModeBase* GameMode , const FGOAP_Condition& Condition , UPARAM(ref) FGOAP_Value& GOAPValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据预留物品修正GOAP记忆值

---

### 函数 `GetActionDataByActionID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGOAP_Action` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActionID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGOAP_Action GetActionDataByActionID(const FName & InActionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据ActionID 获取ActionData

---

### 函数 `UnregisterAllGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterAllGOAPAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注销当前Actor所有的GOAP并且打断其他人的执行

---

### 函数 `ImproveActionPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ImproveActionPriority();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CancelImproveActionPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CancelImproveActionPriority();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
