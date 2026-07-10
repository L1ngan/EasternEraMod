# `class` `UCommonBuffComponent`

**源码头文件:** `EastRimWorld/Character/Components/CommonBuffComponent.h`

---

## 功能说明（来自头文件注释）

> 通用Buff组件：管理角色Buff的添加/移除/激活/挂起及对应GameplayEffect的施加与清理。

## 蓝图暴露变量

### 属性 `BuffArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FCommonBuff> BuffArray;` |

**说明:**

> 拥有的buff

---

### 属性 `OnRemoveBuffDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRemoveBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FRemoveBuffDelegate OnRemoveBuffDelegate;` |

**说明:**

> 移除Buff时触发的事件，参数为被移除的Buff。

---

### 属性 `OnAddBuffDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAddBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAddBuffDelegate OnAddBuffDelegate;` |

**说明:**

> 添加Buff时触发的事件，参数为被添加的Buff。

---

### 属性 `OnUpdateBuffDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdateBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUpdateBuffDelegate OnUpdateBuffDelegate;` |

**说明:**

> Buff列表更新时触发的事件。

---

## 蓝图暴露函数

### 函数 `AddBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddBuffInfo` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool AddBuff(FCommonBuff AddBuffInfo,bool bCoverBuff = true,bool bSave = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加buff
> 
> / @param AddBuffInfo 需要添加的buff
> / @param bCoverBuff 是否要覆盖
> / @return 是否成功

---

### 函数 `AddBuffByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffID` | `FName` |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool AddBuffByID(FName BuffID, bool bCoverBuff = true,bool bSave = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID添加buff

---

### 函数 `AddBuffByArrayID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffIDs` | `TArray<FName>` |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddBuffByArrayID(TArray<FName> BuffIDs, bool bCoverBuff = true,bool bSave = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加id数组的buff

---

### 函数 `RemoveBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffID` | `const FName &` |
| `true` | `bool bUpdateEffect =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveBuff(const FName & BuffID,bool bUpdateEffect = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除buff

---

### 函数 `GetBuffByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffID` | `const FName &` |
| `OutBuff` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetBuffByID(const FName & BuffID, FCommonBuff & OutBuff);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID获取一个buff信息(找到返回true并填充OutBuff)

---

### 函数 `BroadcastUpdateBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadcastUpdateBuff();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播Buff更新事件（OnUpdateBuffDelegate）。

---

### 函数 `GetAllBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> & |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> & GetAllBuff();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有buff 包含未激活的buff

---

### 函数 `GetAllActivateBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetAllActivateBuff();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有激活的buff

---
