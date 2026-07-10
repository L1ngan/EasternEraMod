# `class` `ASelectInventorySubstituteSystem`

**源码头文件:** `EastRimWorld/Inventory/SelectInventorySubstituteSystem.h`

---

## 功能说明（来自头文件注释）

> 物品替身选中系统（单例Actor），管理物品实例的选中/悬浮高亮显示与信息界面

## 蓝图暴露变量

### 属性 `OnSelectedChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSelectedChange` |
| 反射说明符 | BlueprintAssignable, Category="Delegate" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Delegate") FOnSelectedChange OnSelectedChange;` |

**说明:**

> 选中变更时的事件

---

## 蓝图暴露函数

### 函数 `GetSelectInventorySubstituteSystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SelectInventorySubstituteSystem" |
| 返回类型 | [ASelectInventorySubstituteSystem](SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="SelectInventorySubstituteSystem") static ASelectInventorySubstituteSystem * GetSelectInventorySubstituteSystem(const UObject* Context);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取物品替身选中系统的单例实例

---

### 函数 `SelectMultipleObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMultipleObjects` | `const TArray<UObject*> &` |
| `true` | `bool bClearOldSelect =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SelectMultipleObjects(const TArray<UObject*> & InMultipleObjects,bool bClearOldSelect = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择多个对象

---

### 函数 `ToggleObjectInMultipleSelect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ToggleObjectInMultipleSelect(UObject* InObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 切换一个对象在现有多选列表中的选中状态

---

### 函数 `ClearAllSelectObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearAllSelectObject();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清除所有实例

---

### 函数 `SelectObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSelectObject` | `UObject *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SelectObject(UObject * InSelectObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择一个实例

---

### 函数 `HoveringOnObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHoveringObject` | `UObject *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HoveringOnObject(UObject * InHoveringObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 悬浮实例

---

### 函数 `ClearHoveringObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearHoveringObject();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清除悬浮实例

---

### 函数 `CreateObjectInfoWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSelectObjects` | `const TArray<UObject*> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateObjectInfoWidget(const TArray<UObject*> & InSelectObjects);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建实例信息的界面

---

### 函数 `ClearInventoryInfoWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearInventoryInfoWidget();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清除选中的ui

---

### 函数 `GetOperateObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<UObject*>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UObject*> GetOperateObjects();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取选择操作的实例

---

### 函数 `SelectOperateIdenticalID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InObjectName` | `const FString &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SelectOperateIdenticalID(const FString & InObjectName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择出相同id的物品

---

### 函数 `UpdateObjectInfoWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SelectInstances` | `const TArray<UObject*> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateObjectInfoWidget(const TArray<UObject*> & SelectInstances);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新多选的数量

---

### 函数 `GetMultipleSelectObjectSidePush`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetMultipleSelectObjectSidePush();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取多选对象的侧边按钮组

---

### 函数 `CancelObjectFunction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelObjectFunction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消选中对象的所有已经设置的可以批量取消的命令

---

### 函数 `GetCacheSelectObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const TArray<UObject*>&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const TArray<UObject*>& GetCacheSelectObjects();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取缓存的上次选中对象列表

---

### 函数 `GetSelectObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const TArray<UObject*>&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const TArray<UObject*>& GetSelectObjects();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回当前选择的对象

---
