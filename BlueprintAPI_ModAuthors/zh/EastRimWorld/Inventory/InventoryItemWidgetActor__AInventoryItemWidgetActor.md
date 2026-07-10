# `class` `AInventoryItemWidgetActor`

**源码头文件:** `EastRimWorld/Inventory/InventoryItemWidgetActor.h`

---

## 功能说明（来自头文件注释）

> 物品UI显示Actor，通过控件组件展示物品数量等信息

## 蓝图暴露变量

### 属性 `WidgetComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<UWidgetComponent> WidgetComponent;` |

**说明:**

> UI控件组件

---

## 蓝图暴露函数

### 函数 `ReceiveOnInitData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnInitData")) void ReceiveOnInitData();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnInitData」。

**说明:**

> 数据初始化时调用的蓝图事件

---

### 函数 `ReceiveOnClearData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnClearData")) void ReceiveOnClearData();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnClearData」。

**说明:**

> 数据清理时调用的蓝图事件

---

### 函数 `ItemWidgetActorDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ItemWidgetActorDestroy();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 销毁该物品UI Actor

---

### 函数 `InitItemWidgetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitItemWidgetActor(UInventoryItemInstance * InInventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 初始化物品ui

---

### 函数 `UpdateItemNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Number` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void UpdateItemNumber(int Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新物品数量

---
