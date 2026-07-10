# `class` `UEastRimWorldUIManagerSubsystem`

**源码头文件:** `EastRimWorld/UI/Subsystem/EastRimWorldUIManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> East Rim World UI Manager Subsystem UObject 类型。

## 蓝图暴露函数

### 函数 `GetPrimaryGameLayout`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UPrimaryGameLayout*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UPrimaryGameLayout* GetPrimaryGameLayout() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Get Primary Game Layout。

---

### 函数 `GetGameMainUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UCommonActivatableWidget*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* GetGameMainUI();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取游戏主UI

---

### 函数 `ClearGameMainUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearGameMainUI();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear Game Main UI 操作。

---

### 函数 `GetLayoutUIByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UCommonActivatableWidget*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `FGameplayTag` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* GetLayoutUIByTag(FGameplayTag Tag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过标签获取当前激活的UI

---

### 函数 `AddUIToLayout`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UCommonActivatableWidget*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `FGameplayTag` |
| `WidgetClas` | `TSoftClassPtr<UCommonActivatableWidget>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UCommonActivatableWidget* AddUIToLayout(FGameplayTag Tag,TSoftClassPtr<UCommonActivatableWidget> WidgetClas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Add UI To Layout 操作。

---

### 函数 `ClearAllLayUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearAllLayUI();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear All Lay UI 操作。

---
