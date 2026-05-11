# `class` `UCommonSidePushBase`

**源码头文件：** `EastRimWorld/UI/Foundation/CommonSidePushBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `CommonButtonInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCommonButton](../Struct/UIStruct__FCommonButton.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FCommonButton CommonButtonInfo;` |

---

## 蓝图暴露函数

### 函数 `InitializeSidePush`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCommonButton` | const [FCommonButton](../Struct/UIStruct__FCommonButton.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitializeSidePush(const FCommonButton & InCommonButton);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 初始化侧边按钮

---

### 函数 `K2_PreHandleNativeOnClicked`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "PreHandleNativeOnClicked")) bool K2_PreHandleNativeOnClicked();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「PreHandleNativeOnClicked」。

**源码注释：**

> 点击前置处理，返回true表示已在脚本中处理并跳过原有点击逻辑

---

### 函数 `K2_OpenSelectFabricateWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSelectFabricateWidget")) void K2_OpenSelectFabricateWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenSelectFabricateWidget」。

**源码注释：**

> 打开制造界面

---

### 函数 `OpenSetOwnerWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetOwnerWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开设置拥有者界面

---

### 函数 `OpenAutomatedControlWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ButtonType` | `EEnergyControlType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenAutomatedControlWidget(EEnergyControlType ButtonType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开自动化控件相关界面

---

### 函数 `OpenSetPipelineGroupWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetPipelineGroupWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开分配管道界面

---

### 函数 `OpenWhenOpendControlPipelineGroupWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWhenOpendControlPipelineGroupWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开设置设备开启时控制的管道

---

### 函数 `OpenWhenClosedControlPipelineGroupWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWhenClosedControlPipelineGroupWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开设置设备关闭时控制的管道

---

### 函数 `OpenTravelWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenTravelWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开游历界面

---

### 函数 `OpenExploreWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenExploreWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开探索界面

---

### 函数 `OpenSureGiveUpWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSureGiveUpWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开放弃城镇

---

### 函数 `OpenWordPlaceManagementWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWordPlaceManagementWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `SureGetOutOfTheJam`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void SureGetOutOfTheJam();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `OpenPlaceAttack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenPlaceAttack();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 打开攻击地点

---

### 函数 `NativeFellAndHarvest`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "FellAndHarvest")) void NativeFellAndHarvest();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「FellAndHarvest」。

**源码注释：**

> 砍伐和收割

---

### 函数 `NativeBackPopupLastWidgetPage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "BackPopupLastWidetPage")) void NativeBackPopupLastWidgetPage();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「BackPopupLastWidetPage」。

**源码注释：**

> 返回上个弹出窗叠加页

---

### 函数 `NativeCancelAllSelectObjectOrder`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "CancelAllSelectObjectOrder")) void NativeCancelAllSelectObjectOrder();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「CancelAllSelectObjectOrder」。

**源码注释：**

> 取消所有选中对象的执行命令

---

### 函数 `NativeRestButton`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void NativeRestButton();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当在操作多个对象时重新添加多选按钮以更新按钮状态

---

### 函数 `K2_OpenSelectTechnologyWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSelectTechnologyWidget")) void K2_OpenSelectTechnologyWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenSelectTechnologyWidget」。

**源码注释：**

> 打开科技界面

---

### 函数 `K2_OpenBookListWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenBookListWidget")) void K2_OpenBookListWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenBookListWidget」。

**源码注释：**

> 打开书籍界面

---

### 函数 `K2_CheckCanWriteCopy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "CheckCanWriteCopy")) bool K2_CheckCanWriteCopy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「CheckCanWriteCopy」。

**源码注释：**

> 检查书籍是否可以被抄录

---

### 函数 `K2_OpenFoodListWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenFoodListWidget")) void K2_OpenFoodListWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenFoodListWidget」。

**源码注释：**

> 打开食物界面

---

### 函数 `NativeProhibitUsage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "ProhibitUsage")) void NativeProhibitUsage();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「ProhibitUsage」。

**源码注释：**

> 禁止使用

---

### 函数 `CommonOperate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CommonOperate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通用操作(设置所有SelectInventorySubstituteSystem中选中的对象的按钮状态)

---

### 函数 `K2_SetShowSelectImage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bShow` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "SetShowSelectImage")) void K2_SetShowSelectImage(bool bShow);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「SetShowSelectImage」。

---

### 函数 `ImmediatelyExecute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ImmediatelyExecute();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 降低Action消耗

---

### 函数 `OpenSetRobotProtectTargetUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetRobotProtectTargetUI();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置机器人的保护对象

---

### 函数 `SetCheckBoxState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsChecked` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void SetCheckBoxState(bool bIsChecked);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 传入检测框集合，根据bool设置全选或全取消

---

### 函数 `TrigerButtonStateAndClearSelect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TrigerButtonStateAndClearSelect();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 触发按钮状态并清除当前选择对象

---

### 函数 `ObserveOperate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ObserveOperate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckOperateResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckOperateResult();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查操作结果，并刷新

---

### 函数 `K2_OpenSwitchRoomTypeWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSwitchRoomTypeWidget")) void K2_OpenSwitchRoomTypeWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenSwitchRoomTypeWidget」。

**源码注释：**

> 打开切换房间类型界面

---

### 函数 `K2_OpenApplyCeremonyWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenApplyCeremonyWidget")) void K2_OpenApplyCeremonyWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenApplyCeremonyWidget」。

---

### 函数 `K2_OpenAddPuppetWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenAddPuppetWidget")) void K2_OpenAddPuppetWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenAddPuppetWidget」。

---

### 函数 `OpenSelectTameCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectTameCharacter();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 选择前往驯服的弟子

---

### 函数 `KillSomeone`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void KillSomeone();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OpenSelectRecruitCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectRecruitCharacter();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 选择前往招募的弟子

---

### 函数 `K2_OpenTreasureListWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenTreasureListWidget")) void K2_OpenTreasureListWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenTreasureListWidget」。

**源码注释：**

> 打开珍宝阁/百宝楼界面

---

### 函数 `K2_OpenBackPackWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenBackPackWidget")) void K2_OpenBackPackWidget();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OpenBackPackWidget」。

**源码注释：**

> 打开背包

---

### 函数 `K2_CopyObjectSetting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "CopyObjectSetting")) void K2_CopyObjectSetting();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「CopyObjectSetting」。

**源码注释：**

> 复制建筑设置

---

### 函数 `K2_PasteObjectSetting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "PasteObjectSetting")) void K2_PasteObjectSetting();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「PasteObjectSetting」。

**源码注释：**

> 粘贴建筑设置

---

### 函数 `K2_QuickBuild`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "QuickBuild")) void K2_QuickBuild();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「QuickBuild」。

**源码注释：**

> 快速建造设置

---

### 函数 `NativeDestroyResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void NativeDestroyResources();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 摧毁资源

---

### 函数 `K2_ConfirmDeleteResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "ConfirmDeleteResources")) void K2_ConfirmDeleteResources();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「ConfirmDeleteResources」。

**源码注释：**

> 确认是否删除

---
