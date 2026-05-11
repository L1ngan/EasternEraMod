# `class` `UEastRimWorldTabListWidgetBase`

**源码头文件：** `EastRimWorld/UI/Common/EastRimWorldTabListWidgetBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnTabContentCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTabContentCreated` |
| 反射说明符 | BlueprintAssignable, Category="Tab List" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Tab List") FOnTabContentCreated OnTabContentCreated;` |

**源码注释：**

> Broadcasts when a new tab is created.

---

## 蓝图暴露函数

### 函数 `GetPreregisteredTabInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Tab List" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TabNameId` | `const FName` |
| `OutTabInfo` | `FEastRimWorldTabDescriptor&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") bool GetPreregisteredTabInfo(const FName TabNameId, FEastRimWorldTabDescriptor& OutTabInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `SetTabHiddenState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Tab List" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TabNameId` | `FName` |
| `bHidden` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Tab List") void SetTabHiddenState(FName TabNameId, bool bHidden);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Toggles whether or not a specified tab is hidden, can only be called before the switcher is associated

---

### 函数 `RegisterDynamicTab`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Tab List" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TabDescriptor` | `const FEastRimWorldTabDescriptor&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool RegisterDynamicTab(const FEastRimWorldTabDescriptor& TabDescriptor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `IsFirstTabActive`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Tab List" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool IsFirstTabActive() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `IsLastTabActive`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Tab List" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Tab List") bool IsLastTabActive() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `IsTabVisible`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Tab List" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TabId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") bool IsTabVisible(FName TabId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetVisibleTabCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Tab List" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Tab List") int32 GetVisibleTabCount();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---
